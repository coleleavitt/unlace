unsigned __int64 __fastcall users_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v9; // rbp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  _BYTE *v13; // rsi
  size_t v14; // rax
  __int64 v15; // r15
  size_t v16; // rbx
  char *v17; // rsi
  __int64 *v18; // rbx
  __int64 v19; // r14
  __m128i v20; // xmm1
  __int64 v21; // rdi
  double v22; // xmm0_8
  __m128i v23; // xmm1
  void *v24; // rdi
  __int64 *v25; // rbx
  __int64 v26; // rdi
  unsigned __int64 v27; // r12
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  const char *v31; // rsi
  char *v33; // r15
  void *v34; // rax
  const void *v35; // r8
  void *v36; // rax
  const void *v37; // r8
  void *v38; // rax
  const char *v39; // r8
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rsi
  __m128i v49; // [rsp+0h] [rbp-88h] BYREF
  void *v50; // [rsp+10h] [rbp-78h] BYREF
  __m128i v51; // [rsp+18h] [rbp-70h] BYREF
  char s[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 336);
  v7 = *a2;
  v53 = __readfsqword(0x28u);
  v9 = v6 + 136 * a5;
  if ( (__int64 *)v9 != v7 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    if ( v10 > 1 )
    {
      v39 = *(const char **)v9;
      v40 = (void *)*v7;
      if ( v7[2] < v10 )
      {
        v42 = *v7;
        v43 = *(_QWORD *)(v9 + 8);
        v49.m128i_i64[0] = *(_QWORD *)v9;
        v44 = qvector_reserve(v7, v42, v43, 1);
        v39 = (const char *)v49.m128i_i64[0];
        *v7 = v44;
        v40 = (void *)v44;
      }
      v7[1] = v10;
      memmove(v40, v39, v10 - 1);
      *(_BYTE *)(*v7 + v10 - 1) = 0;
      v7 = *a2;
    }
    else
    {
      v7[1] = 0;
      v7 = *a2;
    }
  }
  if ( v7 + 3 != (__int64 *)(v9 + 24) )
  {
    v11 = *(_QWORD *)(v9 + 32);
    if ( v11 > 1 )
    {
      v37 = *(const void **)(v9 + 24);
      v38 = (void *)v7[3];
      if ( v7[5] < v11 )
      {
        v47 = *(_QWORD *)(v9 + 32);
        v48 = v7[3];
        v49.m128i_i64[0] = *(_QWORD *)(v9 + 24);
        v38 = (void *)qvector_reserve(v7 + 3, v48, v47, 1);
        v37 = (const void *)v49.m128i_i64[0];
        v7[3] = (__int64)v38;
      }
      v7[4] = v11;
      memmove(v38, v37, v11 - 1);
      *(_BYTE *)(v7[3] + v11 - 1) = 0;
      v7 = *a2;
    }
    else
    {
      v7[4] = 0;
      v7 = *a2;
    }
  }
  if ( v7 + 6 != (__int64 *)(v9 + 48) )
  {
    v12 = *(_QWORD *)(v9 + 56);
    if ( v12 > 1 )
    {
      v35 = *(const void **)(v9 + 48);
      v36 = (void *)v7[6];
      if ( v7[8] < v12 )
      {
        v45 = *(_QWORD *)(v9 + 56);
        v46 = v7[6];
        v49.m128i_i64[0] = *(_QWORD *)(v9 + 48);
        v36 = (void *)qvector_reserve(v7 + 6, v46, v45, 1);
        v35 = (const void *)v49.m128i_i64[0];
        v7[6] = (__int64)v36;
      }
      v7[7] = v12;
      memmove(v36, v35, v12 - 1);
      *(_BYTE *)(v7[6] + v12 - 1) = 0;
      v7 = *a2;
    }
    else
    {
      v7[7] = 0;
      v7 = *a2;
    }
  }
  if ( *(_BYTE *)(v9 + 128) )
  {
    v13 = (_BYTE *)v7[9];
    if ( (unsigned __int64)v7[11] <= 1 )
    {
      v41 = qvector_reserve(v7 + 9, v13, 2, 1);
      v7[9] = v41;
      v13 = (_BYTE *)v41;
    }
    v7[10] = 2;
    *v13 = 89;
    *(_BYTE *)(v7[9] + 1) = 0;
  }
  else
  {
    v7[10] = 0;
  }
  qstrftime64(s, 20, "%F %T", *(_QWORD *)(v9 + 120));
  v50 = nullptr;
  v51 = 0;
  v14 = strlen(s);
  v15 = v14 + 1;
  v16 = v14;
  v17 = s;
  v50 = (void *)qvector_reserve(&v50, 0, v14 + 1, 1);
  v51.m128i_i64[0] = v15;
  memmove(v50, s, v16);
  *((_BYTE *)v50 + v16) = 0;
  v18 = *a2;
  v19 = (__int64)v50;
  v20 = _mm_loadu_si128(&v51);
  v51 = 0;
  v50 = nullptr;
  v21 = v18[12];
  if ( v21 )
  {
    v18[13] = 0;
    v49 = v20;
    v22 = qfree(v21, s);
    v23 = _mm_load_si128(&v49);
    v24 = v50;
    v18[12] = v19;
    *(__m128i *)(v18 + 13) = v23;
    if ( v24 )
    {
      v51.m128i_i64[0] = 0;
      qfree(v24, s, v22);
    }
  }
  else
  {
    v18[12] = v19;
    *(__m128i *)(v18 + 13) = v20;
  }
  v25 = *a2;
  v26 = (__int64)(*a2 + 15);
  if ( v26 != v9 + 72 )
  {
    v27 = *(_QWORD *)(v9 + 80);
    if ( v27 > 1 )
    {
      v33 = *(char **)(v9 + 72);
      v34 = (void *)v25[15];
      if ( v25[17] < v27 )
      {
        v34 = (void *)qvector_reserve(v26, v25[15], *(_QWORD *)(v9 + 80), 1);
        v25[15] = (__int64)v34;
      }
      v25[16] = v27;
      v17 = v33;
      v26 = (__int64)v34;
      memmove(v34, v33, v27 - 1);
      *(_BYTE *)(v25[15] + v27 - 1) = 0;
    }
    else
    {
      v25[16] = 0;
    }
  }
  v28 = sub_426230(v26, v17);
  v29 = sub_4170C0((__int64)v28);
  v30 = *(_QWORD *)(v29 + 8);
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v31 = &s1;
    if ( !v30 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v31 = *(const char **)v9;
  if ( v30 )
  {
LABEL_26:
    if ( strcmp(*(const char **)v29, v31) )
      return v53 - __readfsqword(0x28u);
LABEL_27:
    *(_DWORD *)(a4 + 4) |= 1u;
    return v53 - __readfsqword(0x28u);
  }
  if ( !strcmp(&s1, v31) )
    goto LABEL_27;
  return v53 - __readfsqword(0x28u);
}
