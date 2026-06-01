void __fastcall sub_4204C0(__m128i *a1, __int64 *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 *v12; // rbp
  __int64 v13; // r14
  __int64 *v14; // rbx
  _QWORD *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  int v20; // r8d
  int v21; // r9d
  __m128d v22; // xmm0
  __int64 v23; // r15
  __int64 *v24; // rbp
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // eax
  _QWORD *v29; // r14
  _DWORD *v30; // r14
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  unsigned int *v35; // r12
  __int64 v36; // rdx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  _DWORD *v40; // r15
  __int64 v41; // rdx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  bool v48; // dl
  bool v49; // al
  __m128i v50; // xmm0
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // rbp
  bool v54; // r12
  __int64 v55; // rbx
  __int64 m128i_i64; // rsi
  __int64 v57; // r14
  unsigned int v58; // ecx
  __int64 v59; // r14
  __int64 v60; // rsi
  unsigned int v61; // ecx
  __int64 v62; // rax
  int v63; // ecx
  int v64; // r8d
  __int64 v65; // rdx
  int v66; // ecx
  int v67; // r8d
  int v68; // r9d
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 *v71; // [rsp+8h] [rbp-70h]
  __int64 v72; // [rsp+10h] [rbp-68h]
  __int64 v73; // [rsp+10h] [rbp-68h]
  _QWORD *v74; // [rsp+10h] [rbp-68h]
  _DWORD *v75; // [rsp+10h] [rbp-68h]
  __int64 v76; // [rsp+18h] [rbp-60h]
  _DWORD *v77; // [rsp+18h] [rbp-60h]
  __int64 v78; // [rsp+18h] [rbp-60h]
  __int64 v79; // [rsp+20h] [rbp-58h]
  __int64 v80; // [rsp+28h] [rbp-50h]
  __m128i *v81; // [rsp+28h] [rbp-50h]
  __int64 v82; // [rsp+38h] [rbp-40h]

  v71 = a2;
  v7 = (char *)a2 - (char *)a1;
  v72 = a3;
  v8 = v7;
  if ( v7 <= 128 )
    return;
  while ( 1 )
  {
    v9 = v8;
    v10 = v8 >> 4;
    v11 = v9 >> 3;
    if ( !v72 )
      break;
    v12 = &a1->m128i_i64[v10];
    v13 = a1->m128i_i64[1];
    --v72;
    v14 = &a1->m128i_i64[1];
    v15 = (_QWORD *)*v12;
    v16 = *(_DWORD *)(*v12 + 96);
    if ( *(_DWORD *)(v13 + 96) < v16 )
      goto LABEL_24;
    if ( *(_DWORD *)(v13 + 96) == v16 )
    {
      v76 = *v12;
      sub_407990(v15, v7, a3, a4, a5, a6);
      v40 = *(_DWORD **)(v76 + 16);
      sub_407990((_QWORD *)v13, v7, v41, v42, v43, v44);
      if ( **(_DWORD **)(v13 + 16) < *v40 )
      {
        v15 = (_QWORD *)*v12;
LABEL_24:
        v17 = *(v71 - 1);
        if ( !sub_41F060((__int64)v15, v17, a3, a4, a5, a6) )
        {
          v17 = *(v71 - 1);
          v49 = sub_41F060(a1->m128i_i64[1], v17, v45, (int)v19, v20, v21);
          v50 = _mm_loadl_epi64(a1);
          if ( v49 )
          {
            a1->m128i_i64[0] = *(v71 - 1);
            *(v71 - 1) = v50.m128i_i64[0];
            v23 = a1->m128i_i64[0];
          }
          else
          {
            v23 = a1->m128i_i64[1];
            *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, v50);
          }
          goto LABEL_7;
        }
        v46 = a1->m128i_i64[0];
LABEL_26:
        v18 = *v12;
        a1->m128i_i64[0] = *v12;
        *v12 = v46;
        v23 = a1->m128i_i64[0];
        goto LABEL_7;
      }
      v13 = a1->m128i_i64[1];
    }
    v17 = *(v71 - 1);
    if ( !sub_41F060(v13, v17, a3, a4, a5, a6) )
    {
      v17 = *(v71 - 1);
      v48 = sub_41F060(*v12, v17, v18, (int)v19, v20, v21);
      v46 = a1->m128i_i64[0];
      if ( v48 )
      {
        v18 = *(v71 - 1);
        a1->m128i_i64[0] = v18;
        *(v71 - 1) = v46;
        v23 = a1->m128i_i64[0];
        goto LABEL_7;
      }
      goto LABEL_26;
    }
    v22 = (__m128d)_mm_loadu_si128(a1);
    v23 = a1->m128i_i64[1];
    *(__m128d *)a1 = _mm_shuffle_pd(v22, v22, 1);
LABEL_7:
    v24 = v71;
    while ( 1 )
    {
      v28 = *(_DWORD *)(v23 + 96);
      while ( 1 )
      {
        while ( 1 )
        {
          v29 = (_QWORD *)*v14;
          if ( *(_DWORD *)(*v14 + 96) >= v28 )
            break;
          ++v14;
        }
        if ( *(_DWORD *)(*v14 + 96) != v28 )
          break;
        sub_407990((_QWORD *)v23, v17, v18, (int)v19, v20, v21);
        v35 = *(unsigned int **)(v23 + 16);
        sub_407990(v29, v17, v36, v37, v38, v39);
        v23 = a1->m128i_i64[0];
        v19 = (_DWORD *)v29[2];
        v17 = *v35;
        v28 = *(_DWORD *)(a1->m128i_i64[0] + 96);
        if ( *v19 >= (unsigned int)v17 )
          break;
        ++v14;
      }
      while ( 1 )
      {
        do
        {
          v25 = *--v24;
          v26 = *(unsigned int *)(v25 + 96);
        }
        while ( v28 < (unsigned int)v26 );
        if ( (_DWORD)v26 != v28 )
          break;
        sub_407990((_QWORD *)v25, v17, v26, (int)v19, v20, v21);
        v30 = *(_DWORD **)(v25 + 16);
        sub_407990((_QWORD *)v23, v17, v31, v32, v33, v34);
        LODWORD(v19) = *v30;
        if ( **(_DWORD **)(v23 + 16) >= *v30 )
          break;
        v23 = a1->m128i_i64[0];
        v28 = *(_DWORD *)(a1->m128i_i64[0] + 96);
      }
      if ( v14 >= v24 )
        break;
      v27 = *v14;
      v18 = *v24;
      *v14++ = *v24;
      *v24 = v27;
      v23 = a1->m128i_i64[0];
    }
    v7 = (__int64)v71;
    v8 = (char *)v14 - (char *)a1;
    sub_4204C0(v14, v71, v72);
    if ( (char *)v14 - (char *)a1 <= 128 )
      return;
    v71 = v14;
  }
  v51 = v10 - 1;
  v82 = v51;
  v52 = a1->m128i_i64[v10 - 1];
  v53 = (v11 - 1) >> 1;
  v54 = (v11 & 1) == 0;
  if ( v51 >= v53 )
    goto LABEL_50;
