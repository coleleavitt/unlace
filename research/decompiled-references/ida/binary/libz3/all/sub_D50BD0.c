__m128i *__fastcall sub_D50BD0(__m128i *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // r15d
  __int64 v8; // r12
  unsigned int v9; // r14d
  _QWORD *v10; // r13
  __int64 v11; // rax
  char *v12; // rax
  char *v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  void *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r8
  int v22; // edx
  _QWORD *v23; // rsi
  __int64 v24; // r9
  int v25; // edx
  char *v26; // rsi
  __int64 *v27; // rdx
  __int64 v28; // rsi
  bool v29; // zf
  __int64 v30; // r14
  int v31; // r9d
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdi
  char *v42; // rbx
  char *v43; // r12
  __int64 v44; // rsi
  __int64 v46; // r14
  __int64 v47; // rax
  char *v48; // rdi
  __int64 v49; // r11
  __int64 v50; // r12
  char *v51; // rax
  char *v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // r10
  char *v55; // r14
  char *v56; // r13
  __int64 v57; // rsi
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  unsigned __int64 v60; // rax
  __int64 v61; // r11
  int v62; // [rsp+0h] [rbp-4B0h]
  __int64 v63; // [rsp+8h] [rbp-4A8h]
  __int64 v64; // [rsp+10h] [rbp-4A0h]
  _BYTE *v65; // [rsp+18h] [rbp-498h]
  _BYTE *v66; // [rsp+20h] [rbp-490h]
  __m128i *v68; // [rsp+30h] [rbp-480h]
  void *v69; // [rsp+38h] [rbp-478h]
  unsigned int v70; // [rsp+44h] [rbp-46Ch]
  int v71[2]; // [rsp+50h] [rbp-460h] BYREF
  __int64 v72; // [rsp+60h] [rbp-450h] BYREF
  void *v73; // [rsp+68h] [rbp-448h]
  __int64 v74; // [rsp+70h] [rbp-440h]
  int v75; // [rsp+78h] [rbp-438h]
  __int64 v76; // [rsp+80h] [rbp-430h]
  int v77; // [rsp+88h] [rbp-428h]
  int v78; // [rsp+8Ch] [rbp-424h]
  void *v79; // [rsp+90h] [rbp-420h]
  __int64 v80; // [rsp+98h] [rbp-418h]
  _BYTE v81[128]; // [rsp+A0h] [rbp-410h] BYREF
  void *v82; // [rsp+120h] [rbp-390h]
  __int64 v83; // [rsp+128h] [rbp-388h]
  _BYTE v84[128]; // [rsp+130h] [rbp-380h] BYREF
  __int64 v85; // [rsp+1B0h] [rbp-300h]
  void *ptr; // [rsp+1B8h] [rbp-2F8h]
  __int64 v87; // [rsp+1C0h] [rbp-2F0h]
  _BYTE v88[136]; // [rsp+1C8h] [rbp-2E8h] BYREF
  int v89[2]; // [rsp+250h] [rbp-260h] BYREF
  __int64 v90; // [rsp+2F0h] [rbp-1C0h]
  int *v91; // [rsp+2F8h] [rbp-1B8h] BYREF
  int *v92; // [rsp+398h] [rbp-118h] BYREF
  __int64 v93; // [rsp+430h] [rbp-80h]
  __int64 v94; // [rsp+438h] [rbp-78h]
  __int64 v95; // [rsp+440h] [rbp-70h]
  __int64 v96; // [rsp+448h] [rbp-68h]
  __int64 v97; // [rsp+450h] [rbp-60h]
  __int64 v98; // [rsp+458h] [rbp-58h]
  __int64 v99; // [rsp+460h] [rbp-50h]
  _BYTE v100[72]; // [rsp+468h] [rbp-48h] BYREF

  v68 = a1;
  v72 = 0;
  v4 = (_QWORD *)sub_186B270(0xC0u);
  *v4 = 0;
  v4[1] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v4[9] = 0;
  v4[10] = 0;
  v4[12] = 0;
  v4[13] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[18] = 0;
  v4[19] = 0;
  v4[21] = 0;
  v4[22] = 0;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 16) = 0;
  *((_DWORD *)v4 + 22) = 0;
  *((_DWORD *)v4 + 28) = 0;
  *((_DWORD *)v4 + 34) = 0;
  *((_DWORD *)v4 + 40) = 0;
  *((_DWORD *)v4 + 46) = 0;
  v73 = v4;
  v65 = v81;
  v79 = v81;
  v74 = 8;
  v75 = 0;
  v76 = 0;
  v78 = 0;
  v80 = 0x1000000000LL;
  v5 = *(_QWORD *)(a2 + 8);
  v83 = 0x1000000000LL;
  v87 = 0x1000000000LL;
  v66 = v84;
  v82 = v84;
  v85 = v5;
  ptr = v88;
  if ( v72 )
    *(_DWORD *)(v72 - 4) = 0;
  v77 = -1;
  sub_1662C60(&v72, a3, 0);
  v70 = sub_1662B80(&v72);
  v6 = (unsigned int)v87;
  if ( v72 )
  {
    v7 = *(_DWORD *)(v72 - 4);
    if ( v7 >= (unsigned int)v87 )
    {
      if ( (unsigned int)v87 >= v7 )
        goto LABEL_25;
      goto LABEL_6;
    }
    v55 = (char *)ptr + 8 * (unsigned int)v87;
    v56 = (char *)ptr + 8 * v7;
    if ( v56 >= v55 )
      goto LABEL_23;
  }
  else
  {
    if ( !(_DWORD)v87 )
      goto LABEL_25;
    v56 = (char *)ptr;
    v7 = 0;
    v55 = (char *)ptr + 8 * (unsigned int)v87;
    v6 = 0;
    if ( ptr >= v55 )
    {
LABEL_24:
      LODWORD(v87) = v6;
      goto LABEL_25;
    }
  }
  do
  {
    v57 = *(_QWORD *)v56;
    if ( *(_QWORD *)v56 )
    {
      v29 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v85, v57);
    }
    v56 += 8;
  }
  while ( v56 < v55 );
  v6 = (unsigned int)v87;
  if ( (unsigned int)v87 >= v7 )
  {
    if ( v7 >= (unsigned int)v87 )
      goto LABEL_25;
LABEL_23:
    v6 = v7;
    goto LABEL_24;
  }
