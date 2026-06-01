void __fastcall sub_F6E4E0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // rcx
  const __m128i *v4; // r8

  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = a3;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v3 + 8) = 0;
  v4 = *(const __m128i **)a1;
  *(_DWORD *)v3 = a3;
  if ( v4[2].m128i_i64[0] )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = sub_F6D900(a2, a3, v4);
}
