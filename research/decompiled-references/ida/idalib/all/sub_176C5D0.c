__int64 __fastcall sub_176C5D0(_QWORD *a1, __int64 a2, __m128 a3)
{
  void **v4; // rax

  if ( (*(_DWORD *)a2 & 0x10000) == 0 )
    return a2;
  v4 = sub_176A140(a1, *(void ***)(a2 + 32), a3);
  if ( !v4 )
    return 1;
  if ( !*(_DWORD *)(*a1 + 12632LL) && v4 == *(void ***)(a2 + 32) )
    return a2;
  return sub_1C73FB0(
           *(_QWORD *)(*a1 + 800LL),
           *(unsigned int *)(a2 + 16),
           *(unsigned int *)(a2 + 20),
           *(unsigned int *)(a2 + 24),
           v4);
}
