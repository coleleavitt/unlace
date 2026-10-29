__int64 __fastcall dwarf_fill_in_uni_arch_64(
        __int64 a1,
        _QWORD *a2,
        void (__fastcall *a3)(_QWORD *, __int64, __int64),
        _DWORD *a4)
{
  _QWORD *v4; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  v4 = (_QWORD *)a2[3];
  if ( !a2[1] )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    *v4 = 0;
    a3(v4, a1, 4);
    v4[1] = 0;
    a3(v4 + 1, a1 + 4, 4);
    v4[2] = 0;
    a3(v4 + 2, a1 + 8, 8);
    if ( v4[2] >= a2[2] )
      break;
    v4[3] = 0;
    a3(v4 + 3, a1 + 16, 8);
    v9 = v4[3];
    v10 = a2[2];
    if ( v9 >= v10 )
      break;
    if ( v10 < v4[2] + v9 )
      break;
    v4[4] = 0;
    a3(v4 + 4, a1 + 24, 4);
    if ( v4[4] > 0x1Fu )
      break;
    v4[5] = 0;
    a3(v4 + 5, a1 + 28, 4);
    ++v8;
    a1 += 32;
    v4 += 6;
    if ( v8 >= a2[1] )
      return 0;
  }
  *a4 = 503;
  return 1;
}

