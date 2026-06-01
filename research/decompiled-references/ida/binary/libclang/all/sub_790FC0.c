void __fastcall sub_790FC0(unsigned __int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _BYTE *v11; // rax
  void *v12; // rdx
  unsigned __int64 v13; // rax
  void *v14; // rdi
  unsigned int *v15; // rsi
  size_t v16; // rbp
  char *v17; // rsi
  __int64 v18; // rdx
  __m128i *v19; // rdx
  __m128i si128; // xmm0
  __int64 v21; // rax
  _QWORD *v22; // rdx
  const char *v23; // r12
  _BYTE *v24; // rbp
  size_t v25; // r13
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rax
  _BYTE *v31; // rax
  __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  unsigned int *v34; // rsi
  size_t v35; // rax
  size_t v36; // rcx
  void *v37; // rsi
  size_t v38; // rbp
  _BYTE *v39; // rax
  _BYTE *v40; // rdi
  __int64 v41; // rdi
  _BYTE *v42; // rax
  char *v43; // r13
  char *v44; // r12
  __int64 v45; // rdx
  char *v46; // rbp
  char *v47; // rbx
  char *v48; // rdi
  void *src; // [rsp+0h] [rbp-178h] BYREF
  size_t n; // [rsp+8h] [rbp-170h]
  __m128i v51; // [rsp+10h] [rbp-168h] BYREF
  char *v52; // [rsp+20h] [rbp-158h]
  size_t v53; // [rsp+28h] [rbp-150h]
  char *v54; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-140h]
  char v56; // [rsp+40h] [rbp-138h] BYREF
  __int16 v57; // [rsp+50h] [rbp-128h]

  v5 = a2;
  v6 = *a1;
  v7 = *a1 & 7;
  if ( (_DWORD)v7 == 7 )
  {
    v8 = *(_DWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 > 3 )
      v8 = 3;
    switch ( v8 )
    {
      case 1u:
        v12 = *(void **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 <= 9u )
        {
          v5 = sub_26240F0(a2, "operator\"\"", 10);
        }
        else
        {
          qmemcpy(v12, "operator\"\"", 10);
          *(_QWORD *)(a2 + 32) += 10LL;
        }
        if ( (~(unsigned __int8)*a1 & 7) != 0 || (v13 = *a1 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v13 != 1) )
          BUG();
        v14 = *(void **)(v5 + 32);
        v15 = *(unsigned int **)(*(_QWORD *)(v13 + 16) + 16LL);
        v16 = *v15;
        v17 = (char *)(v15 + 4);
        v18 = v16;
        if ( *(_QWORD *)(v5 + 24) - (_QWORD)v14 >= v16 )
          goto LABEL_19;
        break;
      case 2u:
        v19 = *(__m128i **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v19 > 0x10u )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E890);
          v19[1].m128i_i8[0] = 62;
          *v19 = si128;
          *(_QWORD *)(a2 + 32) += 17LL;
          return;
        }
        v18 = 17;
        v17 = "<using-directive>";
        break;
      case 3u:
        goto LABEL_6;
      default:
        v9 = *(_QWORD *)(a2 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v9) <= 0x14 )
        {
          sub_26240F0(a2, "<deduction guide for ", 21);
        }
        else
        {
          *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_3C7E880);
          *(_QWORD *)(v9 + 13) = 0x20726F6620656469LL;
          *(_QWORD *)(a2 + 32) += 21LL;
        }
        if ( (~(unsigned __int8)*a1 & 7) != 0 || (v10 = *a1 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v10) )
          BUG();
        v54 = *(char **)(*(_QWORD *)(v10 + 16) + 40LL);
        sub_790FC0(&v54);
        v11 = *(_BYTE **)(a2 + 32);
        if ( (unsigned __int64)v11 >= *(_QWORD *)(a2 + 24) )
        {
          sub_26239D0(a2, 62);
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v11 + 1;
          *v11 = 62;
        }
        return;
    }
