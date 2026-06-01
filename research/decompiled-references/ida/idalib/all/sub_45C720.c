void __fastcall __noreturn sub_45C720(__int64 a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  int v5; // r8d
  int v6; // r9d
  void *v7; // rsi
  __m128i **v8; // r14
  int v9; // r8d
  int v10; // r9d
  __m128i *v11; // rax
  unsigned __int64 v12; // r12
  __m128i *v13; // r15
  __int8 *v14; // r12
  const char *v15; // r15
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // r12
  size_t v19; // r15
  char *v20; // rsi
  size_t v21; // r12
  _QWORD *v22; // r12
  size_t v23; // r15
  char *v24; // rax
  _QWORD *v25; // rbp
  char *v26; // r14
  char *v27; // r13
  _QWORD *v28; // rbx
  const char *v29; // rsi
  const char *v30; // rdi
  int v31; // eax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  char *v35; // rdx
  const char *v36; // rsi
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
  unsigned int v57; // eax
  _QWORD *v58; // [rsp+8h] [rbp-4D0h]
  __int64 v59; // [rsp+18h] [rbp-4C0h]
  char *v60; // [rsp+18h] [rbp-4C0h]
  __int64 v61; // [rsp+18h] [rbp-4C0h]
  __int64 v62; // [rsp+20h] [rbp-4B8h]
  unsigned int v63; // [rsp+2Ch] [rbp-4ACh]
  int v64; // [rsp+3Ch] [rbp-49Ch] BYREF
  int v65; // [rsp+40h] [rbp-498h] BYREF
  int v66; // [rsp+44h] [rbp-494h] BYREF
  __int64 v67; // [rsp+48h] [rbp-490h] BYREF
  void *ptr; // [rsp+50h] [rbp-488h] BYREF
  __int128 v69; // [rsp+58h] [rbp-480h]
  char *s2; // [rsp+70h] [rbp-468h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-460h]
  __int16 v72; // [rsp+90h] [rbp-448h] BYREF
  char v73; // [rsp+92h] [rbp-446h]
  unsigned __int64 v74; // [rsp+498h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v3 = qfopen(a2, "r");
  if ( !v3 )
    sub_457390(a2);
  v4 = v3;
  v64 = 0;
  ptr = nullptr;
  v69 = 0;
  while ( qfgets(&v72, 1024, v4) )
  {
    if ( (_BYTE)v72 != 59 && (_BYTE)v72 != 10 )
    {
      if ( (unsigned int)qsscanf(
                           (unsigned int)&v72,
                           (unsigned int)"*** Merging journal version=%d,policy=%d",
                           (unsigned int)&v65,
                           (unsigned int)&v64,
                           v5,
                           v6) != 2
        || v65 > 1
        || (v8 = nullptr, v64 > 5) )
      {
        sub_35A790((char **)&ptr);
        goto LABEL_8;
      }
      while ( 2 )
      {
        while ( 2 )
        {
          while ( 2 )
          {
            if ( !qfgets(&v72, 1024, v4) )
              goto LABEL_78;
            if ( (_BYTE)v72 == 10 || (_BYTE)v72 == 59 )
              continue;
            break;
          }
          if ( !v8 || v72 == 15677 && v73 == 61 )
          {
            v63 = qsscanf(
                    (unsigned int)&v72,
                    (unsigned int)"=== %zu %n",
                    (unsigned int)&v67,
                    (unsigned int)&v66,
                    v9,
                    v10);
            if ( v63 != 1 )
              goto LABEL_77;
            s2 = nullptr;
            *(_OWORD *)n = 0;
            v15 = (char *)&v72 + v66;
            v16 = strlen(v15);
            v17 = v16 + 1;
            v18 = v16;
            s2 = (char *)qvector_reserve(&s2, 0, v16 + 1, 1);
            n[0] = v17;
            memmove(s2, v15, v18);
            s2[v18] = 0;
            v19 = n[0];
            v20 = s2;
            v21 = n[0] - 1;
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
              if ( n[1] < v21 )
              {
                s2 = (char *)qvector_reserve(&s2, s2, n[0] - 1, 1);
                v20 = s2;
              }
              n[0] = v21;
              v20[v19 - 2] = 0;
            }
            v22 = (_QWORD *)(a1 + 240);
            v58 = (_QWORD *)(a1 + 240);
            if ( !*(_QWORD *)(a1 + 248) )
            {
              v22 = (_QWORD *)(a1 + 240);
              goto LABEL_53;
            }
            v23 = n[0];
            v59 = v4;
            v24 = (char *)haystack;
            v62 = a1;
            v25 = *(_QWORD **)(a1 + 248);
            v26 = s2;
            if ( n[0] )
              v24 = s2;
            v27 = v24;
LABEL_42:
            v33 = v25[5];
            if ( v23 )
            {
              if ( v33 )
                goto LABEL_46;
              v28 = v25;
              v29 = v26;
              v30 = haystack;
            }
            else
            {
              if ( !v33 )
              {
                while ( 1 )
                {
                  v34 = v25[2];
                  if ( !v34 )
                    break;
                  v22 = v25;
                  v25 = (_QWORD *)v25[2];
                  if ( *(_QWORD *)(v34 + 40) )
                    goto LABEL_46;
                }
                v35 = v26;
                v44 = v25;
                a1 = v62;
                v4 = v59;
                v22 = v44;
LABEL_48:
                if ( v58 == v22 )
                  goto LABEL_53;
                if ( v22[5] )
                {
                  v36 = (const char *)v22[4];
                  v37 = haystack;
                  if ( v23 )
                    goto LABEL_51;
LABEL_52:
                  v60 = v35;
                  if ( strcmp(v37, v36) >= 0 )
                  {
                    v35 = v60;
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
                      v45 = (void *)qalloc_or_throw(v39);
                      *(_QWORD *)(v40 + 32) = v45;
                      v46 = s2;
                      *(_QWORD *)(v40 + 48) = v39;
                      memcpy(v45, v46, v39);
                      *(_QWORD *)(v40 + 40) = v39;
                    }
                    *(_QWORD *)(v40 + 80) = 0;
                    *(_QWORD *)(v40 + 56) = 0;
                    *(_OWORD *)(v40 + 64) = 0;
                    v41 = sub_45C560((_QWORD *)(a1 + 232), v22, v40 + 32);
                    v22 = v41;
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
                        v61 = v42;
                        v57 = strcmp(v56, v55);
                        v42 = v61;
                        v63 = v57 >> 31;
                      }
                      v22 = (_QWORD *)v40;
                      std::_Rb_tree_insert_and_rebalance(v63, v40, v42, v58);
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
                    v35 = s2;
                  }
                }
                else
                {
                  v36 = haystack;
                  if ( v23 )
                  {
LABEL_51:
                    v37 = v35;
                    goto LABEL_52;
                  }
                }
                v8 = (__m128i **)(v22 + 7);
                v22[10] = v67;
                if ( v35 )
                {
                  n[0] = 0;
                  qfree(v35);
                }
                continue;
              }
LABEL_46:
              v30 = (const char *)v25[4];
              v28 = v25;
              v29 = v27;
            }
            v31 = strcmp(v30, v29);
            v32 = (_QWORD *)v25[2];
            v25 = (_QWORD *)v25[3];
            if ( v31 >= 0 )
            {
              v22 = v28;
              v25 = v32;
            }
            if ( !v25 )
            {
              v4 = v59;
              a1 = v62;
              v35 = v26;
              goto LABEL_48;
            }
            goto LABEL_42;
          }
          break;
        }
        v11 = v8[1];
        v12 = (unsigned __int64)v8[2];
        if ( v12 < (unsigned __int64)v11->m128i_u64 + 1 )
        {
          v47 = qvector_reserve(v8, 0, &v11->m128i_i8[1], 24);
          v48 = v8[1];
          v49 = v8[2];
          v13 = (__m128i *)v47;
          v8[2] = (__m128i *)v12;
          v50 = *v8;
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
            v50 = *v8;
          }
          qfree(v50);
          v11 = v8[1];
          *v8 = v13;
          v8[2] = v49;
        }
        else
        {
          v13 = *v8;
        }
        v14 = &v13->m128i_i8[24 * (_QWORD)v11];
        v14[16] = 6;
        *(_OWORD *)v14 = 0;
        v8[1] = (__m128i *)((char *)v8[1] + 1);
        if ( (unsigned int)qsscanf(
                             (unsigned int)&v72,
                             (unsigned int)"M:%zu,%zu:%d",
                             (int)v13 + 24 * (int)v11,
                             (int)v14 + 8,
                             (unsigned int)&s2,
                             v10) == 3
          && (int)s2 <= 5 )
        {
          v14[16] = (char)s2;
          continue;
        }
        break;
      }
LABEL_77:
      sub_35A790((char **)&ptr);
LABEL_78:
      if ( (unsigned __int64)v69 <= 1 && !*(_QWORD *)(a1 + 272) )
      {
        v54 = (char *)ptr;
        if ( *((_QWORD *)&v69 + 1) <= 0x15u )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, 22, 1);
          v54 = (char *)ptr;
        }
        *(_QWORD *)&v69 = 22;
        *(__m128i *)v54 = _mm_load_si128((const __m128i *)&xmmword_23A7990);
        *(_QWORD *)(v54 + 13) = 0x6C616E72756F6A20LL;
        *((_BYTE *)ptr + 21) = 0;
      }
LABEL_8:
      qfclose(v4);
      if ( (unsigned __int64)v69 > 1 )
        sub_368890();
      *(_BYTE *)(a1 + 288) = v64;
      sub_368890();
    }
  }
  v7 = ptr;
  if ( *((_QWORD *)&v69 + 1) <= 0xAu )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, 11, 1);
    v7 = ptr;
  }
  *(_QWORD *)&v69 = 11;
  qmemcpy(v7, "empty file", 10);
  *((_BYTE *)ptr + 10) = 0;
  goto LABEL_8;
}
