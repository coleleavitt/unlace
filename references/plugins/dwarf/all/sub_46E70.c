unsigned __int64 __fastcall sub_46E70(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        __int64 (__fastcall *a8)(__m128i *, __m128i *))
{
  __int64 v8; // rax
  char *v9; // r11
  char *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r13
  char *v13; // rbp
  __int64 (__fastcall *v14)(__m128i *, __m128i *, double, double); // r10
  __int64 v15; // r15
  __m128i *v16; // r13
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __m128i *v19; // rbp
  __int64 v20; // r12
  __int64 *m128i_i64; // rax
  __int64 v22; // rdx
  __m128i v24; // xmm1
  unsigned __int64 v25; // rbx
  __m128i *v26; // r12
  char *v27; // rbp
  __int64 v28; // r13
  __m128i v29; // xmm0
  __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __m128i v36; // xmm1
  unsigned __int64 v37; // rbx
  __m128i *v38; // r12
  __int64 v39; // r13
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __int128 v42; // xmm1
  unsigned __int64 v43; // rbx
  __m128i *v44; // rbp
  __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // r12
  __m128i v48; // xmm0
  __int64 v49; // rdi
  unsigned __int64 v50; // rax
  __m128i v51; // xmm1
  __m128i *v52; // rbx
  unsigned __int64 v53; // r12
  char *v54; // rbp
  __int64 v55; // r13
  __m128i v56; // xmm0
  __int64 v57; // rdi
  unsigned __int64 v58; // rsi
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __m128i v61; // xmm1
  __m128i *v62; // rbx
  __m128i *v63; // r12
  unsigned __int64 v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // r13
  __m128i v67; // xmm0
  __int64 v68; // rdi
  char *v69; // r13
  __int128 v70; // xmm1
  __int64 *v71; // rbx
  unsigned __int64 v72; // rbp
  __int64 v73; // r12
  __m128i v74; // xmm0
  __int64 v75; // rdi
  unsigned __int64 v76; // rax
  const __m128i *v77; // [rsp+0h] [rbp-A8h]
  __m128i *v78; // [rsp+8h] [rbp-A0h]
  __m128i v79; // [rsp+20h] [rbp-88h] BYREF
  char *v80; // [rsp+30h] [rbp-78h]
  __int64 v81; // [rsp+38h] [rbp-70h]
  unsigned __int64 v82; // [rsp+40h] [rbp-68h]
  __int64 v83; // [rsp+48h] [rbp-60h]
  __m128i *v84; // [rsp+50h] [rbp-58h]
  __m128i *v85; // [rsp+58h] [rbp-50h]
  unsigned __int64 v86; // [rsp+60h] [rbp-48h]
  __int64 v87; // [rsp+68h] [rbp-40h]

  v8 = a4;
  v9 = a6;
  v10 = (char *)a1;
  v11 = a5;
  v12 = a4;
  v13 = (char *)a2;
  if ( a5 <= a4 )
    v8 = a5;
  v77 = a1;
  v81 = a3;
  v14 = (__int64 (__fastcall *)(__m128i *, __m128i *, double, double))a8;
  if ( a7 < v8 )
  {
    v15 = a4;
    v16 = a2;
    v80 = a6;
    if ( a5 >= a4 )
      goto LABEL_13;
LABEL_5:
    v17 = v15 / 2;
    v18 = v15 / 2 + ((v15 + ((unsigned __int64)v15 >> 63)) & 0xFFFFFFFFFFFFFFFELL);
    v15 -= v15 / 2;
    v19 = (__m128i *)&v77[v18];
    v78 = (__m128i *)sub_46520(v16, v81, v19, a8);
    v20 = 0xAAAAAAAAAAAAAAABLL * (v78 - v16);
    if ( v15 <= v20 )
      goto LABEL_14;
LABEL_6:
    if ( v20 <= a7 )
    {
      if ( !v20 )
        goto LABEL_8;
      v51 = 0;
      if ( (char *)v78 - (char *)v16 <= 0 )
      {
        v82 = 0;
        v59 = 0;
        v60 = 0xAAAAAAAAAAAAAAABLL * (v16 - v19);
        if ( (char *)v16 - (char *)v19 <= 0 )
          goto LABEL_8;
      }
      else
      {
        v85 = v16;
        v86 = 0xAAAAAAAAAAAAAAABLL * (v78 - v16);
        v82 = v17;
        v52 = v16;
        v83 = v20;
        v53 = v86;
        v84 = v19;
        v54 = v80;
        do
        {
          *(_QWORD *)v54 = v52->m128i_i64[0];
          *((_QWORD *)v54 + 1) = v52->m128i_i64[1];
          v55 = v52[1].m128i_i64[0];
          v56 = _mm_loadu_si128((__m128i *)((char *)v52 + 24));
          v52[1].m128i_i64[0] = 0;
          *(__m128i *)((char *)v52 + 24) = v51;
          v57 = *((_QWORD *)v54 + 2);
          if ( v57 )
          {
            *((_QWORD *)v54 + 3) = 0;
            v79 = v56;
            qfree(v57);
            v56 = _mm_load_si128(&v79);
            v51 = 0;
          }
          *((_QWORD *)v54 + 2) = v55;
          v52 += 3;
          v54 += 48;
          *(__m128i *)(v54 - 24) = v56;
          *((_DWORD *)v54 - 2) = v52[-1].m128i_i32[2];
          --v53;
        }
        while ( v53 );
        v16 = v85;
        v19 = v84;
        v17 = v82;
        v58 = v86 - 1;
        v20 = v83;
        if ( (__int64)(v86 - 1) < 0 )
          v58 = 0;
        v59 = 48 * v58 + 48;
        v82 = 0xAAAAAAAAAAAAAAABLL * (v59 >> 4);
        v60 = 0xAAAAAAAAAAAAAAABLL * (v85 - v84);
        if ( (char *)v85 - (char *)v84 <= 0 )
        {
LABEL_53:
          v69 = v80;
          v70 = 0;
          if ( v59 > 0 )
          {
            v84 = (__m128i *)v20;
            v83 = v17;
            v71 = (__int64 *)v19;
            v85 = v19;
            v72 = v82;
            do
            {
              *v71 = *(_QWORD *)v69;
              v71[1] = *((_QWORD *)v69 + 1);
              v73 = *((_QWORD *)v69 + 2);
              v74 = _mm_loadu_si128((const __m128i *)(v69 + 24));
              *((_QWORD *)v69 + 2) = 0;
              *(_OWORD *)(v69 + 24) = v70;
              v75 = v71[2];
              if ( v75 )
              {
                v71[3] = 0;
                v79 = v74;
                qfree(v75);
                v74 = _mm_load_si128(&v79);
                v70 = 0;
              }
              v71[2] = v73;
              v69 += 48;
              v71 += 6;
              *(__m128i *)(v71 - 3) = v74;
              *((_DWORD *)v71 - 2) = *((_DWORD *)v69 - 2);
              --v72;
            }
            while ( v72 );
            LODWORD(v19) = (_DWORD)v85;
            LODWORD(v17) = v83;
            v20 = (__int64)v84;
            v76 = v82 - 1;
            if ( (__int64)(v82 - 1) < 0 )
              v76 = 0;
            m128i_i64 = v85[3 * v76 + 3].m128i_i64;
            goto LABEL_9;
          }
LABEL_8:
          m128i_i64 = (__int64 *)v19;
          goto LABEL_9;
        }
      }
      v86 = v59;
      v61 = 0;
      v83 = v17;
      v84 = (__m128i *)v20;
      v62 = v78;
      v63 = v16;
      v85 = v19;
      v64 = v60;
      do
      {
        v65 = v63[-3].m128i_i64[0];
        v63 -= 3;
        v62 -= 3;
        v62->m128i_i64[0] = v65;
        v62->m128i_i64[1] = v63->m128i_i64[1];
        v66 = v63[1].m128i_i64[0];
        v63[1].m128i_i64[0] = 0;
        v67 = _mm_loadu_si128((__m128i *)((char *)v63 + 24));
        *(__m128i *)((char *)v63 + 24) = v61;
        v68 = v62[1].m128i_i64[0];
        if ( v68 )
        {
          v62[1].m128i_i64[1] = 0;
          v79 = v67;
          qfree(v68);
          v67 = _mm_load_si128(&v79);
          v61 = 0;
        }
        v62[1].m128i_i64[0] = v66;
        *(__m128i *)((char *)v62 + 24) = v67;
        v62[2].m128i_i32[2] = v63[2].m128i_i32[2];
        --v64;
      }
      while ( v64 );
      v17 = v83;
      v20 = (__int64)v84;
      v19 = v85;
      v59 = v86;
      goto LABEL_53;
    }
    while ( 1 )
    {
LABEL_14:
      if ( v15 > a7 )
      {
        m128i_i64 = sub_2A0D0(v19->m128i_i64, v16->m128i_i64, v78->m128i_i64);
        goto LABEL_9;
      }
      if ( !v15 )
        goto LABEL_16;
      v24 = 0;
      if ( (char *)v16 - (char *)v19 <= 0 )
      {
        v34 = (__int64)v80;
        v33 = 0;
        v82 = 0;
        v35 = 0xAAAAAAAAAAAAAAABLL * (v78 - v16);
        if ( (char *)v78 - (char *)v16 <= 0 )
        {
LABEL_16:
          m128i_i64 = (__int64 *)v78;
          goto LABEL_9;
        }
      }
      else
      {
        v85 = v16;
        v86 = 0xAAAAAAAAAAAAAAABLL * (v16 - v19);
        v82 = v17;
        v25 = v86;
        v83 = v20;
        v26 = v19;
        v84 = v19;
        v27 = v80;
        do
        {
          *(_QWORD *)v27 = v26->m128i_i64[0];
          *((_QWORD *)v27 + 1) = v26->m128i_i64[1];
          v28 = v26[1].m128i_i64[0];
          v26[1].m128i_i64[0] = 0;
          v29 = _mm_loadu_si128((__m128i *)((char *)v26 + 24));
          *(__m128i *)((char *)v26 + 24) = v24;
          v30 = *((_QWORD *)v27 + 2);
          if ( v30 )
          {
            *((_QWORD *)v27 + 3) = 0;
            v79 = v29;
            qfree(v30);
            v29 = _mm_load_si128(&v79);
            v24 = 0;
          }
          *((_QWORD *)v27 + 2) = v28;
          v26 += 3;
          v27 += 48;
          *(__m128i *)(v27 - 24) = v29;
          *((_DWORD *)v27 - 2) = v26[-1].m128i_i32[2];
          --v25;
        }
        while ( v25 );
        v17 = v82;
        v16 = v85;
        v20 = v83;
        v31 = v86 - 1;
        v19 = v84;
        if ( (__int64)(v86 - 1) < 0 )
          v31 = 0;
        v32 = 48 * v31;
        v33 = 48 * v31 + 48;
        v34 = (__int64)&v80[v32 + 48];
        v82 = 0xAAAAAAAAAAAAAAABLL * (v33 >> 4);
        v35 = 0xAAAAAAAAAAAAAAABLL * (v78 - v85);
        if ( (char *)v78 - (char *)v85 <= 0 )
          goto LABEL_32;
      }
      v85 = (__m128i *)v34;
      v36 = 0;
      v86 = (unsigned __int64)v19;
      v87 = v33;
      v83 = v17;
      v37 = v35;
      v84 = (__m128i *)v20;
      v38 = v16;
      do
      {
        v19->m128i_i64[0] = v38->m128i_i64[0];
        v19->m128i_i64[1] = v38->m128i_i64[1];
        v39 = v38[1].m128i_i64[0];
        v38[1].m128i_i64[0] = 0;
        v40 = _mm_loadu_si128((__m128i *)((char *)v38 + 24));
        *(__m128i *)((char *)v38 + 24) = v36;
        v41 = v19[1].m128i_i64[0];
        if ( v41 )
        {
          v19[1].m128i_i64[1] = 0;
          v79 = v40;
          qfree(v41);
          v40 = _mm_load_si128(&v79);
          v36 = 0;
        }
        v19[1].m128i_i64[0] = v39;
        v38 += 3;
        v19 += 3;
        *(__m128i *)((char *)v19 - 24) = v40;
        v19[-1].m128i_i32[2] = v38[-1].m128i_i32[2];
        --v37;
      }
      while ( v37 );
      v17 = v83;
      v20 = (__int64)v84;
      v34 = (__int64)v85;
      v19 = (__m128i *)v86;
      v33 = v87;
LABEL_32:
      v42 = 0;
      if ( v33 <= 0 )
        goto LABEL_16;
      v84 = (__m128i *)v20;
      v83 = v17;
      v43 = v82;
      v85 = v19;
      v44 = v78;
      v45 = v34;
      do
      {
        v46 = *(_QWORD *)(v45 - 48);
        v45 -= 48;
        v44 -= 3;
        v44->m128i_i64[0] = v46;
        v44->m128i_i64[1] = *(_QWORD *)(v45 + 8);
        v47 = *(_QWORD *)(v45 + 16);
        v48 = _mm_loadu_si128((const __m128i *)(v45 + 24));
        *(_QWORD *)(v45 + 16) = 0;
        *(_OWORD *)(v45 + 24) = v42;
        v49 = v44[1].m128i_i64[0];
        if ( v49 )
        {
          v44[1].m128i_i64[1] = 0;
          v79 = v48;
          qfree(v49);
          v48 = _mm_load_si128(&v79);
          v42 = 0;
        }
        v44[1].m128i_i64[0] = v47;
        *(__m128i *)((char *)v44 + 24) = v48;
        v44[2].m128i_i32[2] = *(_DWORD *)(v45 + 40);
        --v43;
      }
      while ( v43 );
      LODWORD(v17) = v83;
      v20 = (__int64)v84;
      v50 = v82 - 1;
      LODWORD(v19) = (_DWORD)v85;
      if ( (__int64)(v82 - 1) < 0 )
        v50 = 0;
      m128i_i64 = v78[-3 * v50 - 3].m128i_i64;
LABEL_9:
      v11 -= v20;
      v79.m128i_i64[0] = (__int64)m128i_i64;
      sub_46E70((_DWORD)v77, (_DWORD)v19, (_DWORD)m128i_i64, v17, v20, (_DWORD)v80, a7, (__int64)a8);
      v22 = v11;
      if ( v15 <= v11 )
        v22 = v15;
      if ( a7 >= v22 )
      {
        v13 = (char *)v78;
        v14 = (__int64 (__fastcall *)(__m128i *, __m128i *, double, double))a8;
        v12 = v15;
        v10 = (char *)v79.m128i_i64[0];
        v9 = v80;
        return sub_43E00(v10, v13, v81, v12, v11, v9, v14);
      }
      v77 = (const __m128i *)v79.m128i_i64[0];
      v16 = v78;
      if ( v11 < v15 )
        goto LABEL_5;
LABEL_13:
      v20 = v11 / 2;
      v78 = &v16[v11 / 2 + ((v11 + ((unsigned __int64)v11 >> 63)) & 0xFFFFFFFFFFFFFFFELL)];
      v19 = (__m128i *)sub_46740(v77, (__int64)v16, v78, a8);
      v17 = 0xAAAAAAAAAAAAAAABLL * (v19 - v77);
      v15 -= v17;
      if ( v15 > v11 / 2 )
        goto LABEL_6;
    }
  }
  return sub_43E00(v10, v13, v81, v12, v11, v9, v14);
}
