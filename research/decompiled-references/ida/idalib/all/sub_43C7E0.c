unsigned __int64 __fastcall sub_43C7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 *v9; // rax
  char *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rbx
  size_t v14; // r13
  size_t v15; // r12
  char *v16; // r13
  __int64 v17; // r14
  unsigned __int64 v18; // r12
  double v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // r13
  __int64 v24; // rax
  _QWORD *v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rdx
  const char *v31; // rax
  __int64 v32; // rax
  void *v33; // rbx
  __m128i v34; // xmm0
  void *v35; // rdi
  __int64 v36; // r15
  __m128i v37; // xmm0
  void *v38; // rdi
  void *v40; // rax
  void *v41; // rsi
  __int64 v42; // rax
  __m128i v43; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v45; // [rsp+18h] [rbp-D0h]
  __int64 v46; // [rsp+20h] [rbp-C8h]
  unsigned __int8 *v47; // [rsp+28h] [rbp-C0h]
  __int64 v48; // [rsp+30h] [rbp-B8h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  void *v50; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v51; // [rsp+48h] [rbp-A0h] BYREF
  void *src; // [rsp+60h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-80h]
  _QWORD *v54; // [rsp+80h] [rbp-68h]
  void *ptr; // [rsp+88h] [rbp-60h] BYREF
  __int128 v56; // [rsp+90h] [rbp-58h]
  unsigned __int64 v57; // [rsp+A8h] [rbp-40h]

  v48 = a2;
  v44 = a3;
  v49 = a4;
  v57 = __readfsqword(0x28u);
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
  v46 = v4;
  v47 = v5;
  v51 = 0;
  v50 = nullptr;
  v54 = (_QWORD *)sub_506150(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL);
  v6 = v54;
  ptr = nullptr;
  v7 = *(_QWORD *)(qword_2CCB598 + 1672);
  v56 = 0;
  if ( v54 )
  {
    while ( 1 )
    {
      v8 = sub_510BD0(v7, &ptr, v6, 0);
      v9 = v54;
      if ( v8 > 0 )
        break;
      v54 = (_QWORD *)sub_505EB0(v7 + 1624, *v54);
      v6 = v54;
      if ( !v54 )
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
    if ( (_QWORD)v56 )
      v10 = (char *)ptr;
    v11 = *v9;
    if ( v10 )
    {
      v43.m128i_i64[0] = strlen(v10);
      v12 = sub_43C040(v43.m128i_i64[0], (unsigned __int8 *)v10, v46, v47);
      if ( v12 != -1 )
      {
        v13 = operator new(0x50u);
        src = nullptr;
        *(_OWORD *)n = 0;
        v14 = strlen(v10);
        v45 = v14 + 1;
        src = (void *)qvector_reserve(&src, 0, v14 + 1, 1);
        n[0] = v14 + 1;
        memmove(src, v10, v14);
        *((_BYTE *)src + v14) = 0;
        v15 = n[0];
        *(_QWORD *)v13 = &off_2B286C8;
        *(_QWORD *)(v13 + 8) = 0;
        *(_OWORD *)(v13 + 16) = 0;
        if ( v15 )
        {
          v40 = (void *)qalloc_or_throw(v15);
          *(_QWORD *)(v13 + 8) = v40;
          v41 = src;
          *(_QWORD *)(v13 + 24) = v15;
          memcpy(v40, v41, v15);
          *(_QWORD *)(v13 + 16) = v15;
        }
        v16 = (char *)src;
        *(_QWORD *)(v13 + 32) = 4;
        *(_QWORD *)(v13 + 40) = 0;
        *(_QWORD *)v13 = &off_2B28788;
        *(_QWORD *)(v13 + 72) = v11;
        *(_OWORD *)(v13 + 48) = 0;
        if ( v16 )
        {
          n[0] = 0;
          qfree(v16);
          v17 = *(_QWORD *)(v13 + 48);
          v16 = *(char **)(v13 + 40);
          v45 = *(_QWORD *)(v13 + 56);
          v18 = v17 + 1;
        }
        else
        {
          v45 = 0;
          v18 = 1;
          v17 = 0;
        }
        v19 = 0.0;
        v20 = *(_QWORD *)(v44 + 8);
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 < 0 )
            v19 = (double)(int)(v21 & 1 | ((unsigned __int64)v21 >> 1))
                + (double)(int)(v21 & 1 | ((unsigned __int64)v21 >> 1));
          else
            v19 = (double)(int)v21;
        }
        *(_DWORD *)(v13 + 64) = (int)round(v19 / (double)v43.m128i_i32[0] * 100.0);
        if ( v45 < v18 )
        {
          v42 = qvector_reserve(v13 + 40, v16, v18, 16);
          v17 = *(_QWORD *)(v13 + 48);
          *(_QWORD *)(v13 + 40) = v42;
          v16 = (char *)v42;
          v18 = v17 + 1;
        }
        v22 = v44;
        *(_QWORD *)(v13 + 48) = v18;
        v23 = (__int64 *)&v16[16 * v17];
        *v23 = v12;
        v24 = *(_QWORD *)(v22 + 8);
        v25 = v50;
        if ( v24 )
          v12 = v12 + v24 - 1;
        v23[1] = v12;
        v26 = v51.m128i_i64[0];
        if ( v51.m128i_i64[1] < (unsigned __int64)(v51.m128i_i64[0] + 1) )
        {
          v50 = (void *)qvector_reserve(&v50, v25, v51.m128i_i64[0] + 1, 8);
          v25 = v50;
          v26 = v51.m128i_i64[0];
        }
        v25[v26] = v13;
        ++v51.m128i_i64[0];
        v11 = *v54;
      }
    }
    v54 = (_QWORD *)sub_505EB0(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v11);
    v27 = v54;
    v28 = *(_QWORD *)(qword_2CCB598 + 1672);
    if ( !v54 )
      break;
    while ( 1 )
    {
      v29 = sub_510BD0(v28, &ptr, v27, 0);
      v9 = v54;
      if ( v29 > 0 )
        break;
      v54 = (_QWORD *)sub_505EB0(v28 + 1624, *v54);
      v27 = v54;
      if ( !v54 )
        goto LABEL_29;
    }
  }
LABEL_29:
  if ( ptr )
  {
    *(_QWORD *)&v56 = 0;
    qfree(ptr);
  }
  v30 = *(_QWORD *)(v44 + 8);
  v31 = haystack;
  if ( v30 )
  {
    v31 = *(const char **)v44;
    --v30;
  }
  sub_43BE20((__int64)&v50, v30, (__int64)v31, *(int *)(v49 + 8));
  v32 = v48;
  v33 = v50;
  v50 = nullptr;
  v34 = _mm_loadu_si128(&v51);
  v51 = 0;
  v35 = *(void **)v48;
  if ( *(_QWORD *)v48 )
  {
    v36 = v48;
    v43 = v34;
    *(_QWORD *)(v48 + 8) = 0;
    qfree(v35);
    v37 = _mm_load_si128(&v43);
    v38 = v50;
    *(_QWORD *)v36 = v33;
    *(__m128i *)(v36 + 8) = v37;
    if ( v38 )
    {
      v51.m128i_i64[0] = 0;
      qfree(v38);
    }
  }
  else
  {
    *(_QWORD *)v48 = v33;
    *(__m128i *)(v32 + 8) = v34;
  }
  return v57 - __readfsqword(0x28u);
}
