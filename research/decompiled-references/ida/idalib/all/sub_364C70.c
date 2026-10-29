__int64 __fastcall sub_364C70(
        __m128i *a1,
        void *a2,
        unsigned __int64 a3,
        __int16 a4,
        int a5,
        const char *a6,
        const char *a7,
        int a8,
        int a9)
{
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  char *v22; // rsi
  char *v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // r14d
  const char *v29; // rdi
  __int64 v30; // r15
  char *v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  _BOOL4 v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  char *v38; // rdx
  __int64 v39; // r12
  __int64 v40; // r15
  char *v41; // rax
  void *v42; // rdi
  __int64 v44; // rax
  char *v45; // rax
  void *v46; // rdi
  __int64 v47; // rax
  const char **v48; // r14
  __int64 v49; // r15
  const char *v50; // rcx
  const char *v51; // r15
  char *v52; // rax
  __int64 v53; // r14
  __int64 data_elsize; // rax
  void *v55; // rsi
  char v56; // [rsp+7h] [rbp-159h]
  int v57; // [rsp+10h] [rbp-150h]
  int v58; // [rsp+14h] [rbp-14Ch]
  char v59; // [rsp+14h] [rbp-14Ch]
  unsigned __int64 word; // [rsp+28h] [rbp-138h]
  __int64 v63; // [rsp+38h] [rbp-128h]
  const char **v64; // [rsp+38h] [rbp-128h]
  __int64 v65; // [rsp+40h] [rbp-120h] BYREF
  int v66; // [rsp+48h] [rbp-118h]
  void *v67; // [rsp+50h] [rbp-110h] BYREF
  __int128 v68; // [rsp+58h] [rbp-108h]
  void *ptr; // [rsp+70h] [rbp-F0h] BYREF
  __int128 v70; // [rsp+78h] [rbp-E8h]
  _BYTE v71[19]; // [rsp+90h] [rbp-D0h] BYREF
  char v72; // [rsp+A3h] [rbp-BDh]
  int v73[2]; // [rsp+F0h] [rbp-70h]
  unsigned __int64 v74; // [rsp+128h] [rbp-38h]

  v12 = a5 & 3;
  v74 = __readfsqword(0x28u);
  if ( v12 == 1 )
  {
    v57 = 2;
  }
  else
  {
    v57 = 1;
    v56 = 0;
    if ( v12 != 2 )
      goto LABEL_3;
    v57 = 4;
  }
  v15 = sub_35D2D0((__int64)a1, a4);
  if ( (_BYTE)v15 )
    return v15;
  v56 = 1;
LABEL_3:
  v65 = 1;
  v66 = -1;
  if ( get_array_parameters(&v65, a2) <= 0 )
  {
    v55 = (void *)a1[1].m128i_i64[0];
    if ( a2 != v55 )
      get_array_parameters(&v65, v55);
  }
  if ( (_BYTE)a9 )
    LODWORD(v65) = v65 & 0xFFFFFFFE;
  if ( (unsigned __int8)a5 <= 9u )
  {
    if ( (a5 & 0xF8) != 0 )
    {
      v13 = 0x22222212200400LL;
      v63 = 2;
      v58 = 2;
      word = (unsigned __int16)get_word(a2);
      if ( (_BYTE)a9 )
        goto LABEL_9;
LABEL_54:
      v59 = 0;
      v15 = sub_364730((__int64)a1, (__int64)a2, v63, v13, a2, (__int64)&v65, 0, nullptr, nullptr);
      goto LABEL_10;
    }
LABEL_91:
    LOBYTE(v15) = 1;
    sub_35DFE0((__int64)v71, (__int64)a1, (__int64)a2, a3, a5, a9);
    v59 = 0;
    v67 = nullptr;
    ptr = nullptr;
    word = -1;
    v68 = 0;
    v70 = 0;
    goto LABEL_14;
  }
  if ( (unsigned int)(unsigned __int8)a5 - 12 > 1 )
    goto LABEL_91;
  v13 = 0x22222222200400LL;
  v63 = 4;
  v58 = 4;
  word = (unsigned int)get_dword(a2);
  if ( !(_BYTE)a9 )
    goto LABEL_54;
LABEL_9:
  (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 60);
  v14 = v13;
  v15 = 0;
  sub_362D20(a1, (unsigned __int64)a2, v58, v14, v63, 1u, (int *)&v65, (__int64)a2, a8, 1, 0);
  v59 = a9;
LABEL_10:
  a3 -= v63;
  if ( v56 )
  {
    v16 = v57 * word;
    word = v16;
    v17 = a3;
    if ( v16 <= a3 )
      v17 = v16;
  }
  else
  {
    v17 = a3;
    if ( word <= a3 )
      v17 = word;
  }
  sub_35DFE0((__int64)v71, (__int64)a1, (__int64)a2 + v63, v17, a5, a9);
  v67 = nullptr;
  ptr = nullptr;
  v68 = 0;
  v70 = 0;
  if ( !(_BYTE)v15 )
  {
LABEL_14:
    v18 = *(_QWORD *)v73;
    if ( !(_BYTE)a9 )
      goto LABEL_32;
    while ( 1 )
    {
      v19 = v70;
      v20 = ptr;
      if ( *((_QWORD *)&v70 + 1) < (unsigned __int64)(v70 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v70 + 1, 8);
        v20 = ptr;
        v19 = v70;
      }
      v20[v19] = v18;
      v21 = v68;
      *(_QWORD *)&v70 = v70 + 1;
      v22 = (char *)v67;
      if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
      {
        v67 = (void *)qvector_reserve(&v67, v67, v68 + 1, 24);
        v21 = v68;
        v22 = (char *)v67;
      }
      v23 = &v22[24 * v21];
      *(_OWORD *)(v23 + 8) = 0;
      *(_QWORD *)v23 = 0;
      v24 = a1[1].m128i_i64[1];
      *(_QWORD *)&v68 = v68 + 1;
      v25 = *(_QWORD *)v23;
      *(_QWORD *)v23 = v24;
      v26 = *((_QWORD *)v23 + 1);
      *((_QWORD *)v23 + 1) = a1[2].m128i_i64[0];
      *((_QWORD *)v23 + 2) = a1[2].m128i_i64[1];
      a1[1].m128i_i64[1] = v25;
      a1[2].m128i_i64[0] = v26;
      a1[2].m128i_i64[1] = 0;
      v72 = v15;
      v27 = sub_35ED60((__int64)v71);
      if ( v27 == -1 )
      {
LABEL_33:
        v36 = sub_362F90((__int64)a1, (__int64)v71, a8);
        if ( v36 == -1 )
        {
          a1[2].m128i_i64[0] = 0;
          if ( !(_BYTE)a9 )
          {
            if ( word >= a3 )
            {
              v15 = 1;
              goto LABEL_40;
            }
            v37 = 268436480;
            if ( v57 != 2 )
            {
              v37 = 1024;
              if ( v57 == 4 )
                v37 = 536871936;
            }
LABEL_39:
            v15 = sub_364730(
                    (__int64)a1,
                    *(__int64 *)v73,
                    a3 - word,
                    v37,
                    *(void **)v73,
                    (__int64)&v65,
                    3,
                    nullptr,
                    nullptr);
            goto LABEL_40;
          }
          v28 = a9;
          LOBYTE(v15) = 0;
        }
        else
        {
          LOBYTE(v15) = (v36 ^ 1) & 1;
          if ( !(_BYTE)a9 )
          {
            while ( 1 )
            {
              if ( a1[2].m128i_i64[0] <= 1uLL )
              {
                if ( (_BYTE)v15 )
                {
                  v15 = 0;
                  goto LABEL_63;
                }
              }
              else
              {
                a1[44].m128i_i64[1] = *(_QWORD *)v73;
                (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 72))(a1, 29);
                v34 = sub_35CF70(a1, a7, a6);
                LOBYTE(v15) = v34 | v15;
                if ( (_BYTE)v15 )
                {
                  v15 = v34;
                  goto LABEL_69;
                }
              }
              v18 = *(_QWORD *)v73;
LABEL_32:
              sub_382A40(a1, v18, 0);
              v72 = v15;
              v35 = sub_35ED60((__int64)v71);
              if ( v35 == -1 )
                goto LABEL_33;
              LOBYTE(v15) = (v35 ^ 1) & 1;
            }
          }
          v28 = 0;
        }
      }
      else
      {
        v28 = 0;
        LOBYTE(v15) = (v27 ^ 1) & 1;
      }
      (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 72))(a1, 29);
      v29 = haystack;
      if ( a1[2].m128i_i64[0] )
        v29 = (const char *)a1[1].m128i_i64[1];
      v30 = tag_strlen(v29);
      if ( v30 > 0 )
        (*(void (__fastcall **)(__m128i *, char *, _QWORD))(a1->m128i_i64[0] + 56))(a1, ", ", 0);
      v31 = (char *)v67 + 24 * v68 - 24;
      v32 = *(_QWORD *)v31;
      v33 = _mm_loadu_si128((const __m128i *)(v31 + 8));
      *(_QWORD *)v31 = a1[1].m128i_i64[1];
      *((_QWORD *)v31 + 1) = a1[2].m128i_i64[0];
      *((_QWORD *)v31 + 2) = a1[2].m128i_i64[1];
      a1[1].m128i_i64[1] = v32;
      a1[2] = v33;
      if ( !v30 )
      {
        v44 = v68;
        if ( (_QWORD)v68 )
        {
          *(_QWORD *)&v68 = v68 - 1;
          v45 = (char *)v67 + 24 * v44 - 24;
          v46 = *(void **)v45;
          if ( *(_QWORD *)v45 )
          {
            *((_QWORD *)v45 + 1) = 0;
            qfree(v46);
          }
        }
        if ( (_QWORD)v70 )
          *(_QWORD *)&v70 = v70 - 1;
      }
      LOBYTE(v15) = v28 | v15;
      if ( (_BYTE)v15 )
      {
        v15 = v28;
        break;
      }
      v18 = *(_QWORD *)v73;
    }
  }
