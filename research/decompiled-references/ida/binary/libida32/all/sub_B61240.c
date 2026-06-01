void __fastcall sub_B61240(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __m128i *v12; // rdx
  unsigned __int64 v13; // rax
  _BYTE *v14; // rax
  unsigned __int64 v15; // rsi
  __m128i *v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rdx
  const char *v28; // rbp
  _BYTE *v29; // rax
  size_t v30; // rax
  void *v31; // rdi
  size_t v32; // r12
  unsigned __int64 v33; // rdx
  unsigned int *v34; // rsi
  size_t v35; // rbp
  void *v36; // rsi
  unsigned __int64 v37; // rax
  size_t v38; // rbp
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  void *v41; // rsi
  _BYTE *v42; // rax
  _BYTE *v43; // rdi
  __int64 v44; // rax
  _BYTE *v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r12
  char *v48; // rbp
  char *v49; // rbx
  char *v50; // rdi
  void *v51; // rdx
  unsigned __int64 v52; // rax
  unsigned int *v53; // rsi
  void *v54; // rdi
  __m128i v55; // xmm0
  __m128i si128; // xmm0
  void *src; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int64 v58; // [rsp+8h] [rbp-170h]
  __m128i v59; // [rsp+10h] [rbp-168h] BYREF
  char *v60; // [rsp+20h] [rbp-158h]
  unsigned __int64 v61; // [rsp+28h] [rbp-150h]
  __int64 v62; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v63; // [rsp+38h] [rbp-140h]
  _WORD v64[156]; // [rsp+40h] [rbp-138h] BYREF

  v7 = a2;
  v8 = *a1;
  v9 = *a1 & 7;
  if ( (_DWORD)v9 == 7 )
  {
    v10 = 3;
    if ( *(_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL) <= 3u )
      v10 = *(_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = v10 + 8;
    switch ( v11 )
    {
      case 10:
        v16 = *(__m128i **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v16 > 0x10u )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384DE0);
          v16[1].m128i_i8[0] = 62;
          *v16 = si128;
          *(_QWORD *)(a2 + 32) += 17LL;
        }
        else
        {
          sub_22581D0(a2, "<using-directive>", 17);
        }
        break;
      case 11:
LABEL_30:
        v62 = *a1;
        sub_FBB170(&v62, v7);
        break;
      case 9:
        v51 = *(void **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v51 > 9u )
        {
          qmemcpy(v51, "operator\"\"", 10);
          *(_QWORD *)(a2 + 32) += 10LL;
        }
        else
        {
          v7 = sub_22581D0(a2, "operator\"\"", 10);
        }
        if ( (*(_DWORD *)a1 & 7) != 7 || (v52 = *a1 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v52 != 1) )
          BUG();
        v53 = *(unsigned int **)(*(_QWORD *)(v52 + 16) + 16LL);
        v35 = *v53;
        v36 = v53 + 4;
LABEL_70:
        v54 = *(void **)(v7 + 32);
        if ( v35 > *(_QWORD *)(v7 + 24) - (_QWORD)v54 )
        {
          sub_22581D0(v7, v36, v35);
        }
        else if ( v35 )
        {
          memcpy(v54, v36, v35);
          *(_QWORD *)(v7 + 32) += v35;
        }
        break;
      default:
        v12 = *(__m128i **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 > 0x14u )
        {
          v55 = _mm_load_si128((const __m128i *)&xmmword_2384DD0);
          v12[1].m128i_i32[0] = 1919903264;
          v12[1].m128i_i8[4] = 32;
          *v12 = v55;
          *(_QWORD *)(a2 + 32) += 21LL;
        }
        else
        {
          sub_22581D0(a2, "<deduction guide for ", 21);
        }
        if ( (*(_DWORD *)a1 & 7) != 7 || (v13 = *a1 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v13) )
          BUG();
        v62 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 40LL);
        sub_B61240(&v62);
        v14 = *(_BYTE **)(a2 + 32);
        if ( (unsigned __int64)v14 >= *(_QWORD *)(a2 + 24) )
        {
          sub_2257CD0(a2, 62);
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v14 + 1;
          *v14 = 62;
        }
        break;
    }
  }
  else
  {
    v15 = (unsigned int)v9;
    switch ( (int)v9 )
    {
      case 1:
      case 2:
        goto LABEL_30;
      case 3:
        v24 = 0;
        if ( (unsigned int)(v9 - 3) <= 2 )
          v24 = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        goto LABEL_27;
      case 4:
        v22 = *(_BYTE **)(v7 + 32);
        if ( (unsigned __int64)v22 >= *(_QWORD *)(v7 + 24) )
        {
          sub_2257CD0(v7, 126);
        }
        else
        {
          *(_QWORD *)(v7 + 32) = v22 + 1;
          *v22 = 126;
        }
        v23 = *a1;
        v24 = 0;
        if ( (unsigned int)(*a1 & 7) - 3 <= 2 )
          v24 = *(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 8);
LABEL_27:
        sub_B60A30(v24, v7, a3->m128i_i64[0], a3->m128i_i64[1]);
        return;
      case 5:
        v17 = *(_QWORD *)(v7 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v7 + 24) - v17) > 8 )
        {
          *(_BYTE *)(v17 + 8) = 32;
          *(_QWORD *)v17 = 0x726F74617265706FLL;
          *(_QWORD *)(v7 + 32) += 9LL;
        }
        else
        {
          v15 = (unsigned __int64)"operator ";
          sub_22581D0(v7, "operator ", 9);
        }
        if ( (unsigned int)(*a1 & 7) - 3 > 2 )
        {
          v19 = 0;
          v18 = 0;
        }
        else
        {
          v18 = *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
          v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
        }
        src = (void *)v18;
        v20 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v20 + 16LL) == 48 )
        {
          v21 = sub_F3D1D0(*v20, v15, v19, a4, a5);
          sub_B4EFB0(v21, v7);
        }
        else
        {
          v59 = _mm_loadu_si128(a3);
          v59.m128i_i32[0] = v59.m128i_i32[0] & 0xDF7FFDFF | 0x800200;
          v64[8] = 257;
          sub_F50AF0(&src, v7, &v59, &v62, 0);
        }
        return;
      case 6:
        v25 = 0;
        if ( (_DWORD)v9 == 6 )
          v25 = *(unsigned int *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        v26 = sub_FBBBC0(v25);
        v27 = *(_QWORD **)(v7 + 32);
        v28 = (const char *)v26;
        if ( *(_QWORD *)(v7 + 24) - (_QWORD)v27 > 7u )
        {
          *v27 = 0x726F74617265706FLL;
          *(_QWORD *)(v7 + 32) += 8LL;
        }
        else
        {
          sub_22581D0(v7, "operator", 8);
        }
        if ( (unsigned __int8)(*v28 - 97) <= 0x19u )
        {
          v29 = *(_BYTE **)(v7 + 32);
          if ( (unsigned __int64)v29 >= *(_QWORD *)(v7 + 24) )
          {
            sub_2257CD0(v7, 32);
          }
          else
          {
            *(_QWORD *)(v7 + 32) = v29 + 1;
            *v29 = 32;
          }
        }
        v30 = strlen(v28);
        v31 = *(void **)(v7 + 32);
        v32 = v30;
        if ( v30 <= *(_QWORD *)(v7 + 24) - (_QWORD)v31 )
        {
          if ( v30 )
          {
            memcpy(v31, v28, v30);
            *(_QWORD *)(v7 + 32) += v32;
          }
        }
        else
        {
          sub_22581D0(v7, v28, v30);
        }
        return;
      default:
        v33 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v33 )
          return;
        v34 = *(unsigned int **)(v33 + 16);
        v35 = *v34;
        v36 = v34 + 4;
        src = v36;
        v58 = v35;
        if ( (*(_BYTE *)(v33 + 4) & 0x40) == 0 )
          goto LABEL_70;
        v37 = sub_2222D70(&src, "$ompvariant", 11, 0);
        if ( v37 == -1 )
        {
          v41 = src;
          v38 = v58;
          v60 = nullptr;
          v61 = 0;
        }
        else
        {
          v38 = v58;
          v39 = v37 + 11;
          if ( v37 + 11 > v58 )
          {
            v39 = v58;
            v40 = 0;
          }
          else
          {
            v40 = v58 - v39;
          }
          v41 = src;
          v61 = v40;
          if ( v37 <= v58 )
            v38 = v37;
          v60 = (char *)src + v39;
        }
        v42 = *(_BYTE **)(v7 + 24);
        v43 = *(_BYTE **)(v7 + 32);
        if ( v42 - v43 < v38 )
        {
          v7 = sub_22581D0(v7, v41, v38);
          v42 = *(_BYTE **)(v7 + 24);
          v43 = *(_BYTE **)(v7 + 32);
        }
        else if ( v38 )
        {
          memcpy(v43, v41, v38);
          v42 = *(_BYTE **)(v7 + 24);
          v43 = (_BYTE *)(v38 + *(_QWORD *)(v7 + 32));
          *(_QWORD *)(v7 + 32) = v43;
        }
        if ( v42 == v43 )
        {
          v7 = sub_22581D0(v7, "[", 1);
        }
        else
        {
          *v43 = 91;
          ++*(_QWORD *)(v7 + 32);
        }
        sub_E9DAE0(&v62, v60, v61);
        v44 = sub_E994A0(v7, &v62);
        v45 = *(_BYTE **)(v44 + 32);
        if ( *(_BYTE **)(v44 + 24) == v45 )
        {
          sub_22581D0(v44, "]", 1);
        }
        else
        {
          *v45 = 93;
          ++*(_QWORD *)(v44 + 32);
        }
        v46 = v62;
        v47 = v62 + 136LL * v63;
        if ( v62 == v47 )
          goto LABEL_63;
        break;
    }
    do
    {
      while ( 1 )
      {
        v47 -= 136;
        v48 = *(char **)(v47 + 8);
        v49 = &v48[56 * *(unsigned int *)(v47 + 16)];
        if ( v48 != v49 )
        {
          do
          {
            while ( 1 )
            {
              v49 -= 56;
              v50 = *((char **)v49 + 2);
              if ( v50 == v49 + 32 )
                break;
              free(v50);
              if ( v48 == v49 )
                goto LABEL_59;
            }
          }
          while ( v48 != v49 );
LABEL_59:
          v48 = *(char **)(v47 + 8);
        }
        if ( v48 == (char *)(v47 + 24) )
          break;
        free(v48);
        if ( v46 == v47 )
          goto LABEL_62;
      }
    }
    while ( v46 != v47 );
LABEL_62:
    v47 = v62;
LABEL_63:
    if ( (_WORD *)v47 != v64 )
      free((void *)v47);
  }
}

