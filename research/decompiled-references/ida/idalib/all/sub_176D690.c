unsigned __int64 __fastcall sub_176D690(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax
  unsigned __int64 v8; // rsi

  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = (__int64 *)sub_176A140(a1, *(void ***)(a2 + 24), a3);
  if ( !v7 )
    return 1;
  v8 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && v7 == *(__int64 **)(a2 + 24) && *(_QWORD *)(a2 + 16) == v8 )
    return a2;
  else
    return sub_16CEEA0(*a1, v8, v7, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), *(double *)a3.m128_u64);
}
