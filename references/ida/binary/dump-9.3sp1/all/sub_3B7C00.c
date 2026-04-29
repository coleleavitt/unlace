unsigned __int64 __fastcall sub_3B7C00(
        unsigned __int64 a1,
        unsigned __int8 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 *v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  _QWORD **v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 v16; // r13
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r14
  __int64 v20; // rbp
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  const __m128i *v28; // rdx
  const __m128i *v29; // r13
  __int64 *v30; // rsi
  __int64 *v32; // r15
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // r12
  __int64 *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 *v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  __m128i v45; // xmm0
  unsigned __int64 *v46; // rcx
  unsigned __int64 *k; // rax
  __int64 v48; // r15
  __int64 *v49; // r14
  unsigned __int64 v50; // rdx
  __int64 *v51; // r15
  __int64 v52; // rsi
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rsi
  unsigned __int64 *v57; // rdx
  unsigned __int64 v58; // rcx
  unsigned __int64 *j; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r12
  unsigned __int64 i; // rdi
  __int64 v63; // rax
  unsigned __int64 v64; // r13
  unsigned __int64 *v65; // rsi
  __m128i v66; // xmm0
  __int64 v67; // rcx
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned __int64 v72; // rbp
  unsigned __int64 v73; // rbx
  _QWORD *v74; // rdi
  _QWORD *v75; // rdi
  __int64 v76; // rax
  const __m128i *v77; // [rsp+8h] [rbp-F0h]
  __int64 v78; // [rsp+10h] [rbp-E8h]
  unsigned __int64 *v79; // [rsp+18h] [rbp-E0h]
  __int64 v80; // [rsp+28h] [rbp-D0h]
  __int64 v81; // [rsp+28h] [rbp-D0h]
  __m128i v84; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v85; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v86; // [rsp+58h] [rbp-A0h] BYREF
  __m128i v87; // [rsp+68h] [rbp-90h] BYREF
  __int64 v88; // [rsp+78h] [rbp-80h]
  __int64 v89; // [rsp+80h] [rbp-78h] BYREF
  __m128i v90; // [rsp+88h] [rbp-70h] BYREF
  __m128i v91; // [rsp+98h] [rbp-60h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-40h]

  v9 = *(__int64 **)(a1 + 192);
  v10 = *(_QWORD *)(a1 + 184);
  v93 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(a1 + 200);
  if ( a2 )
  {
    sub_3B5340(*(_QWORD *)(v10 + 1392), v10, a3, a4, a5, a6, a7, a8, a9);
    if ( !v11 )
    {
      v78 = 0;
LABEL_79:
      v19 = *(_QWORD *)(a1 + 224);
      if ( !v19 )
        goto LABEL_101;
      v18 = *(_QWORD *)(a1 + 216);
      v12 = 0;
      v16 = 0;
      goto LABEL_81;
    }
  }
  else if ( !v11 )
  {
    v12 = 0;
    v16 = *(_QWORD *)(a1 + 224);
    v19 = v16;
    if ( !v16 )
    {
      v78 = 0;
      v20 = *(_QWORD *)(a1 + 216);
LABEL_100:
      v79 = nullptr;
      v12 = 0;
      v48 = 48 * v16;
      v49 = (__int64 *)(v20 + 48 * v16);
      if ( (__int64 *)v20 != v49 )
        goto LABEL_57;
LABEL_101:
      *(_BYTE *)(a1 + 264) = a2;
      return v93 - __readfsqword(0x28u);
    }
    goto LABEL_104;
  }
  v78 = 0;
  v12 = 0;
  v13 = 0;
  do
  {
    v84.m128i_i64[0] = v12;
    v14 = *(_QWORD ***)(v10 + 1392);
    v84.m128i_i64[1] = v78;
    sub_3B2A00(v14, &v84, v9);
    ++v13;
    v12 = v84.m128i_i64[0];
    v9 += 3;
    v78 = v84.m128i_i64[1];
  }
  while ( v13 < v11 );
  if ( !v84.m128i_i64[0] )
    goto LABEL_79;
  if ( v84.m128i_i64[1] )
  {
    v15 = *(_QWORD **)(v84.m128i_i64[0] + 8);
    v16 = 0;
LABEL_8:
    while ( v15 != (_QWORD *)v84.m128i_i64[0] )
    {
      while ( 1 )
      {
        v16 += v15[5];
        if ( (*v15 & 2) != 0 )
          break;
        v17 = (_QWORD *)v15[2];
        if ( (*(_BYTE *)v17 & 2) != 0 )
        {
          v54 = (_QWORD *)(*v15 & 0xFFFFFFFFFFFFFFFCLL);
          v55 = *v54;
          if ( (*v54 & 2) == 0 )
          {
            while ( (_QWORD *)v54[2] == v15 )
            {
              v15 = (_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
              v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v55 & 2) != 0 )
                goto LABEL_8;
              v56 = v54;
              v54 = v15;
              v15 = v56;
            }
          }
          v15 = v54;
          goto LABEL_8;
        }
        do
        {
          v15 = v17;
          v17 = (_QWORD *)v17[1];
        }
        while ( (*(_BYTE *)v17 & 2) == 0 );
        if ( v15 == (_QWORD *)v84.m128i_i64[0] )
          goto LABEL_13;
      }
    }
LABEL_13:
    v18 = *(_QWORD *)(a1 + 216);
    v19 = *(_QWORD *)(a1 + 224);
    v20 = v18;
    if ( v19 == v16 )
      goto LABEL_22;
    v88 = 0;
    v85 = 0;
    v87 = (__m128i)0xFFFFFFFFuLL;
    v86 = 0;
    if ( v16 >= v19 )
    {
      v21 = *(_QWORD *)(a1 + 232);
      v22 = a1 + 216;
      if ( (unsigned __int64)&v85 < v18 || (unsigned __int64)&v85 >= v18 + 48 * v21 )
      {
        if ( v21 < v16 )
        {
          v20 = qvector_reserve(v22, v18, v16, 48);
          *(_QWORD *)(a1 + 216) = v20;
          v19 = *(_QWORD *)(a1 + 224);
        }
        if ( v19 < v16 )
        {
          v23 = _mm_loadu_si128(&v86);
          v24 = _mm_loadu_si128(&v87);
          v25 = v88;
          v26 = 48 * v19;
          do
          {
            v27 = v20 + v26;
            ++v19;
            v26 += 48;
            *(_QWORD *)v27 = 0;
            *(_QWORD *)(v27 + 40) = v25;
            *(__m128i *)(v27 + 8) = v23;
            *(__m128i *)(v27 + 24) = v24;
            v20 = *(_QWORD *)(a1 + 216);
          }
          while ( v19 != v16 );
        }
        *(_QWORD *)(a1 + 224) = v16;
        goto LABEL_22;
      }
      v66 = _mm_loadu_si128(&v86);
      v89 = 0;
      v92 = 0;
      v90 = v66;
      v91 = _mm_loadu_si128(&v87);
      if ( v21 < v16 )
      {
        v76 = qvector_reserve(v22, v18, v16, 48);
        v18 = a1;
        *(_QWORD *)(a1 + 216) = v76;
        v19 = *(_QWORD *)(a1 + 224);
      }
      if ( v19 < v16 )
      {
        v67 = v92;
        v68 = _mm_loadu_si128(&v90);
        v69 = _mm_loadu_si128(&v91);
        v18 = a1;
        v70 = 48 * v19;
        do
        {
          ++v19;
          v71 = v70 + *(_QWORD *)(a1 + 216);
          v70 += 48;
          *(_QWORD *)v71 = 0;
          *(_QWORD *)(v71 + 40) = v67;
          *(__m128i *)(v71 + 8) = v68;
          *(__m128i *)(v71 + 24) = v69;
        }
        while ( v19 != v16 );
      }
      *(_QWORD *)(a1 + 224) = v16;
      sub_140140(&v89, v18);
      v20 = *(_QWORD *)(a1 + 216);
      goto LABEL_85;
    }
    goto LABEL_81;
  }
  v64 = *(_QWORD *)(a1 + 224);
  v19 = v64;
  if ( v64 )
  {
LABEL_104:
    v16 = 0;
    v78 = 0;
    v18 = *(_QWORD *)(a1 + 216);
LABEL_81:
    v61 = v16;
    for ( i = v18; ; i = *(_QWORD *)(a1 + 216) )
    {
      v63 = 3 * v61++;
      sub_140140((_QWORD *)(16 * v63 + i), v18);
      if ( v61 >= v19 )
        break;
    }
    *(_QWORD *)(a1 + 224) = v16;
    v20 = *(_QWORD *)(a1 + 216);
    if ( v12 )
    {
LABEL_85:
      if ( !v78 )
      {
        v64 = *(_QWORD *)(a1 + 224);
        goto LABEL_87;
      }
LABEL_22:
      v79 = *(unsigned __int64 **)(v12 + 8);
      if ( v79 == (unsigned __int64 *)v12 )
      {
        v48 = 48LL * *(_QWORD *)(a1 + 224);
        v49 = (__int64 *)(v20 + v48);
        if ( v20 != v20 + v48 )
          goto LABEL_57;
      }
      else
      {
        do
        {
          v28 = (const __m128i *)v79[4];
          v77 = (const __m128i *)((char *)v28 + 40 * v79[5]);
          if ( v77 != v28 )
          {
            v29 = (const __m128i *)v79[4];
            do
            {
              v30 = *(__int64 **)v20;
              if ( *(_QWORD *)v20 )
              {
                if ( (*((_DWORD *)v30 + 26))-- == 1 )
                {
                  v32 = *(__int64 **)v20;
                  if ( *(_QWORD *)v20 )
                  {
                    sub_258970(*(__int64 **)v20);
                    v33 = v32[23];
                    if ( v33 )
                    {
                      if ( v32[24] )
                      {
                        v80 = v12;
                        v34 = 0;
                        v35 = v32[24];
                        do
                        {
                          v36 = (__int64 *)(v33 + 24 * v34);
                          v37 = *v36;
                          if ( *v36 )
                          {
                            v36[1] = 0;
                            qfree(v37);
                            v33 = v32[23];
                          }
                          ++v34;
                        }
                        while ( v35 != v34 );
                        v12 = v80;
                      }
                      v32[24] = 0;
                      qfree(v33);
                    }
                    v38 = v32[20];
                    if ( v38 )
                    {
                      v32[21] = 0;
                      qfree(v38);
                    }
                    v39 = v32[16];
                    if ( v39 )
                    {
                      if ( v32[17] )
                      {
                        v81 = v12;
                        v40 = 0;
                        v41 = v32[17];
                        do
                        {
                          v42 = (__int64 *)(v39 + 32 * v40);
                          v43 = *v42;
                          if ( *v42 )
                          {
                            v42[1] = 0;
                            qfree(v43);
                            v39 = v32[16];
                          }
                          ++v40;
                        }
                        while ( v41 != v40 );
                        v12 = v81;
                      }
                      v32[17] = 0;
                      qfree(v39);
                    }
                    sub_255050((__int64)(v32 + 2));
                    j__qfree((__int64)v32);
                  }
                }
              }
              v44 = v79[7];
              *(_QWORD *)v20 = v44;
              if ( v44 )
                ++*(_DWORD *)(v44 + 104);
              v45 = _mm_loadu_si128(v29);
              v20 += 48;
              v29 = (const __m128i *)((char *)v29 + 40);
              *(__m128i *)(v20 - 40) = v45;
              *(__m128i *)(v20 - 24) = _mm_loadu_si128((const __m128i *)((char *)v29 - 24));
              *(_BYTE *)(v20 - 8) = v29[-1].m128i_i8[8];
            }
            while ( v77 != v29 );
          }
          if ( (*v79 & 2) == 0 )
          {
            v46 = (unsigned __int64 *)v79[2];
            if ( (*(_BYTE *)v46 & 2) != 0 )
            {
              v57 = (unsigned __int64 *)(*v79 & 0xFFFFFFFFFFFFFFFCLL);
              v58 = *v57;
              if ( (*v57 & 2) == 0 )
              {
                for ( j = v79; (unsigned __int64 *)v57[2] == j; j = v65 )
                {
                  v60 = v58 & 0xFFFFFFFFFFFFFFFCLL;
                  v58 = *(_QWORD *)(v58 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v58 & 2) != 0 )
                  {
                    v79 = (unsigned __int64 *)v60;
                    goto LABEL_55;
                  }
                  v65 = v57;
                  v57 = (unsigned __int64 *)v60;
                }
              }
              v79 = v57;
            }
            else
            {
              for ( k = (unsigned __int64 *)v46[1]; (*(_BYTE *)k & 2) == 0; k = (unsigned __int64 *)k[1] )
                v46 = k;
              v79 = v46;
            }
          }
LABEL_55:
          ;
        }
        while ( v79 != (unsigned __int64 *)v12 );
        v20 = *(_QWORD *)(a1 + 216);
        v48 = 48LL * *(_QWORD *)(a1 + 224);
        v49 = (__int64 *)(v20 + v48);
        if ( v20 != v20 + v48 )
          goto LABEL_57;
      }
      v52 = a2;
      *(_BYTE *)(a1 + 264) = a2;
      goto LABEL_107;
    }
    goto LABEL_100;
  }
  v20 = *(_QWORD *)(a1 + 216);
