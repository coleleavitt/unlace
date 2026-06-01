__int64 __fastcall sub_BADE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi

  if ( !*(_QWORD *)(a1 + 88) )
    return 0;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 88);
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 7) != 0 )
    v8 = 0;
  return sub_BADD00(v7, v8, 0, a4, a5, a6);
}
