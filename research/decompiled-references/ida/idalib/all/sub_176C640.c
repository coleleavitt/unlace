__int64 __fastcall sub_176C640(_QWORD *a1, __int64 a2, __m128 a3)
{
  void **v3; // rax

  v3 = sub_176A140(a1, *(void ***)(a2 + 16), a3);
  if ( !v3 )
    return 1;
  if ( !*(_DWORD *)(*a1 + 12632LL) && v3 == *(void ***)(a2 + 16) )
    return a2;
  return sub_19D2DA0(*(_QWORD *)(*a1 + 736LL), *(unsigned int *)(a2 + 24), v3, *(unsigned int *)(a2 + 28));
}