LABEL_6:
  LODWORD(v8) = HIDWORD(v87);
  v9 = v6;
  do
  {
    if ( (unsigned int)v6 < (unsigned int)v8 )
    {
      v10 = ptr;
    }
    else
    {
      v8 = (unsigned int)(2 * v8);
      v12 = (char *)sub_186B270(8 * v8);
      LODWORD(v6) = v87;
      v13 = (char *)ptr;
      v10 = v12;
      if ( (_DWORD)v87 )
      {
        if ( (unsigned int)(v87 - 1) <= 2 || v12 == (char *)ptr + 8 )
        {
          v58 = 0;
          v59 = 8LL * (unsigned int)v87;
          do
          {
            v10[v58 / 8] = *(_QWORD *)&v13[v58];
            v58 += 8LL;
          }
          while ( v58 != v59 );
        }
        else
        {
          v14 = 0;
          v15 = 16LL * ((unsigned int)v87 >> 1);
          do
          {
            *(__m128i *)&v10[v14 / 8] = _mm_loadu_si128((const __m128i *)&v13[v14]);
            v14 += 16LL;
          }
          while ( v14 != v15 );
          if ( (v6 & 1) != 0 )
            v10[(unsigned int)v6 & 0xFFFFFFFE] = *(_QWORD *)&v13[8 * (v6 & 0xFFFFFFFE)];
        }
      }
      if ( v13 && v13 != v88 )
      {
        sub_186B220(v13);
        LODWORD(v6) = v87;
      }
      ptr = v10;
      HIDWORD(v87) = v8;
    }
    v11 = (unsigned int)v6;
    ++v9;
    v6 = (unsigned int)(v6 + 1);
    v10[v11] = 0;
    LODWORD(v87) = v6;
  }
  while ( v9 < v7 );
