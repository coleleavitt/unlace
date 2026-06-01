void __fastcall __noreturn sub_448800(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // r8d
  int v8; // r9d
  void *v9; // rsi
  __m128i **v10; // r14
  int v11; // r8d
  int v12; // r9d
  __m128i *v13; // rax
  unsigned __int64 v14; // r12
  __m128i *v15; // r15
  __int8 *v16; // r12
  const char *v17; // r15
  size_t v18; // rax
  size_t v19; // r14
  size_t v20; // r12
  size_t v21; // r15
  char *v22; // rsi
  size_t v23; // r12
  _QWORD *v24; // r12
  size_t v25; // r15
  char *v26; // rax
  _QWORD *v27; // rbp
  char *v28; // r14
  char *v29; // r13
  _QWORD *v30; // rbx
  const char *v31; // rdi
  int v32; // eax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  char *v36; // rdx
  const char *v37; // rdi
  __int64 v38; // rax
  size_t v39; // r15
  __int64 v40; // r14
  _QWORD *v41; // rax
  __int64 v42; // rdx
  void *v43; // rdi
  _QWORD *v44; // r14
  void *v45; // rax
  char *v46; // rsi
  __int64 v47; // rax
  __m128i *v48; // rdx
  __m128i *v49; // rsi
  __m128i *v50; // rdi
  __int64 v51; // rdx
  __m128i v52; // xmm0
  char *v54; // rsi
  const char *v55; // rsi
  const char *v56; // rdi
  __int64 v57; // [rsp+0h] [rbp-4D8h]
  _QWORD *v58; // [rsp+8h] [rbp-4D0h]
  __int64 v59; // [rsp+18h] [rbp-4C0h]
  char *v60; // [rsp+18h] [rbp-4C0h]
  __int64 v61; // [rsp+20h] [rbp-4B8h]
  int v62; // [rsp+3Ch] [rbp-49Ch] BYREF
  int v63; // [rsp+40h] [rbp-498h] BYREF
  int v64; // [rsp+44h] [rbp-494h] BYREF
  __int64 v65; // [rsp+48h] [rbp-490h] BYREF
  void *ptr; // [rsp+50h] [rbp-488h] BYREF
  __int128 v67; // [rsp+58h] [rbp-480h]
  char *s2; // [rsp+70h] [rbp-468h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-460h]
  _BYTE v70[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v71; // [rsp+498h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v3 = qfopen(a2, "r");
  if ( !v3 )
    sub_4435A0(a2, (__int64)"r", v4, v5);
  v6 = v3;
  v62 = 0;
  ptr = nullptr;
  v67 = 0;
  while ( qfgets(v70, 1024, v6) )
  {
    if ( v70[0] != 59 && v70[0] != 10 )
    {
      if ( (unsigned int)qsscanf(
                           (int)v70,
                           (int)"*** Merging journal version=%d,policy=%d",
                           (int)&v63,
                           (int)&v62,
                           v7,
                           v8,
                           (char)v70) != 2
        || v63 > 1
        || (v10 = nullptr, v62 > 5) )
      {
        sub_3573A0((char **)&ptr);
        goto LABEL_8;
      }
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            if ( !qfgets(v57, 1024, v6) )
              goto LABEL_78;
            if ( v70[0] == 10 || v70[0] == 59 )
              continue;
            break;
          }
          if ( !v10 || *(_WORD *)v57 == 15677 && *(_BYTE *)(v57 + 2) == 61 )
          {
            if ( (unsigned int)qsscanf(v57, (int)"=== %zu %n", (int)&v65, (int)&v64, v11, v12, v57) != 1 )
              goto LABEL_77;
            s2 = nullptr;
            *(_OWORD *)n = 0;
            v17 = (const char *)(v57 + v64);
            v18 = strlen(v17);
            v19 = v18 + 1;
            v20 = v18;
            s2 = (char *)qvector_reserve(&s2, 0, v18 + 1, 1);
            n[0] = v19;
            memmove(s2, v17, v20);
            s2[v20] = 0;
            v21 = n[0];
            v22 = s2;
            v23 = n[0] - 1;
            if ( (signed __int64)(n[0] - 1) <= 1 )
            {
              if ( s2 )
              {
                n[0] = 0;
                qfree(s2);
                s2 = nullptr;
                n[1] = 0;
              }
            }
            else
            {
              if ( n[1] < v23 )
              {
                s2 = (char *)qvector_reserve(&s2, s2, n[0] - 1, 1);
                v22 = s2;
              }
              n[0] = v23;
              v22[v21 - 2] = 0;
            }
            v24 = (_QWORD *)(a1 + 240);
            v58 = (_QWORD *)(a1 + 240);
            if ( !*(_QWORD *)(a1 + 248) )
            {
              v24 = (_QWORD *)(a1 + 240);
              goto LABEL_53;
            }
            v25 = n[0];
            v59 = v6;
            v26 = (char *)haystack;
            v61 = a1;
            v27 = *(_QWORD **)(a1 + 248);
            v28 = s2;
            if ( n[0] )
              v26 = s2;
            v29 = v26;
LABEL_42:
            v34 = v27[5];
            if ( v25 )
            {
              if ( v34 )
                goto LABEL_46;
              v30 = v27;
              v22 = v28;
              v31 = haystack;
            }
            else
            {
              if ( !v34 )
              {
                while ( 1 )
                {
                  v35 = v27[2];
                  if ( !v35 )
                    break;
                  v24 = v27;
                  v27 = (_QWORD *)v27[2];
                  if ( *(_QWORD *)(v35 + 40) )
                    goto LABEL_46;
                }
                v36 = v28;
                v44 = v27;
                a1 = v61;
                v6 = v59;
                v24 = v44;
LABEL_48:
                if ( v58 == v24 )
                  goto LABEL_53;
                if ( v24[5] )
                {
                  v22 = (char *)v24[4];
                  v37 = haystack;
                  if ( v25 )
                    goto LABEL_51;
LABEL_52:
                  v60 = v36;
                  if ( strcmp(v37, v22) >= 0 )
                  {
                    v36 = v60;
                  }
                  else
                  {
LABEL_53:
                    v38 = operator new(0x58u);
                    v39 = n[0];
                    *(_QWORD *)(v38 + 32) = 0;
                    v40 = v38;
                    *(_OWORD *)(v38 + 40) = 0;
                    if ( v39 )
                    {
                      v45 = (void *)qalloc_or_throw(v39, v22);
                      *(_QWORD *)(v40 + 32) = v45;
                      v46 = s2;
                      *(_QWORD *)(v40 + 48) = v39;
                      memcpy(v45, v46, v39);
                      *(_QWORD *)(v40 + 40) = v39;
                    }
                    *(_QWORD *)(v40 + 80) = 0;
                    *(_QWORD *)(v40 + 56) = 0;
                    *(_OWORD *)(v40 + 64) = 0;
                    v41 = sub_448630((_QWORD *)(a1 + 232), v24, v40 + 32);
                    v24 = v41;
                    if ( v42 )
                    {
                      if ( !v41 && v58 != (_QWORD *)v42 )
                      {
                        v55 = haystack;
                        if ( *(_QWORD *)(v42 + 40) )
                          v55 = *(const char **)(v42 + 32);
                        v56 = haystack;
                        if ( *(_QWORD *)(v40 + 40) )
                          v56 = *(const char **)(v40 + 32);
                        strcmp(v56, v55);
                      }
                      v24 = (_QWORD *)v40;
                      std::_Rb_tree_insert_and_rebalance();
                      ++*(_QWORD *)(a1 + 272);
                    }
                    else if ( v40 )
                    {
                      v43 = *(void **)(v40 + 32);
                      if ( v43 )
                      {
                        *(_QWORD *)(v40 + 40) = 0;
                        qfree(v43);
                      }
                      operator delete((void *)v40, 0x58u);
                    }
                    v36 = s2;
                  }
                }
                else
                {
                  v22 = (char *)haystack;
                  if ( v25 )
                  {
LABEL_51:
                    v37 = v36;
                    goto LABEL_52;
                  }
                }
                v10 = (__m128i **)(v24 + 7);
                v24[10] = v65;
                if ( v36 )
                {
                  n[0] = 0;
                  qfree(v36);
                }
                continue;
              }
LABEL_46:
              v31 = (const char *)v27[4];
              v30 = v27;
              v22 = v29;
            }
            v32 = strcmp(v31, v22);
            v33 = (_QWORD *)v27[2];
            v27 = (_QWORD *)v27[3];
            if ( v32 >= 0 )
            {
              v24 = v30;
              v27 = v33;
            }
            if ( !v27 )
            {
              v6 = v59;
              a1 = v61;
              v36 = v28;
              goto LABEL_48;
            }
            goto LABEL_42;
          }
          break;
        }
        v13 = v10[1];
        v14 = (unsigned __int64)v10[2];
        if ( v14 < (unsigned __int64)v13->m128i_u64 + 1 )
        {
          v47 = qvector_reserve(v10, 0, &v13->m128i_i8[1], 24);
          v48 = v10[1];
          v49 = v10[2];
          v15 = (__m128i *)v47;
          v10[2] = (__m128i *)v14;
          v50 = *v10;
          v51 = (__int64)&v48[-1].m128i_i64[1] + 7;
          if ( v51 >= 0 )
          {
            do
            {
              v52 = _mm_loadu_si128(v50);
              v47 += 24;
              v50 = (__m128i *)((char *)v50 + 24);
              *(__m128i *)(v47 - 24) = v52;
              *(_QWORD *)(v47 - 8) = v50[-1].m128i_i64[1];
            }
            while ( v51-- != 0 );
            v50 = *v10;
          }
          qfree(v50);
          v13 = v10[1];
          *v10 = v15;
          v10[2] = v49;
        }
        else
        {
          v15 = *v10;
        }
        v16 = &v15->m128i_i8[24 * (_QWORD)v13];
        v16[16] = 6;
        *(_OWORD *)v16 = 0;
        v10[1] = (__m128i *)((char *)v10[1] + 1);
        if ( (unsigned int)qsscanf(v57, (int)"M:%zu,%zu:%d", (int)v15 + 24 * (int)v13, (int)v16 + 8, (int)&s2, v12, v57) == 3
          && (int)s2 <= 5 )
        {
          v16[16] = (char)s2;
          continue;
        }
        break;
      }
LABEL_77:
      sub_3573A0((char **)&ptr);
LABEL_78:
      if ( (unsigned __int64)v67 <= 1 && !*(_QWORD *)(a1 + 272) )
      {
        v54 = (char *)ptr;
        if ( *((_QWORD *)&v67 + 1) <= 0x15u )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, 22, 1);
          v54 = (char *)ptr;
        }
        *(_QWORD *)&v67 = 22;
        *(__m128i *)v54 = _mm_load_si128((const __m128i *)&xmmword_2383960);
        *(_QWORD *)(v54 + 13) = 0x6C616E72756F6A20LL;
        *((_BYTE *)ptr + 21) = 0;
      }
LABEL_8:
      qfclose(v6);
      if ( (unsigned __int64)v67 > 1 )
        sub_365330();
      *(_BYTE *)(a1 + 288) = v62;
      sub_365330();
    }
  }
  v9 = ptr;
  if ( *((_QWORD *)&v67 + 1) <= 0xAu )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, 11, 1);
    v9 = ptr;
  }
  *(_QWORD *)&v67 = 11;
  qmemcpy(v9, "empty file", 10);
  *((_BYTE *)ptr + 10) = 0;
  goto LABEL_8;
}

