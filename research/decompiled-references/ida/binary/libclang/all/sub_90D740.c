__int64 __fastcall sub_90D740(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 792);
  v5 = a1 + 384;
  *(_QWORD *)(v5 + 416) = v3;
  return sub_90D240(v5, v4);
}

