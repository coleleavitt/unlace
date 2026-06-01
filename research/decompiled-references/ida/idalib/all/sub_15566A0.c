__int64 __fastcall sub_15566A0(const __m128i *a1, __int64 a2, __int64 a3, int a4, __m128i a5, __m128 a6)
{
  const __m128i *v7; // r13
  __int8 v9; // al
  __int64 v10; // rax
  const __m128i *v11; // r12
  __int64 v12; // rsi
  __m128 *v13; // r14
  __int32 v14; // ecx
  int v15; // eax
  __int64 result; // rax
  __int64 *v17; // rdi
  __int64 *v18; // rdi
  __int64 *v19; // rax
  const __m128i *v20; // rdx
  __int64 v21; // rcx
  unsigned int *v22; // rsi
  __int64 v23; // [rsp+18h] [rbp-110h]
  __int8 v24; // [rsp+23h] [rbp-105h]
  int v25; // [rsp+24h] [rbp-104h] BYREF
  __int64 v26; // [rsp+28h] [rbp-100h] BYREF
  __int64 *v27; // [rsp+30h] [rbp-F8h] BYREF
  const __m128i *v28; // [rsp+38h] [rbp-F0h]
  __int64 v29; // [rsp+40h] [rbp-E8h]
  unsigned int *v30; // [rsp+48h] [rbp-E0h]
  int v31; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-D0h]
  __int64 v33; // [rsp+60h] [rbp-C8h]
  __int64 v34; // [rsp+68h] [rbp-C0h] BYREF
  void *ptr; // [rsp+70h] [rbp-B8h]
  int v36; // [rsp+7Ch] [rbp-ACh]
  __m128 v37; // [rsp+80h] [rbp-A8h]
  int v38; // [rsp+90h] [rbp-98h]
  int v39; // [rsp+94h] [rbp-94h]
  int v40; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-80h]
  __int64 v42; // [rsp+B0h] [rbp-78h]
  __int64 v43; // [rsp+B8h] [rbp-70h] BYREF
  void *v44; // [rsp+C0h] [rbp-68h]
  int v45; // [rsp+CCh] [rbp-5Ch]
  __m128i v46; // [rsp+D0h] [rbp-58h] BYREF
  int v47; // [rsp+E0h] [rbp-48h]
  int v48; // [rsp+E4h] [rbp-44h]

  v7 = a1 + 3;
  v9 = a1[127].m128i_i8[8];
  a1[127].m128i_i8[8] = 0;
  v26 = a3;
  v24 = v9;
  v27 = &v26;
  v30 = (unsigned int *)&v25;
  v25 = a4;
  v28 = a1;
  v29 = a2;
  while ( 1 )
  {
    sub_1703AD0(v7, a1[1].m128i_u32[0], sub_154D360, &v27);
    sub_154ECC0((__int64)&v31, a1, a5, a6);
    if ( a1[2].m128i_i16[0] == 27 )
    {
      v18 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v18, a1[1].m128i_i32);
      sub_1E545A0(&v40, a1[6].m128i_i64[0], &v31, a1[2].m128i_u32[2]);
      v31 = v40;
      v32 = v41;
      v33 = v42;
      sub_E907B0((__int64)&v34, (__int64)&v43);
      a6 = (__m128)_mm_load_si128(&v46);
      v38 = v47;
      v37 = a6;
      v39 = v48;
      if ( v45 )
        free(v44);
    }
    if ( !v32 )
      break;
    v10 = *(unsigned int *)(a2 + 8);
    v11 = (const __m128i *)&v31;
    v12 = v10 + 1;
    v13 = (__m128 *)(*(_QWORD *)a2 + 72 * v10);
    if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      if ( *(_QWORD *)a2 > (unsigned __int64)&v31 || v13 <= (__m128 *)&v31 )
      {
        sub_1556590(a2, v12);
        v13 = (__m128 *)(*(_QWORD *)a2 + 72LL * *(unsigned int *)(a2 + 8));
      }
      else
      {
        v23 = *(_QWORD *)a2;
        sub_1556590(a2, v12);
        v11 = (const __m128i *)((char *)&v31 + *(_QWORD *)a2 - v23);
        v13 = (__m128 *)(*(_QWORD *)a2 + 72LL * *(unsigned int *)(a2 + 8));
      }
    }
    v13->m128_i32[0] = v11->m128i_i32[0];
    v13->m128_u64[1] = v11->m128i_u64[1];
    v13[1].m128_u64[0] = v11[1].m128i_u64[0];
    sub_E90750((__int64)&v13[1].m128_i64[1], &v11[1].m128i_i64[1]);
    v14 = v11[4].m128i_i32[0];
    a5 = _mm_loadu_si128(v11 + 3);
    v13[4].m128_i32[1] = v11[4].m128i_i32[1];
    v15 = v36;
    v13[3] = (__m128)a5;
    v13[4].m128_i32[0] = v14;
    ++*(_DWORD *)(a2 + 8);
    if ( v15 )
    {
      free(ptr);
      if ( a1[2].m128i_i16[0] != 66 )
      {
LABEL_7:
        result = 0;
        goto LABEL_8;
      }
    }
    else if ( a1[2].m128i_i16[0] != 66 )
    {
      goto LABEL_7;
    }
    v17 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v17, a1[1].m128i_i32);
  }
  if ( *(_BYTE *)(a1->m128i_i64[1] + 968) )
  {
    if ( !a1[23].m128i_i8[0] )
    {
      v19 = v27;
      if ( *v27 )
      {
        v20 = v28;
        v21 = v29;
        v22 = v30;
        v28[23].m128i_i8[0] = 1;
        sub_1706320(*(_QWORD *)(v20[6].m128i_i64[0] + 656), *v19, *(_QWORD *)v21, *(unsigned int *)(v21 + 8), *v22);
      }
    }
  }
  if ( v36 )
    free(ptr);
  result = 1;
LABEL_8:
  a1[127].m128i_i8[8] = v24;
  return result;
}
