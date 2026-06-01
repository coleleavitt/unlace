const __m128i *__fastcall sub_EAA4D0(_QWORD *a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const __m128i *v5; // r14
  unsigned __int8 v6; // bp
  __int8 v7; // al
  __int64 v8; // rbx
  __int64 v9; // rcx
  const __m128i *v10; // r14
  _BYTE *v11; // rbp
  unsigned __int64 v12; // rdx
  __m128i *v13; // rcx
  __m128i *v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  _QWORD *v21; // r13
  double v22; // xmm0_8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const __m128i *result; // rax
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rbx
  _DWORD *v32; // rax
  const __m128i *v33; // r13
  __int64 v34; // rbx
  __int64 v35; // rax
  const __m128i *v36; // r14
  _BYTE *v37; // r13
  unsigned __int64 v38; // rdx
  __m128i *v39; // rcx
  __m128i *v40; // rax
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rsi
  _QWORD *v47; // r9
  double v48; // xmm0_8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r13
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  const __m128i *v61; // [rsp+0h] [rbp-138h]
  unsigned int v62; // [rsp+Ch] [rbp-12Ch]
  char v63; // [rsp+18h] [rbp-120h]
  _QWORD *v64; // [rsp+18h] [rbp-120h]
  char v65; // [rsp+20h] [rbp-118h]
  __int64 v66; // [rsp+20h] [rbp-118h]
  __int64 v69; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v70; // [rsp+48h] [rbp-F0h] BYREF
  __m128i v71; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-D8h]
  __m128i v73; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+80h] [rbp-B8h]
  void *ptr; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+98h] [rbp-A0h]
  _BYTE v77[152]; // [rsp+A0h] [rbp-98h] BYREF

  v5 = a2;
  v6 = a3;
  v7 = a2[1].m128i_i8[0];
  if ( v7 != 49 )
  {
    if ( v7 != 48 )
      return v5;
    v31 = sub_F3D1D0(a2, a2, a3, a4, a5);
    v66 = v31;
    if ( (*(_BYTE *)(v31 + 28) & 0x7Fu) - 60 > 1 )
      return v5;
    v32 = *(_DWORD **)(v31 + 168);
    ptr = v77;
    v76 = 0x400000000LL;
    if ( !*v32 )
      return v5;
    v33 = (const __m128i *)(v32 + 2);
    v34 = (__int64)&v32[6 * (*v32 - 1) + 8];
    v35 = 0;
    v36 = v33;
    v63 = 0;
    while ( 1 )
    {
      v41 = v36[1].m128i_i64[0];
      v42 = v36->m128i_i32[0] & 0x7FFFFFFF;
      v71 = _mm_loadu_si128(v36);
      v72 = v41;
      if ( v42 == 6 )
        break;
      if ( v42 == 1 )
      {
        v54 = v71.m128i_i64[1];
        v55 = sub_EAB090(v71.m128i_i64[1], a1, v6);
        if ( v54 != v55 )
        {
          sub_EF9510(&v73, v55, 0, 0);
          v63 = 1;
          v71 = _mm_load_si128(&v73);
          v72 = v74;
        }
        goto LABEL_44;
      }
LABEL_33:
      v37 = ptr;
      v38 = v35 + 1;
      v39 = (__m128i *)((char *)ptr + 24 * v35);
      v40 = &v71;
      if ( v38 > HIDWORD(v76) )
      {
        if ( ptr > &v71 || v39 <= &v71 )
        {
          sub_22134E0(&ptr, v77, v38, 24);
          v39 = (__m128i *)((char *)ptr + 24 * (unsigned int)v76);
          v40 = &v71;
        }
        else
        {
          sub_22134E0(&ptr, v77, v38, 24);
          v40 = (__m128i *)((char *)ptr + (char *)&v71 - v37);
          v39 = (__m128i *)((char *)ptr + 24 * (unsigned int)v76);
        }
      }
      v36 = (const __m128i *)((char *)v36 + 24);
      *v39 = _mm_loadu_si128(v40);
      v39[1].m128i_i64[0] = v40[1].m128i_i64[0];
      v35 = (unsigned int)(v76 + 1);
      LODWORD(v76) = v76 + 1;
      if ( v36 == (const __m128i *)v34 )
      {
        v5 = a2;
        if ( !v63 )
          goto LABEL_18;
        v58 = sub_B9B550(v66);
        sub_EFED60(&v73, v58);
        v57 = sub_A93F70(a1, v73.m128i_i64[0], (char *)ptr, (unsigned int)v76, nullptr, 0, a2->m128i_u64[1]);
        goto LABEL_50;
      }
    }
    sub_EFED50(&v73, v71.m128i_i64[1]);
    v69 = v73.m128i_i64[0];
    v43 = sub_EFEE90(&v69, 0);
    v44 = sub_EFF210(&v69);
    if ( v44 && (v45 = *(_QWORD *)(v44 + 8), (v45 & 4) == 0) && (v46 = v45 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v60 = sub_EAAE20(a1, v46, v6);
      v47 = (_QWORD *)v60;
      if ( v46 == v60 )
        goto LABEL_44;
      if ( !v60 )
        goto LABEL_43;
    }
    else
    {
      v47 = sub_EAA170(a1, v43, 1u, v6);
      if ( !v47 )
      {
LABEL_44:
        v35 = (unsigned int)v76;
        goto LABEL_33;
      }
    }
    v64 = v47;
    v48 = sub_EFED60(&v70, v43);
    v49 = sub_EFF250(&v69);
    v53 = (__int64)v64;
    if ( v49 )
    {
      sub_EFEDD0(&v73, v49, v50, v51, v52, v64, v48);
      v53 = (__int64)v64;
      v70 = v73.m128i_i64[0];
    }
    v69 = sub_A5CF60((__int64)a1, v53, 0, v70);
LABEL_43:
    v63 = 1;
    v71.m128i_i64[0] = 6;
    v71.m128i_i64[1] = v69;
    goto LABEL_44;
  }
  ptr = v77;
  v76 = 0x400000000LL;
  v8 = (__int64)&a2[3].m128i_i64[3 * a2[1].m128i_u32[1]];
  if ( &a2[3] == (const __m128i *)v8 )
    return v5;
  v9 = 0;
  v65 = 0;
  v62 = (unsigned __int8)a3;
  v10 = a2 + 3;
  do
  {
    v15 = v10[1].m128i_i64[0];
    v16 = v10->m128i_i32[0] & 0x7FFFFFFF;
    v71 = _mm_loadu_si128(v10);
    v72 = v15;
    if ( v16 == 6 )
    {
      sub_EFED50(&v73, v71.m128i_i64[1]);
      v69 = v73.m128i_i64[0];
      v17 = sub_EFEE90(&v69, 0);
      v18 = sub_EFF210(&v69);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 8);
        if ( (v19 & 4) == 0 )
        {
          v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
          {
            v59 = sub_EAAE20(a1, v20, v62);
            v21 = (_QWORD *)v59;
            if ( v20 == v59 )
              goto LABEL_16;
            if ( v59 )
            {
LABEL_12:
              v22 = sub_EFED60(&v70, v17);
              v23 = sub_EFF250(&v69);
              if ( v23 )
              {
                sub_EFEDD0(&v73, v23, v24, v25, v26, v27, v22);
                v70 = v73.m128i_i64[0];
              }
              v69 = sub_A5CF60((__int64)a1, (__int64)v21, 0, v70);
            }
            v65 = 1;
            v71.m128i_i64[0] = 6;
            v71.m128i_i64[1] = v69;
            goto LABEL_16;
          }
        }
      }
      v21 = sub_EAA170(a1, v17, 1u, v62);
      if ( v21 )
        goto LABEL_12;
    }
    else
    {
      if ( v16 != 1 )
        goto LABEL_5;
      v29 = v71.m128i_i64[1];
      v30 = sub_EAB090(v71.m128i_i64[1], a1, v62);
      if ( v29 != v30 )
      {
        sub_EF9510(&v73, v30, 0, 0);
        v65 = 1;
        v71 = _mm_load_si128(&v73);
        v72 = v74;
      }
    }
