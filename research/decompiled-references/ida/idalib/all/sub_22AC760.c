const __m128i *__fastcall sub_22AC760(__m128i *a1)
{
  __m128i *v1; // r15
  void **v2; // r13
  __m128i *v3; // r12
  __m128i si128; // xmm0
  __m128i *v5; // rbx
  __m128i *v6; // rbp
  __int64 v7; // rax
  _BYTE *v8; // rdx
  char *v9; // rbx
  signed __int64 v10; // rdx
  const char *v11; // rsi
  void **v12; // rbp
  const char *v13; // r14
  size_t v14; // rax
  void *v15; // rcx
  _QWORD *v16; // rax
  __m128i *v17; // r14
  char *v18; // rbp
  __m128i *v19; // rbx
  __int64 v20; // rbp
  const char *v21; // rsi
  size_t v22; // rax
  void *v23; // rdx
  void *v24; // r14
  __m128i *v25; // rdx
  __m128i *v26; // r14
  __m128i *v27; // r13
  char *v28; // r12
  __m128i *v29; // rbx
  char *v30; // rbx
  const char *v31; // rsi
  size_t v32; // rax
  size_t v33; // r14
  _QWORD *v34; // rax
  __m128i *v35; // r14
  char *v36; // rbp
  __m128i *v37; // rbx
  const char *v38; // rsi
  size_t v39; // rax
  _BYTE *v40; // rdx
  size_t v41; // r14
  __m128i *v42; // r14
  __m128i *v43; // rbx
  char *v44; // rbx
  void *v45; // rdi
  const __m128i *result; // rax
  void *v47; // rdi
  void *v48; // rax
  void *v49; // rax
  int v50; // edx
  __m128i *v51; // rbp
  __m128i *v52; // rbx
  char *v53; // rbp
  __int64 v54; // rdx
  __m128i *v55; // r14
  __m128i *v56; // rbp
  char *v57; // rbp
  __int64 v58; // rdx
  char *v59; // rbp
  __int64 v60; // rdx
  __m128i *v61; // r14
  __m128i *v62; // rbp
  const __m128i *v63; // [rsp+30h] [rbp-108h]
  void **src; // [rsp+38h] [rbp-100h]
  void **srca; // [rsp+38h] [rbp-100h]
  void **srcb; // [rsp+38h] [rbp-100h]
  void *srcc; // [rsp+38h] [rbp-100h]
  void *srcd; // [rsp+38h] [rbp-100h]
  char *v69; // [rsp+40h] [rbp-F8h]
  char *v70; // [rsp+48h] [rbp-F0h]
  __int64 v71; // [rsp+50h] [rbp-E8h]
  _BYTE *v72; // [rsp+58h] [rbp-E0h]
  char v73; // [rsp+67h] [rbp-D1h]
  void *s2[2]; // [rsp+70h] [rbp-C8h] BYREF
  void *v76[2]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v77[2]; // [rsp+90h] [rbp-A8h] BYREF
  void *v78[2]; // [rsp+A0h] [rbp-98h] BYREF
  void *v79; // [rsp+B0h] [rbp-88h]
  void *v80; // [rsp+C0h] [rbp-78h] BYREF
  size_t v81; // [rsp+C8h] [rbp-70h]
  _QWORD v82[2]; // [rsp+D0h] [rbp-68h] BYREF
  void *v83; // [rsp+E0h] [rbp-58h] BYREF
  size_t v84; // [rsp+E8h] [rbp-50h]
  size_t v85; // [rsp+F0h] [rbp-48h]

  v1 = a1 + 2;
  v2 = &v83;
  do
  {
    v73 = 0;
    v3 = a1;
    v63 = (const __m128i *)&off_2BF2AE0;
    do
    {
      si128 = _mm_load_si128(v63);
      v83 = v2 + 2;
      *(__m128i *)s2 = si128;
      if ( si128.m128i_i64[0] )
      {
        sub_22A8AD0(v2, si128.m128i_i64[0], (__int64)s2[1] + si128.m128i_i64[0]);
        v5 = (__m128i *)v3[2].m128i_i64[1];
        if ( v5 )
        {
LABEL_5:
          v6 = v1;
          do
          {
            while ( !sub_2234B00((__int64)v5[2].m128i_i64, (__int64)v2) )
            {
              v6 = v5;
              v5 = (__m128i *)v5[1].m128i_i64[0];
              if ( !v5 )
                goto LABEL_9;
            }
            v5 = (__m128i *)v5[1].m128i_i64[1];
          }
          while ( v5 );
LABEL_9:
          if ( v6 != v1 && !sub_2234B00((__int64)v2, (__int64)v6[2].m128i_i64) )
          {
            if ( v83 != v2 + 2 )
              operator delete(v83);
            goto LABEL_73;
          }
        }
        if ( v83 != v2 + 2 )
          operator delete(v83);
        goto LABEL_13;
      }
      v5 = (__m128i *)v3[2].m128i_i64[1];
      LOBYTE(v85) = 0;
      v84 = 0;
      if ( v5 )
        goto LABEL_5;
LABEL_13:
      v7 = sub_22A8730((__int64)s2);
      v72 = v8;
      v9 = (char *)v7;
      v10 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v8[-v7] >> 3);
      if ( v10 >> 2 <= 0 )
        goto LABEL_104;
      v11 = *(const char **)(v7 + 16);
      v76[0] = v77;
      if ( !v11 )
LABEL_69:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v12 = v78;
      v13 = v11;
      v71 = v7 + 96 * (v10 >> 2);
      while ( 1 )
      {
        v14 = strlen(v13);
        v15 = (void *)v14;
        if ( v14 > 0xF )
        {
          srcc = (void *)v14;
          v16 = (_QWORD *)operator new(v14 + 1);
          v15 = srcc;
          v76[0] = v16;
          v77[0] = srcc;
LABEL_86:
          srcd = v15;
          memcpy(v16, v13, (size_t)v15);
          v16 = v76[0];
          v15 = srcd;
          goto LABEL_19;
        }
        if ( v14 == 1 )
        {
          LOBYTE(v77[0]) = *v13;
          v16 = v76[0];
        }
        else
        {
          v16 = v77;
          if ( v15 )
            goto LABEL_86;
        }
LABEL_19:
        v76[1] = v15;
        *((_BYTE *)v15 + (_QWORD)v16) = 0;
        if ( !v3[2].m128i_i64[1] )
          break;
        src = v12;
        v17 = v1;
        v18 = v9;
        v19 = (__m128i *)v3[2].m128i_i64[1];
        do
        {
          while ( !sub_2234B00((__int64)v19[2].m128i_i64, (__int64)v76) )
          {
            v17 = v19;
            v19 = (__m128i *)v19[1].m128i_i64[0];
            if ( !v19 )
              goto LABEL_24;
          }
          v19 = (__m128i *)v19[1].m128i_i64[1];
        }
        while ( v19 );
LABEL_24:
        v9 = v18;
        v20 = (__int64)src;
        if ( v17 == v1 || sub_2234B00((__int64)v76, (__int64)v17[2].m128i_i64) )
          break;
        if ( v76[0] != v77 )
          operator delete(v76[0]);
        v21 = *((const char **)v9 + 5);
        v70 = v9 + 24;
        v78[0] = src + 2;
        if ( !v21 )
          goto LABEL_69;
        v22 = strlen(v21);
        v23 = src + 2;
        v24 = (void *)v22;
        if ( v22 > 0xF )
        {
          v48 = (void *)operator new(v22 + 1);
          v79 = v24;
          v78[0] = v48;
          goto LABEL_90;
        }
        if ( v22 == 1 )
        {
          LOBYTE(v79) = *v21;
        }
        else if ( v22 )
        {
          v48 = src + 2;
LABEL_90:
          memcpy(v48, v21, (size_t)v24);
          v23 = v78[0];
        }
        v78[1] = v24;
        *((_BYTE *)v24 + (_QWORD)v23) = 0;
        v25 = (__m128i *)v3[2].m128i_i64[1];
        if ( !v25 )
          goto LABEL_78;
        srca = v2;
        v26 = v1;
        v27 = v3;
        v28 = v9;
        v29 = v25;
        do
        {
          while ( !sub_2234B00((__int64)v29[2].m128i_i64, v20) )
          {
            v26 = v29;
            v29 = (__m128i *)v29[1].m128i_i64[0];
            if ( !v29 )
              goto LABEL_37;
          }
          v29 = (__m128i *)v29[1].m128i_i64[1];
        }
        while ( v29 );
LABEL_37:
        v30 = v28;
        v3 = v27;
        v2 = srca;
        if ( v1 == v26 || sub_2234B00(v20, (__int64)v26[2].m128i_i64) )
        {
LABEL_78:
          v47 = v78[0];
          if ( v78[0] != (void *)(v20 + 16) )
          {
LABEL_79:
            operator delete(v47);
            v9 = v70;
            goto LABEL_72;
          }
LABEL_84:
          v9 = v70;
          goto LABEL_72;
        }
        if ( v78[0] != (void *)(v20 + 16) )
          operator delete(v78[0]);
        v31 = *((const char **)v30 + 8);
        v69 = v30 + 48;
        v80 = v82;
        if ( !v31 )
          goto LABEL_69;
        v32 = strlen(v31);
        v33 = v32;
        if ( v32 > 0xF )
        {
          v34 = (_QWORD *)operator new(v32 + 1);
          v82[0] = v33;
          v80 = v34;
LABEL_94:
          memcpy(v34, v31, v33);
          v34 = v80;
          goto LABEL_45;
        }
        if ( v32 == 1 )
        {
          LOBYTE(v82[0]) = *v31;
          v34 = v82;
        }
        else
        {
          v34 = v82;
          if ( v33 )
            goto LABEL_94;
        }
LABEL_45:
        v81 = v33;
        *((_BYTE *)v34 + v33) = 0;
        if ( !v3[2].m128i_i64[1] )
          goto LABEL_80;
        srcb = (void **)v20;
        v35 = v1;
        v36 = v30;
        v37 = (__m128i *)v3[2].m128i_i64[1];
        do
        {
          while ( !sub_2234B00((__int64)v37[2].m128i_i64, (__int64)&v80) )
          {
            v35 = v37;
            v37 = (__m128i *)v37[1].m128i_i64[0];
            if ( !v37 )
              goto LABEL_50;
          }
          v37 = (__m128i *)v37[1].m128i_i64[1];
        }
        while ( v37 );
LABEL_50:
        if ( v1 == v35 || sub_2234B00((__int64)&v80, (__int64)v35[2].m128i_i64) )
        {
LABEL_80:
          if ( v80 != v82 )
            operator delete(v80);
          v9 = v69;
          goto LABEL_72;
        }
        if ( v80 != v82 )
          operator delete(v80);
        v38 = *((const char **)v36 + 11);
        v70 = v36 + 72;
        v83 = v2 + 2;
        if ( !v38 )
          goto LABEL_69;
        v39 = strlen(v38);
        v40 = v2 + 2;
        v41 = v39;
        if ( v39 > 0xF )
        {
          v49 = (void *)operator new(v39 + 1);
          v85 = v41;
          v83 = v49;
          goto LABEL_98;
        }
        if ( v39 == 1 )
        {
          LOBYTE(v85) = *v38;
        }
        else if ( v39 )
        {
          v49 = v2 + 2;
LABEL_98:
          memcpy(v49, v38, v41);
          v40 = v83;
        }
        v84 = v41;
        v40[v41] = 0;
        if ( !v3[2].m128i_i64[1] )
          goto LABEL_83;
        v42 = v1;
        v43 = (__m128i *)v3[2].m128i_i64[1];
        do
        {
          while ( !sub_2234B00((__int64)v43[2].m128i_i64, (__int64)v2) )
          {
            v42 = v43;
            v43 = (__m128i *)v43[1].m128i_i64[0];
            if ( !v43 )
              goto LABEL_63;
          }
          v43 = (__m128i *)v43[1].m128i_i64[1];
        }
        while ( v43 );
LABEL_63:
        v44 = v36;
        v12 = srcb;
        if ( v1 == v42 || sub_2234B00((__int64)v2, (__int64)v42[2].m128i_i64) )
        {
LABEL_83:
          v47 = v83;
          if ( v83 != v2 + 2 )
            goto LABEL_79;
          goto LABEL_84;
        }
        if ( v83 != v2 + 2 )
          operator delete(v83);
        v9 = v44 + 96;
        if ( v9 == (char *)v71 )
        {
          v10 = 0xAAAAAAAAAAAAAAABLL * ((v72 - v9) >> 3);
LABEL_104:
          if ( v10 == 2 )
            goto LABEL_145;
          if ( v10 != 3 )
          {
            if ( v10 != 1 )
              goto LABEL_107;
            goto LABEL_126;
          }
          v57 = *((char **)v9 + 2);
          v58 = -1;
          v83 = v2 + 2;
          if ( v57 )
            v58 = (__int64)&v57[strlen(v57)];
          sub_22A8AD0(v2, v57, v58);
          if ( v1 != (__m128i *)sub_22A98A0((__int64)&v3[1].m128i_i64[1], (__int64)v2) )
          {
            if ( v83 != v2 + 2 )
              operator delete(v83);
            v9 += 24;
LABEL_145:
            v59 = *((char **)v9 + 2);
            v60 = -1;
            v83 = v2 + 2;
            if ( v59 )
              v60 = (__int64)&v59[strlen(v59)];
            sub_22A8AD0(v2, v59, v60);
            v61 = (__m128i *)v3[2].m128i_i64[1];
            if ( v61 )
            {
              v62 = v1;
              do
              {
                if ( sub_2234B00((__int64)v61[2].m128i_i64, (__int64)v2) )
                {
                  v61 = (__m128i *)v61[1].m128i_i64[1];
                }
                else
                {
                  v62 = v61;
                  v61 = (__m128i *)v61[1].m128i_i64[0];
                }
              }
              while ( v61 );
              if ( v1 != v62 && !sub_2234B00((__int64)v2, (__int64)v62[2].m128i_i64) )
              {
                if ( v83 != v2 + 2 )
                  operator delete(v83);
                v9 += 24;
LABEL_126:
                v53 = *((char **)v9 + 2);
                v54 = -1;
                v83 = v2 + 2;
                if ( v53 )
                  v54 = (__int64)&v53[strlen(v53)];
                sub_22A8AD0(v2, v53, v54);
                v55 = (__m128i *)v3[2].m128i_i64[1];
                if ( v55 )
                {
                  v56 = v1;
                  do
                  {
                    while ( !sub_2234B00((__int64)v55[2].m128i_i64, (__int64)v2) )
                    {
                      v56 = v55;
                      v55 = (__m128i *)v55[1].m128i_i64[0];
                      if ( !v55 )
                        goto LABEL_133;
                    }
                    v55 = (__m128i *)v55[1].m128i_i64[1];
                  }
                  while ( v55 );
LABEL_133:
                  if ( v56 != v1 && !sub_2234B00((__int64)v2, (__int64)v56[2].m128i_i64) )
                  {
                    if ( v83 != v2 + 2 )
                      operator delete(v83);
LABEL_107:
                    v80 = (void *)sub_22A8BD0(s2[0], (size_t)s2[1]);
                    LODWORD(v81) = v50;
                    v83 = v2 + 2;
                    if ( s2[0] )
                    {
                      sub_22A8AD0(v2, (_BYTE *)s2[0], (__int64)s2[0] + (unsigned __int64)s2[1]);
                    }
                    else
                    {
                      v84 = 0;
                      LOBYTE(v85) = 0;
                    }
                    v51 = (__m128i *)v3[2].m128i_i64[1];
                    v52 = v1;
                    if ( !v51 )
                      goto LABEL_116;
                    do
                    {
                      while ( !sub_2234B00((__int64)v51[2].m128i_i64, (__int64)v2) )
                      {
                        v52 = v51;
                        v51 = (__m128i *)v51[1].m128i_i64[0];
                        if ( !v51 )
                          goto LABEL_114;
                      }
                      v51 = (__m128i *)v51[1].m128i_i64[1];
                    }
                    while ( v51 );
LABEL_114:
                    if ( v52 == v1 || sub_2234B00((__int64)v2, (__int64)v52[2].m128i_i64) )
                    {
LABEL_116:
                      v78[0] = v2;
                      v52 = sub_22ABC80(&v3[1].m128i_i64[1], v52, (__m128i **)v78);
                    }
                    v52[4].m128i_i64[0] = (__int64)v80;
                    if ( v83 != v2 + 2 )
                      operator delete(v83);
                    v73 = 1;
                    goto LABEL_73;
                  }
                }
              }
            }
          }
          v45 = v83;
          if ( v83 != v2 + 2 )
            goto LABEL_71;
          goto LABEL_72;
        }
        v13 = *((const char **)v9 + 2);
        v76[0] = v77;
        if ( !v13 )
          goto LABEL_69;
      }
      v45 = v76[0];
      if ( v76[0] == v77 )
        goto LABEL_72;
LABEL_71:
      operator delete(v45);
LABEL_72:
      if ( v72 == v9 )
        goto LABEL_107;
LABEL_73:
      result = ++v63;
    }
    while ( &off_2BF2B80 != (_UNKNOWN **)v63 );
  }
  while ( v73 );
  return result;
}
