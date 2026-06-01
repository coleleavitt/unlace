unsigned __int64 __fastcall sub_195A190(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v4 == 1 )
    return 1;
  else
    return sub_190C990(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 20),
             v4 & 0xFFFFFFFFFFFFFFFELL,
             *(double *)a3.m128_u64,
             a4);
}