LABEL_25:
  if ( v70 )
  {
    v16 = nullptr;
    v69 = (void *)(v70 - 1);
    v17 = v72;
    while ( 1 )
    {
      v18 = (unsigned int)v16;
      if ( !v17 )
        break;
      while ( (unsigned int)v16 < *(_DWORD *)(v17 - 4) )
      {
        v19 = *(_QWORD *)(v17 + 8LL * (_QWORD)v16);
        v20 = 8LL * (_QWORD)v16;
        if ( v19 )
        {
          v21 = sub_15DB5C0(*(_QWORD *)(a2 + 8), v18, *(_QWORD *)(v17 + 8LL * (_QWORD)v16));
          v22 = v80;
          if ( (unsigned int)v80 >= HIDWORD(v80) )
          {
            v64 = v21;
            v50 = (unsigned int)(2 * HIDWORD(v80));
            v51 = (char *)sub_186B270(8 * v50);
            v22 = v80;
            v52 = (char *)v79;
            v23 = v51;
            v21 = v64;
            if ( (_DWORD)v80 )
            {
              if ( (unsigned int)(v80 - 1) <= 2 || v51 == (char *)v79 + 8 )
              {
                v60 = 0;
                v61 = 8LL * (unsigned int)v80;
                do
                {
                  v23[v60 / 8] = *(_QWORD *)&v52[v60];
                  v60 += 8LL;
                }
                while ( v60 != v61 );
              }
              else
              {
                v53 = 0;
                v54 = 16LL * ((unsigned int)v80 >> 1);
                do
                {
                  *(__m128i *)&v23[v53 / 8] = _mm_loadu_si128((const __m128i *)&v52[v53]);
                  v53 += 16LL;
                }
                while ( v54 != v53 );
                if ( (v22 & 1) != 0 )
                  v23[v22 & 0xFFFFFFFE] = *(_QWORD *)&v52[8 * (v22 & 0xFFFFFFFE)];
              }
            }
            if ( v52 != v81 && v52 )
            {
              v63 = (__int64)v23;
              sub_186B220(v52);
              v22 = v80;
              v21 = v64;
            }
            v79 = v23;
            HIDWORD(v80) = v50;
          }
          else
          {
            v23 = v79;
          }
          v23[v22] = v19;
          v24 = v20 | 1;
          LODWORD(v80) = v22 + 1;
          v25 = v83;
          if ( (unsigned int)v83 >= HIDWORD(v83) )
          {
            v63 = v20 | 1;
            v46 = (unsigned int)(2 * HIDWORD(v83));
            v64 = v21;
            v26 = (char *)sub_186B270(8 * v46);
            v47 = 0;
            v48 = (char *)v82;
            v21 = v64;
            v25 = v83;
            v49 = 8LL * (unsigned int)v83;
            v24 = v20 | 1;
            if ( (_DWORD)v83 )
            {
              do
              {
                *(_QWORD *)&v26[v47] = *(_QWORD *)&v48[v47];
                v47 += 8;
              }
              while ( v49 != v47 );
            }
            if ( v48 && v48 != v84 )
            {
              v62 = (int)v26;
              v63 = v20 | 1;
              sub_186B220(v48);
              v25 = v83;
              v24 = v20 | 1;
              v21 = v64;
            }
            v82 = v26;
            HIDWORD(v83) = v46;
          }
          else
          {
            v26 = (char *)v82;
          }
          *(_QWORD *)&v26[8 * v25] = v24;
          LODWORD(v83) = v25 + 1;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          v27 = (__int64 *)((char *)ptr + v20);
          v28 = *(_QWORD *)((char *)ptr + v20);
          if ( v28 )
          {
            v29 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v29 )
            {
              v64 = v21;
              sub_15D7BC0(v85, v28);
              v21 = v64;
              v27 = (__int64 *)((char *)ptr + v20);
            }
          }
          *v27 = v21;
        }
        if ( v16 != v69 )
        {
          v17 = v72;
          v16 = (char *)v16 + 1;
          v18 = (unsigned int)v16;
          if ( v72 )
            continue;
        }
        goto LABEL_42;
      }
      if ( v16 == v69 )
        break;
      v16 = (char *)v16 + 1;
    }