LABEL_72:
    sub_26240F0(v5, v17, v18);
  }
  else
  {
    switch ( v7 )
    {
      case 1LL:
      case 2LL:
LABEL_6:
        v54 = (char *)*a1;
        sub_C878B0(&v54, a2);
        return;
      case 3LL:
        v32 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        goto LABEL_42;
      case 4LL:
        v31 = *(_BYTE **)(a2 + 32);
        if ( (unsigned __int64)v31 >= *(_QWORD *)(a2 + 24) )
        {
          sub_26239D0(a2, 126);
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v31 + 1;
          *v31 = 126;
        }
        v32 = 0;
        if ( (*a1 & 7) - 3 <= 2 )
          v32 = *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_42:
        sub_790190(v32, a2, a3->m128i_i64[0], a3->m128i_i64[1]);
        return;
      case 5LL:
        v26 = *(_QWORD *)(a2 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v26) <= 8 )
        {
          sub_26240F0(a2, "operator ", 9);
        }
        else
        {
          *(_BYTE *)(v26 + 8) = 32;
          *(_QWORD *)v26 = 0x726F74617265706FLL;
          *(_QWORD *)(a2 + 32) += 9LL;
        }
        if ( (*a1 & 7) - 3 > 2 )
        {
          v28 = 0;
          v27 = 0;
        }
        else
        {
          v27 = *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          v28 = v27 & 0xFFFFFFFFFFFFFFF0LL;
        }
        src = (void *)v27;
        v29 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v29 + 16LL) == 47 )
        {
          v30 = sub_B14A40(*v29);
          sub_77A870(v30, a2);
        }
        else
        {
          v51 = _mm_loadu_si128(a3);
          v51.m128i_i32[0] = _mm_cvtsi128_si32(v51) & 0xDF7FFDFF | 0x800200;
          v57 = 257;
          sub_B2AEC0(&src, a2, &v51, &v54, 0);
        }
        return;
      case 6LL:
        v21 = sub_C88770(*(unsigned int *)(v6 & 0xFFFFFFFFFFFFFFF8LL));
        v22 = *(_QWORD **)(a2 + 32);
        v23 = (const char *)v21;
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v22 <= 7u )
        {
          sub_26240F0(a2, "operator", 8);
          v24 = *(_BYTE **)(a2 + 32);
        }
        else
        {
          *v22 = 0x726F74617265706FLL;
          v24 = (_BYTE *)(*(_QWORD *)(a2 + 32) + 8LL);
          *(_QWORD *)(a2 + 32) = v24;
        }
        if ( (unsigned __int8)(*v23 - 97) <= 0x19u )
        {
          if ( (unsigned __int64)v24 >= *(_QWORD *)(a2 + 24) )
          {
            sub_26239D0(a2, 32);
          }
          else
          {
            *(_QWORD *)(a2 + 32) = v24 + 1;
            *v24 = 32;
          }
          v24 = *(_BYTE **)(a2 + 32);
        }
        v25 = strlen(v23);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v24 < v25 )
        {
          v18 = v25;
          v17 = (char *)v23;
          goto LABEL_72;
        }
        if ( v25 )
        {
          memcpy(v24, v23, v25);
          *(_QWORD *)(a2 + 32) += v25;
        }
        break;
      default:
        v33 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v33 )
        {
          v34 = *(unsigned int **)(v33 + 16);
          v16 = *v34;
          v17 = (char *)(v34 + 4);
          src = v17;
          n = v16;
          if ( (*(_BYTE *)(v33 + 4) & 0x40) != 0 )
          {
            v35 = sub_25E48A0(&src, "$ompvariant", 11, 0);
            if ( v35 == -1 )
            {
              v52 = nullptr;
              v37 = src;
              v53 = 0;
              v38 = n;
            }
            else
            {
              v36 = v35 + 11;
              v37 = src;
              if ( v35 + 11 > n )
                v36 = n;
              if ( v35 > n )
                v35 = n;
              v38 = v35;
              v53 = n - v36;
              v52 = (char *)src + v36;
            }
            v39 = *(_BYTE **)(v5 + 24);
            v40 = *(_BYTE **)(v5 + 32);
            if ( v39 - v40 < v38 )
            {
              v5 = sub_26240F0(v5, v37, v38);
              v39 = *(_BYTE **)(v5 + 24);
              v40 = *(_BYTE **)(v5 + 32);
            }
            else if ( v38 )
            {
              memcpy(v40, v37, v38);
              v39 = *(_BYTE **)(v5 + 24);
              v40 = (_BYTE *)(v38 + *(_QWORD *)(v5 + 32));
              *(_QWORD *)(v5 + 32) = v40;
            }
            if ( v40 == v39 )
            {
              v5 = sub_26240F0(v5, "[", 1);
            }
            else
            {
              *v40 = 91;
              ++*(_QWORD *)(v5 + 32);
            }
            sub_A9BF00(&v54, v52, v53);
            v41 = sub_A97740(v5, &v54);
            v42 = *(_BYTE **)(v41 + 32);
            if ( *(_BYTE **)(v41 + 24) == v42 )
            {
              sub_26240F0(v41, "]", 1);
            }
            else
            {
              *v42 = 93;
              ++*(_QWORD *)(v41 + 32);
            }
            v43 = v54;
            v44 = &v54[136 * v55];
            if ( v54 != v44 )
            {
              do
              {
                v45 = *((unsigned int *)v44 - 30);
                v46 = *((char **)v44 - 16);
                v44 -= 136;
                v47 = &v46[56 * v45];
                if ( v46 != v47 )
                {
                  do
                  {
                    v47 -= 56;
                    v48 = *((char **)v47 + 2);
                    if ( v48 != v47 + 32 )
                      free(v48);
                  }
                  while ( v46 != v47 );
                  v47 = *((char **)v44 + 1);
                }
                if ( v47 != v44 + 24 )
                  free(v47);
              }
              while ( v43 != v44 );
              v44 = v54;
            }
            if ( v44 != &v56 )
              free(v44);
          }
          else
          {
            v14 = *(void **)(v5 + 32);
            if ( *(_QWORD *)(v5 + 24) - (_QWORD)v14 >= v16 )
            {
LABEL_19:
              if ( v16 )
              {
                memcpy(v14, v17, v16);
                *(_QWORD *)(v5 + 32) += v16;
              }
            }
            else
            {
              sub_26240F0(v5, v17, v16);
            }
          }
        }
        return;
    }
  }
}

