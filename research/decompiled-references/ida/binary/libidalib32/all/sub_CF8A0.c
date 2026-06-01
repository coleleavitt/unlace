__int64 __fastcall sub_CF8A0(int a1, unsigned int a2)
{
  unsigned int v2; // ebp
  _DWORD *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r13
  _DWORD *v11; // rdi
  int v13; // eax
  unsigned int v14; // r13d

  if ( !dword_2515A4 )
    return 0;
  v2 = a2;
  if ( a2 == -1 )
    return 0;
  if ( !a1 )
    return 0;
  v4 = (_DWORD *)qword_251410;
  v5 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
  if ( (_DWORD *)qword_251410 == v5 )
    return 0;
  while ( a1 != *v4 )
  {
    v4 += 58;
    if ( v5 == v4 )
      return 0;
  }
  if ( !v4 )
    return 0;
  v6 = sub_CE480((__int64)v4, -1);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = dword_24411C;
  v9 = v6 + 32LL * dword_24411C;
  v10 = *(_QWORD *)(v9 + 8);
  if ( (unsigned int)v10 - a2 > 0xF )
  {
    v13 = sub_CCE60(*(_QWORD *)(v9 + 8), v6, dword_24411C);
    v14 = a2 + v10 - v13;
    v8 = dword_24411C;
    v9 = v7 + 32LL * dword_24411C;
    if ( (int)(v13 - a2) < 16 )
      v2 = v14;
  }
  v11 = qword_2515B0;
  *(_QWORD *)(v9 + 8) = v2;
  if ( !v11 )
    return 0;
  *v11 = a1;
  v11[7] = v8;
  *((_QWORD *)v11 + 5) = v9;
  if ( (int)sub_CC780((__int64)v11, 17) <= 0 )
    return 0;
  HIDWORD(qword_2511A0) = 0;
  return 1;
}