LABEL_87:
  v79 = (unsigned __int64 *)v12;
  v78 = 0;
  v48 = 48 * v64;
  v49 = (__int64 *)(v20 + 48 * v64);
  if ( (__int64 *)v20 == v49 )
  {
    *(_BYTE *)(a1 + 264) = a2;
    goto LABEL_63;
  }
LABEL_57:
  v50 = 0xAAAAAAAAAAAAAAABLL * (v48 >> 4);
  if ( !v50 )
  {
    sub_3B7610(v20, (__int64)v49, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A9150);
    goto LABEL_103;
  }
  _BitScanReverse64(&v50, v50);
  sub_3B7610(v20, (__int64)v49, 2LL * (int)v50, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3A9150);
  if ( v48 <= 768 )
  {
LABEL_103:
    sub_3B3450(v20, v49, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A9150);
    goto LABEL_61;
  }
  v51 = (__int64 *)(v20 + 768);
  sub_3B3450(v20, (__int64 *)(v20 + 768), (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A9150);
  do
  {
    sub_3B31E0(v51, (unsigned __int8 (__fastcall *)(__int64 *, __int64))sub_3A9150);
    v51 += 6;
  }
  while ( v51 != v49 );
LABEL_61:
  v52 = a2;
  *(_BYTE *)(a1 + 264) = a2;
  if ( v79 )
  {
    if ( !v78 )
    {
LABEL_63:
      v84 = (__m128i)(unsigned __int64)v12;
      sub_3B0AF0((unsigned __int64 *)&v84);
LABEL_64:
      qfree((__int64)v79);
      return v93 - __readfsqword(0x28u);
    }
LABEL_107:
    v72 = *v79;
    v73 = *v79 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v73 & 2) != 0 )
      goto LABEL_64;
    v74 = *(_QWORD **)(v73 + 8);
    if ( (*(_BYTE *)v74 & 2) != 0 )
    {
      v75 = *(_QWORD **)(v73 + 16);
      if ( (*(_BYTE *)v75 & 2) != 0 )
      {
LABEL_117:
        sub_3ACAB0(v73 + 32);
        *(_QWORD *)v73 |= 2uLL;
LABEL_112:
        if ( v72 > 3 )
          qfree(v73);
        goto LABEL_64;
      }
    }
    else
    {
      sub_3B08A0(v74, v52);
      v75 = *(_QWORD **)(v73 + 16);
      if ( (*(_BYTE *)v75 & 2) != 0 )
        goto LABEL_111;
    }
    sub_3B08A0(v75, v52);
LABEL_111:
    if ( (*(_BYTE *)v73 & 2) != 0 )
      goto LABEL_112;
    goto LABEL_117;
  }
  return v93 - __readfsqword(0x28u);
}
