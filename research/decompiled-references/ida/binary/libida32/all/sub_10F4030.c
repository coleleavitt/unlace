_QWORD *__fastcall sub_10F4030(_QWORD *a1, const char *a2)
{
  size_t v2; // rdx
  __int64 v4; // r14
  _QWORD *v5; // rbx
  signed __int64 v6; // rax
  _QWORD *v7; // rbp
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  _BYTE *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  _BYTE *v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rdx
  void **v18; // r13
  void **v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  void **i; // rax
  char *v25; // rbp
  __int64 v26; // rax
  _BYTE *v27; // rbp
  _QWORD *v28; // r13
  _BYTE *v29; // r8
  _BYTE *v30; // rdi
  __int64 v31; // rax
  _BYTE *v32; // rsi
  _BYTE *v33; // rdi
  __int64 v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdi
  __int64 v37; // rdx
  void **v38; // rdx
  void **v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rax
  void **v44; // rax
  char *v45; // rbx
  char *v46; // r13
  void **v47; // rax
  void **v48; // r14
  void *v49; // rdi
  char *v50; // rdi
  char *v51; // rdi
  size_t v53; // rdx
  size_t v54; // rdx
  size_t v55; // rdx
  size_t v56; // rdx
  size_t v57; // rdx
  size_t v58; // rdx
  void **v59; // [rsp+0h] [rbp-68h]
  unsigned __int64 v60; // [rsp+0h] [rbp-68h]
  void **v61; // [rsp+0h] [rbp-68h]
  void **v62; // [rsp+8h] [rbp-60h]
  void **v63; // [rsp+8h] [rbp-60h]
  _BYTE *v64; // [rsp+8h] [rbp-60h]
  unsigned __int64 v65; // [rsp+10h] [rbp-58h]
  void **v66; // [rsp+18h] [rbp-50h]
  _BYTE v67[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  if ( a2 )
    v2 = strlen(a2);
  sub_220FC00(v67, a2, v2, 0);
  v4 = a1[1];
  v5 = (_QWORD *)*a1;
  v6 = 0xEEEEEEEEEEEEEEEFLL * ((v4 - *a1) >> 3);
  if ( v6 >> 2 > 0 )
  {
    v7 = &v5[60 * (v6 >> 2)];
    while ( !(unsigned __int8)sub_2210080(v67, *v5, v5[1], 0, 0) )
    {
      if ( (unsigned __int8)sub_2210080(v67, v5[15], v5[16], 0, 0) )
      {
        v5 += 15;
        goto LABEL_10;
      }
      if ( (unsigned __int8)sub_2210080(v67, v5[30], v5[31], 0, 0) )
      {
        v5 += 30;
        goto LABEL_10;
      }
      if ( (unsigned __int8)sub_2210080(v67, v5[45], v5[46], 0, 0) )
      {
        v5 += 45;
        goto LABEL_10;
      }
      v5 += 60;
      if ( v5 == v7 )
      {
        v6 = 0xEEEEEEEEEEEEEEEFLL * ((v4 - (__int64)v5) >> 3);
        goto LABEL_123;
      }
    }
    goto LABEL_10;
  }
LABEL_123:
  if ( v6 == 2 )
  {
LABEL_136:
    if ( !(unsigned __int8)sub_2210080(v67, *v5, v5[1], 0, 0) )
    {
      v5 += 15;
LABEL_126:
      if ( !(unsigned __int8)sub_2210080(v67, *v5, v5[1], 0, 0) )
        goto LABEL_70;
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  if ( v6 != 3 )
  {
    if ( v6 != 1 )
      goto LABEL_70;
    goto LABEL_126;
  }
  if ( !(unsigned __int8)sub_2210080(v67, *v5, v5[1], 0, 0) )
  {
    v5 += 15;
    goto LABEL_136;
  }
LABEL_10:
  if ( (_QWORD *)v4 == v5 )
    goto LABEL_70;
  if ( (_QWORD *)v4 != v5 + 15 )
  {
    v8 = v5 + 25;
    v65 = (unsigned __int64)&v5[0xEEEEEEEEEEEEEEF0LL * ((unsigned __int64)(v4 - 240 - (_QWORD)v5) >> 3)
                              - ((0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)(v4 - 240 - (_QWORD)v5) >> 3))
                               & 0x1FFFFFFFFFFFFFFFLL)
                              + 40];
    while ( 1 )
    {
      while ( (unsigned __int8)sub_2210080(v67, *(v8 - 10), *(v8 - 9), 0, 0) )
      {
        v8 += 15;
        if ( v8 == (_QWORD *)v65 )
          goto LABEL_33;
      }
      v9 = (_QWORD *)*(v8 - 10);
      v10 = (_BYTE *)*v5;
      if ( v9 == v8 - 8 )
      {
        v55 = *(v8 - 9);
        if ( v55 )
        {
          if ( v55 == 1 )
            *v10 = *((_BYTE *)v8 - 64);
          else
            memcpy(v10, v9, v55);
          v55 = *(v8 - 9);
          v10 = (_BYTE *)*v5;
        }
        v5[1] = v55;
        v10[v55] = 0;
        v10 = (_BYTE *)*(v8 - 10);
      }
      else
      {
        if ( v10 == (_BYTE *)(v5 + 2) )
        {
          *v5 = v9;
          v5[1] = *(v8 - 9);
          v5[2] = *(v8 - 8);
        }
        else
        {
          *v5 = v9;
          v11 = v5[2];
          v5[1] = *(v8 - 9);
          v5[2] = *(v8 - 8);
          if ( v10 )
          {
            *(v8 - 10) = v10;
            *(v8 - 8) = v11;
            goto LABEL_19;
          }
        }
        *(v8 - 10) = v8 - 8;
        v10 = v8 - 8;
      }
LABEL_19:
      *(v8 - 9) = 0;
      *v10 = 0;
      v12 = (_QWORD *)*(v8 - 6);
      v13 = (_BYTE *)v5[4];
      if ( v12 == v8 - 4 )
      {
        v54 = *(v8 - 5);
        if ( v54 )
        {
          if ( v54 == 1 )
            *v13 = *((_BYTE *)v8 - 32);
          else
            memcpy(v13, v12, v54);
          v54 = *(v8 - 5);
          v13 = (_BYTE *)v5[4];
        }
        v5[5] = v54;
        v13[v54] = 0;
        v13 = (_BYTE *)*(v8 - 6);
      }
      else
      {
        if ( v13 == (_BYTE *)(v5 + 6) )
        {
          v5[4] = v12;
          v5[5] = *(v8 - 5);
          v5[6] = *(v8 - 4);
        }
        else
        {
          v5[4] = v12;
          v14 = v5[6];
          v5[5] = *(v8 - 5);
          v5[6] = *(v8 - 4);
          if ( v13 )
          {
            *(v8 - 6) = v13;
            *(v8 - 4) = v14;
            goto LABEL_23;
          }
        }
        *(v8 - 6) = v8 - 4;
        v13 = v8 - 4;
      }
LABEL_23:
      *(v8 - 5) = 0;
      *v13 = 0;
      v15 = (_QWORD *)*(v8 - 2);
      v16 = (_BYTE *)v5[8];
      if ( v15 == v8 )
      {
        v53 = *(v8 - 1);
        if ( v53 )
        {
          if ( v53 == 1 )
            *v16 = *(_BYTE *)v8;
          else
            memcpy(v16, v8, v53);
          v53 = *(v8 - 1);
          v16 = (_BYTE *)v5[8];
        }
        v5[9] = v53;
        v16[v53] = 0;
        v16 = (_BYTE *)*(v8 - 2);
        goto LABEL_27;
      }
      if ( v16 == (_BYTE *)(v5 + 10) )
      {
        v5[8] = v15;
        v5[9] = *(v8 - 1);
        v5[10] = *v8;
LABEL_117:
        *(v8 - 2) = v8;
        v16 = v8;
        goto LABEL_27;
      }
      v5[8] = v15;
      v17 = v5[10];
      v5[9] = *(v8 - 1);
      v5[10] = *v8;
      if ( !v16 )
        goto LABEL_117;
      *(v8 - 2) = v16;
      *v8 = v17;
LABEL_27:
      *(v8 - 1) = 0;
      *v16 = 0;
      v18 = (void **)v5[12];
      v5[14] = 0;
      v19 = (void **)v5[13];
      *((_OWORD *)v5 + 6) = 0;
      v5[12] = v8[2];
      v20 = v8[3];
      v8[2] = 0;
      v21 = v5[13];
      v5[13] = v20;
      v22 = v8[4];
      v8[3] = v21;
      v23 = v5[14];
      v5[14] = v22;
      v8[4] = v23;
      for ( i = v18; v19 != i; i += 4 )
      {
        while ( *i != i + 2 )
        {
          v62 = i;
          v59 = v19;
          operator delete(*i);
          v19 = v59;
          i = v62 + 4;
          if ( v59 == v62 + 4 )
            goto LABEL_30;
        }
      }
LABEL_30:
      if ( v18 )
        operator delete(v18);
      v5 += 15;
      v8 += 15;
      if ( v8 == (_QWORD *)v65 )
      {
LABEL_33:
        if ( (_QWORD *)v4 == v5 )
          goto LABEL_70;
        break;
      }
    }
  }
  v25 = (char *)a1[1];
  v26 = (__int64)&v25[-v4];
  if ( (char *)v4 == v25 )
    goto LABEL_55;
  v60 = 0xEEEEEEEEEEEEEEEFLL * (v26 >> 3);
  if ( v26 <= 0 )
    goto LABEL_55;
  v27 = (_BYTE *)(v4 + 16);
  v28 = v5 + 10;
  do
  {
    while ( 1 )
    {
      v29 = *((_BYTE **)v27 - 2);
      v30 = (_BYTE *)*(v28 - 10);
      if ( v27 == v29 )
      {
        v57 = *((_QWORD *)v27 - 1);
        if ( v57 )
        {
          if ( v57 == 1 )
          {
            *v30 = *v27;
            v57 = *((_QWORD *)v27 - 1);
            v30 = (_BYTE *)*(v28 - 10);
          }
          else
          {
            v64 = *((_BYTE **)v27 - 2);
            memcpy(v30, v27, v57);
            v57 = *((_QWORD *)v27 - 1);
            v30 = (_BYTE *)*(v28 - 10);
            v29 = v64;
          }
        }
        *(v28 - 9) = v57;
        v30[v57] = 0;
        v30 = *((_BYTE **)v29 - 2);
      }
      else
      {
        if ( v30 == (_BYTE *)(v28 - 8) )
        {
          *(v28 - 10) = v29;
          *(v28 - 9) = *((_QWORD *)v27 - 1);
          *(v28 - 8) = *(_QWORD *)v27;
        }
        else
        {
          *(v28 - 10) = v29;
          v31 = *(v28 - 8);
          *(v28 - 9) = *((_QWORD *)v27 - 1);
          *(v28 - 8) = *(_QWORD *)v27;
          if ( v30 )
          {
            *((_QWORD *)v27 - 2) = v30;
            *(_QWORD *)v27 = v31;
            goto LABEL_41;
          }
        }
        *((_QWORD *)v27 - 2) = v27;
        v30 = v27;
      }
LABEL_41:
      *((_QWORD *)v27 - 1) = 0;
      *v30 = 0;
      v32 = *((_BYTE **)v27 + 2);
      v33 = (_BYTE *)*(v28 - 6);
      if ( v32 == v27 + 32 )
      {
        v56 = *((_QWORD *)v27 + 3);
        if ( v56 )
        {
          if ( v56 == 1 )
            *v33 = v27[32];
          else
            memcpy(v33, v32, v56);
          v56 = *((_QWORD *)v27 + 3);
          v33 = (_BYTE *)*(v28 - 6);
        }
        *(v28 - 5) = v56;
        v33[v56] = 0;
        v33 = *((_BYTE **)v27 + 2);
      }
      else
      {
        if ( v33 == (_BYTE *)(v28 - 4) )
        {
          *(v28 - 6) = v32;
          *(v28 - 5) = *((_QWORD *)v27 + 3);
          *(v28 - 4) = *((_QWORD *)v27 + 4);
        }
        else
        {
          *(v28 - 6) = v32;
          v34 = *(v28 - 4);
          *(v28 - 5) = *((_QWORD *)v27 + 3);
          *(v28 - 4) = *((_QWORD *)v27 + 4);
          if ( v33 )
          {
            *((_QWORD *)v27 + 2) = v33;
            *((_QWORD *)v27 + 4) = v34;
            goto LABEL_45;
          }
        }
        *((_QWORD *)v27 + 2) = v27 + 32;
        v33 = v27 + 32;
      }
LABEL_45:
      *((_QWORD *)v27 + 3) = 0;
      *v33 = 0;
      v35 = *((_BYTE **)v27 + 6);
      v36 = (_BYTE *)*(v28 - 2);
      if ( v35 == v27 + 64 )
      {
        v58 = *((_QWORD *)v27 + 7);
        if ( v58 )
        {
          if ( v58 == 1 )
            *v36 = v27[64];
          else
            memcpy(v36, v35, v58);
          v58 = *((_QWORD *)v27 + 7);
          v36 = (_BYTE *)*(v28 - 2);
        }
        *(v28 - 1) = v58;
        v36[v58] = 0;
        v36 = *((_BYTE **)v27 + 6);
      }
      else
      {
        if ( v36 == (_BYTE *)v28 )
        {
          *(v28 - 2) = v35;
          *(v28 - 1) = *((_QWORD *)v27 + 7);
          *v28 = *((_QWORD *)v27 + 8);
        }
        else
        {
          *(v28 - 2) = v35;
          v37 = *v28;
          *(v28 - 1) = *((_QWORD *)v27 + 7);
          *v28 = *((_QWORD *)v27 + 8);
          if ( v36 )
          {
            *((_QWORD *)v27 + 6) = v36;
            *((_QWORD *)v27 + 8) = v37;
            goto LABEL_49;
          }
        }
        *((_QWORD *)v27 + 6) = v27 + 64;
        v36 = v27 + 64;
      }
LABEL_49:
      *((_QWORD *)v27 + 7) = 0;
      *v36 = 0;
      v38 = (void **)v28[2];
      v28[4] = 0;
      v39 = (void **)v28[3];
      *((_OWORD *)v28 + 1) = 0;
      v28[2] = *((_QWORD *)v27 + 10);
      v40 = *((_QWORD *)v27 + 11);
      *((_QWORD *)v27 + 10) = 0;
      v41 = v28[3];
      v28[3] = v40;
      v42 = *((_QWORD *)v27 + 12);
      *((_QWORD *)v27 + 11) = v41;
      v43 = v28[4];
      v28[4] = v42;
      *((_QWORD *)v27 + 12) = v43;
      v44 = v38;
      if ( v38 != v39 )
        break;
LABEL_52:
      if ( !v38 )
        goto LABEL_101;
LABEL_53:
      v27 += 120;
      v28 += 15;
      operator delete(v38);
      if ( !--v60 )
      {
        v25 = (char *)a1[1];
        v26 = (__int64)&v25[-v4];
        goto LABEL_55;
      }
    }
    do
    {
      while ( *v44 != v44 + 2 )
      {
        v66 = v44;
        v63 = v38;
        operator delete(*v44);
        v38 = v63;
        v44 = v66 + 4;
        if ( v39 == v66 + 4 )
          goto LABEL_52;
      }
      v44 += 4;
    }
    while ( v39 != v44 );
    if ( v38 )
      goto LABEL_53;
LABEL_101:
    v27 += 120;
    v28 += 15;
    --v60;
  }
  while ( v60 );
  v25 = (char *)a1[1];
  v26 = (__int64)&v25[-v4];
LABEL_55:
  v45 = (char *)v5 + v26;
  if ( v45 != v25 )
  {
    v46 = v45;
    do
    {
      while ( 1 )
      {
        v47 = *((void ***)v46 + 13);
        v48 = *((void ***)v46 + 12);
        if ( v47 != v48 )
        {
          do
          {
            while ( 1 )
            {
              v49 = *v48;
              if ( *v48 == v48 + 2 )
                break;
              v61 = v47;
              v48 += 4;
              operator delete(v49);
              v47 = v61;
              if ( v48 == v61 )
                goto LABEL_60;
            }
            v48 += 4;
          }
          while ( v47 != v48 );
LABEL_60:
          v48 = *((void ***)v46 + 12);
        }
        if ( v48 )
          operator delete(v48);
        v50 = *((char **)v46 + 8);
        if ( v50 != v46 + 80 )
          operator delete(v50);
        v51 = *((char **)v46 + 4);
        if ( v51 != v46 + 48 )
          operator delete(v51);
        if ( *(char **)v46 == v46 + 16 )
          break;
        operator delete(*(void **)v46);
        v46 += 120;
        if ( v25 == v46 )
        {
          a1[1] = v45;
          goto LABEL_70;
        }
      }
      v46 += 120;
    }
    while ( v46 != v25 );
    a1[1] = v45;
  }
LABEL_70:
  sub_220FCB0(v67);
  return a1;
}

