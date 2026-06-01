__int64 __fastcall sub_22CC0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int64 a5)
{
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  int v9; // r14d
  const char *v10; // r15
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r13
  const void **v14; // rbp
  __int64 v15; // rbx
  char *v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // rbx
  __int64 v20; // rdi
  char *v21; // r13
  char *v22; // rbx
  size_t v23; // r15
  __int64 v24; // r14
  size_t v25; // r8
  char *v26; // rsi
  unsigned __int64 v27; // rbx
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rbx
  const void **v32; // rax
  void *v33; // rdi
  size_t v35; // r15
  void *v36; // r13
  __int64 v37; // rdx
  char *v38; // rsi
  char *v39; // rax
  const char *v40; // r15
  char **v41; // rax
  char *v42; // r15
  size_t v43; // r13
  size_t v44; // rax
  size_t v45; // r10
  size_t v46; // r8
  _BYTE *v47; // rsi
  size_t v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // r12d
  int v51[2]; // [rsp+0h] [rbp-A8h]
  int v52[2]; // [rsp+0h] [rbp-A8h]
  int v53[2]; // [rsp+8h] [rbp-A0h]
  int v54[2]; // [rsp+10h] [rbp-98h]
  const char *v55; // [rsp+18h] [rbp-90h]
  size_t v56; // [rsp+20h] [rbp-88h]
  size_t v57; // [rsp+28h] [rbp-80h]
  void *v58; // [rsp+30h] [rbp-78h] BYREF
  int v59[4]; // [rsp+38h] [rbp-70h]
  void *v60; // [rsp+48h] [rbp-60h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v63; // [rsp+68h] [rbp-40h]

  v6 = a2;
  v7 = a4;
  *(_QWORD *)v54 = a5;
  v63 = __readfsqword(0x28u);
  if ( a4 && a5 >= a4[1] )
    v7 = nullptr;
  v8 = 32 * a3;
  v58 = nullptr;
  *(_OWORD *)v59 = 0;
  *(_QWORD *)v51 = a2 + v8;
  if ( a2 == a2 + v8 )
    return 0;
  *(_QWORD *)v53 = 24 * a5;
  do
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 8);
      if ( (unsigned int)(v9 - 35) <= 1 )
        goto LABEL_12;
      v10 = *(const char **)v6;
      if ( strcmp(*(const char **)v6, "perm") )
        strcmp(v10, "filt");
      if ( !v7 )
        break;
      v12 = *v7 + *(_QWORD *)v53;
      if ( *(_QWORD *)(v12 + 8) )
      {
        v55 = *(const char **)v12;
        if ( !strcmp(*(const char **)v12, v10) || *v55 == 63 && !v55[1] && !*v10 )
        {
LABEL_37:
          v30 = *(_QWORD *)(v6 + 16);
          src = nullptr;
          *(_OWORD *)n = 0;
          if ( v30 )
          {
            if ( (unsigned __int64)(*(_QWORD *)v54 + 1LL) >= v7[1] )
              goto LABEL_41;
            if ( !(unsigned __int8)sub_22CC0(
                                     (int)&src,
                                     v30,
                                     *(_QWORD *)(v6 + 24),
                                     (int)v7,
                                     v54[0] + 1,
                                     v11,
                                     v51[0],
                                     v53[0],
                                     v54[0],
                                     (int)v55,
                                     v56,
                                     v57,
                                     (int)v58,
                                     v59[0],
                                     v59[2],
                                     v60,
                                     (__int64)src,
                                     n[0],
                                     n[1]) )
            {
              v30 = *(_QWORD *)(v6 + 16);
LABEL_41:
              sub_22CC0(
                (int)&src,
                v30,
                *(_QWORD *)(v6 + 24),
                0,
                0,
                v11,
                v51[0],
                v53[0],
                v54[0],
                (int)v55,
                v56,
                v57,
                (int)v58,
                v59[0],
                v59[2],
                v60,
                (__int64)src,
                n[0],
                n[1]);
              sub_17D80((char **)a1);
LABEL_42:
              v50 = 1;
LABEL_43:
              if ( src )
              {
                n[0] = 0;
                j__free(src);
              }
              v14 = (const void **)v58;
LABEL_46:
              if ( !v14 )
                return v50;
              v13 = *(_QWORD *)v59;
              if ( *(_QWORD *)v59 )
              {
LABEL_48:
                v31 = 0;
                do
                {
                  v32 = &v14[3 * v31];
                  v33 = (void *)*v32;
                  if ( *v32 )
                  {
                    v32[1] = nullptr;
                    j__free(v33);
                    v14 = (const void **)v58;
                  }
                  ++v31;
                }
                while ( v13 != v31 );
              }
LABEL_52:
              *(_QWORD *)v59 = 0;
              j__free(v14);
              return v50;
            }
          }
          else if ( !sub_18170(v9) )
          {
            v50 = 0;
            goto LABEL_43;
          }
          sub_17D80((char **)a1);
          goto LABEL_42;
        }
      }
      else if ( !*v10 )
      {
        goto LABEL_37;
      }
