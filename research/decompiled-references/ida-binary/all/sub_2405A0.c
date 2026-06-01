__int64 __fastcall sub_2405A0(int a1, __int64 *a2, double a3, __int64 a4, char *a5)
{
  __int64 v6; // rdx
  _DWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v13; // rdi

  v6 = (unsigned int)dword_8CC428;
  if ( dword_8CC5E8 )
    v6 = HIDWORD(qword_8CC340);
  if ( !(_DWORD)v6 )
    return 0;
  v7 = (_DWORD *)qword_8CC430;
  v8 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v8 )
    return 0;
  while ( (_DWORD)v6 != *v7 )
  {
    v7 += 64;
    if ( (_DWORD *)v8 == v7 )
      return 0;
  }
  if ( !v7 )
    return 0;
  v9 = sub_23F1C0((__int64)v7, a1, a3, v6, a5);
  if ( !v9 )
    return 0;
  v10 = (char *)dbg;
  v11 = *(_QWORD *)(v9 + 32LL * a1 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v13 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v11;
        v13[1] = v9;
        *((_DWORD *)v13 + 4) = a1;
        if ( (unsigned int)sub_23D480((__int64)v13, 11, v11, v10, a3) != 1 )
          return 0;
        v11 = *(_QWORD *)qword_8CC600;
      }
    }
  }
  if ( v11 != -1 )
  {
    *a2 = v11;
    return 1;
  }
  return 0;
}
