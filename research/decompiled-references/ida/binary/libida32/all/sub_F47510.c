unsigned __int64 __fastcall sub_F47510(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // cl
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdx

  v5 = a1;
  v6 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = v5 & 7;
  v8 = v5 & 8;
  if ( !(_DWORD)v8 )
  {
    v9 = sub_F473B0((__int64)v6, a2, a3, v8, a5);
    return (unsigned int)v7 | v9 & 7 | v9 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v7 |= v6[3];
  v12 = sub_F473B0(*v6, a2, a3, v8, a5);
  v9 = v12;
  if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return (unsigned int)v7 | v9 & 7 | v9 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = v7 | v12 & 7;
  if ( (v12 & 8) != 0 )
  {
    v14 |= *(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
    v13 = (_QWORD *)*v13;
  }
  return sub_A4CF00(a2, (__int64)v13, v14);
}

