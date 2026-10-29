__int64 __fastcall sub_3617E0(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        __int16 a4,
        int a5,
        const char *a6,
        const char *a7,
        int a8,
        int a9)
{
  int v12; // eax
  __int64 v13; // rbx
  unsigned int dword; // eax
  unsigned int v15; // r11d
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // r11d
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // r14d
  __int64 v22; // rax
  _DWORD *v23; // rsi
  __int64 v24; // rdx
  char *v25; // rsi
  char *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // r14d
  const char *v32; // rdi
  __int64 v33; // r15
  char *v34; // rax
  __int64 v35; // rdx
  __m128i v36; // xmm0
  _BOOL4 v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  char *v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r15
  char *v44; // rax
  void *v45; // rdi
  unsigned __int16 word; // ax
  unsigned int v48; // eax
  __int64 v49; // rax
  char *v50; // rax
  void *v51; // rdi
  __int64 v52; // rax
  const char **v53; // r14
  __int64 v54; // r15
  const char *v55; // rcx
  const char *v56; // r15
  char *v57; // rax
  __int64 v58; // r14
  unsigned int data_elsize; // eax
  __int64 v60; // rsi
  unsigned int v61; // [rsp+Ch] [rbp-154h]
  unsigned int v62; // [rsp+Ch] [rbp-154h]
  int v63; // [rsp+18h] [rbp-148h]
  int v64; // [rsp+1Ch] [rbp-144h]
  char v65; // [rsp+1Ch] [rbp-144h]
  unsigned int v67; // [rsp+30h] [rbp-130h]
  char v69; // [rsp+38h] [rbp-128h]
  const char **v70; // [rsp+38h] [rbp-128h]
  __int64 v71; // [rsp+40h] [rbp-120h] BYREF
  int v72; // [rsp+48h] [rbp-118h]
  void *v73; // [rsp+50h] [rbp-110h] BYREF
  __int128 v74; // [rsp+58h] [rbp-108h]
  void *ptr; // [rsp+70h] [rbp-F0h] BYREF
  __int128 v76; // [rsp+78h] [rbp-E8h]
  _BYTE v77[19]; // [rsp+90h] [rbp-D0h] BYREF
  char v78; // [rsp+A3h] [rbp-BDh]
  int v79; // [rsp+E8h] [rbp-78h]
  unsigned __int64 v80; // [rsp+128h] [rbp-38h]

  v12 = a5 & 3;
  v80 = __readfsqword(0x28u);
  if ( v12 == 1 )
  {
    v63 = 2;
  }
  else
  {
    v63 = 1;
    v69 = 0;
    if ( v12 != 2 )
      goto LABEL_3;
    v63 = 4;
  }
  v17 = sub_359FE0((__int64)a1, a4);
  if ( (_BYTE)v17 )
    return v17;
  v69 = 1;
LABEL_3:
  v71 = 1;
  v72 = -1;
  if ( get_array_parameters(&v71, a2) <= 0 )
  {
    v60 = a1[4];
    if ( a2 != (_DWORD)v60 )
      get_array_parameters(&v71, v60);
  }
  if ( (_BYTE)a9 )
    LODWORD(v71) = v71 & 0xFFFFFFFE;
  if ( (unsigned __int8)a5 <= 9u )
  {
    if ( (a5 & 0xF8) != 0 )
    {
      v13 = 0x22222212200400LL;
      word = get_word(a2);
      v15 = 2;
      v64 = 2;
      v67 = word;
      if ( (_BYTE)a9 )
        goto LABEL_9;
LABEL_55:
      v62 = v15;
      v48 = sub_3612C0((__int64)a1, a2, v15, v13, a2, (__int64)&v71, 0, nullptr, nullptr);
      v18 = v62;
      v65 = 0;
      v17 = v48;
      goto LABEL_10;
    }
LABEL_92:
    LOBYTE(v17) = 1;
    sub_35ACD0((__int64)v77, (__int64)a1, a2, a3, a5, a9);
    v65 = 0;
    v73 = nullptr;
    ptr = nullptr;
    v67 = -1;
    v74 = 0;
    v76 = 0;
    goto LABEL_15;
  }
  if ( (unsigned int)(unsigned __int8)a5 - 12 > 1 )
    goto LABEL_92;
  v13 = 0x22222222200400LL;
  dword = get_dword(a2);
  v15 = 4;
  v67 = dword;
  v64 = 4;
  v69 &= dword != -1;
  if ( !(_BYTE)a9 )
    goto LABEL_55;
LABEL_9:
  v61 = v15;
  (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 60);
  v16 = v13;
  v17 = 0;
  sub_35F8A0((__int64 *)a1, a2, v64, v16, v61, 1u, (int *)&v71, a2, a8, 1, 0);
  v65 = a9;
  v18 = v61;
LABEL_10:
  a3 -= v18;
  v19 = v67;
  if ( v69 )
  {
    v19 = v63 * v67;
    v67 *= v63;
  }
  v20 = a3;
  if ( v19 <= a3 )
    v20 = v19;
  sub_35ACD0((__int64)v77, (__int64)a1, a2 + v18, v20, a5, a9);
  v73 = nullptr;
  ptr = nullptr;
  v74 = 0;
  v76 = 0;
  if ( !(_BYTE)v17 )
  {
LABEL_15:
    v21 = v79;
    if ( !(_BYTE)a9 )
      goto LABEL_33;
    while ( 1 )
    {
      v22 = v76;
      v23 = ptr;
      if ( *((_QWORD *)&v76 + 1) < (unsigned __int64)(v76 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v76 + 1, 4);
        v23 = ptr;
        v22 = v76;
      }
      v23[v22] = v21;
      v24 = v74;
      *(_QWORD *)&v76 = v76 + 1;
      v25 = (char *)v73;
      if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)(v74 + 1) )
      {
        v73 = (void *)qvector_reserve(&v73, v73, v74 + 1, 24);
        v24 = v74;
        v25 = (char *)v73;
      }
      v26 = &v25[24 * v24];
      *(_OWORD *)(v26 + 8) = 0;
      *(_QWORD *)v26 = 0;
      v27 = *((_QWORD *)a1 + 3);
      *(_QWORD *)&v74 = v74 + 1;
      v28 = *(_QWORD *)v26;
      *(_QWORD *)v26 = v27;
      v29 = *((_QWORD *)v26 + 1);
      *((_QWORD *)v26 + 1) = *((_QWORD *)a1 + 4);
      *((_QWORD *)v26 + 2) = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 3) = v28;
      *((_QWORD *)a1 + 4) = v29;
      *((_QWORD *)a1 + 5) = 0;
      v78 = v17;
      v30 = sub_35BA40((__int64)v77);
      if ( v30 == -1 )
      {
LABEL_34:
        v39 = sub_35FAF0((__int64)a1, (__int64)v77, a8);
        if ( v39 == -1 )
        {
          *((_QWORD *)a1 + 4) = 0;
          if ( !(_BYTE)a9 )
          {
            if ( v67 >= a3 )
            {
              v17 = 1;
              goto LABEL_41;
            }
            v40 = 268436480;
            if ( v63 != 2 )
            {
              v40 = 1024;
              if ( v63 == 4 )
                v40 = 536871936;
            }
LABEL_40:
            v17 = sub_3612C0((__int64)a1, (unsigned int)v79, a3 - v67, v40, v79, (__int64)&v71, 3, nullptr, nullptr);
            goto LABEL_41;
          }
          v31 = a9;
          LOBYTE(v17) = 0;
        }
        else
        {
          LOBYTE(v17) = (v39 ^ 1) & 1;
          if ( !(_BYTE)a9 )
          {
            while ( 1 )
            {
              if ( *((_QWORD *)a1 + 4) <= 1u )
              {
                if ( (_BYTE)v17 )
                {
                  v17 = 0;
                  goto LABEL_64;
                }
              }
              else
              {
                a1[131] = v79;
                (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 29);
                v37 = sub_359C80(a1, a7, a6);
                LOBYTE(v17) = v37 | v17;
                if ( (_BYTE)v17 )
                {
                  v17 = v37;
                  goto LABEL_70;
                }
              }
              v21 = v79;
LABEL_33:
              sub_37EF30(a1, v21, 0);
              v78 = v17;
              v38 = sub_35BA40((__int64)v77);
              if ( v38 == -1 )
                goto LABEL_34;
              LOBYTE(v17) = (v38 ^ 1) & 1;
            }
          }
          v31 = 0;
        }
      }
      else
      {
        v31 = 0;
        LOBYTE(v17) = (v30 ^ 1) & 1;
      }
      (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 29);
      v32 = haystack;
      if ( *((_QWORD *)a1 + 4) )
        v32 = *((const char **)a1 + 3);
      v33 = tag_strlen(v32);
      if ( v33 > 0 )
        (*(void (__fastcall **)(unsigned int *, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, ", ", 0);
      v34 = (char *)v73 + 24 * v74 - 24;
      v35 = *(_QWORD *)v34;
      v36 = _mm_loadu_si128((const __m128i *)(v34 + 8));
      *(_QWORD *)v34 = *((_QWORD *)a1 + 3);
      *((_QWORD *)v34 + 1) = *((_QWORD *)a1 + 4);
      *((_QWORD *)v34 + 2) = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 3) = v35;
      *((__m128i *)a1 + 2) = v36;
      if ( !v33 )
      {
        v49 = v74;
        if ( (_QWORD)v74 )
        {
          *(_QWORD *)&v74 = v74 - 1;
          v50 = (char *)v73 + 24 * v49 - 24;
          v51 = *(void **)v50;
          if ( *(_QWORD *)v50 )
          {
            *((_QWORD *)v50 + 1) = 0;
            qfree(v51);
          }
        }
        if ( (_QWORD)v76 )
          *(_QWORD *)&v76 = v76 - 1;
      }
      LOBYTE(v17) = v31 | v17;
      if ( (_BYTE)v17 )
      {
        v17 = v31;
        break;
      }
      v21 = v79;
    }
  }
