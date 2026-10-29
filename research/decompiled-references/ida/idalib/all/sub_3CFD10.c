__int64 __fastcall sub_3CFD10(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // r13
  _DWORD *v10; // rax
  _DWORD *v11; // r14
  unsigned __int64 v12; // rdx

  v3 = a3 & 0xFFFFFFFFFFFFFE00LL;
  if ( !v3 )
    return 0;
  if ( a2 == (void *)-1LL )
    return 0;
  v4 = v3;
  v9 = sub_3BE900(a1, (unsigned __int64)a2, 0);
  if ( (v4 & ~v9) == 0 )
    return 0;
  v10 = (_DWORD *)sub_3CF160((__int64)a1, (unsigned __int64)a2, v5, v6, v7, v8);
  v11 = v10;
  if ( !v10 )
    return 0;
  sub_3BB8A0((__int64)a2, (unsigned int)*v10, (unsigned int)v4 | *v10);
  *v11 |= v4;
  v12 = (v9 | v4) >> 32;
  if ( v12 != HIDWORD(v9) )
    sub_3CFBE0(a1, a2, v12);
  if ( (v4 & ~sub_3BE900(a1, (unsigned __int64)a2, 0)) != 0 )
  {
    if ( !under_debugger )
      interr(56);
    BUG();
  }
  ++a1[155];
  return 1;
}
