unsigned __int64 __fastcall sub_24E850(
        char a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rsi
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 i; // r15
  __int64 v34; // rax
  __int64 v35; // rdi
  double v36; // xmm4_8
  double v37; // xmm5_8
  double v38; // xmm4_8
  double v39; // xmm5_8
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // r9d
  __m128 v44; // [rsp+Ch] [rbp-D8h] BYREF
  unsigned __int64 v45; // [rsp+1Ch] [rbp-C8h] BYREF
  __int128 v46; // [rsp+24h] [rbp-C0h]
  __int64 v47; // [rsp+3Ch] [rbp-A8h] BYREF
  __int128 v48; // [rsp+44h] [rbp-A0h]
  __int64 v49; // [rsp+54h] [rbp-90h]
  __int128 v50; // [rsp+5Ch] [rbp-88h]
  __int64 v51; // [rsp+6Ch] [rbp-78h]
  __int128 v52; // [rsp+74h] [rbp-70h]
  __int64 v53; // [rsp+84h] [rbp-60h]
  __int128 v54; // [rsp+8Ch] [rbp-58h]
  int v55; // [rsp+9Ch] [rbp-48h]
  unsigned __int64 v56; // [rsp+A4h] [rbp-40h]

  v9 = 43;
  v56 = __readfsqword(0x28u);
  v47 = 0;
  v49 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 1;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  sub_20CEA0(dbg, 43, &v47);
  if ( (_QWORD)v48 )
  {
    v45 = 0;
    v46 = 0;
    serialize_dynamic_register_set(&v45, &v47);
    v9 = (__int64)&v44;
    v10 = (__m128)(v45 + (unsigned __int64)v46);
    v11 = (__m128)_mm_unpacklo_epi64((__m128i)v45, (__m128i)v10);
    v44 = v11;
    deserialize_dynamic_register_set(&qword_8CC3C0, &v44);
    v12 = dbg;
    v13 = xmmword_8CC438;
    v14 = qword_8CC430;
    *(_QWORD *)(dbg + 40) = qword_8CC3F0;
    *(_DWORD *)(v12 + 48) = dword_8CC420;
    v15 = v14 + (v13 << 8);
    *(_DWORD *)(v12 + 64) = xmmword_8CC3C8;
    for ( *(_QWORD *)(v12 + 56) = qword_8CC3C0; v14 != v15; v14 += 256 )
    {
      v16 = *(_QWORD *)(v14 + 48);
      v17 = 0;
      if ( v16 )
      {
        do
        {
          v18 = *(_QWORD *)(v14 + 40) + 32 * v17;
          if ( *(int *)v18 >= -1 )
          {
            v19 = *(_QWORD *)(v18 + 8);
            if ( v19 )
            {
              *(_QWORD *)(v18 + 16) = 0;
              *(double *)v11.m128_u64 = qfree(v19, (const char *)v9);
            }
          }
          ++v17;
        }
        while ( v16 != v17 );
      }
      *(_QWORD *)(v14 + 48) = 0;
      v9 = *(int *)(dbg + 64);
      sub_216180((int **)(v14 + 40), (int *)v9);
      v20 = *(_QWORD *)(v14 + 72);
      if ( v20 )
      {
        for ( i = 0; i != v20; ++i )
        {
          v34 = *(_QWORD *)(v14 + 64) + 32 * i;
          if ( *(int *)v34 >= -1 )
          {
            v35 = *(_QWORD *)(v34 + 8);
            if ( v35 )
            {
              *(_QWORD *)(v34 + 16) = 0;
              *(double *)v11.m128_u64 = qfree(v35, (const char *)v9);
            }
          }
        }
        *(_QWORD *)(v14 + 72) = 0;
        v9 = *(int *)(dbg + 64);
        sub_216180((int **)(v14 + 64), (int *)v9);
      }
    }
    if ( !a1 )
    {
      v21 = v45;
      if ( !v45 )
        goto LABEL_13;
      goto LABEL_12;
    }
    sub_24DA10(v11);
    dword_8CC560 = sub_233C20(dword_8BA594);
    sub_23C5D0(0, v9, v11, v10, a4, a5, v36, v37, a8, a9);
    sub_23C5D0(*(_BYTE *)(dbg + 33) >> 7, v9, v11, v10, a4, a5, v38, v39, a8, a9);
    v9 = 1;
    sub_24BA10((QT::QVariant *)((char *)&dword_0 + 1), 1, 1, *(double *)v11.m128_u64, v40, v41, v42);
    v21 = v45;
    if ( v45 )
    {
LABEL_12:
      *(_QWORD *)&v46 = 0;
      qfree(v21, (const char *)v9);
    }
  }
LABEL_13:
  v22 = v53;
  if ( v53 )
  {
    v23 = v54;
    if ( (_QWORD)v54 )
    {
      v24 = 0;
      do
      {
        v25 = (__int64 *)(v22 + 24 * v24);
        v26 = *v25;
        if ( *v25 )
        {
          v25[1] = 0;
          qfree(v26, (const char *)v9);
          v22 = v53;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v22, (const char *)v9);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51, (const char *)v9);
  }
  v27 = v49;
  if ( v49 )
  {
    v28 = v50;
    if ( (_QWORD)v50 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 24 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31, (const char *)v9);
          v27 = v49;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v27, (const char *)v9);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47, (const char *)v9);
  }
  return v56 - __readfsqword(0x28u);
}
