unsigned __int64 __fastcall sub_3630C0(
        unsigned int *a1,
        __int64 a2,
        _QWORD *a3,
        double a4,
        double a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 v12; // r15
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  __m128i v18; // xmm0
  __int64 v19; // r8
  _QWORD *v20; // r13
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  int v25; // r14d
  __int64 v26; // r13
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v35; // rax
  void **v36; // r12
  void *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r14
  unsigned __int64 v40; // r13
  __int64 func; // rax
  __int64 v42; // rdx
  __m128i *v43; // r14
  __int64 v44; // rbx
  __m128i *v45; // r12
  unsigned __int64 v46; // rdx
  __m128i *v47; // rbx
  _QWORD *v48; // rcx
  const __m128i *v49; // rax
  __int32 v50; // edi
  __m128i *v51; // rsi
  __int64 v52; // [rsp+0h] [rbp-80h]
  __int64 v53; // [rsp+8h] [rbp-78h]
  unsigned __int64 v54; // [rsp+10h] [rbp-70h]
  __m128i v56; // [rsp+28h] [rbp-58h] BYREF
  __int128 v57; // [rsp+38h] [rbp-48h]
  unsigned __int64 v58; // [rsp+48h] [rbp-38h]

  v11 = *(_QWORD *)a1;
  v12 = *(_QWORD *)(a2 + 800);
  v58 = __readfsqword(0x28u);
  (*(void (__fastcall **)(unsigned int *, _QWORD))(v11 + 168))(a1, 0);
  v16 = *((_QWORD *)a1 + 25);
  if ( v16 )
  {
    *((_QWORD *)a1 + 26) = 0;
    qfree(v16);
    *((_QWORD *)a1 + 25) = 0;
    *((_QWORD *)a1 + 27) = 0;
  }
  *(_BYTE *)(v12 + 520) = 1;
  v17 = a3[1];
  v18.m128i_i64[0] = 0;
  v56.m128i_i64[1] = 0;
  v57 = 0;
  if ( v17 )
  {
    v56.m128i_i64[1] = qvector_reserve(&v56.m128i_u64[1], 0, v17, 16);
    v39 = 0;
    v40 = 0;
    memset((void *)(v56.m128i_i64[1] + 16 * v57), 0, 16 * (v17 - v57));
    *(_QWORD *)&v57 = v17;
    do
    {
      func = get_func(*(_QWORD *)(*a3 + 8 * v39));
      if ( func )
      {
        v42 = v56.m128i_i64[1] + 16 * v40;
        *(_QWORD *)v42 = func;
        *(_DWORD *)(v42 + 8) = v40++;
      }
      ++v39;
    }
    while ( v17 != v39 );
    v43 = (__m128i *)v56.m128i_i64[1];
    v44 = 16 * v40;
    v45 = (__m128i *)(v56.m128i_i64[1] + 16 * v40);
    if ( v45 == (__m128i *)v56.m128i_i64[1] )
      goto LABEL_39;
    if ( v44 >> 4 )
    {
      _BitScanReverse64(&v46, v44 >> 4);
      sub_358D10((__m128i *)v56.m128i_i64[1], (__m128i *)(v56.m128i_i64[1] + 16 * v40), 2LL * (int)v46);
      if ( v44 > 256 )
      {
        v47 = v43 + 16;
        sub_358C00(v43, v43 + 16);
        do
        {
          v48 = (_QWORD *)v47->m128i_i64[0];
          v49 = v47 - 1;
          v50 = v47->m128i_i32[2];
          if ( *(_QWORD *)v47->m128i_i64[0] >= *(_QWORD *)v47[-1].m128i_i64[0] )
          {
            v51 = v47;
          }
          else
          {
            do
            {
              v18 = _mm_loadu_si128(v49);
              v51 = (__m128i *)v49--;
              v49[2] = v18;
            }
            while ( *v48 < *(_QWORD *)v49->m128i_i64[0] );
          }
          ++v47;
          v51->m128i_i64[0] = (__int64)v48;
          v51->m128i_i32[2] = v50;
        }
        while ( v45 != v47 );
        goto LABEL_39;
      }
    }
    else
    {
      sub_358D10((__m128i *)v56.m128i_i64[1], (__m128i *)(v56.m128i_i64[1] + 16 * v40), -2);
    }
    sub_358C00(v43, v45);
LABEL_39:
    v17 = v40;
  }
  v19 = *(_QWORD *)(v12 + 328);
  v20 = *(_QWORD **)(v12 + 296);
  v56.m128i_i64[0] = -1;
  v21 = *(_QWORD *)(v12 + 288);
  v22 = *(_QWORD *)(v12 + 312);
  v23 = *(_QWORD *)(v12 + 272);
  v24 = ((v21 - v23) >> 3)
      + ((*(_QWORD *)(v12 + 304) - v22) >> 3)
      + (((v19 == 0) + ((v19 - (__int64)v20) >> 3) - 1) << 6);
  if ( v24 < v17 )
  {
    sub_361C60(
      (__m128i *)(v12 + 256),
      *(__m128i **)(v12 + 304),
      v22,
      *(double *)v18.m128i_i64,
      a5,
      a6,
      a7,
      v14,
      v15,
      a10,
      *(_QWORD *)(v12 + 320),
      v19,
      v17 - v24,
      &v56);
    goto LABEL_7;
  }
  if ( v17 < v24 )
  {
    v53 = *(_QWORD *)(v12 + 280);
    v35 = v17 + ((v23 - v53) >> 3);
    if ( v35 < 0 )
    {
      v38 = ~((unsigned __int64)~v35 >> 6);
    }
    else
    {
      if ( v35 <= 63 )
      {
        v52 = v23 + 8 * v17;
LABEL_22:
        v36 = (void **)(v20 + 1);
        v54 = v19 + 8;
        if ( (unsigned __int64)(v20 + 1) < v19 + 8 )
        {
          do
          {
            v37 = *v36++;
            operator delete(v37, 0x200u);
          }
          while ( (unsigned __int64)v36 < v54 );
        }
        *(_QWORD *)(v12 + 320) = v21;
        *(_QWORD *)(v12 + 328) = v20;
        *(_QWORD *)(v12 + 304) = v52;
        *(_QWORD *)(v12 + 312) = v53;
        goto LABEL_6;
      }
      v38 = v35 >> 6;
    }
    v20 += v38;
    v53 = *v20;
    v21 = *v20 + 512LL;
    v52 = *v20 + 8 * (v35 - (v38 << 6));
    goto LABEL_22;
  }
LABEL_6:
  if ( v17 )
  {
LABEL_7:
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    do
    {
      while ( 1 )
      {
        v29 = v56.m128i_i64[1] + 16 * v28;
        v30 = v26;
        v26 = *(_QWORD *)v29;
        if ( *(_QWORD *)v29 != v30 )
          v27 = sub_35B800(a1, *(_QWORD **)v29);
        v31 = *(int *)(v29 + 8);
        v32 = v31 + ((__int64)(*(_QWORD *)(v12 + 272) - *(_QWORD *)(v12 + 280)) >> 3);
        if ( v32 >= 0 )
          break;
        v33 = ~((unsigned __int64)~v32 >> 6);
LABEL_14:
        ++v25;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 296) + 8 * v33) + 8 * (v32 - (v33 << 6))) = v27;
        v28 = v25;
        if ( v25 >= v17 )
          goto LABEL_15;
      }
      if ( v32 > 63 )
      {
        v33 = v32 >> 6;
        goto LABEL_14;
      }
      ++v25;
      *(_QWORD *)(*(_QWORD *)(v12 + 272) + 8 * v31) = v27;
      v28 = v25;
    }
    while ( v25 < v17 );
  }
LABEL_15:
  if ( v56.m128i_i64[1] )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56.m128i_i64[1]);
  }
  return v58 - __readfsqword(0x28u);
}
