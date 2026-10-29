__int64 __fastcall dwarf_insert_in_group_map(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  _DWORD *v8; // rax
  void *v9; // rbx
  void **v10; // rax

  if ( *(_QWORD *)(a1 + 224)
    || (_dwarf_initialize_search_hash(a1 + 224, sub_2F4F0, *(unsigned int *)(a1 + 212)), *(_QWORD *)(a1 + 224)) )
  {
    v8 = calloc(1u, 0x10u);
    v9 = v8;
    if ( v8 )
    {
      *v8 = a3;
      v8[1] = a2;
      *((_QWORD *)v8 + 1) = a4;
      v10 = (void **)_dwarf_tsearch(v8, a1 + 224, sub_2F500);
      if ( v10 )
      {
        if ( *v10 == v9 )
        {
          ++*(_DWORD *)(a1 + 216);
          return 0;
        }
        free(v9);
        _dwarf_error(a1, a5, 388);
        return 1;
      }
      free(v9);
    }
    _dwarf_error(a1, a5, 387);
    return 1;
  }
  return 0xFFFFFFFFLL;
}

