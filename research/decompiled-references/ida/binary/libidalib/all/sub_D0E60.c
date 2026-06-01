__int64 __fastcall sub_D0E60(int a1, __int64 a2)
{
  __int64 v2; // rbp
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r13
  _DWORD *v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r13

  if ( !dword_25274C )
    return 0;
  v2 = a2;
  if ( a2 == -1 )
    return 0;
  if ( !a1 )
    return 0;
  v4 = (_DWORD *)qword_252590;
  v5 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v5 )
    return 0;
  while ( a1 != *v4 )
  {
    v4 += 64;
    if ( (_DWORD *)v5 == v4 )
      return 0;
  }
  if ( !v4 )
    return 0;
  v6 = sub_CFA40((__int64)v4, -1);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = dword_245174;
  v9 = v6 + 32LL * dword_245174;
  v10 = *(_QWORD *)(v9 + 8);
  if ( (unsigned __int64)(v10 - a2) > 0xF )
  {
    v13 = sub_CE400(v10, v6, dword_245174);
    v14 = a2 + v10 - v13;
    v8 = dword_245174;
    v9 = v7 + 32LL * dword_245174;
    if ( v13 - a2 < 16 )
      v2 = v14;
  }
  v11 = qword_252758;
  *(_QWORD *)(v9 + 8) = v2;
  if ( !v11 )
    return 0;
  *v11 = a1;
  v11[9] = v8;
  *((_QWORD *)v11 + 6) = v9;
  if ( (int)sub_CDCF0((__int64)v11, 17) <= 0 )
    return 0;
  HIDWORD(qword_252280) = 0;
  return 1;
}

