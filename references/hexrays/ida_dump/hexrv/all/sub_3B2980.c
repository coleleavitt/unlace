unsigned __int64 __fastcall sub_3B2980(
        unsigned __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 *v12; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // r13
  __int64 v15; // rbx
  unsigned __int64 v16; // r15
  _QWORD **v17; // rdi
  _QWORD *v18; // rax
  unsigned __int64 v19; // r13
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r14
  __int64 v23; // rbp
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  const __m128i *v31; // rdx
  const __m128i *v32; // r13
  __int64 *v33; // rsi
  __int64 *v35; // r15
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 *v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // r12
  __int64 *v45; // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  __m128i v48; // xmm0
  unsigned __int64 *v49; // rcx
  unsigned __int64 *k; // rax
  __int64 v51; // r15
  __int64 *v52; // r14
  unsigned __int64 v53; // rdx
  __int64 *v54; // r15
  __int64 v55; // rsi
  _QWORD *v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rsi
  unsigned __int64 *v60; // rdx
  unsigned __int64 v61; // rcx
  unsigned __int64 *j; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r12
  unsigned __int64 i; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // r13
  unsigned __int64 *v68; // rsi
  __m128i v69; // xmm0
  __int64 v70; // rcx
  __m128i v71; // xmm1
  __m128i v72; // xmm0
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rbp
  unsigned __int64 v76; // rbx
  _QWORD *v77; // rdi
  _QWORD *v78; // rdi
  __int64 v79; // rax
  const __m128i *v80; // [rsp+8h] [rbp-F0h]
  __int64 v81; // [rsp+10h] [rbp-E8h]
  unsigned __int64 *v82; // [rsp+18h] [rbp-E0h]
  __int64 v83; // [rsp+28h] [rbp-D0h]
  __int64 v84; // [rsp+28h] [rbp-D0h]
  __m128i v87; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v88; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v89; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v90; // [rsp+68h] [rbp-90h] BYREF
  __int64 v91; // [rsp+78h] [rbp-80h]
  __int64 v92; // [rsp+80h] [rbp-78h] BYREF
  __m128i v93; // [rsp+88h] [rbp-70h] BYREF
  __m128i v94; // [rsp+98h] [rbp-60h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-40h]

  v12 = *(__int64 **)(a1 + 192);
  v13 = *(_QWORD *)(a1 + 184);
  v96 = __readfsqword(0x28u);
  v14 = *(_QWORD *)(a1 + 200);
  if ( a2 )
  {
    sub_3B00C0(*(_QWORD *)(v13 + 1392), v13, a6, a7, a8, a9, a10, a11, a12, a3, a4, a5);
    if ( !v14 )
    {
      v81 = 0;
LABEL_79:
      v22 = *(_QWORD *)(a1 + 224);
      if ( !v22 )
        goto LABEL_101;
      v21 = *(_QWORD *)(a1 + 216);
      v15 = 0;
      v19 = 0;
      goto LABEL_81;
    }
  }
  else if ( !v14 )
  {
    v15 = 0;
    v19 = *(_QWORD *)(a1 + 224);
    v22 = v19;
    if ( !v19 )
    {
      v81 = 0;
      v23 = *(_QWORD *)(a1 + 216);
LABEL_100:
      v82 = nullptr;
      v15 = 0;
      v51 = 48 * v19;
      v52 = (__int64 *)(v23 + 48 * v19);
      if ( (__int64 *)v23 != v52 )
        goto LABEL_57;
LABEL_101:
      *(_BYTE *)(a1 + 264) = a2;
      return v96 - __readfsqword(0x28u);
    }
    goto LABEL_104;
  }
  v81 = 0;
  v15 = 0;
  v16 = 0;
  do
  {
    v87.m128i_i64[0] = v15;
    v17 = *(_QWORD ***)(v13 + 1392);
    v87.m128i_i64[1] = v81;
    sub_3AD780(v17, &v87, v12);
    ++v16;
    v15 = v87.m128i_i64[0];
    v12 += 3;
    v81 = v87.m128i_i64[1];
  }
  while ( v16 < v14 );
  if ( !v87.m128i_i64[0] )
    goto LABEL_79;
  if ( v87.m128i_i64[1] )
  {
    v18 = *(_QWORD **)(v87.m128i_i64[0] + 8);
    v19 = 0;
LABEL_8:
    while ( v18 != (_QWORD *)v87.m128i_i64[0] )
    {
      while ( 1 )
      {
        v19 += v18[5];
        if ( (*v18 & 2) != 0 )
          break;
        v20 = (_QWORD *)v18[2];
        if ( (*(_BYTE *)v20 & 2) != 0 )
        {
          v57 = (_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFFCLL);
          v58 = *v57;
          if ( (*v57 & 2) == 0 )
          {
            while ( (_QWORD *)v57[2] == v18 )
            {
              v18 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
              v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v58 & 2) != 0 )
                goto LABEL_8;
              v59 = v57;
              v57 = v18;
              v18 = v59;
            }
          }
          v18 = v57;
          goto LABEL_8;
        }
        do
        {
          v18 = v20;
          v20 = (_QWORD *)v20[1];
        }
        while ( (*(_BYTE *)v20 & 2) == 0 );
        if ( v18 == (_QWORD *)v87.m128i_i64[0] )
          goto LABEL_13;
      }
    }
