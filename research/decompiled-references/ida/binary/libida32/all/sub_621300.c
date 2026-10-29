__int64 __fastcall sub_621300(_QWORD *a1, unsigned int a2, int a3, char *a4)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // xmm1_8
  __int64 v8; // xmm0_8
  char *v9; // rax
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  unsigned int v12; // ebp
  signed int first_free_extra_cmtidx; // r12d
  const char *v14; // rbp
  void *v15; // r15
  unsigned __int64 v16; // r13
  size_t v17; // rax
  __int64 v18; // rbp
  size_t v19; // r13
  size_t v20; // r15
  _BYTE *v21; // rsi
  size_t v22; // rdx
  const char *v23; // rdx
  size_t v24; // rax
  size_t v25; // rbx
  size_t v26; // r14
  char *v27; // rbx
  size_t v28; // r10
  size_t v29; // r11
  size_t v30; // rdx
  const char *v31; // rsi
  char *v32; // rax
  __m128 v33; // xmm0
  __m128 v34; // xmm1
  size_t v35; // r14
  char *v36; // rax
  unsigned int v37; // ebx
  const char *v39; // rdi
  int v40; // eax
  char *s; // [rsp+0h] [rbp-C0h]
  unsigned int v43; // [rsp+18h] [rbp-A8h]
  char *v44; // [rsp+18h] [rbp-A8h]
  size_t v45; // [rsp+20h] [rbp-A0h]
  size_t v46; // [rsp+28h] [rbp-98h]
  size_t v47; // [rsp+30h] [rbp-90h]
  char *s1; // [rsp+38h] [rbp-88h] BYREF
  __m128 v49; // [rsp+40h] [rbp-80h] BYREF
  void *ptr; // [rsp+58h] [rbp-68h] BYREF
  __int128 i; // [rsp+60h] [rbp-60h]
  char v52[10]; // [rsp+76h] [rbp-4Ah] BYREF
  unsigned __int64 v53; // [rsp+80h] [rbp-40h]

  v5 = *(_QWORD *)(*a1 + 1496LL);
  v53 = __readfsqword(0x28u);
  v49 = 0;
  s1 = nullptr;
  if ( a4 )
  {
    sub_3572D0(&s1);
    v7 = v49.m128_u64[0];
    a4 = s1;
    v8 = *(_QWORD *)(v5 + 24);
    if ( *(_DWORD *)(v5 + 8) != a2 )
      goto LABEL_3;
  }
  else
  {
    v8 = *(_QWORD *)(v5 + 24);
    v7 = 0;
    if ( *(_DWORD *)(v5 + 8) != a2 )
      goto LABEL_3;
  }
  if ( *(_DWORD *)(v5 + 40) != a3 )
  {
LABEL_3:
    v9 = *(char **)(v5 + 16);
    *(_QWORD *)(v5 + 16) = a4;
    v10 = _mm_loadh_ps((const double *)(v5 + 32));
    *(_DWORD *)(v5 + 40) = a3;
    s1 = v9;
    v11 = _mm_loadh_ps((const double *)&v49.m128_u64[1]);
    v49 = v10;
    *(__m128 *)(v5 + 24) = v11;
    *(_DWORD *)(v5 + 8) = a2;
    if ( (a3 & 2) != 0 )
    {
      *(_WORD *)qstpncpy(v52, *(_QWORD *)(a1[4] + 48LL), 10) = 32;
      if ( a2 == -1 )
        goto LABEL_42;
      s = *(char **)(a1[4] + 336LL);
      if ( s )
      {
LABEL_6:
        v12 = (a3 & 1) == 0 ? 1000 : 2000;
        first_free_extra_cmtidx = get_first_free_extra_cmtidx(a2, v12);
        v43 = v12 + 1000;
        if ( first_free_extra_cmtidx < (int)(v12 + 1000) )
        {
          v14 = haystack;
          if ( *(_QWORD *)(v5 + 24) )
            v14 = *(const char **)(v5 + 16);
          v15 = nullptr;
          v16 = 0;
          ptr = nullptr;
          for ( i = 0; ; v16 = *((_QWORD *)&i + 1) )
          {
            v24 = strlen(v52);
            v25 = v24;
            v26 = v24;
            if ( v24 )
            {
              v35 = v24 + 1;
              if ( v16 < v24 + 1 )
              {
                ptr = (void *)qvector_reserve(&ptr, v15, v24 + 1, 1);
                v15 = ptr;
              }
              *(_QWORD *)&i = v35;
              memmove(v15, v52, v25);
              *((_BYTE *)ptr + v25) = 0;
              v36 = strchr(v14, 10);
              v16 = *((_QWORD *)&i + 1);
              v26 = i;
              v15 = ptr;
              v27 = v36;
              if ( !v36 )
                v27 = (char *)&v14[strlen(v14)];
              v28 = v27 - v14;
              if ( v26 )
              {
                --v26;
                v29 = v28 + v26;
              }
              else
              {
                v29 = v27 - v14;
              }
            }
            else
            {
              *(_QWORD *)&i = 0;
              v27 = strchr(v14, 10);
              v28 = v27 - v14;
              v29 = v27 - v14;
              if ( !v27 )
              {
                v28 = strlen(v14);
                v27 = (char *)&v14[v28];
                v29 = v28;
              }
            }
            v30 = v29 + 1;
            if ( v16 < v29 + 1 )
            {
              v47 = v29;
              v46 = v28;
              v45 = v29 + 1;
              ptr = (void *)qvector_reserve(&ptr, v15, v30, 1);
              v29 = v47;
              v15 = ptr;
              v28 = v46;
              v30 = v45;
            }
            *(_QWORD *)&i = v30;
            *((_BYTE *)v15 + v29) = 0;
            memmove((char *)ptr + v26, v14, v28);
            v17 = strlen(s);
            v18 = i;
            v19 = v17;
            v20 = v17;
            if ( (_QWORD)i )
            {
              v18 = i - 1;
              v20 = v17 + i - 1;
            }
            v21 = ptr;
            v22 = v20 + 1;
            if ( *((_QWORD *)&i + 1) < v20 + 1 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
              v22 = v20 + 1;
              v21 = ptr;
            }
            *(_QWORD *)&i = v22;
            v21[v20] = 0;
            memmove((char *)ptr + v18, s, v19);
            v23 = haystack;
            if ( (_QWORD)i )
              v23 = (const char *)ptr;
            update_extra_cmt(a2, (unsigned int)first_free_extra_cmtidx, v23);
            v15 = ptr;
            if ( !*v27 )
              break;
            v14 = v27 + 1;
            if ( v43 == ++first_free_extra_cmtidx )
              break;
          }
          if ( ptr )
          {
            *(_QWORD *)&i = 0;
            qfree(ptr);
          }
          v37 = 1;
          goto LABEL_38;
        }
LABEL_42:
        v37 = 0;
LABEL_38:
        a4 = s1;
        goto LABEL_39;
      }
LABEL_28:
      s = (char *)&byte_22CD811;
      goto LABEL_6;
    }
LABEL_27:
    v52[0] = 0;
    if ( a2 == -1 )
      goto LABEL_42;
    goto LABEL_28;
  }
  if ( v8 )
  {
    v31 = *(const char **)(v5 + 16);
    v39 = haystack;
    if ( !v7 )
      goto LABEL_48;
  }
  else
  {
    v31 = haystack;
    if ( !v7 )
      goto LABEL_25;
  }
  v39 = a4;
LABEL_48:
  v44 = a4;
  v40 = strcmp(v39, v31);
  a4 = v44;
  if ( v40 )
    goto LABEL_3;
LABEL_25:
  if ( (a3 & 2) == 0 )
  {
    v32 = *(char **)(v5 + 16);
    *(_QWORD *)(v5 + 16) = a4;
    v33 = _mm_loadh_ps((const double *)(v5 + 32));
    *(_DWORD *)(v5 + 40) = a3;
    s1 = v32;
    v34 = _mm_loadh_ps((const double *)&v49.m128_u64[1]);
    v49 = v33;
    *(_DWORD *)(v5 + 8) = a2;
    *(__m128 *)(v5 + 24) = v34;
    goto LABEL_27;
  }
  v37 = 1;
LABEL_39:
  if ( a4 )
  {
    v49.m128_u64[0] = 0;
    qfree(a4);
  }
  return v37;
}

