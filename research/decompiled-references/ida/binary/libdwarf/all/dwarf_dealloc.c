void __fastcall dwarf_dealloc(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  void *v4; // r12
  __int64 v5; // rax
  int v6; // eax
  void (__fastcall *v7)(unsigned __int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax

  if ( !a2 )
    return;
  v3 = a1;
  if ( !a1 || *a1 != 3959286781LL )
  {
    sub_F280(a2);
    return;
  }
  if ( a3 == 14 )
  {
    v3 = (_QWORD *)a1[5];
    if ( v3 )
    {
      if ( a2 <= 0x10 || *(_WORD *)(a2 - 6) != 14 )
        return;
      v11 = *(_DWORD *)(a2 + 16);
      v4 = (void *)(a2 - 16);
      if ( v11 != 1 )
      {
        if ( v11 != 2 || (v8 = (unsigned int)dword_B8D30, !dword_B8D30) )
        {
          _dwarf_error_destructor(a2);
LABEL_25:
          if ( v3[36] )
            _dwarf_tdelete(a2, v3 + 36, sub_F220);
          goto LABEL_17;
        }
LABEL_28:
        v9 = 0;
        while ( 1 )
        {
          v10 = qword_B8CE0[v9];
          if ( a2 == v10 )
          {
            if ( v10 )
              break;
          }
          if ( ++v9 == v8 )
            goto LABEL_32;
        }
        qword_B8CE0[(unsigned int)v9] = 0;
LABEL_32:
        _dwarf_error_destructor(a2);
        if ( !v3 )
          goto LABEL_17;
        goto LABEL_25;
      }
    }
    else
    {
      if ( a2 <= 0x10 )
        return;
      v6 = *(_DWORD *)(a2 + 16);
      if ( v6 != 1 )
      {
        v4 = (void *)(a2 - 16);
        if ( v6 != 2 || (v8 = (unsigned int)dword_B8D30, !dword_B8D30) )
        {
          _dwarf_error_destructor(a2);
LABEL_17:
          *(_DWORD *)(a2 - 8) = 0;
          *(_QWORD *)(a2 - 16) = 4272799471LL;
          free(v4);
          return;
        }
        goto LABEL_28;
      }
    }
    dwarf_failsafe_error[0] = 273;
    _dwarf_error_destructor(a2);
    return;
  }
  if ( !a1[36] || a3 != 1 )
  {
    if ( a2 <= 0x10 )
      return;
    if ( a3 != *(unsigned __int16 *)(a2 - 6) )
      return;
    v4 = (void *)(a2 - 16);
    v5 = (unsigned int)a3;
    if ( (unsigned int)a3 > 0x41 )
      return;
    goto LABEL_23;
  }
  if ( _dwarf_tfind(a2, a1 + 36, sub_F220) && a2 > 0x10 && *(_WORD *)(a2 - 6) == 1 )
  {
    v4 = (void *)(a2 - 16);
    v5 = 1;
LABEL_23:
    v7 = (void (__fastcall *)(unsigned __int64))qword_B76E0[3 * v5 + 2];
    if ( v7 )
      v7(a2);
    goto LABEL_25;
  }
}

