__m128i *__fastcall sub_1049610(__m128i *a1, __int64 a2, const char **a3)
{
  char **v3; // r12
  __m128i *v4; // rbp
  char *v5; // r15
  __int16 *v6; // r12
  _BYTE *v7; // r14
  char *v8; // r15
  __m128i *v9; // rax
  char *v11; // r13
  char v12; // al
  __int64 v13; // rdx
  char *v14; // rdx
  void *v15; // rax
  _BYTE *v16; // rsi
  unsigned __int64 v17; // rdx
  _QWORD **v18; // r12
  _QWORD **v19; // r13
  void **v20; // r14
  void *v21; // r12
  size_t v22; // rbp
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  __int64 *v29; // r15
  __int64 v30; // rax
  _QWORD *v31; // rcx
  unsigned int v32; // eax
  char *v33; // rax
  size_t v34; // r8
  unsigned __int8 *v35; // r9
  char v36; // r14
  unsigned __int64 v37; // rax
  char v38; // al
  __int64 v39; // rdx
  char *v40; // rax
  char *v41; // rdx
  __int64 v42; // r13
  char *v43; // rax
  char *v44; // r8
  char *v45; // rax
  unsigned int v46; // eax
  int v47; // eax
  void *v48; // r13
  char *v49; // rax
  char *v50; // r13
  unsigned __int8 *v51; // [rsp+0h] [rbp-238h]
  __int64 *v52; // [rsp+0h] [rbp-238h]
  _QWORD *v53; // [rsp+8h] [rbp-230h]
  size_t v54; // [rsp+8h] [rbp-230h]
  char *v55; // [rsp+8h] [rbp-230h]
  char *v56; // [rsp+10h] [rbp-228h]
  unsigned __int8 *v57; // [rsp+10h] [rbp-228h]
  char **v58; // [rsp+20h] [rbp-218h]
  unsigned __int64 v59; // [rsp+30h] [rbp-208h] BYREF
  __int64 *v60; // [rsp+38h] [rbp-200h] BYREF
  void *v61; // [rsp+40h] [rbp-1F8h] BYREF
  __int64 v62; // [rsp+48h] [rbp-1F0h]
  __int16 v63; // [rsp+50h] [rbp-1E8h] BYREF
  void *ptr; // [rsp+58h] [rbp-1E0h]
  __int64 v65; // [rsp+60h] [rbp-1D8h]
  _BYTE v66[16]; // [rsp+68h] [rbp-1D0h] BYREF
  __int64 v67; // [rsp+78h] [rbp-1C0h] BYREF
  int v68; // [rsp+80h] [rbp-1B8h] BYREF
  void *v69; // [rsp+88h] [rbp-1B0h]
  int *v70; // [rsp+90h] [rbp-1A8h]
  int *v71; // [rsp+98h] [rbp-1A0h]
  __int64 v72; // [rsp+A0h] [rbp-198h]
  void *v73; // [rsp+A8h] [rbp-190h] BYREF
  _BYTE v74[16]; // [rsp+B8h] [rbp-180h] BYREF
  void *v75; // [rsp+C8h] [rbp-170h] BYREF
  _BYTE v76[24]; // [rsp+D8h] [rbp-160h] BYREF
  void *src[34]; // [rsp+F0h] [rbp-148h] BYREF
  char v78; // [rsp+200h] [rbp-38h] BYREF

  v3 = (char **)a3;
  v4 = a1;
  v5 = (char *)*a3;
  if ( !*a3 || strlen(*a3) != 2 || *(_WORD *)v5 != 16708 && *(_WORD *)v5 != 16964 )
  {
    v68 = 0;
    v61 = (void *)0xFFFFFFFF00000000LL;
    ptr = v66;
    v65 = 0x400000000LL;
    v70 = &v68;
    v71 = &v68;
    v73 = v74;
    v69 = nullptr;
    v72 = 0;
    sub_1045340(&v73, &byte_22CD811, (__int64)&byte_22CD811);
    v75 = v76;
    sub_1045340(&v75, &byte_22CD811, (__int64)&byte_22CD811);
    LOBYTE(v63) = 0;
    v62 = 0;
    if ( !(_BYTE)byte_2CAE5E0 && __cxa_guard_acquire(&byte_2CAE5E0) )
    {
      qword_2CAE5F0 = 0;
      qword_2CAE600 = 0x800000000LL;
      v20 = src;
      qmemcpy(src, &off_2C58700, sizeof(src));
      v56 = v5;
      qword_2CAE5F8 = 0;
      v58 = v3;
      while ( 1 )
      {
        v21 = *v20;
        v22 = (size_t)v20[1];
        v23 = sub_2220DF0(*v20, v22);
        v24 = sub_2220F70(&qword_2CAE5F0, v21, v22, v23);
        v28 = v24;
        v29 = (__int64 *)(qword_2CAE5F0 + 8LL * v24);
        if ( !*v29 )
          goto LABEL_50;
        if ( *v29 == -8 )
          break;
        sub_A21ED0(&v60, v29, 0);
LABEL_46:
        v20 += 2;
        if ( v20 == (void **)&v78 )
        {
          v5 = v56;
          v4 = a1;
          v3 = v58;
          __cxa_atexit((void (*)(void *))sub_10450A0, &qword_2CAE5F0, &off_2AFC540);
          __cxa_guard_release(&byte_2CAE5E0);
          goto LABEL_18;
        }
      }
      LODWORD(qword_2CAE600) = qword_2CAE600 - 1;
LABEL_50:
      v30 = sub_220C370(v22 + 9, 8, v24, v25, v26, v27);
      v31 = (_QWORD *)v30;
      if ( v22 )
      {
        v53 = (_QWORD *)v30;
        memcpy((void *)(v30 + 8), v21, v22);
        v31 = v53;
      }
      *((_BYTE *)v31 + v22 + 8) = 0;
      *v31 = v22;
      *v29 = (__int64)v31;
      ++HIDWORD(qword_2CAE5F8);
      v32 = sub_2221390(&qword_2CAE5F0, v28);
      sub_A21ED0(&v60, (__int64 *)(qword_2CAE5F0 + 8LL * v32), 0);
      goto LABEL_46;
    }
LABEL_18:
    v11 = *v3;
    v12 = **v3;
    if ( v12 == 73 )
    {
      LODWORD(v61) = (unsigned int)v61 | 0x10;
      v62 = 0x40FFFFFFF0LL;
      LOBYTE(v63) = 1;
      goto LABEL_22;
    }
    if ( v12 > 73 )
    {
      if ( v12 == 74 )
      {
        LODWORD(v61) = (unsigned int)v61 | 0x10;
        v62 = 0x7FFFFFFF8000LL;
        LOBYTE(v63) = 1;
        goto LABEL_22;
      }
    }
    else if ( (unsigned __int8)(v12 - 65) <= 2u )
    {
LABEL_21:
      LODWORD(v61) = (unsigned int)v61 | 0x10;
LABEL_22:
      v13 = -1;
      src[0] = &src[2];
      if ( v5 )
        v13 = (__int64)&v5[strlen(v5)];
      sub_1045340(src, v5, v13);
      v14 = *v3;
      v15 = src[1];
      v16 = src[0];
      v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
      v17 = v14 - v5 + 1;
      if ( v17 > (unsigned __int64)v15 )
        v17 = (unsigned __int64)v15;
      sub_1045340(v4, v16, (__int64)&v16[v17]);
      if ( src[0] != &src[2] )
        operator delete(src[0]);
      goto LABEL_28;
    }
    src[0] = *v3;
    v33 = (char *)strlen((const char *)src[0]);
    v34 = (size_t)v33;
    src[1] = v33;
    if ( v33 == (_BYTE *)&dword_0 + 2 )
    {
      if ( *(_WORD *)v11 == 16708 || *(_WORD *)v11 == 16964 )
      {
        *v3 = v11 + 1;
        goto LABEL_21;
      }
    }
    else if ( !v33 )
    {
      goto LABEL_58;
    }
    if ( *v11 == 123 )
    {
      v34 = (size_t)(v33 - 1);
      v35 = (unsigned __int8 *)(v11 + 1);
      src[0] = v11 + 1;
      src[1] = v33 - 1;
      if ( v33 == (_BYTE *)&dword_0 + 1 )
        goto LABEL_58;
      v36 = 1;
      v37 = (unsigned int)(unsigned __int8)v11[1] - 97;
      if ( (unsigned __int8)(v11[1] - 97) > 0x15u )
        goto LABEL_89;
    }
    else
    {
      v35 = (unsigned __int8 *)v11;
      v36 = 0;
      v37 = (unsigned int)(unsigned __int8)*v11 - 97;
      if ( (unsigned __int8)(*v11 - 97) > 0x15u )
        goto LABEL_58;
    }
    v39 = 2359297;
    if ( _bittest64(&v39, v37) )
    {
      src[0] = v35 + 1;
      src[1] = (void *)(v34 - 1);
      if ( !v36 )
      {
        if ( v34 == 1 )
        {
          LODWORD(v61) = (unsigned int)v61 | 2;
          *v3 = (char *)v35;
          goto LABEL_22;
        }
        goto LABEL_58;
      }
      if ( v34 == 1 )
        goto LABEL_58;
      if ( v35[1] == 91 )
      {
        src[0] = v35 + 2;
        src[1] = (void *)(v34 - 2);
        if ( v34 == 2 )
          goto LABEL_58;
      }
      else
      {
        v36 = 0;
      }
      if ( (unsigned __int8)sub_2223B40(src, 10, &v59) )
      {
LABEL_58:
        *v3 = v5;
        v38 = *v5;
        v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
        v4[1].m128i_i8[0] = v38;
        v4->m128i_i64[1] = 1;
        v4[1].m128i_i8[1] = 0;
LABEL_28:
        if ( v75 != v76 )
          operator delete(v75);
        if ( v73 != v74 )
          operator delete(v73);
        v18 = (_QWORD **)v69;
        if ( v69 )
        {
          do
          {
            sub_10454F0((__int64)&v67, v18[3]);
            v19 = (_QWORD **)v18[2];
            operator delete(v18);
            v18 = v19;
          }
          while ( v19 );
        }
        if ( ptr != v66 )
          free(ptr);
        return v4;
      }
      v40 = (char *)src[1];
      if ( src[1] && *(_BYTE *)src[0] == 58 )
      {
        ++src[0];
        --src[1];
        if ( !v36 || (unsigned __int8)sub_2223B40(src, 10, &v60) || v59 >= (unsigned __int64)v60 )
          goto LABEL_58;
        v40 = (char *)src[1];
      }
      else if ( !v36 )
      {
LABEL_84:
        if ( v40 )
        {
          v41 = (char *)src[0];
          if ( *(_BYTE *)src[0] == 125 )
          {
            ++src[0];
            src[1] = v40 - 1;
            if ( v40 == (_BYTE *)&dword_0 + 1 )
            {
              LODWORD(v61) = (unsigned int)v61 | 2;
              *v3 = v41;
              goto LABEL_22;
            }
          }
        }
        goto LABEL_58;
      }
      if ( !v40 || *(_BYTE *)src[0] != 93 )
        goto LABEL_58;
      --v40;
      ++src[0];
      src[1] = v40;
      goto LABEL_84;
    }
    if ( !v36 )
      goto LABEL_58;
LABEL_89:
    v54 = v34;
    v51 = v35;
    v42 = -1;
    v43 = (char *)memchr(v35, 125, v34);
    v44 = (char *)v54;
    if ( v43 )
    {
      v45 = (char *)(v43 - (char *)v51);
      v42 = (__int64)v45;
      if ( v54 > (unsigned __int64)v45 )
        v44 = v45;
    }
    v57 = v51;
    v55 = v44;
    sub_1038E20(&v60, (__int64 *)(qword_2CAE5F0 + 8LL * (unsigned int)qword_2CAE5F8), 1);
    v52 = v60;
    v46 = sub_2220DF0(v57, v55);
    v47 = sub_2221120(&qword_2CAE5F0, v57, v55, v46);
    if ( v47 == -1 )
      sub_1038E20(&v60, (__int64 *)(qword_2CAE5F0 + 8LL * (unsigned int)qword_2CAE5F8), 1);
    else
      sub_1038E20(&v60, (__int64 *)(qword_2CAE5F0 + 8LL * v47), 1);
    if ( v52 == v60 )
      goto LABEL_58;
    v48 = (void *)(v42 + 1);
    if ( v48 > src[1] )
    {
      v50 = (char *)src[0] + (unsigned __int64)src[1];
    }
    else
    {
      v49 = (char *)((char *)src[1] - (char *)v48);
      if ( (char *)src[1] - (char *)v48 == -1 )
        goto LABEL_58;
      v50 = (char *)src[0] + (unsigned __int64)v48;
      src[1] = v49;
      src[0] = v50;
      if ( v49 )
        goto LABEL_58;
    }
    LODWORD(v61) = (unsigned int)v61 | 2;
    *v3 = v50 - 1;
    goto LABEL_22;
  }
  *v3 = v5 + 1;
  src[0] = &src[2];
  v6 = &v63;
  sub_1045340(src, v5, (__int64)(v5 + 2));
  v7 = src[1];
  v61 = &v63;
  v63 = 94;
  v62 = 1;
  v8 = (char *)src[1] + 1;
  if ( (unsigned __int64)src[1] + 1 <= 0xF )
  {
    if ( src[1] )
    {
      if ( src[1] == (char *)&dword_0 + 1 )
        HIBYTE(v63) = *(_BYTE *)src[0];
      else
        memcpy((char *)&v63 + 1, src[0], (size_t)src[1]);
    }
  }
  else
  {
    if ( src[0] != &src[2] && v8 <= src[2] )
    {
      v9 = (__m128i *)sub_978080(src, 0, 0, &v63, 1u);
      goto LABEL_9;
    }
    sub_974DF0((__int64)&v61, 1u, 0, (_BYTE *)src[0], (size_t)src[1]);
    v6 = (__int16 *)v61;
  }
  v62 = (__int64)v8;
  v9 = (__m128i *)&v61;
  v7[(_QWORD)v6 + 1] = 0;
LABEL_9:
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    a1[1] = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    a1->m128i_i64[0] = v9->m128i_i64[0];
    a1[1].m128i_i64[0] = v9[1].m128i_i64[0];
  }
  a1->m128i_i64[1] = v9->m128i_i64[1];
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  v9[1].m128i_i8[0] = 0;
  if ( v61 != &v63 )
    operator delete(v61);
  if ( src[0] != &src[2] )
    operator delete(src[0]);
  return v4;
}

