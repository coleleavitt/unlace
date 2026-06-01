_BYTE *__fastcall sub_75E740(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rax
  __int64 v4; // rbp
  void *v5; // r13
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // r13d
  __int64 v10; // r8
  char *v11; // rcx
  void *v12; // rdi
  int v13; // edx
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rax
  void *v17; // r15
  int v18; // eax
  int v19; // r15d
  char *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  char *v25; // r8
  __int64 v26; // rdx
  const __m128i *v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r9
  bool v30; // cc
  const __m128i *v31; // rax
  const __m128i *v32; // rdx
  const __m128i *v33; // rsi
  __m128d v34; // xmm1
  __m128d v35; // xmm0
  __int64 v36; // r9
  __int64 *v37; // rcx
  char *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  void *v45; // rbp
  void *v46; // rbx
  _BYTE *result; // rax
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r9
  void *v54; // [rsp+8h] [rbp-4E0h]
  void *v55; // [rsp+8h] [rbp-4E0h]
  __int64 v56; // [rsp+8h] [rbp-4E0h]
  __int64 v57; // [rsp+8h] [rbp-4E0h]
  __int64 v58; // [rsp+8h] [rbp-4E0h]
  int v60; // [rsp+1Ch] [rbp-4CCh]
  char *v62; // [rsp+38h] [rbp-4B0h]
  __int64 v63; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 v64; // [rsp+48h] [rbp-4A0h]
  __int64 v65; // [rsp+50h] [rbp-498h] BYREF
  __int64 v66; // [rsp+58h] [rbp-490h]
  _QWORD v67[2]; // [rsp+60h] [rbp-488h] BYREF
  _QWORD v68[2]; // [rsp+70h] [rbp-478h] BYREF
  int v69; // [rsp+80h] [rbp-468h] BYREF
  char v70; // [rsp+84h] [rbp-464h]
  __int64 v71; // [rsp+88h] [rbp-460h]
  int v72; // [rsp+90h] [rbp-458h] BYREF
  char v73; // [rsp+94h] [rbp-454h]
  __int64 v74; // [rsp+98h] [rbp-450h]
  void *ptr; // [rsp+A0h] [rbp-448h]
  __int64 v76; // [rsp+A8h] [rbp-440h]
  _BYTE v77[1080]; // [rsp+B0h] [rbp-438h] BYREF

  ptr = v77;
  v76 = 0x8000000000LL;
  v3 = *(__int64 **)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( *((_BYTE *)v3 + 8) != 4 )
    sub_DBF6E(0);
  v4 = *v3;
  v63 = 0;
  v64 = 0;
  v65 = 1;
  v5 = qword_1C7F2C0;
  v66 = 0;
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v63, v4);
  else
    LODWORD(v63) = *(_DWORD *)v4;
  if ( (*(_BYTE *)(v4 + 20) & 1) != 0 )
  {
    sub_182C690(v5, &v65, v4 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 16);
    BYTE4(v65) &= ~1u;
    LODWORD(v65) = v6;
  }
  v67[0] = 2;
  v67[1] = 0;
  v68[0] = 1;
  v68[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v68);
  v7 = *(_QWORD *)(a2 + 24);
  BYTE4(v68[0]) &= ~1u;
  LODWORD(v68[0]) = 1;
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v8 + 24) )
    sub_DBF6E(0);
  v60 = *(_DWORD *)(v8 + 16);
  if ( v60 )
  {
    v9 = 0;
    do
    {
      v17 = qword_1C7F2C0;
      v70 &= 0xFCu;
      v73 &= 0xFCu;
      v69 = 0;
      v71 = 0;
      v72 = 1;
      v74 = 0;
      sub_1831270(qword_1C7F2C0, &v63, v67, &v69);
      sub_182CBA0(v17, &v72);
      v73 &= ~1u;
      v72 = 1;
      LODWORD(v17) = v69;
      v55 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v69);
      sub_182CBA0(v55, &v72);
      v18 = v76;
      if ( (_DWORD)v17 )
      {
        v10 = a1[10];
        if ( (unsigned int)v76 >= HIDWORD(v76) )
        {
          v56 = a1[10];
          v19 = 2 * HIDWORD(v76);
          v11 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v76)));
          v18 = v76;
          v20 = (char *)ptr;
          v10 = v56;
          if ( (_DWORD)v76 )
          {
            if ( (unsigned int)(v76 - 1) <= 2 || v11 == (char *)ptr + 8 )
            {
              v52 = 0;
              v53 = 8LL * (unsigned int)v76;
              do
              {
                *(_QWORD *)&v11[v52] = *(_QWORD *)&v20[v52];
                v52 += 8;
              }
              while ( v53 != v52 );
            }
            else
            {
              v21 = 0;
              v22 = 16LL * ((unsigned int)v76 >> 1);
              do
              {
                *(__m128i *)&v11[v21] = _mm_loadu_si128((const __m128i *)&v20[v21]);
                v21 += 16;
              }
              while ( v22 != v21 );
LABEL_19:
              if ( (v18 & 1) != 0 )
                *(_QWORD *)&v11[8 * (v18 & 0xFFFFFFFE)] = *(_QWORD *)&v20[8 * (v18 & 0xFFFFFFFE)];
            }
          }
          goto LABEL_21;
        }
      }
      else
      {
        v10 = a1[12];
        if ( (unsigned int)v76 >= HIDWORD(v76) )
        {
          v58 = a1[12];
          v19 = 2 * HIDWORD(v76);
          v11 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v76)));
          v18 = v76;
          v20 = (char *)ptr;
          v10 = v58;
          if ( (_DWORD)v76 )
          {
            if ( (unsigned int)(v76 - 1) > 2 && v11 != (char *)ptr + 8 )
            {
              v23 = 0;
              v24 = 16LL * ((unsigned int)v76 >> 1);
              do
              {
                *(__m128i *)&v11[v23] = _mm_loadu_si128((const __m128i *)&v20[v23]);
                v23 += 16;
              }
              while ( v24 != v23 );
              goto LABEL_19;
            }
            v50 = 0;
            v51 = 8LL * (unsigned int)v76;
            do
            {
              *(_QWORD *)&v11[v50] = *(_QWORD *)&v20[v50];
              v50 += 8;
            }
            while ( v51 != v50 );
          }