LABEL_36:
  a6 = v51;
  while ( 2 )
  {
    v55 = 2 * (a6 + 1);
    m128i_i64 = (__int64)a1[a6 + 1].m128i_i64;
    v57 = *(_QWORD *)m128i_i64;
    v58 = *(_DWORD *)(*(_QWORD *)(m128i_i64 - 8) + 96LL);
    if ( *(_DWORD *)(*(_QWORD *)m128i_i64 + 96LL) >= v58 )
    {
      if ( *(_DWORD *)(*(_QWORD *)m128i_i64 + 96LL) == v58 )
      {
        v79 = a6;
        v78 = v52;
        v81 = &a1[a6 + 1];
        v74 = *(_QWORD **)(m128i_i64 - 8);
        sub_407990(v74, m128i_i64, v52, v58, a5, a6);
        v75 = (_DWORD *)v74[2];
        sub_407990((_QWORD *)v57, m128i_i64, v65, v66, v67, v68);
        v52 = v78;
        a6 = v79;
        if ( **(_DWORD **)(v57 + 16) < *v75 )
          break;
        m128i_i64 = (__int64)v81;
        v57 = v81->m128i_i64[0];
      }
      a1->m128i_i64[a6] = v57;
      if ( v55 >= v53 )
        goto LABEL_42;
LABEL_39:
      a6 = v55;
      continue;
    }
    break;
  }
  m128i_i64 = (__int64)&a1->m128i_i64[--v55];
  a1->m128i_i64[a6] = *(_QWORD *)m128i_i64;
  if ( v55 < v53 )
    goto LABEL_39;
LABEL_42:
  if ( v82 == v55 && v54 )
  {
LABEL_60:
    v69 = 2 * v55 + 2;
    v70 = a1->m128i_i64[v69 - 1];
    v55 = v69 - 1;
    *(_QWORD *)m128i_i64 = v70;
    m128i_i64 = (__int64)&a1->m128i_i64[v55];
  }
  v59 = (v55 - 1) >> 1;
  if ( v51 >= v55 )
  {
    while ( 1 )
    {
      *(_QWORD *)m128i_i64 = v52;
LABEL_49:
      v52 = a1->m128i_i64[--v51];
      if ( v51 < v53 )
        goto LABEL_36;
LABEL_50:
      m128i_i64 = (__int64)&a1->m128i_i64[v51];
      if ( v82 == v51 && v54 )
      {
        v55 = v51;
        goto LABEL_60;
      }
    }
  }
  while ( 2 )
  {
    v60 = (__int64)&a1->m128i_i64[v59];
    v61 = *(_DWORD *)(v52 + 96);
    v62 = *(_QWORD *)v60;
    if ( *(_DWORD *)(*(_QWORD *)v60 + 96LL) < v61 )
    {
LABEL_55:
      a1->m128i_i64[v55] = v62;
      v55 = v59;
      if ( v51 >= v59 )
        goto LABEL_48;
      v59 = (v59 - 1) / 2;
      continue;
    }
    break;
  }
  if ( *(_DWORD *)(*(_QWORD *)v60 + 96LL) == v61 )
  {
    v80 = *(_QWORD *)v60;
    v73 = v52;
    sub_407990((_QWORD *)v52, v60, v52, v61, a5, a6);
    v77 = *(_DWORD **)(v73 + 16);
    sub_407990((_QWORD *)v80, v60, v73, v63, v64, (int)v77);
    LODWORD(a6) = (_DWORD)v77;
    v52 = v73;
    v60 = (__int64)&a1->m128i_i64[v59];
    if ( **(_DWORD **)(v80 + 16) < *v77 )
    {
      v62 = a1->m128i_i64[v59];
      goto LABEL_55;
    }
  }
  v60 = (__int64)&a1->m128i_i64[v55];
LABEL_48:
  *(_QWORD *)v60 = v52;
  if ( v51 )
    goto LABEL_49;
  while ( (char *)v71 - (char *)a1 > 8 )
  {
    v47 = *--v71;
    *v71 = a1->m128i_i64[0];
    sub_4202A0((__int64)a1, 0, ((char *)v71 - (char *)a1) >> 3, v47, a5, a6);
  }
}

