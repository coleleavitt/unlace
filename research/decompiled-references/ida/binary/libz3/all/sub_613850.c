char __fastcall sub_613850(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 *v5; // r8
  __int64 v7; // rax
  __int64 i; // rdx
  __int8 *v11; // rdi
  __int64 v12; // r10
  __m128d v13; // xmm0
  __int64 *v14; // rbx
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __m128d v19; // xmm1
  __int64 v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r11
  __int64 v24; // r13
  __int64 v25; // rbp
  bool v26; // r14
  __int64 v27; // rdx
  bool v28; // al
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 *v35; // rcx
  __int64 *v36; // r8
  __int64 v37; // r9
  __int64 *v38; // r10
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rbp
  __int64 v42; // rdx
  bool v43; // al
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 *v47; // rdi
  __int64 v48; // r11
  __int64 v49; // r11
  __int64 *v50; // rbx
  __int64 v51; // rdx
  __int64 *v52; // rcx
  __int64 v53; // r11
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx

  v4 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v5 = a2;
    v7 = v4 >> 4;
    for ( i = ((char *)a2 - (char *)a1) >> 3; a3; i = ((char *)v14 - (char *)a1) >> 3 )
    {
      v11 = &a1->m128i_i8[8 * v7];
      v12 = *(v5 - 1);
      --a3;
      v13 = (__m128d)_mm_loadu_si128(a1);
      v14 = &a1->m128i_i64[1];
      v15 = *(_DWORD *)(a1->m128i_i64[1] + 56);
      v16 = *(_DWORD *)(v12 + 56);
      v17 = *(_DWORD *)(*(_QWORD *)v11 + 56LL);
      v18 = *(_QWORD *)&v13.m128d_f64[0];
      v19 = _mm_shuffle_pd(v13, v13, 1);
      if ( v15 >= v17 )
      {
        if ( v15 >= v16 )
        {
          if ( v17 >= v16 )
          {
LABEL_34:
            a1->m128i_i64[0] = *(_QWORD *)v11;
            *(double *)v11 = v13.m128d_f64[0];
            v18 = a1->m128i_i64[1];
            v20 = *(v5 - 1);
            v15 = *(_DWORD *)(a1->m128i_i64[0] + 56);
            goto LABEL_7;
          }
LABEL_16:
          a1->m128i_i64[0] = v12;
          v20 = *(_QWORD *)&v13.m128d_f64[0];
          *(v5 - 1) = *(_QWORD *)&v13.m128d_f64[0];
          v18 = a1->m128i_i64[1];
          v15 = *(_DWORD *)(a1->m128i_i64[0] + 56);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v17 < v16 )
          goto LABEL_34;
        if ( v15 < v16 )
          goto LABEL_16;
      }
      *(__m128d *)a1 = v19;
      v20 = *(v5 - 1);
LABEL_7:
      v21 = v5;
      while ( 1 )
      {
        while ( *(_DWORD *)(v18 + 56) < v15 )
        {
          v18 = v14[1];
          ++v14;
        }
        for ( --v21; v15 < *(_DWORD *)(v20 + 56); --v21 )
          v20 = *(v21 - 1);
        if ( v14 >= v21 )
          break;
        *v14++ = v20;
        v20 = *(v21 - 1);
        *v21 = v18;
        v15 = *(_DWORD *)(a1->m128i_i64[0] + 56);
        v18 = *v14;
      }
      sub_613850(v14, v5, a3, a4);
      v4 = (char *)v14 - (char *)a1;
      if ( (char *)v14 - (char *)a1 <= 128 )
        return v4;
      v5 = v14;
      v7 = v4 >> 4;
    }
    v22 = v7 - 1;
    v23 = v7 - 1;
    v24 = (i - 1) >> 1;
    v25 = a1->m128i_i64[v7 - 1];
    v26 = (i & 1) == 0;
    if ( v7 - 1 < v24 )
      goto LABEL_20;
LABEL_31:
    v32 = &a1->m128i_i64[v23];
    if ( v22 != v23 || !v26 )
    {
LABEL_33:
      *v32 = v25;
      goto LABEL_30;
    }
    v27 = v23;
LABEL_56:
    v55 = 2 * v27 + 2;
    v56 = a1->m128i_i64[v55 - 1];
    v27 = v55 - 1;
    *v32 = v56;
    v32 = &a1->m128i_i64[v27];
    while ( 1 )
    {
      v33 = (v27 - 1) >> 1;
      if ( v23 >= v27 )
        goto LABEL_33;
      while ( sub_613840(a1->m128i_i64[v33], v25) )
      {
        *v35 = v34;
        if ( v23 >= v37 )
        {
          v35 = v38;
          break;
        }
        v33 = (v37 - 1) / 2;
      }
      *v35 = v25;
      if ( !v23 )
        break;
LABEL_30:
      v25 = a1->m128i_i64[--v23];
      if ( v23 >= v24 )
        goto LABEL_31;
LABEL_20:
      v27 = v23;
      do
      {
        v28 = sub_613840(a1[v27 + 1].m128i_i64[0], a1[v27].m128i_i64[1]);
        v30 = v29;
        v27 = v31 - v28;
        v32 = &a1->m128i_i64[v27];
        a1->m128i_i64[v30] = *v32;
      }
      while ( v27 < v24 );
      if ( v22 == v27 && v26 )
        goto LABEL_56;
    }
    LOBYTE(v4) = (_BYTE)v36 - (_BYTE)a1;
    if ( (char *)v36 - (char *)a1 > 8 )
    {
      do
      {
LABEL_36:
        while ( 1 )
        {
          v39 = *--v36;
          v40 = (char *)v36 - (char *)a1;
          *v36 = a1->m128i_i64[0];
          v41 = ((char *)v36 - (char *)a1) >> 3;
          v4 = v41 - 1;
          if ( (char *)v36 - (char *)a1 <= 16 )
            break;
          v42 = 0;
          do
          {
            v43 = sub_613840(a1[v42 + 1].m128i_i64[0], a1[v42].m128i_i64[1]);
            v45 = v44;
            v42 = v46 - v43;
            v47 = &a1->m128i_i64[v42];
            a1->m128i_i64[v45] = *v47;
          }
          while ( v42 < v48 );
          if ( (v41 & 1) == 0 && (v41 - 2) >> 1 == v42 )
            goto LABEL_54;
          v49 = (v42 - 1) / 2;
          if ( v42 )
            goto LABEL_45;
          *v47 = v39;
        }
        v52 = (__int64 *)a1;
        if ( (v41 & 1) == 0 && (unsigned __int64)v4 <= 2 )
        {
          v47 = (__int64 *)a1;
          v42 = 0;
LABEL_54:
          v54 = 2 * v42 + 2;
          *v47 = a1->m128i_i64[v54 - 1];
          v49 = (v54 >> 1) - 1;
LABEL_45:
          while ( 1 )
          {
            v50 = &a1->m128i_i64[v49];
            LOBYTE(v4) = sub_613840(*v50, v39);
            if ( !(_BYTE)v4 )
              break;
            *v52 = v51;
            v4 = (v53 - 1) / 2;
            if ( !v53 )
            {
              *v50 = v39;
              if ( v40 > 8 )
                goto LABEL_36;
              return v4;
            }
            v49 = (v53 - 1) / 2;
          }
        }
        *v52 = v39;
      }
      while ( v40 > 8 );
    }
  }
  return v4;
}

