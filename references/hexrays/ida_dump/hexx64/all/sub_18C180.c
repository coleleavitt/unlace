unsigned __int64 __fastcall sub_18C180(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 v3; // r15
  _QWORD *v4; // r8
  __int64 v5; // rax
  __int64 v6; // r15
  const __m128i *v7; // r9
  const __m128i *v8; // rcx
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  const __m128i *v15; // rax
  int v16; // r11d
  int v17; // r10d
  __int64 v18; // r13
  __int32 v19; // r12d
  __int32 v20; // ebx
  __int32 v21; // ebp
  int v22; // edi
  __int64 v23; // r13
  int v24; // r12d
  int v25; // ebx
  int v26; // ebp
  const __m128i *v27; // rsi
  int v28; // edi
  int v29; // r10d
  int v30; // edi
  int v31; // r10d
  int v32; // r10d
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r9
  __m128 v36; // xmm0
  __int64 v37; // rax
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rax
  const __m128i *v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rsi
  const __m128i *v50; // rax
  __m128i v51; // xmm0
  bool v52; // cf
  unsigned __int64 v53; // rdx
  __int64 v54; // r15
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  const __m128i *v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // rcx
  const __m128i *v63; // rax
  __m128i v64; // xmm0
  __int64 v65; // rax
  __int64 v66; // rbp
  const __m128i *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  __m128i v70; // xmm0
  __int64 v71; // [rsp+0h] [rbp-98h]
  _QWORD *v72; // [rsp+0h] [rbp-98h]
  const __m128i *v73; // [rsp+0h] [rbp-98h]
  int v76; // [rsp+18h] [rbp-80h]
  _QWORD *v77; // [rsp+18h] [rbp-80h]
  const __m128i *v78; // [rsp+20h] [rbp-78h]
  __int64 v79; // [rsp+20h] [rbp-78h]
  _QWORD *v80; // [rsp+28h] [rbp-70h]
  _QWORD *v81; // [rsp+28h] [rbp-70h]
  __int64 v82; // [rsp+30h] [rbp-68h]
  const __m128i *v83; // [rsp+40h] [rbp-58h] BYREF
  __int128 v84; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v85; // [rsp+58h] [rbp-40h]

  v85 = __readfsqword(0x28u);
  v3 = a2[1];
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_383060(51519);
    BUG();
  }
  v4 = a2;
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 * v3;
    v83 = nullptr;
    v84 = 0;
    if ( !v6 )
    {
      v7 = (const __m128i *)*a1;
      v8 = nullptr;
      goto LABEL_5;
    }
    goto LABEL_37;
  }
  if ( a1[2] )
  {
    v39 = *a1;
  }
  else
  {
    v65 = qvector_reserve(a1, 0, 1, 32);
    v66 = a1[2];
    v67 = (const __m128i *)*a1;
    a1[2] = 0;
    v39 = v65;
    v68 = a1[1] - 1;
    if ( v68 >= 0 )
    {
      v69 = v39;
      do
      {
        v70 = _mm_loadu_si128(v67);
        v69 += 32;
        v67 += 2;
        *(__m128i *)(v69 - 32) = v70;
        *(__m128i *)(v69 - 16) = _mm_loadu_si128(v67 - 1);
        v52 = v68-- == 0;
      }
      while ( !v52 );
      v67 = (const __m128i *)*a1;
    }
    qfree(v67);
    v4 = a2;
    *a1 = v39;
    a1[2] = v66;
    v5 = a1[1];
  }
  v40 = 32 * v5 + v39;
  *(_OWORD *)v40 = 0;
  *(_QWORD *)(v40 + 16) = 0;
  *(_DWORD *)(v40 + 24) = 0;
  v41 = a1[1];
  v83 = nullptr;
  v42 = v41 + 1;
  a1[1] = v42;
  v43 = v4[1];
  v8 = nullptr;
  v84 = 0;
  v6 = v42 * v43;
  if ( v6 )
  {
LABEL_37:
    v72 = v4;
    v44 = qvector_reserve(&v83, 0, v6, 32);
    v45 = v83;
    v46 = v44;
    v47 = v44;
    v48 = *((_QWORD *)&v84 + 1);
    *((_QWORD *)&v84 + 1) = 0;
    v49 = v84 - 1;
    v50 = v83;
    if ( (__int64)v84 - 1 >= 0 )
    {
      do
      {
        v51 = _mm_loadu_si128(v50);
        v47 += 32;
        v50 += 2;
        *(__m128i *)(v47 - 32) = v51;
        *(__m128i *)(v47 - 16) = _mm_loadu_si128(v50 - 1);
        v52 = v49-- == 0;
      }
      while ( !v52 );
    }
    v77 = v72;
    v73 = (const __m128i *)v46;
    qfree(v45);
    v8 = v73;
    *((_QWORD *)&v84 + 1) = v48;
    v4 = v77;
    v6 = v84;
    v83 = v73;
    v42 = a1[1];
  }
  v7 = (const __m128i *)*a1;
  if ( v42 )
  {
LABEL_5:
    v76 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = 0;
      v11 = 0;
      v71 = 2 * v9;
      if ( v4[1] )
        break;
LABEL_30:
      v9 = ++v76;
      if ( v76 >= (unsigned __int64)a1[1] )
        goto LABEL_31;
    }
    while ( 1 )
    {
      v12 = *v4 + 32 * v11;
      v13 = *(_QWORD *)(v12 + 8);
      v14 = *(_QWORD *)v12;
      v15 = &v7[v71];
      v16 = *(_DWORD *)(v12 + 16);
      v17 = *(_DWORD *)(v12 + 20);
      v18 = v7[v71].m128i_i64[1];
      v19 = v7[v71 + 1].m128i_i32[0];
      v20 = v7[v71 + 1].m128i_i32[1];
      v21 = v7[v71 + 1].m128i_i32[2];
      v22 = *(_DWORD *)(v12 + 24);
      if ( a3 )
      {
        v23 = v18 - v14;
        v24 = v19 - v16;
        v25 = v20 - v17;
        v26 = v21 - v22;
        v14 = -v13;
      }
      else
      {
        v24 = v16 + v19;
        v25 = v17 + v20;
        v26 = v22 + v21;
        v23 = v13 + v18;
      }
      v27 = &v8[2 * v6];
      v28 = -v26;
      if ( v26 > 0 )
        v28 = v26;
      v29 = -v24;
      if ( v24 > 0 )
        v29 = v24;
      v30 = v29 + v28;
      v31 = -v25;
      if ( v25 > 0 )
        v31 = v25;
      v32 = v30 + v31;
      if ( v27 == v8 )
      {
        if ( v32 <= 9 )
        {
          v33 = (__int64)v8;
          v35 = v15->m128i_i64[0] + v14;
          v53 = v6 + 1;
          v54 = *((_QWORD *)&v84 + 1);
          if ( *((_QWORD *)&v84 + 1) < v53 )
          {
LABEL_53:
            v81 = v4;
            v79 = v35;
            v57 = qvector_reserve(&v83, 0, v53, 32);
            v58 = v83;
            v59 = v57;
            v60 = v57;
            v61 = *((_QWORD *)&v84 + 1);
            *((_QWORD *)&v84 + 1) = v54;
            v62 = v84 - 1;
            v63 = v83;
            if ( (__int64)v84 - 1 >= 0 )
            {
              do
              {
                v64 = _mm_loadu_si128(v63);
                v60 += 32;
                v63 += 2;
                *(__m128i *)(v60 - 32) = v64;
                *(__m128i *)(v60 - 16) = _mm_loadu_si128(v63 - 1);
                v52 = v62-- == 0;
              }
              while ( !v52 );
            }
            v82 = v61;
            qfree(v58);
            v35 = v79;
            v83 = (const __m128i *)v59;
            v4 = v81;
            *((_QWORD *)&v84 + 1) = v82;
            v33 = v59 + 32 * v84;
          }
LABEL_46:
          *(_QWORD *)v33 = v35;
          v8 = v83;
          *(_QWORD *)(v33 + 8) = v23;
          v55 = v84;
          *(_DWORD *)(v33 + 16) = v24;
          v6 = v55 + 1;
          *(_DWORD *)(v33 + 20) = v25;
          *(_DWORD *)(v33 + 24) = v26;
          *(_QWORD *)&v84 = v55 + 1;
LABEL_28:
          v7 = (const __m128i *)*a1;
        }
      }
      else
      {
        v33 = (__int64)v8;
        while ( *(_DWORD *)(v33 + 20) != v25 || v26 != *(_DWORD *)(v33 + 24) || *(_DWORD *)(v33 + 16) != v24 )
        {
          v33 += 32;
          if ( v27 == (const __m128i *)v33 )
          {
            if ( v32 > 9 )
              goto LABEL_29;
            v34 = v15->m128i_i64[0] + v14;
            v35 = v34;
            if ( v27 == (const __m128i *)v33 )
              goto LABEL_45;
LABEL_23:
            if ( *(_QWORD *)v33 > v34 )
            {
              *(_QWORD *)v33 = v34;
              v8 = v83;
            }
            if ( *(_QWORD *)(v33 + 8) < v23 )
              *(_QWORD *)(v33 + 8) = v23;
            v6 = v84;
            goto LABEL_28;
          }
        }
        if ( v32 <= 9 )
        {
          v34 = v15->m128i_i64[0] + v14;
          v35 = v34;
          if ( v27 != (const __m128i *)v33 )
            goto LABEL_23;
LABEL_45:
          v53 = v6 + 1;
          v54 = *((_QWORD *)&v84 + 1);
          if ( *((_QWORD *)&v84 + 1) < v53 )
            goto LABEL_53;
          goto LABEL_46;
        }
        if ( (const __m128i *)v33 != v27 )
        {
          v56 = (__int64)v27->m128i_i64 - v33;
          if ( (v56 >> 5) - 2 >= 0 )
          {
            v80 = v4;
            v78 = v8;
            memmove((void *)v33, (const void *)(v33 + 32), v56 - 32);
            v4 = v80;
            v8 = v78;
            v7 = (const __m128i *)*a1;
          }
          *(_QWORD *)&v84 = --v6;
        }
      }
LABEL_29:
      v11 = ++v10;
      if ( (unsigned __int64)v10 >= v4[1] )
        goto LABEL_30;
    }
  }
LABEL_31:
  v83 = v7;
  v36 = _mm_loadh_ps((const double *)&v84 + 1);
  v37 = a1[2];
  *a1 = (__int64)v8;
  *(__m128 *)(a1 + 1) = v36;
  *((_QWORD *)&v84 + 1) = v37;
  if ( v7 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v7);
  }
  return v85 - __readfsqword(0x28u);
}