LABEL_12:
      v6 += 32;
      if ( *(_QWORD *)v51 == v6 )
        goto LABEL_13;
    }
    src = nullptr;
    *(_OWORD *)n = 0;
    sub_17D80((char **)&src);
    if ( *(_QWORD *)(v6 + 16) )
    {
      if ( !byte_165A12 )
      {
        v40 = *(const char **)v6;
        if ( !strcmp(*(const char **)v6, "local") || !strcmp(v40, "deny") || !strcmp(v40, "grant") )
        {
LABEL_67:
          if ( src )
          {
            n[0] = 0;
            j__free(src);
          }
          goto LABEL_12;
        }
      }
      sub_21D30((__int64 *)&src);
    }
    else
    {
      v41 = sub_18170(*(_DWORD *)(v6 + 8));
      if ( !v41 )
        goto LABEL_67;
      v42 = v41[1];
      if ( v42 )
      {
        v43 = n[0];
        v44 = strlen(v41[1]);
        v45 = v44;
        v46 = v44;
        if ( v43 )
        {
          --v43;
          v46 = v44 + v43;
        }
        v47 = src;
        v48 = v46 + 1;
        if ( n[1] < v46 + 1 )
        {
          v57 = v44;
          v56 = v46;
          v55 = (const char *)(v46 + 1);
          src = (void *)sub_96080(&src, src, v48, 1);
          v45 = v57;
          v47 = src;
          v46 = v56;
          v48 = (size_t)v55;
        }
        n[0] = v48;
        v47[v46] = 0;
        memmove((char *)src + v43, v42, v45);
      }
    }
    v35 = n[0];
    v36 = nullptr;
    if ( n[0] )
    {
      v36 = (void *)sub_96030(n[0]);
      memcpy(v36, src, v35);
    }
    v37 = *(_QWORD *)v59;
    v38 = (char *)v58;
    if ( *(_QWORD *)&v59[2] < (unsigned __int64)(*(_QWORD *)v59 + 1LL) )
    {
      v58 = (void *)sub_96080(&v58, v58, *(_QWORD *)v59 + 1LL, 24);
      v37 = *(_QWORD *)v59;
      v38 = (char *)v58;
    }
    v39 = &v38[24 * v37];
    *(_QWORD *)v39 = v36;
    *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
    ++*(_QWORD *)v59;
    if ( !src )
      goto LABEL_12;
    n[0] = 0;
    v6 += 32;
    j__free(src);
  }
  while ( *(_QWORD *)v51 != v6 );
LABEL_13:
  v13 = *(_QWORD *)v59;
  v14 = (const void **)v58;
  if ( !*(_QWORD *)v59 )
  {
    v50 = 0;
    if ( v58 )
      goto LABEL_52;
    return 0;
  }
  v15 = 24LL * *(_QWORD *)v59;
  v16 = (char *)v58 + 24 * *(_QWORD *)v59;
  if ( v16 != v58 )
  {
    v17 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
    if ( v17 )
    {
      _BitScanReverse64(&v18, v17);
      sub_225F0((__int64)v58, (unsigned __int64)v58 + 24 * *(_QWORD *)v59, 2LL * (int)v18);
      if ( v15 > 384 )
      {
        v19 = (char *)(v14 + 48);
        sub_18760((__int64)v14, (__int64)(v14 + 48));
        do
        {
          v20 = (__int64)v19;
          v19 += 24;
          sub_18550(v20);
        }
        while ( v16 != v19 );
LABEL_19:
        v14 = (const void **)v58;
        v21 = (char *)v58 + 24 * *(_QWORD *)v59;
        if ( v21 == v58 )
        {
          v50 = 1;
        }
        else
        {
          do
          {
            v27 = *(_QWORD *)(a1 + 8);
            if ( v27 > 1 )
            {
              v28 = *(char **)a1;
              if ( *(_QWORD *)(a1 + 16) < v27 + 1 )
              {
                v29 = sub_96080(a1, v28, v27 + 1, 1);
                *(_QWORD *)a1 = v29;
                v28 = (char *)v29;
              }
              *(_QWORD *)(a1 + 8) = v27 + 1;
              v28[v27 - 1] = 10;
              *(_BYTE *)(*(_QWORD *)a1 + v27) = 0;
            }
            v22 = (char *)v14[1];
            if ( v22 )
            {
              v23 = (size_t)(v22 - 1);
              if ( v22 != (_BYTE *)&dword_0 + 1 )
              {
                v24 = *(_QWORD *)(a1 + 8);
                v25 = (size_t)(v22 - 1);
                if ( v24 )
                {
                  --v24;
                  v25 = v23 + v24;
                  v22 += v24;
                }
                v26 = *(char **)a1;
                if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v22 )
                {
                  *(_QWORD *)v52 = v25;
                  v49 = sub_96080(a1, v26, v22, 1);
                  *(_QWORD *)a1 = v49;
                  v25 = *(_QWORD *)v52;
                  v26 = (char *)v49;
                }
                *(_QWORD *)(a1 + 8) = v22;
                v26[v25] = 0;
                memcpy((void *)(v24 + *(_QWORD *)a1), *v14, v23);
              }
            }
            v14 += 3;
          }
          while ( v21 != (char *)v14 );
          v14 = (const void **)v58;
          v50 = 1;
        }
        goto LABEL_46;
      }
    }
    else
    {
      sub_225F0((__int64)v58, (unsigned __int64)v58 + 24 * *(_QWORD *)v59, -2);
    }
    sub_18760((__int64)v14, (__int64)&v14[3 * v13]);
    goto LABEL_19;
  }
  v50 = 1;
  if ( v16 )
    goto LABEL_48;
  return v50;
}