LABEL_16:
    v9 = (unsigned int)v76;
LABEL_5:
    v11 = ptr;
    v12 = v9 + 1;
    v13 = (__m128i *)((char *)ptr + 24 * v9);
    v14 = &v71;
    if ( v12 > HIDWORD(v76) )
    {
      if ( ptr > &v71 || v13 <= &v71 )
      {
        sub_22134E0(&ptr, v77, v12, 24);
        v13 = (__m128i *)((char *)ptr + 24 * (unsigned int)v76);
        v14 = &v71;
      }
      else
      {
        sub_22134E0(&ptr, v77, v12, 24);
        v14 = (__m128i *)((char *)ptr + (char *)&v71 - v11);
        v13 = (__m128i *)((char *)ptr + 24 * (unsigned int)v76);
      }
    }
    v10 = (const __m128i *)((char *)v10 + 24);
    *v13 = _mm_loadu_si128(v14);
    v13[1].m128i_i64[0] = v14[1].m128i_i64[0];
    v9 = (unsigned int)(v76 + 1);
    LODWORD(v76) = v76 + 1;
  }
  while ( (const __m128i *)v8 != v10 );
  v5 = a2;
  if ( !v65 )
  {
LABEL_18:
    if ( ptr != v77 )
      free(ptr);
    return v5;
  }
  if ( (a2[1].m128i_i8[2] & 8) != 0 )
  {
    v56 = sub_F3AB60(a2);
    v9 = (unsigned int)v76;
  }
  else
  {
    v56 = a2->m128i_u64[1];
  }
  v57 = sub_A93F70(a1, a2[2].m128i_i64[0], (char *)ptr, v9, nullptr, 0, v56);
LABEL_50:
  result = *(const __m128i **)(v57 & 0xFFFFFFFFFFFFFFF0LL);
  if ( ptr != v77 )
  {
    v61 = result;
    free(ptr);
    return v61;
  }
  return result;
}