LABEL_69:
  if ( (_BYTE)a9 )
  {
    if ( word < a3 || (v47 = v68, (unsigned __int64)v68 > 1) )
    {
      if ( !v59 )
      {
        (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 60);
        v59 = a9;
      }
      v47 = v68;
    }
    if ( (_QWORD)v70 != v47 )
    {
      if ( !under_debugger )
        interr(3022);
      BUG();
    }
    v48 = (const char **)v67;
    v49 = 0;
    v64 = (const char **)((char *)v67 + 24 * v47);
    if ( v64 != v67 )
    {
      do
      {
        v50 = haystack;
        if ( v48[1] )
          v50 = *v48;
        sub_35F080(a1, a8, *(_QWORD *)((char *)ptr + v49), (__int64)v50);
        v48 += 3;
        v49 += 8;
      }
      while ( v48 != v64 );
    }
    if ( a1[2].m128i_i64[0] )
    {
      v51 = (const char *)a1[1].m128i_i64[1];
      v52 = strrchr(v51, 44);
      if ( v52 )
      {
        if ( v52 - v51 != -1 )
          sub_3600E0(&a1[1].m128i_i64[1], v52 - v51);
      }
    }
    if ( word < a3 )
    {
      if ( v57 == 2 )
      {
        v53 = 268436480;
      }
      else
      {
        v53 = 536871936;
        if ( v57 != 4 )
          v53 = 1024;
      }
      (*(void (__fastcall **)(__m128i *, char *, _QWORD))(a1->m128i_i64[0] + 56))(a1, ", ", 0);
      data_elsize = get_data_elsize(*(_QWORD *)v73, v53, 0);
      sub_362D20(a1, *(unsigned __int64 *)v73, a3 - word, v53, data_elsize, 1u, (int *)&v65, *(__int64 *)v73, a8, 0, 1);
    }
  }
  else
  {
LABEL_63:
    if ( word < a3 )
    {
      if ( v57 == 2 )
      {
        v37 = 268436480;
      }
      else
      {
        v37 = 1024;
        if ( v57 == 4 )
          v37 = 536871936;
      }
      goto LABEL_39;
    }
  }
LABEL_40:
  if ( v59 )
    (*(void (__fastcall **)(__m128i *, __int64))(a1->m128i_i64[0] + 32))(a1, 62);
  if ( ptr )
  {
    *(_QWORD *)&v70 = 0;
    qfree(ptr);
  }
  v38 = (char *)v67;
  if ( v67 )
  {
    v39 = v68;
    if ( (_QWORD)v68 )
    {
      v40 = 0;
      do
      {
        v41 = &v38[24 * v40];
        v42 = *(void **)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          qfree(v42);
          v38 = (char *)v67;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v68 = 0;
    qfree(v38);
  }
  return v15;
}
