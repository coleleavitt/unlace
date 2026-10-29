__m128 *__fastcall sub_5A32E0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4)
{
  __int64 v5; // r12
  __m128 *v6; // rax
  __int64 v7; // r13
  __m128 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // rbx
  double v13[2]; // [rsp+8h] [rbp-50h] BYREF
  __int64 v14[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a2[1] != a1 )
    return nullptr;
  v5 = a4;
  v6 = (__m128 *)sub_186B270(0x30u);
  v7 = *a3;
  v8 = v6;
  v6->m128_u64[0] = (unsigned __int64)&off_1C52298;
  v9 = a2[1];
  v8->m128_u64[1] = 0;
  v10 = *(_QWORD *)(v9 + 24);
  v8[1].m128_u64[0] = 0;
  v8[1].m128_i32[2] = v5;
  v13[0] = **(double **)(v10 + 8);
  v8[2] = _mm_loadh_ps(v13);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  if ( *(_DWORD *)(a2[7] + 4 * v5) != -1 )
  {
    sub_4C4120(v10, a2[2] + 8 * v5, a3, (__int64)v14);
    v12 = sub_4C4CE0(*(_QWORD *)(a2[1] + 24LL), a2[13], v14, *(_DWORD *)(a2[7] + 4 * v5));
    if ( v12 )
    {
      sub_568170(nullptr);
      v8->m128_u64[1] = v12;
    }
  }
  return v8;
}

