__int64 __fastcall sub_1868F30(__int64 *a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v3; // rbx
  _WORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 result; // rax
  __int64 v10; // rax

  v3 = *(_QWORD *)(a2 + 32);
  v4 = (_WORD *)sub_BFB900(v3);
  if ( (*v4 & 0x1FF) == 0x47 && (*(_QWORD *)v4 & 0x8000000) != 0 )
  {
    v10 = sub_BFBC70(v3);
    if ( v10 )
    {
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 >= 6 )
        v10 = 0;
    }
    sub_1868B70((__int64)a1, a2, v10, 1u, a3);
    return 0;
  }
  else
  {
    v5 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
    v6 = v5 + 8LL * *(unsigned int *)(a2 + 16);
    v7 = (__int64 *)(a2 + v5);
    v8 = (__int64 *)(a2 + v6);
    if ( v8 == v7 )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        result = sub_BC97E0(a1, *v7);
        if ( !(_BYTE)result )
          break;
        if ( v8 == ++v7 )
          return 1;
      }
    }
  }
  return result;
}
