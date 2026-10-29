__int64 __fastcall sub_1CF8BD0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  _QWORD *v5; // rax

  if ( (*(_DWORD *)a2 & 0x10000) == 0 )
    return a2;
  v5 = sub_1CF6590(a1, *(_QWORD *)(a2 + 32), a3, a4);
  if ( !v5 )
    return 1;
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) && v5 == *(_QWORD **)(a2 + 32) )
    return a2;
  return sub_1C73FB0(
           *(_QWORD *)(*(_QWORD *)a1 + 800LL),
           *(_DWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 20),
           *(_DWORD *)(a2 + 24),
           (__int64)v5);
}
