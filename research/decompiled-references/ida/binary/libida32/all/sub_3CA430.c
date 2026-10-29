__int64 __fastcall sub_3CA430(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  _DWORD *v6; // rax
  _DWORD *v7; // r14
  unsigned __int64 v8; // rdx

  v3 = a3 & 0xFFFFFFFFFFFFFE00LL;
  if ( !v3 )
    return 0;
  if ( a2 == -1 )
    return 0;
  v4 = v3;
  v5 = sub_3B9AA0((__int64)a1, a2, 0);
  if ( (v4 & ~v5) == 0 )
    return 0;
  v6 = (_DWORD *)sub_3C9940((__int64)a1, a2);
  v7 = v6;
  if ( !v6 )
    return 0;
  sub_3B7100(a2, (unsigned int)*v6, (unsigned int)v4 | *v6);
  *v7 |= v4;
  v8 = (v5 | v4) >> 32;
  if ( v8 != HIDWORD(v5) )
    sub_3CA2E0(a1, a2, v8);
  if ( (v4 & ~sub_3B9AA0((__int64)a1, a2, 0)) != 0 )
  {
    if ( !under_debugger )
      interr(56);
    BUG();
  }
  ++a1[152];
  return 1;
}