LABEL_13:
    v21 = *(_QWORD *)(a1 + 216);
    v22 = *(_QWORD *)(a1 + 224);
    v23 = v21;
    if ( v22 == v19 )
      goto LABEL_22;
    v91 = 0;
    v88 = 0;
    v90 = (__m128i)0xFFFFFFFFuLL;
    v89 = 0;
    if ( v19 >= v22 )
    {
      v24 = *(_QWORD *)(a1 + 232);
      v25 = a1 + 216;
      if ( (unsigned __int64)&v88 < v21 || (unsigned __int64)&v88 >= v21 + 48 * v24 )
      {
        if ( v24 < v19 )
        {
          v23 = qvector_reserve(v25, v21, v19, 48);
          *(_QWORD *)(a1 + 216) = v23;
          v22 = *(_QWORD *)(a1 + 224);
        }
        if ( v22 < v19 )
        {
          v26 = _mm_loadu_si128(&v89);
          v27 = _mm_loadu_si128(&v90);
          v28 = v91;
          v29 = 48 * v22;
          do
          {
            v30 = v23 + v29;
            ++v22;
            v29 += 48;
            *(_QWORD *)v30 = 0;
            *(_QWORD *)(v30 + 40) = v28;
            *(__m128i *)(v30 + 8) = v26;
            *(__m128i *)(v30 + 24) = v27;
            v23 = *(_QWORD *)(a1 + 216);
          }
          while ( v22 != v19 );
        }
        *(_QWORD *)(a1 + 224) = v19;
        goto LABEL_22;
      }
      v69 = _mm_loadu_si128(&v89);
      v92 = 0;
      v95 = 0;
      v93 = v69;
      v94 = _mm_loadu_si128(&v90);
      if ( v24 < v19 )
      {
        v79 = qvector_reserve(v25, v21, v19, 48);
        v21 = a1;
        *(_QWORD *)(a1 + 216) = v79;
        v22 = *(_QWORD *)(a1 + 224);
      }
      if ( v22 < v19 )
      {
        v70 = v95;
        v71 = _mm_loadu_si128(&v93);
        v72 = _mm_loadu_si128(&v94);
        v21 = a1;
        v73 = 48 * v22;
        do
        {
          ++v22;
          v74 = v73 + *(_QWORD *)(a1 + 216);
          v73 += 48;
          *(_QWORD *)v74 = 0;
          *(_QWORD *)(v74 + 40) = v70;
          *(__m128i *)(v74 + 8) = v71;
          *(__m128i *)(v74 + 24) = v72;
        }
        while ( v22 != v19 );
      }
      *(_QWORD *)(a1 + 224) = v19;
      sub_13BC80(&v92, v21);
      v23 = *(_QWORD *)(a1 + 216);
      goto LABEL_85;
    }
    goto LABEL_81;
  }
  v67 = *(_QWORD *)(a1 + 224);
  v22 = v67;
  if ( v67 )
  {
LABEL_104:
    v19 = 0;
    v81 = 0;
    v21 = *(_QWORD *)(a1 + 216);
LABEL_81:
    v64 = v19;
    for ( i = v21; ; i = *(_QWORD *)(a1 + 216) )
    {
      v66 = 3 * v64++;
      sub_13BC80((_QWORD *)(16 * v66 + i), v21);
      if ( v64 >= v22 )
        break;
    }
    *(_QWORD *)(a1 + 224) = v19;
    v23 = *(_QWORD *)(a1 + 216);
    if ( v15 )
    {
LABEL_85:
      if ( !v81 )
      {
        v67 = *(_QWORD *)(a1 + 224);
        goto LABEL_87;
      }
LABEL_22:
      v82 = *(unsigned __int64 **)(v15 + 8);
      if ( v82 == (unsigned __int64 *)v15 )
      {
        v51 = 48LL * *(_QWORD *)(a1 + 224);
        v52 = (__int64 *)(v23 + v51);
        if ( v23 != v23 + v51 )
          goto LABEL_57;
      }
      else
      {
        do
        {
          v31 = (const __m128i *)v82[4];
          v80 = (const __m128i *)((char *)v31 + 40 * v82[5]);
          if ( v80 != v31 )
          {
            v32 = (const __m128i *)v82[4];
            do
            {
              v33 = *(__int64 **)v23;
              if ( *(_QWORD *)v23 )
              {
                if ( (*((_DWORD *)v33 + 26))-- == 1 )
                {
                  v35 = *(__int64 **)v23;
                  if ( *(_QWORD *)v23 )
                  {
                    sub_253D70(*(__int64 **)v23);
                    v36 = v35[23];
                    if ( v36 )
                    {
                      if ( v35[24] )
                      {
                        v83 = v15;
                        v37 = 0;
                        v38 = v35[24];
                        do
                        {
                          v39 = (__int64 *)(v36 + 24 * v37);
                          v40 = *v39;
                          if ( *v39 )
                          {
                            v39[1] = 0;
                            qfree(v40);
                            v36 = v35[23];
                          }
                          ++v37;
                        }
                        while ( v38 != v37 );
                        v15 = v83;
                      }
                      v35[24] = 0;
                      qfree(v36);
                    }
                    v41 = v35[20];
                    if ( v41 )
                    {
                      v35[21] = 0;
                      qfree(v41);
                    }
                    v42 = v35[16];
                    if ( v42 )
                    {
                      if ( v35[17] )
                      {
                        v84 = v15;
                        v43 = 0;
                        v44 = v35[17];
                        do
                        {
                          v45 = (__int64 *)(v42 + 32 * v43);
                          v46 = *v45;
                          if ( *v45 )
                          {
                            v45[1] = 0;
                            qfree(v46);
                            v42 = v35[16];
                          }
                          ++v43;
                        }
                        while ( v44 != v43 );
                        v15 = v84;
                      }
                      v35[17] = 0;
                      qfree(v42);
                    }
                    sub_250450((__int64)(v35 + 2));
                    j__qfree(v35);
                  }
                }
              }
              v47 = v82[7];
              *(_QWORD *)v23 = v47;
              if ( v47 )
                ++*(_DWORD *)(v47 + 104);
              v48 = _mm_loadu_si128(v32);
              v23 += 48;
              v32 = (const __m128i *)((char *)v32 + 40);
              *(__m128i *)(v23 - 40) = v48;
              *(__m128i *)(v23 - 24) = _mm_loadu_si128((const __m128i *)((char *)v32 - 24));
              *(_BYTE *)(v23 - 8) = v32[-1].m128i_i8[8];
            }
            while ( v80 != v32 );
          }
          if ( (*v82 & 2) == 0 )
          {
            v49 = (unsigned __int64 *)v82[2];
            if ( (*(_BYTE *)v49 & 2) != 0 )
            {
              v60 = (unsigned __int64 *)(*v82 & 0xFFFFFFFFFFFFFFFCLL);
              v61 = *v60;
              if ( (*v60 & 2) == 0 )
              {
                for ( j = v82; (unsigned __int64 *)v60[2] == j; j = v68 )
                {
                  v63 = v61 & 0xFFFFFFFFFFFFFFFCLL;
                  v61 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v61 & 2) != 0 )
                  {
                    v82 = (unsigned __int64 *)v63;
                    goto LABEL_55;
                  }
                  v68 = v60;
                  v60 = (unsigned __int64 *)v63;
                }
              }
              v82 = v60;
            }
            else
            {
              for ( k = (unsigned __int64 *)v49[1]; (*(_BYTE *)k & 2) == 0; k = (unsigned __int64 *)k[1] )
                v49 = k;
              v82 = v49;
            }
          }
LABEL_55:
          ;
        }
        while ( v82 != (unsigned __int64 *)v15 );
        v23 = *(_QWORD *)(a1 + 216);
        v51 = 48LL * *(_QWORD *)(a1 + 224);
        v52 = (__int64 *)(v23 + v51);
        if ( v23 != v23 + v51 )
          goto LABEL_57;
      }
      v55 = a2;
      *(_BYTE *)(a1 + 264) = a2;
      goto LABEL_107;
    }
    goto LABEL_100;
  }
  v23 = *(_QWORD *)(a1 + 216);