LABEL_70:
  if ( (_BYTE)a9 )
  {
    if ( v67 < a3 || (v52 = v74, (unsigned __int64)v74 > 1) )
    {
      if ( !v65 )
      {
        (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 60);
        v65 = a9;
      }
      v52 = v74;
    }
    if ( (_QWORD)v76 != v52 )
    {
      if ( !under_debugger )
        interr(3022);
      BUG();
    }
    v53 = (const char **)v73;
    v54 = 0;
    v70 = (const char **)((char *)v73 + 24 * v52);
    if ( v70 != v73 )
    {
      do
      {
        v55 = haystack;
        if ( v53[1] )
          v55 = *v53;
        sub_35BD60((__int64 *)a1, a8, *(_DWORD *)((char *)ptr + v54), (__int64)v55);
        v53 += 3;
        v54 += 4;
      }
      while ( v53 != v70 );
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      v56 = *((const char **)a1 + 3);
      v57 = strrchr(v56, 44);
      if ( v57 )
      {
        if ( v57 - v56 != -1 )
          sub_35CD10((__int64 *)a1 + 3, v57 - v56);
      }
    }
    if ( v67 < a3 )
    {
      if ( v63 == 2 )
      {
        v58 = 268436480;
      }
      else
      {
        v58 = 536871936;
        if ( v63 != 4 )
          v58 = 1024;
      }
      (*(void (__fastcall **)(unsigned int *, char *, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, ", ", 0);
      data_elsize = get_data_elsize((unsigned int)v79, v58, 0);
      sub_35F8A0((__int64 *)a1, v79, a3 - v67, v58, data_elsize, 1u, (int *)&v71, v79, a8, 0, 1);
    }
  }
  else
  {
LABEL_64:
    if ( v67 < a3 )
    {
      if ( v63 == 2 )
      {
        v40 = 268436480;
      }
      else
      {
        v40 = 1024;
        if ( v63 == 4 )
          v40 = 536871936;
      }
      goto LABEL_40;
    }
  }
LABEL_41:
  if ( v65 )
    (*(void (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 62);
  if ( ptr )
  {
    *(_QWORD *)&v76 = 0;
    qfree(ptr);
  }
  v41 = (char *)v73;
  if ( v73 )
  {
    v42 = v74;
    if ( (_QWORD)v74 )
    {
      v43 = 0;
      do
      {
        v44 = &v41[24 * v43];
        v45 = *(void **)v44;
        if ( *(_QWORD *)v44 )
        {
          *((_QWORD *)v44 + 1) = 0;
          qfree(v45);
          v41 = (char *)v73;
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v74 = 0;
    qfree(v41);
  }
  return v17;
}

