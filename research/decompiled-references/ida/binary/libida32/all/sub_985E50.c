__m128 *__fastcall sub_985E50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int32 v7; // ebp
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __m128 *result; // rax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  void *v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  __int32 v19; // r12d
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 *v22; // rdi
  __int64 v23; // rdx
  double v24[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( a3 )
  {
    switch ( *(_DWORD *)(a3 + 16) )
    {
      case 0:
        v14 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
        v24[0] = *(double *)(a3 + 8);
        v15 = *v14;
        v14[10] += 32;
        result = (__m128 *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v14[1] >= (unsigned __int64)&result[2] && v15 )
          *v14 = (__int64)&result[2];
        else
          result = (__m128 *)sub_962430((__int64)v14, 32, 32, 3, a5, a6);
        result->m128_i32[2] = 1;
        v13 = &unk_2B16398;
        goto LABEL_11;
      case 1:
      case 4:
      case 5:
      case 6:
      case 9:
        v11 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
        v24[0] = *(double *)(a3 + 8);
        v12 = *v11;
        v11[10] += 32;
        result = (__m128 *)((v12 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v11[1] >= (unsigned __int64)&result[2] && v12 )
          *v11 = (__int64)&result[2];
        else
          result = (__m128 *)sub_962430((__int64)v11, 32, 32, 3, a5, a6);
        result->m128_i32[2] = 3;
        v13 = &unk_2B163E8;
        goto LABEL_11;
      case 2:
        v16 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
        v24[0] = *(double *)(a3 + 8);
        v17 = *v16;
        v16[10] += 32;
        result = (__m128 *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v16[1] >= (unsigned __int64)&result[2] && v17 )
          *v16 = (__int64)&result[2];
        else
          result = (__m128 *)sub_962430((__int64)v16, 32, 32, 3, a5, a6);
        result->m128_i32[2] = 8;
        v13 = &unk_2B164B0;
LABEL_11:
        result->m128_u64[0] = (unsigned __int64)v13 + 16;
        *(_QWORD *)&v24[0] = a2;
        result[1] = _mm_loadh_ps(v24);
        break;
      case 3:
        result = sub_985B20(a1, *(_QWORD *)(a3 + 8), a2, *(_QWORD **)a3, a5, a6);
        break;
      case 7:
        v18 = *(_QWORD *)(a3 + 8);
        v19 = *(_DWORD *)(a3 + 20);
        v20 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
        v21 = *v20;
        v20[10] += 40;
        result = (__m128 *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v20[1] >= (unsigned __int64)&result[2].m128_u64[1] && v21 )
          *v20 = (__int64)&result[2].m128_i64[1];
        else
          result = (__m128 *)sub_962430((__int64)v20, 40, 40, 3, a5, a6);
        result->m128_i32[2] = 9;
        result[1].m128_u64[0] = v18;
        result[1].m128_i32[2] = v19;
        result->m128_u64[0] = (unsigned __int64)off_2B164E8;
        result[2].m128_u64[0] = a2;
        break;
      case 8:
        v6 = *(_QWORD *)(a3 + 8);
        v7 = *(_DWORD *)(a3 + 20);
        v8 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
        v9 = *v8;
        v8[10] += 32;
        result = (__m128 *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v8[1] >= (unsigned __int64)&result[2] && v9 )
          *v8 = (__int64)&result[2];
        else
          result = (__m128 *)sub_962430((__int64)v8, 32, 32, 3, a5, a6);
        result->m128_i32[2] = 10;
        result[1].m128_u64[0] = v6;
        result[1].m128_i32[2] = v7;
        result->m128_u64[0] = (unsigned __int64)off_2B16510;
        break;
    }
  }
  else
  {
    v22 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF8LL);
    v23 = *v22;
    v22[10] += 32;
    result = (__m128 *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v22[1] >= (unsigned __int64)&result[2] && v23 )
      *v22 = (__int64)&result[2];
    else
      result = (__m128 *)sub_962430((__int64)v22, 32, 32, 3, a5, a6);
    result->m128_i32[2] = 5;
    result[1].m128_u64[0] = a2;
    result[1].m128_u64[1] = 0;
    result->m128_u64[0] = (unsigned __int64)off_2B16448;
  }
  return result;
}

