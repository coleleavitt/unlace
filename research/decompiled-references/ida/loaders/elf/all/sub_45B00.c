__int64 __fastcall sub_45B00(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  __int64 v9; // rdi
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rbx
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rsi
  __m128i v28; // [rsp+8h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v29)(); // [rsp+18h] [rbp-B0h]
  unsigned __int64 v30; // [rsp+28h] [rbp-A0h] BYREF
  __int64 (__fastcall **v31)(); // [rsp+30h] [rbp-98h] BYREF
  __int64 v32; // [rsp+38h] [rbp-90h]
  __m128i v33; // [rsp+40h] [rbp-88h]
  unsigned __int64 v34; // [rsp+50h] [rbp-78h]
  __int64 v35; // [rsp+58h] [rbp-70h] BYREF
  __int128 v36; // [rsp+60h] [rbp-68h]
  unsigned __int64 v37; // [rsp+70h] [rbp-58h]
  __int64 v38; // [rsp+78h] [rbp-50h]
  unsigned __int64 v39; // [rsp+88h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v3 = a3[2];
  if ( !v3 )
    return 0;
  v5 = *(int *)(a1 + 400);
  v6 = *a3;
  v9 = *(_QWORD *)(a1 + 472);
  v10 = *a3;
  if ( !v5 )
    v5 = 1;
  v30 = v3 / v5;
  sub_45A20(v9, &v30, v5, "Dynamic info size", v10, -1);
  if ( !v30 )
    return 0;
  v11 = 0;
  v12 = 0;
  v31 = &off_87158;
  v32 = a1;
  v34 = v5;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v29 = &v31;
  v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)v30);
  v36 = 0;
  while ( 1 )
  {
    if ( v12 < v11 )
      goto LABEL_25;
    v13 = v37;
    v14 = v33.m128i_i64[1] - v37;
    if ( v33.m128i_i64[1] == v37 )
      goto LABEL_9;
    v15 = v36;
    if ( (unsigned __int64)v36 < v14 )
    {
      v27 = v35;
      if ( *((_QWORD *)&v36 + 1) < v14 )
      {
        v35 = qvector_reserve(&v35, v35, v33.m128i_i64[1] - v37, 16);
        v15 = v36;
        v27 = v35;
      }
      memset((void *)(v27 + 16 * v15), 0, 16 * (v14 - v15));
      *(_QWORD *)&v36 = v14;
      v13 = v37;
    }
    else if ( v14 != (_QWORD)v36 )
    {
      *(_QWORD *)&v36 = v33.m128i_i64[1] - v37;
    }
    LODWORD(v38) = 0;
    if ( v34 && (v13 && !is_mul_ok(v34, v13) || !is_mul_ok(v14, v34)) )
      goto LABEL_30;
    v16 = v32;
    v17 = qlseek(*(_QWORD *)(v32 + 472), 0, 1);
    v18 = *(_QWORD *)(v16 + 480);
    v19 = *(_QWORD *)(v16 + 472);
    v28.m128i_i64[0] = v17 - v18;
    if ( qlseek(v19, v18 + v33.m128i_i64[0] + v34 * v37, 0) == -1 )
      break;
    v20 = 0;
    while ( sub_3E020((__int64)&v31, (_OWORD *)(v35 + 16 * v20)) )
    {
      if ( v14 == ++v20 )
        goto LABEL_23;
    }
    LODWORD(v14) = v20;
LABEL_23:
    qlseek(*(_QWORD *)(v16 + 472), *(_QWORD *)(v16 + 480) + v28.m128i_i64[0], 0);
    HIDWORD(v38) = v14;
    if ( !(_DWORD)v14 )
      goto LABEL_9;
    v37 += (unsigned int)v14;
    v12 = v38;
    if ( (unsigned int)v38 >= (unsigned int)v14 )
      goto LABEL_9;
LABEL_25:
    v21 = a2[1];
    v22 = *a2;
    v23 = v35 + 16LL * v12;
    LODWORD(v38) = v12 + 1;
    v24 = _mm_loadl_epi64((const __m128i *)v23);
    v25 = _mm_loadl_epi64((const __m128i *)(v23 + 8));
    if ( a2[2] < (unsigned __int64)(v21 + 1) )
    {
      v28.m128i_i64[1] = v25.m128i_i64[0];
      v28.m128i_i64[0] = v24.m128i_i64[0];
      v26 = qvector_reserve(a2, v22, v21 + 1, 16);
      *a2 = v26;
      v21 = a2[1];
      v22 = v26;
      v25 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
      v24 = _mm_loadl_epi64(&v28);
    }
    *(__m128i *)(v22 + 16 * v21) = _mm_unpacklo_epi64(v24, v25);
    ++a2[1];
    if ( !*(_QWORD *)v23 )
      goto LABEL_9;
    v12 = v38;
    v11 = HIDWORD(v38);
  }
  qlseek(*(_QWORD *)(v16 + 472), *(_QWORD *)(v16 + 480) + v28.m128i_i64[0], 0);
LABEL_30:
  HIDWORD(v38) = 0;
LABEL_9:
  v31 = &off_87158;
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  return 1;
}

