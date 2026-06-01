int __fastcall dwarf_error_string(__int64 a1, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 *alloc; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 *v10; // rdi

  if ( a2 )
  {
    if ( a1 )
    {
      alloc = (__int64 *)_dwarf_get_alloc(*(_QWORD *)(a1 + 40), 14, 1);
      v8 = alloc;
      if ( alloc )
      {
        *((_DWORD *)alloc + 4) = 0;
LABEL_5:
        *v8 = a3;
        if ( a4 && *((_DWORD *)v8 + 4) != 1 && (alloc = (__int64 *)calloc(1u, 0x20u), (v9 = alloc) != nullptr) )
        {
          dwarfstring_constructor(alloc);
          LODWORD(alloc) = dwarfstring_append();
          v8[1] = (__int64)v9;
          *a2 = v8;
        }
        else
        {
          *a2 = v8;
        }
        return (int)alloc;
      }
    }
    else
    {
      alloc = (__int64 *)_dwarf_special_no_dbg_error_malloc();
      v8 = alloc;
      if ( alloc )
      {
        *((_DWORD *)alloc + 4) = 2;
        LODWORD(alloc) = _dwarf_add_to_static_err_list(alloc);
        goto LABEL_5;
      }
    }
    v8 = dwarf_failsafe_error;
    LODWORD(qword_B8A00[0]) = 1;
    goto LABEL_5;
  }
  if ( a1 && *(_QWORD *)(a1 + 48) )
  {
    v10 = (__int64 *)_dwarf_get_alloc(*(_QWORD *)(a1 + 40), 14, 1);
    if ( !v10 )
    {
      v10 = dwarf_failsafe_error;
      LODWORD(qword_B8A00[0]) = 1;
    }
    *v10 = a3;
    LODWORD(alloc) = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(a1 + 48))(
                       v10,
                       *(_QWORD *)(*(_QWORD *)(a1 + 40) + 56LL));
  }
  else
  {
    fflush(stderr);
    dwarf_errmsg_by_number(a3);
    __fprintf_chk();
    LODWORD(alloc) = fflush(stderr);
  }
  return (int)alloc;
}

