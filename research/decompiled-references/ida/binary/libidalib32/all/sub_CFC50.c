__int64 __fastcall sub_CFC50(int a1, _DWORD *a2)
{
  int v4; // edx
  _DWORD *v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edx
  _QWORD *v11; // rdi

  v4 = dword_251408;
  if ( dword_25159C )
    v4 = HIDWORD(qword_251320);
  if ( !v4 )
    return 0;
  v5 = (_DWORD *)qword_251410;
  v6 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
  if ( (_DWORD *)qword_251410 == v6 )
    return 0;
  while ( v4 != *v5 )
  {
    v5 += 58;
    if ( v6 == v5 )
      return 0;
  }
  if ( !v5 )
    return 0;
  v7 = sub_CE480((__int64)v5, a1);
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(v7 + 32LL * a1 + 8);
  v9 = v8;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37LL) & 0x40) != 0 )
    {
      v11 = qword_2515B0;
      if ( qword_2515B0 )
      {
        *(_DWORD *)qword_2515B0 = v8;
        v11[1] = v7;
        *((_DWORD *)v11 + 4) = a1;
        if ( (unsigned int)sub_CC780((__int64)v11, 11) != 1 )
          return 0;
        v9 = *(_DWORD *)qword_2515B0;
      }
    }
  }
  if ( v9 != -1 )
  {
    *a2 = v9;
    return 1;
  }
  return 0;
}

