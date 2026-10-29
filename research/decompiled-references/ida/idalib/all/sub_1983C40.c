__int64 __fastcall sub_1983C40(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), *(double *)a3.m128_u64, a4);
  if ( v7 == 1 )
    return 1;
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v6 & 0xFFFFFFFFFFFFFFFELL) == *(_QWORD *)(a2 + 16) && *(_QWORD *)(a2 + 24) == v8 )
    return a2;
  v9 = *(_DWORD *)(a2 + 32);
  v10[0] = v8;
  return sub_1930830((__int64 *)*a1, 0, v6 & 0xFFFFFFFFFFFFFFFELL, 0, v10, 1, a3, a4, v9);
}
