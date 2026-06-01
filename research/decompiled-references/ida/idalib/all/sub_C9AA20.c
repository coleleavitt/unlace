unsigned __int64 __fastcall sub_C9AA20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx

  v6 = *(_QWORD *)(a1 + 40);
  v7 = (v6 >> 1) & 3;
  if ( v7 == 2 )
    return sub_A82070(a2, v6 & 0xFFFFFFFFFFFFFFF8LL, 0, a2, a5, a6);
  if ( v7 == 1 )
    return v6 & 0xFFFFFFFFFFFFFFF0LL;
  return *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 8);
}