LABEL_87:
  v82 = (unsigned __int64 *)v15;
  v81 = 0;
  v51 = 48 * v67;
  v52 = (__int64 *)(v23 + 48 * v67);
  if ( (__int64 *)v23 == v52 )
  {
    *(_BYTE *)(a1 + 264) = a2;
    goto LABEL_63;
  }
LABEL_57:
  v53 = 0xAAAAAAAAAAAAAAABLL * (v51 >> 4);
  if ( !v53 )
  {
    sub_3B2390(v23, (__int64)v52, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A3ED0);
    goto LABEL_103;
  }
  _BitScanReverse64(&v53, v53);
  sub_3B2390(v23, (__int64)v52, 2LL * (int)v53, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A3ED0);
  if ( v51 <= 768 )
  {
LABEL_103:
    sub_3AE1D0(v23, v52, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A3ED0);
    goto LABEL_61;
  }
  v54 = (__int64 *)(v23 + 768);
  sub_3AE1D0(v23, (__int64 *)(v23 + 768), (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A3ED0);
  do
  {
    sub_3ADF60(v54, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A3ED0);
    v54 += 6;
  }
  while ( v54 != v52 );
LABEL_61:
  v55 = a2;
  *(_BYTE *)(a1 + 264) = a2;
  if ( v82 )
  {
    if ( !v81 )
    {
LABEL_63:
      v87 = (__m128i)(unsigned __int64)v15;
      sub_3AB870((unsigned __int64 *)&v87);
LABEL_64:
      qfree(v82);
      return v96 - __readfsqword(0x28u);
    }
LABEL_107:
    v75 = *v82;
    v76 = *v82 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v76 & 2) != 0 )
      goto LABEL_64;
    v77 = *(_QWORD **)(v76 + 8);
    if ( (*(_BYTE *)v77 & 2) != 0 )
    {
      v78 = *(_QWORD **)(v76 + 16);
      if ( (*(_BYTE *)v78 & 2) != 0 )
      {
LABEL_117:
        sub_3A7830((__int64 *)(v76 + 32));
        *(_QWORD *)v76 |= 2uLL;
LABEL_112:
        if ( v75 > 3 )
          qfree(v76);
        goto LABEL_64;
      }
    }
    else
    {
      sub_3AB620(v77, v55);
      v78 = *(_QWORD **)(v76 + 16);
      if ( (*(_BYTE *)v78 & 2) != 0 )
        goto LABEL_111;
    }
    sub_3AB620(v78, v55);
LABEL_111:
    if ( (*(_BYTE *)v76 & 2) != 0 )
      goto LABEL_112;
    goto LABEL_117;
  }
  return v96 - __readfsqword(0x28u);
}
