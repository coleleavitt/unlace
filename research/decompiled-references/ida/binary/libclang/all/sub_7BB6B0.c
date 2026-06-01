__int64 __fastcall sub_7BB6B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi

  if ( !*(_QWORD *)(a1 + 88) )
    return 0;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 88);
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 7) != 0 )
    v3 = 0;
  return sub_7BB510(v2, v3);
}