LABEL_42:
    v30 = *(_QWORD *)(a2 + 8);
    sub_633760((__int64)v89, v30, 0, (__int64)v100);
    *(_QWORD *)v89 = &off_1C4CA80;
    v100[8] = 1;
    sub_157BE40((int)v71, (int)v89, a3, v70, (int)ptr, v31, v62, v63, v64, (int)v81, (int)v84, a3, (__int64)v68, v69);
    v32 = *(_QWORD *)v71;
    v33 = sub_15DB6A0(
            *(_QWORD *)(a2 + 8),
            0,
            v70,
            v79,
            v82,
            *(_QWORD *)v71,
            0,
            &qword_18D6CD0,
            &qword_18D6CD0,
            0,
            0,
            0,
            0);
    v34 = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    if ( v32 )
    {
      v29 = (*(_DWORD *)(v32 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v30, v32);
    }
    v35 = v99;
    *v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v30);
    *(_QWORD *)v89 = &off_1C4CA60;
    if ( v35 )
      sub_186B220((void *)(v35 - 8));
    v36 = v97;
    if ( v97 && (v37 = v98, v29 = *(_DWORD *)(v97 + 8) == 1, --*(_DWORD *)(v97 + 8), v29) )
    {
      sub_15D7BC0(v37, v36);
      v38 = v95;
      if ( !v95 )
        goto LABEL_53;
    }
    else
    {
      v38 = v95;
      if ( !v95 )
        goto LABEL_53;
    }
    v39 = v96;
    v29 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v29 )
    {
      sub_15D7BC0(v39, v38);
      v40 = v93;
      if ( v93 )
      {
LABEL_54:
        v41 = v94;
        v29 = (*(_DWORD *)(v40 + 8))-- == 1;
        if ( v29 )
          sub_15D7BC0(v41, v40);
      }
LABEL_56:
      v92 = &qword_1C637E8;
      sub_15841B0(&v92);
      v91 = &qword_1C637E8;
      sub_15841B0(&v91);
      if ( v90 )
        sub_186B220((void *)(v90 - 8));
      sub_15841B0(v89);
      v6 = (unsigned int)v87;
      goto LABEL_59;
    }
LABEL_53:
    v40 = v93;
    if ( v93 )
      goto LABEL_54;
    goto LABEL_56;
  }
  *(__m128 *)v68 = _mm_loadh_ps((const double *)(a2 + 8));
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
LABEL_59:
  v42 = (char *)ptr;
  v43 = (char *)ptr + 8 * v6;
  if ( ptr < v43 )
  {
    do
    {
      while ( 1 )
      {
        v44 = *(_QWORD *)v42;
        if ( *(_QWORD *)v42 )
        {
          v29 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v29 )
            break;
        }
        v42 += 8;
        if ( v42 >= v43 )
          goto LABEL_65;
      }
      sub_15D7BC0(v85, v44);
      v42 += 8;
    }
    while ( v42 < v43 );
LABEL_65:
    v42 = (char *)ptr;
  }
  if ( v42 && v42 != v88 )
    sub_186B220(v42);
  if ( v82 != v66 && v82 )
    sub_186B220(v82);
  if ( v79 && v79 != v65 )
    sub_186B220(v79);
  if ( v76 )
    sub_186B220((void *)(v76 - 8));
  if ( v73 )
    sub_186B220(v73);
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  return v68;
}

