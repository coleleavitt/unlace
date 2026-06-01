__int64 __fastcall sub_14D5300(
        const __m128i *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int16 v13; // bp
  __int16 v14; // ax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int32 v17; // edx
  __m128 v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 result; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+8h] [rbp-250h]
  int v31; // [rsp+1Ch] [rbp-23Ch] BYREF
  const __m128i *v32; // [rsp+20h] [rbp-238h] BYREF
  __m128 v33; // [rsp+28h] [rbp-230h]
  __m128i v34; // [rsp+38h] [rbp-220h]
  __int64 v35; // [rsp+48h] [rbp-210h]
  __m128i v36; // [rsp+50h] [rbp-208h]
  int v37; // [rsp+60h] [rbp-1F8h]
  __int64 v38; // [rsp+68h] [rbp-1F0h]
  __int32 v39; // [rsp+70h] [rbp-1E8h]
  __int16 v40; // [rsp+74h] [rbp-1E4h]
  char v41; // [rsp+76h] [rbp-1E2h]
  __int128 v42; // [rsp+80h] [rbp-1D8h] BYREF
  void *ptr; // [rsp+90h] [rbp-1C8h]
  __int64 v44; // [rsp+98h] [rbp-1C0h]
  _OWORD v45[27]; // [rsp+A0h] [rbp-1B8h] BYREF

  v9 = a1->m128i_i64[1];
  v10 = *(_QWORD *)(v9 + 2944);
  if ( *(unsigned int *)(v9 + 2912) <= v10 )
  {
    a2 = 1;
    v12 = sub_14180A0(v9, 1u);
  }
  else
  {
    v11 = 3 * v10;
    v12 = *(_QWORD *)(v9 + 2904) + 24 * v10;
  }
  v13 = *(_WORD *)(v12 + 16);
  if ( v13 == 1 )
    return 0;
  v14 = a1[2].m128i_i16[0];
  if ( v14 != 1 )
  {
    v15 = a1->m128i_i64[1];
    v16 = *(_QWORD *)(v15 + 2944) + 1LL;
    if ( v16 >= *(unsigned int *)(v15 + 2912) )
    {
      a2 = 2;
      v14 = *(_WORD *)(sub_14180A0(v15, 2u) + 16);
    }
    else
    {
      v11 = *(_QWORD *)(v15 + 2904);
      v14 = *(_WORD *)(v11 + 24 * v16 + 16);
    }
  }
  if ( v13 == 64 || v13 == 21 )
    return sub_14D4CB0((__int64)a1, a3, a4, a2, v11, a6, a7, a8);
  LOBYTE(v11) = v14 == 21;
  if ( v13 != 28 )
  {
    LOBYTE(a6) = v13 == 5;
    if ( (v13 != 5 || v14 != 21) && v13 != 27 )
    {
      if ( v14 != 5 || v13 != 5 )
        goto LABEL_15;
      return 0;
    }
    return sub_14D4CB0((__int64)a1, a3, a4, a2, v11, a6, a7, a8);
  }
  if ( v14 == 66 || v14 == 21 )
    return sub_14D4CB0((__int64)a1, a3, a4, a2, v11, a6, a7, a8);
LABEL_15:
  v17 = a1[5].m128i_i32[2];
  v18 = (__m128)_mm_loadu_si128(a1 + 3);
  v19 = 0;
  v20 = a1->m128i_i64[1];
  v42 = 0;
  v39 = v17;
  ptr = v45;
  v44 = 0x400000000LL;
  v21 = a1[5].m128i_i64[0];
  v32 = a1;
  v35 = v21;
  LODWORD(v21) = a1[2].m128i_i32[0];
  v33 = v18;
  v37 = v21;
  v22 = a1[169].m128i_u32[2];
  v34 = _mm_loadu_si128(a1 + 4);
  v38 = v22;
  LOWORD(v22) = a1[5].m128i_i16[6];
  v36 = _mm_loadu_si128(a1 + 1);
  v40 = v22;
  sub_1418D30(v20, 0);
  v41 = 1;
  if ( (unsigned __int8)sub_14CACB0((__int64)a1, (__int64 *)&v42, &v31, v23, v24, v25, 0.0, v18) )
  {
    sub_14C5EA0((__int64 *)&v32);
    result = 1;
  }
  else
  {
    if ( v31 != 1 )
    {
      if ( v31 <= 1 )
      {
        if ( !v31 )
          sub_14C5EA0((__int64 *)&v32);
        goto LABEL_20;
      }
      if ( v31 <= 3 )
      {
        sub_147B460((__int64)&v32);
        result = 0;
        goto LABEL_21;
      }
LABEL_20:
      result = sub_14D2EE0((__int64)a1, (unsigned int *)&v42, v19, v18);
      goto LABEL_21;
    }
    sub_147B460((__int64)&v32);
    v19 = 0;
    v45[12] = 0;
    v42 = 0u;
    LODWORD(v44) = 0;
    if ( !(unsigned __int8)sub_14CACB0((__int64)a1, (__int64 *)&v42, nullptr, v27, v28, v29, 0.0, v18) )
      goto LABEL_20;
    result = 1;
  }
LABEL_21:
  if ( ptr != v45 )
  {
    v30 = result;
    free(ptr);
    return v30;
  }
  return result;
}
