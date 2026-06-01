__int64 __fastcall sub_C2BC60(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // r8

  if ( (*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( (unsigned __int8)sub_BF5170(a2, a4, a3) )
    return sub_C2BB30(a1, a2, (__int64)a3, (unsigned __int16 *)a4, v6);
  return 0;
}

