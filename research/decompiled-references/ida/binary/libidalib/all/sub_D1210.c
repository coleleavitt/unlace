__int64 __fastcall sub_D1210(int a1, _QWORD *a2)
{
  int v3; // edx
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v9; // rdi

  v3 = dword_252588;
  if ( dword_252744 )
    v3 = HIDWORD(qword_2524A0);
  if ( !v3 )
    return 0;
  v4 = (_DWORD *)qword_252590;
  v5 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v5 )
    return 0;
  while ( v3 != *v4 )
  {
    v4 += 64;
    if ( (_DWORD *)v5 == v4 )
      return 0;
  }
  if ( !v4 )
    return 0;
  v6 = sub_CFA40((__int64)v4, a1);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(v6 + 32LL * a1 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v9 = qword_252758;
      if ( qword_252758 )
      {
        *(_QWORD *)qword_252758 = v7;
        v9[1] = v6;
        *((_DWORD *)v9 + 4) = a1;
        if ( (unsigned int)sub_CDCF0((__int64)v9, 11) != 1 )
          return 0;
        v7 = *(_QWORD *)qword_252758;
      }
    }
  }
  if ( v7 != -1 )
  {
    *a2 = v7;
    return 1;
  }
  return 0;
}