LABEL_21:
          if ( v20 && v20 != v77 )
          {
            v62 = v11;
            v57 = v10;
            sub_186B220(v20);
            v18 = v76;
            v11 = v62;
            v10 = v57;
          }
          ptr = v11;
          HIDWORD(v76) = v19;
          goto LABEL_11;
        }
      }
      v11 = (char *)ptr;
LABEL_11:
      v12 = qword_1C7F2C0;
      *(_QWORD *)&v11[8 * v18] = v10;
      v70 &= 0xFCu;
      v73 &= 0xFCu;
      LODWORD(v76) = v18 + 1;
      v69 = 0;
      v71 = 0;
      v72 = 1;
      v74 = 0;
      sub_1833EB0(v12, &v63, v67, &v69);
      sub_182CBA0(v12, &v72);
      v13 = v69;
      ++v9;
      v69 = v63;
      LODWORD(v63) = v13;
      v14 = v71;
      v71 = v64;
      v64 = v14;
      v54 = qword_1C7F2C0;
      v15 = v70 & 1;
      LOBYTE(v14) = BYTE4(v63) & 0xFC | v70 & 2;
      v70 = BYTE4(v63) & 1 | v70 & 0xFC | BYTE4(v63) & 2;
      BYTE4(v63) = v15 | v14;
      v72 = v65;
      v16 = v66;
      v66 = v74;
      v74 = v16;
      LODWORD(v65) = 1;
      LOBYTE(v16) = BYTE4(v65) & 1 | BYTE4(v65) & 2 | v73 & 0xFC;
      BYTE4(v65) = BYTE4(v65) & 0xFC | v73 & 2;
      v73 = v16;
      sub_182CBA0(qword_1C7F2C0, &v69);
      sub_182CBA0(v54, &v72);
    }
    while ( v60 != v9 );
  }
  v25 = (char *)ptr;
  v26 = 8LL * (unsigned int)v76;
  if ( ptr != (char *)ptr + v26 )
  {
    v27 = (const __m128i *)((char *)ptr + v26 - 8);
    if ( ptr < v27 )
    {
      if ( (unsigned __int64)(v26 - 9) <= 0x1F )
      {
        v31 = (const __m128i *)ptr;
      }
      else
      {
        v28 = (unsigned __int64)(v26 - 9) >> 4;
        v29 = v28 + 1;
        v30 = (__int64)(v26 - 8 * v28 - 8) < (__int64)(8 * (v28 + 1));
        v31 = (const __m128i *)ptr;
        if ( !v30 )
        {
          v32 = (const __m128i *)((char *)ptr + v26 - 16);
          v33 = (const __m128i *)((char *)ptr + 16 * (v29 >> 1));
          do
          {
            v34 = (__m128d)_mm_loadu_si128(v32);
            v35 = (__m128d)_mm_loadu_si128(v31++);
            --v32;
            v31[-1] = (const __m128i)_mm_shuffle_pd(v34, v34, 1);
            v32[1] = (const __m128i)_mm_shuffle_pd(v35, v35, 1);
          }
          while ( v33 != v31 );
          if ( (v29 & 1) != 0 )
          {
            v36 = -(__int64)(v29 & 0xFFFFFFFFFFFFFFFELL);
            v37 = &v27->m128i_i64[v36];
            v38 = &v25[-8 * v36];
            v39 = *(_QWORD *)v38;
            *(_QWORD *)v38 = *v37;
            *v37 = v39;
          }
          goto LABEL_39;
        }
      }
      do
      {
        v48 = v31->m128i_i64[0];
        v49 = v27->m128i_i64[0];
        v31 = (const __m128i *)((char *)v31 + 8);
        v27 = (const __m128i *)((char *)v27 - 8);
        v31[-1].m128i_i64[1] = v49;
        v27->m128i_i64[1] = v48;
      }
      while ( v31 < v27 );
    }
  }
LABEL_39:
  v40 = sub_15E1AF0(a1[2]);
  v41 = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v42 = *a3;
  if ( *a3 )
  {
    v43 = a3[1];
    if ( (*(_DWORD *)(v42 + 8))-- == 1 )
      sub_15D7BC0(v43, v42);
  }
  *a3 = v41;
  v45 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v67);
  sub_182CBA0(v45, v68);
  v46 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v63);
  sub_182CBA0(v46, &v65);
  result = v77;
  if ( ptr != v77 )
  {
    if ( ptr )
      return (_BYTE *)sub_186B220(ptr);
  }
  return result;
}

