unsigned __int64 __fastcall sub_43C140(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rax
  unsigned __int8 *v7; // rdx
  void *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 *v11; // rax
  char *v12; // r12
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rbx
  size_t v16; // r13
  size_t v17; // r12
  char *v18; // r13
  __int64 v19; // r14
  unsigned __int64 v20; // r12
  double v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // r13
  __int64 v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rax
  void *v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rdx
  const char *v33; // rax
  __m128i v34; // xmm2
  void *v35; // rbx
  unsigned __int64 v36; // xmm4_8
  unsigned __int128 v37; // kr00_16
  __m128i v38; // xmm2
  bool v39; // zf
  void *v41; // rax
  void *v42; // rsi
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int128 v45; // [rsp+10h] [rbp-F8h]
  __int64 v46; // [rsp+20h] [rbp-E8h]
  unsigned __int8 *v47; // [rsp+28h] [rbp-E0h]
  __int64 v48; // [rsp+30h] [rbp-D8h]
  __int64 v49; // [rsp+38h] [rbp-D0h]
  void *v50; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int128 v51; // [rsp+48h] [rbp-C0h]
  void *v52; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v53; // [rsp+68h] [rbp-A0h] BYREF
  void *src; // [rsp+80h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-80h]
  void *v56; // [rsp+A0h] [rbp-68h] BYREF
  void *ptr[4]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v58; // [rsp+C8h] [rbp-40h]

  v49 = a3;
  v44.m128i_i64[0] = a2;
  v48 = a4;
  v58 = __readfsqword(0x28u);
  v4 = *a1;
  v51 = 0;
  v50 = nullptr;
  v5 = *(__int64 (__fastcall **)())(v4 + 24);
  if ( v5 == sub_43C7E0 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = (unsigned __int8 *)haystack;
    if ( v6 )
    {
      v7 = *(unsigned __int8 **)a2;
      --v6;
    }
    v46 = v6;
    v47 = v7;
    v53 = 0;
    v52 = nullptr;
    v56 = (void *)sub_506150(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL);
    v8 = v56;
    memset(ptr, 0, 24);
    v9 = *(_QWORD *)(qword_2CCB598 + 1672);
    if ( v56 )
    {
      while ( 1 )
      {
        v10 = sub_510BD0(v9, ptr, v8, 0);
        v11 = (__int64 *)v56;
        if ( v10 > 0 )
          break;
        v56 = (void *)sub_505EB0(v9 + 1624, *(_QWORD *)v56);
        v8 = v56;
        if ( !v56 )
          goto LABEL_46;
      }
    }
    else
    {
LABEL_46:
      v11 = nullptr;
    }
    while ( v11 )
    {
      v12 = (char *)haystack;
      if ( ptr[1] )
        v12 = (char *)ptr[0];
      v13 = *v11;
      if ( v12 )
      {
        *(_QWORD *)&v45 = strlen(v12);
        v14 = sub_43C040(v45, (unsigned __int8 *)v12, v46, v47);
        if ( v14 != -1 )
        {
          v15 = operator new(0x50u);
          src = nullptr;
          *(_OWORD *)n = 0;
          v16 = strlen(v12);
          *((_QWORD *)&v45 + 1) = v16 + 1;
          src = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
          n[0] = v16 + 1;
          memmove(src, v12, v16);
          *((_BYTE *)src + v16) = 0;
          v17 = n[0];
          *(_QWORD *)v15 = &off_2B286C8;
          *(_QWORD *)(v15 + 8) = 0;
          *(_OWORD *)(v15 + 16) = 0;
          if ( v17 )
          {
            v41 = (void *)qalloc_or_throw(v17);
            *(_QWORD *)(v15 + 8) = v41;
            v42 = src;
            *(_QWORD *)(v15 + 24) = v17;
            memcpy(v41, v42, v17);
            *(_QWORD *)(v15 + 16) = v17;
          }
          v18 = (char *)src;
          *(_QWORD *)(v15 + 32) = 4;
          *(_QWORD *)(v15 + 40) = 0;
          *(_QWORD *)v15 = &off_2B28788;
          *(_QWORD *)(v15 + 72) = v13;
          *(_OWORD *)(v15 + 48) = 0;
          if ( v18 )
          {
            n[0] = 0;
            qfree(v18);
            v19 = *(_QWORD *)(v15 + 48);
            v18 = *(char **)(v15 + 40);
            *((_QWORD *)&v45 + 1) = *(_QWORD *)(v15 + 56);
            v20 = v19 + 1;
          }
          else
          {
            *((_QWORD *)&v45 + 1) = 0;
            v20 = 1;
            v19 = 0;
          }
          v21 = 0.0;
          v22 = *(_QWORD *)(v44.m128i_i64[0] + 8);
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 < 0 )
              v21 = (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1))
                  + (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1));
            else
              v21 = (double)(int)v23;
          }
          *(_DWORD *)(v15 + 64) = (int)round(v21 / (double)(int)v45 * 100.0);
          if ( *((_QWORD *)&v45 + 1) < v20 )
          {
            v43 = qvector_reserve(v15 + 40, v18, v20, 16);
            v19 = *(_QWORD *)(v15 + 48);
            *(_QWORD *)(v15 + 40) = v43;
            v18 = (char *)v43;
            v20 = v19 + 1;
          }
          v24 = v44.m128i_i64[0];
          *(_QWORD *)(v15 + 48) = v20;
          v25 = (__int64 *)&v18[16 * v19];
          *v25 = v14;
          v26 = *(_QWORD *)(v24 + 8);
          v27 = v52;
          if ( v26 )
            v14 = v14 + v26 - 1;
          v25[1] = v14;
          v28 = v53.m128i_i64[0];
          if ( v53.m128i_i64[1] < (unsigned __int64)(v53.m128i_i64[0] + 1) )
          {
            v52 = (void *)qvector_reserve(&v52, v27, v53.m128i_i64[0] + 1, 8);
            v27 = v52;
            v28 = v53.m128i_i64[0];
          }
          v27[v28] = v15;
          ++v53.m128i_i64[0];
          v13 = *(_QWORD *)v56;
        }
      }
      v56 = (void *)sub_505EB0(*(_QWORD *)(qword_2CCB598 + 1672) + 1624LL, v13);
      v29 = v56;
      v30 = *(_QWORD *)(qword_2CCB598 + 1672);
      if ( !v56 )
        break;
      while ( 1 )
      {
        v31 = sub_510BD0(v30, ptr, v29, 0);
        v11 = (__int64 *)v56;
        if ( v31 > 0 )
          break;
        v56 = (void *)sub_505EB0(v30 + 1624, *(_QWORD *)v56);
        v29 = v56;
        if ( !v56 )
          goto LABEL_30;
      }
    }
