__int64 __fastcall sub_63E4B0(_QWORD *a1, __int64 a2, int a3, char *a4)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // xmm1_8
  char *v8; // rax
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  int v11; // ebp
  int first_free_extra_cmtidx; // r12d
  const char *v13; // rbp
  void *v14; // r15
  unsigned __int64 v15; // r13
  size_t v16; // rax
  __int64 v17; // rbp
  size_t v18; // r13
  size_t v19; // r15
  _BYTE *v20; // rsi
  size_t v21; // rdx
  const char *v22; // rdx
  size_t v23; // rax
  size_t v24; // rbx
  size_t v25; // r14
  char *v26; // rbx
  size_t v27; // r10
  size_t v28; // r11
  size_t v29; // rdx
  const char *v30; // rsi
  char *v31; // rax
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  size_t v34; // r14
  char *v35; // rax
  unsigned int v36; // ebx
  const char *v38; // rdi
  int v39; // eax
  char *s; // [rsp+0h] [rbp-C0h]
  int v42; // [rsp+18h] [rbp-A8h]
  char *v43; // [rsp+18h] [rbp-A8h]
  size_t v44; // [rsp+20h] [rbp-A0h]
  size_t v45; // [rsp+28h] [rbp-98h]
  size_t v46; // [rsp+30h] [rbp-90h]
  char *s1; // [rsp+38h] [rbp-88h] BYREF
  __m128 v48; // [rsp+40h] [rbp-80h] BYREF
  void *ptr; // [rsp+58h] [rbp-68h] BYREF
  __int128 i; // [rsp+60h] [rbp-60h]
  char v51[10]; // [rsp+76h] [rbp-4Ah] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-40h]

  v5 = *(_QWORD *)(*a1 + 1688LL);
  v52 = __readfsqword(0x28u);
  v48 = 0;
  s1 = nullptr;
  if ( a4 )
  {
    sub_35A6C0(&s1);
    v7 = v48.m128_u64[0];
    a4 = s1;
  }
  else
  {
    v7 = 0;
  }
  if ( *(_QWORD *)(v5 + 8) != a2 || *(_DWORD *)(v5 + 40) != a3 )
  {
LABEL_4:
    v8 = *(char **)(v5 + 16);
    *(_QWORD *)(v5 + 16) = a4;
    v9 = _mm_loadh_ps((const double *)(v5 + 32));
    *(_DWORD *)(v5 + 40) = a3;
    s1 = v8;
    v10 = _mm_loadh_ps((const double *)&v48.m128_u64[1]);
    v48 = v9;
    *(__m128 *)(v5 + 24) = v10;
    *(_QWORD *)(v5 + 8) = a2;
    if ( (a3 & 2) != 0 )
    {
      *(_WORD *)qstpncpy(v51, *(_QWORD *)(a1[4] + 48LL), 10) = 32;
      if ( a2 == -1 )
        goto LABEL_43;
      s = *(char **)(a1[4] + 336LL);
      if ( s )
      {
LABEL_7:
        v11 = (a3 & 1) == 0 ? 1000 : 2000;
        first_free_extra_cmtidx = get_first_free_extra_cmtidx(a2, v11);
        v42 = v11 + 1000;
        if ( first_free_extra_cmtidx < v11 + 1000 )
        {
          v13 = haystack;
          if ( *(_QWORD *)(v5 + 24) )
            v13 = *(const char **)(v5 + 16);
          v14 = nullptr;
          v15 = 0;
          ptr = nullptr;
          for ( i = 0; ; v15 = *((_QWORD *)&i + 1) )
          {
            v23 = strlen(v51);
            v24 = v23;
            v25 = v23;
            if ( v23 )
            {
              v34 = v23 + 1;
              if ( v15 < v23 + 1 )
              {
                ptr = (void *)qvector_reserve(&ptr, v14, v23 + 1, 1);
                v14 = ptr;
              }
              *(_QWORD *)&i = v34;
              memmove(v14, v51, v24);
              *((_BYTE *)ptr + v24) = 0;
              v35 = strchr(v13, 10);
              v15 = *((_QWORD *)&i + 1);
              v25 = i;
              v14 = ptr;
              v26 = v35;
              if ( !v35 )
                v26 = (char *)&v13[strlen(v13)];
              v27 = v26 - v13;
              if ( v25 )
              {
                --v25;
                v28 = v27 + v25;
              }
              else
              {
                v28 = v26 - v13;
              }
            }
            else
            {
              *(_QWORD *)&i = 0;
              v26 = strchr(v13, 10);
              v27 = v26 - v13;
              v28 = v26 - v13;
              if ( !v26 )
              {
                v27 = strlen(v13);
                v26 = (char *)&v13[v27];
                v28 = v27;
              }
            }
            v29 = v28 + 1;
            if ( v15 < v28 + 1 )
            {
              v46 = v28;
              v45 = v27;
              v44 = v28 + 1;
              ptr = (void *)qvector_reserve(&ptr, v14, v29, 1);
              v28 = v46;
              v14 = ptr;
              v27 = v45;
              v29 = v44;
            }
            *(_QWORD *)&i = v29;
            *((_BYTE *)v14 + v28) = 0;
            memmove((char *)ptr + v25, v13, v27);
            v16 = strlen(s);
            v17 = i;
            v18 = v16;
            v19 = v16;
            if ( (_QWORD)i )
            {
              v17 = i - 1;
              v19 = v16 + i - 1;
            }
            v20 = ptr;
            v21 = v19 + 1;
            if ( *((_QWORD *)&i + 1) < v19 + 1 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
              v21 = v19 + 1;
              v20 = ptr;
            }
            *(_QWORD *)&i = v21;
            v20[v19] = 0;
            memmove((char *)ptr + v17, s, v18);
            v22 = haystack;
            if ( (_QWORD)i )
              v22 = (const char *)ptr;
            update_extra_cmt(a2, (unsigned int)first_free_extra_cmtidx, v22);
            v14 = ptr;
            if ( !*v26 )
              break;
            v13 = v26 + 1;
            if ( v42 == ++first_free_extra_cmtidx )
              break;
          }
          if ( ptr )
          {
            *(_QWORD *)&i = 0;
            qfree(ptr);
          }
          v36 = 1;
          goto LABEL_39;
        }
LABEL_43:
        v36 = 0;
LABEL_39:
        a4 = s1;
        goto LABEL_40;
      }
LABEL_29:
      s = (char *)&byte_22F0C30;
      goto LABEL_7;
    }
LABEL_28:
    v51[0] = 0;
    if ( a2 == -1 )
      goto LABEL_43;
    goto LABEL_29;
  }
  if ( *(_QWORD *)(v5 + 24) )
  {
    v30 = *(const char **)(v5 + 16);
    v38 = haystack;
    if ( !v7 )
      goto LABEL_49;
  }
  else
  {
    v30 = haystack;
    if ( !v7 )
      goto LABEL_26;
  }
  v38 = a4;
LABEL_49:
  v43 = a4;
  v39 = strcmp(v38, v30);
  a4 = v43;
  if ( v39 )
    goto LABEL_4;
LABEL_26:
  if ( (a3 & 2) == 0 )
  {
    v31 = *(char **)(v5 + 16);
    *(_QWORD *)(v5 + 16) = a4;
    v32 = _mm_loadh_ps((const double *)(v5 + 32));
    *(_DWORD *)(v5 + 40) = a3;
    s1 = v31;
    v33 = _mm_loadh_ps((const double *)&v48.m128_u64[1]);
    v48 = v32;
    *(_QWORD *)(v5 + 8) = a2;
    *(__m128 *)(v5 + 24) = v33;
    goto LABEL_28;
  }
  v36 = 1;
LABEL_40:
  if ( a4 )
  {
    v48.m128_u64[0] = 0;
    qfree(a4);
  }
  return v36;
}
