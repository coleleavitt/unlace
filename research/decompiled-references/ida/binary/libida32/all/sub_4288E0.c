unsigned __int64 __fastcall sub_4288E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // rdx
  unsigned int *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned int *v9; // rax
  char *v10; // r12
  unsigned int v11; // r14d
  __int64 v12; // rbp
  __int64 v13; // rbx
  size_t v14; // r13
  const char *v15; // rsi
  size_t v16; // r12
  char *v17; // r13
  __int64 v18; // r14
  unsigned __int64 v19; // r12
  double v20; // xmm0_8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rsi
  __int64 v27; // rax
  unsigned int *v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rdx
  const char *v32; // rax
  __int64 v33; // rax
  void *v34; // rbx
  __m128i v35; // xmm0
  void *v36; // rdi
  __int64 v37; // r15
  __m128i v38; // xmm0
  void *v39; // rdi
  void *v41; // rax
  void *v42; // rsi
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v46; // [rsp+18h] [rbp-D0h]
  __int64 v47; // [rsp+20h] [rbp-C8h]
  unsigned __int8 *v48; // [rsp+28h] [rbp-C0h]
  __int64 v49; // [rsp+30h] [rbp-B8h]
  __int64 v50; // [rsp+38h] [rbp-B0h]
  void *v51; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v52; // [rsp+48h] [rbp-A0h] BYREF
  void *src; // [rsp+60h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-80h]
  unsigned int *v55; // [rsp+80h] [rbp-68h]
  void *ptr; // [rsp+88h] [rbp-60h] BYREF
  __int128 v57; // [rsp+90h] [rbp-58h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-40h]

  v49 = a2;
  v45 = a3;
  v50 = a4;
  v58 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    v5 = *(unsigned __int8 **)a3;
    --v4;
  }
  else
  {
    v5 = (unsigned __int8 *)haystack;
  }
  v47 = v4;
  v48 = v5;
  v52 = 0;
  v51 = nullptr;
  v55 = (unsigned int *)sub_4EEBF0(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL);
  v6 = v55;
  ptr = nullptr;
  v7 = *(_QWORD *)(qword_2CA1698 + 1480);
  v57 = 0;
  if ( v55 )
  {
    while ( 1 )
    {
      v8 = sub_4F9200(v7, &ptr, v6, 0);
      v9 = v55;
      if ( v8 > 0 )
        break;
      v55 = (unsigned int *)sub_4EE960(v7 + 1552, *v55);
      v6 = v55;
      if ( !v55 )
        goto LABEL_41;
    }
  }
  else
  {
LABEL_41:
    v9 = nullptr;
  }
  while ( v9 )
  {
    v10 = (char *)haystack;
    if ( (_QWORD)v57 )
      v10 = (char *)ptr;
    v11 = *v9;
    if ( v10 )
    {
      v44.m128i_i64[0] = strlen(v10);
      v12 = sub_428140(v44.m128i_i64[0], (unsigned __int8 *)v10, v47, v48);
      if ( v12 != -1 )
      {
        v13 = operator new(0x48u);
        src = nullptr;
        *(_OWORD *)n = 0;
        v14 = strlen(v10);
        v46 = v14 + 1;
        v15 = v10;
        src = (void *)qvector_reserve(&src, 0, v14 + 1, 1);
        n[0] = v14 + 1;
        memmove(src, v10, v14);
        *((_BYTE *)src + v14) = 0;
        v16 = n[0];
        *(_QWORD *)v13 = &off_2AFE708;
        *(_QWORD *)(v13 + 8) = 0;
        *(_OWORD *)(v13 + 16) = 0;
        if ( v16 )
        {
          v41 = (void *)qalloc_or_throw(v16, v15);
          *(_QWORD *)(v13 + 8) = v41;
          v42 = src;
          *(_QWORD *)(v13 + 24) = v16;
          memcpy(v41, v42, v16);
          *(_QWORD *)(v13 + 16) = v16;
        }
        v17 = (char *)src;
        *(_QWORD *)(v13 + 32) = 4;
        *(_QWORD *)(v13 + 40) = 0;
        *(_QWORD *)v13 = &off_2AFE7C8;
        *(_DWORD *)(v13 + 68) = v11;
        *(_OWORD *)(v13 + 48) = 0;
        if ( v17 )
        {
          n[0] = 0;
          qfree(v17);
          v18 = *(_QWORD *)(v13 + 48);
          v17 = *(char **)(v13 + 40);
          v46 = *(_QWORD *)(v13 + 56);
          v19 = v18 + 1;
        }
        else
        {
          v46 = 0;
          v19 = 1;
          v18 = 0;
        }
        v20 = 0.0;
        v21 = *(_QWORD *)(v45 + 8);
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 < 0 )
            v20 = (double)(int)(v22 & 1 | ((unsigned __int64)v22 >> 1))
                + (double)(int)(v22 & 1 | ((unsigned __int64)v22 >> 1));
          else
            v20 = (double)(int)v22;
        }
        *(_DWORD *)(v13 + 64) = (int)round(v20 / (double)v44.m128i_i32[0] * 100.0);
        if ( v46 < v19 )
        {
          v43 = qvector_reserve(v13 + 40, v17, v19, 16);
          v18 = *(_QWORD *)(v13 + 48);
          *(_QWORD *)(v13 + 40) = v43;
          v17 = (char *)v43;
          v19 = v18 + 1;
        }
        v23 = v45;
        *(_QWORD *)(v13 + 48) = v19;
        v24 = (__int64 *)&v17[16 * v18];
        *v24 = v12;
        v25 = *(_QWORD *)(v23 + 8);
        v26 = v51;
        if ( v25 )
          v12 = v12 + v25 - 1;
        v24[1] = v12;
        v27 = v52.m128i_i64[0];
        if ( v52.m128i_i64[1] < (unsigned __int64)(v52.m128i_i64[0] + 1) )
        {
          v51 = (void *)qvector_reserve(&v51, v26, v52.m128i_i64[0] + 1, 8);
          v26 = v51;
          v27 = v52.m128i_i64[0];
        }
        v26[v27] = v13;
        ++v52.m128i_i64[0];
        v11 = *v55;
      }
    }
    v55 = (unsigned int *)sub_4EE960(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v11);
    v28 = v55;
    v29 = *(_QWORD *)(qword_2CA1698 + 1480);
    if ( !v55 )
      break;
    while ( 1 )
    {
      v30 = sub_4F9200(v29, &ptr, v28, 0);
      v9 = v55;
      if ( v30 > 0 )
        break;
      v55 = (unsigned int *)sub_4EE960(v29 + 1552, *v55);
      v28 = v55;
      if ( !v55 )
        goto LABEL_29;
    }
  }
LABEL_29:
  if ( ptr )
  {
    *(_QWORD *)&v57 = 0;
    qfree(ptr);
  }
  v31 = *(_QWORD *)(v45 + 8);
  v32 = haystack;
  if ( v31 )
  {
    v32 = *(const char **)v45;
    --v31;
  }
  sub_427F20((__int64)&v51, v31, (__int64)v32, *(int *)(v50 + 8));
  v33 = v49;
  v34 = v51;
  v51 = nullptr;
  v35 = _mm_loadu_si128(&v52);
  v52 = 0;
  v36 = *(void **)v49;
  if ( *(_QWORD *)v49 )
  {
    v37 = v49;
    v44 = v35;
    *(_QWORD *)(v49 + 8) = 0;
    qfree(v36);
    v38 = _mm_load_si128(&v44);
    v39 = v51;
    *(_QWORD *)v37 = v34;
    *(__m128i *)(v37 + 8) = v38;
    if ( v39 )
    {
      v52.m128i_i64[0] = 0;
      qfree(v39);
    }
  }
  else
  {
    *(_QWORD *)v49 = v34;
    *(__m128i *)(v33 + 8) = v35;
  }
  return v58 - __readfsqword(0x28u);
}