LABEL_30:
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    v32 = *(_QWORD *)(v44.m128i_i64[0] + 8);
    v33 = haystack;
    if ( v32 )
    {
      v33 = *(const char **)v44.m128i_i64[0];
      --v32;
    }
    sub_43BE20((__int64)&v52, v32, (__int64)v33, *(int *)(v49 + 8));
    v34 = _mm_loadu_si128(&v53);
    v35 = v52;
    v53 = 0;
    v44 = v34;
    v52 = nullptr;
    v36 = _mm_srli_si128(v34, 8).m128i_u64[0];
    v37 = __PAIR128__(v36, v34.m128i_u64[0]);
    if ( v50 )
    {
      *(_QWORD *)&v45 = v34.m128i_i64[0];
      *(_QWORD *)&v51 = 0;
      *((_QWORD *)&v45 + 1) = v36;
      qfree(v50);
      v38 = _mm_load_si128(&v44);
      v50 = v35;
      v51 = (unsigned __int128)v38;
      v37 = v45;
      if ( v52 )
      {
        v53.m128i_i64[0] = 0;
        qfree(v52);
        v35 = v50;
        v37 = v51;
      }
    }
  }
  else
  {
    ((void (__fastcall *)(__int64 *, void **, __int64, __int64))v5)(a1, &v50, v44.m128i_i64[0], v49);
    v35 = v50;
    v37 = v51;
  }
  v56 = v35;
  v39 = *(_QWORD *)(v48 + 16) == 0;
  v51 = 0;
  v50 = nullptr;
  LOBYTE(src) = 1;
  *(_OWORD *)ptr = v37;
  if ( v39 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, void **, void **))(v48 + 24))(v48, &src, &v56);
  if ( v56 )
  {
    ptr[0] = nullptr;
    qfree(v56);
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v50);
  }
  return v58 - __readfsqword(0x28u);
}
