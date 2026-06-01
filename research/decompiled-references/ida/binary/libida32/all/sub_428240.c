unsigned __int64 __fastcall sub_428240(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rax
  unsigned __int8 *v7; // rdx
  void *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int *v11; // rax
  char *v12; // r12
  unsigned int v13; // r14d
  __int64 v14; // rbp
  __int64 v15; // rbx
  size_t v16; // r13
  const char *v17; // rsi
  size_t v18; // r12
  char *v19; // r13
  __int64 v20; // r14
  unsigned __int64 v21; // r12
  double v22; // xmm0_8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // r13
  __int64 v27; // rax
  _QWORD *v28; // rsi
  __int64 v29; // rax
  void *v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rdx
  const char *v34; // rax
  __m128i v35; // xmm2
  void *v36; // rbx
  unsigned __int64 v37; // xmm4_8
  unsigned __int128 v38; // kr00_16
  __m128i v39; // xmm2
  bool v40; // zf
  void *v42; // rax
  void *v43; // rsi
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int128 v46; // [rsp+10h] [rbp-F8h]
  __int64 v47; // [rsp+20h] [rbp-E8h]
  unsigned __int8 *v48; // [rsp+28h] [rbp-E0h]
  __int64 v49; // [rsp+30h] [rbp-D8h]
  __int64 v50; // [rsp+38h] [rbp-D0h]
  void *v51; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int128 v52; // [rsp+48h] [rbp-C0h]
  void *v53; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v54; // [rsp+68h] [rbp-A0h] BYREF
  void *src; // [rsp+80h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-80h]
  void *v57; // [rsp+A0h] [rbp-68h] BYREF
  void *ptr[4]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v59; // [rsp+C8h] [rbp-40h]

  v50 = a3;
  v45.m128i_i64[0] = a2;
  v49 = a4;
  v59 = __readfsqword(0x28u);
  v4 = *a1;
  v52 = 0;
  v51 = nullptr;
  v5 = *(__int64 (__fastcall **)())(v4 + 24);
  if ( v5 == sub_4288E0 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = (unsigned __int8 *)haystack;
    if ( v6 )
    {
      v7 = *(unsigned __int8 **)a2;
      --v6;
    }
    v47 = v6;
    v48 = v7;
    v54 = 0;
    v53 = nullptr;
    v57 = (void *)sub_4EEBF0(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL);
    v8 = v57;
    memset(ptr, 0, 24);
    v9 = *(_QWORD *)(qword_2CA1698 + 1480);
    if ( v57 )
    {
      while ( 1 )
      {
        v10 = sub_4F9200(v9, ptr, v8, 0);
        v11 = (unsigned int *)v57;
        if ( v10 > 0 )
          break;
        v57 = (void *)sub_4EE960(v9 + 1552, *(unsigned int *)v57);
        v8 = v57;
        if ( !v57 )
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
        *(_QWORD *)&v46 = strlen(v12);
        v14 = sub_428140(v46, (unsigned __int8 *)v12, v47, v48);
        if ( v14 != -1 )
        {
          v15 = operator new(0x48u);
          src = nullptr;
          *(_OWORD *)n = 0;
          v16 = strlen(v12);
          *((_QWORD *)&v46 + 1) = v16 + 1;
          v17 = v12;
          src = (void *)qvector_reserve(&src, 0, v16 + 1, 1);
          n[0] = v16 + 1;
          memmove(src, v12, v16);
          *((_BYTE *)src + v16) = 0;
          v18 = n[0];
          *(_QWORD *)v15 = &off_2AFE708;
          *(_QWORD *)(v15 + 8) = 0;
          *(_OWORD *)(v15 + 16) = 0;
          if ( v18 )
          {
            v42 = (void *)qalloc_or_throw(v18, v17);
            *(_QWORD *)(v15 + 8) = v42;
            v43 = src;
            *(_QWORD *)(v15 + 24) = v18;
            memcpy(v42, v43, v18);
            *(_QWORD *)(v15 + 16) = v18;
          }
          v19 = (char *)src;
          *(_QWORD *)(v15 + 32) = 4;
          *(_QWORD *)(v15 + 40) = 0;
          *(_QWORD *)v15 = &off_2AFE7C8;
          *(_DWORD *)(v15 + 68) = v13;
          *(_OWORD *)(v15 + 48) = 0;
          if ( v19 )
          {
            n[0] = 0;
            qfree(v19);
            v20 = *(_QWORD *)(v15 + 48);
            v19 = *(char **)(v15 + 40);
            *((_QWORD *)&v46 + 1) = *(_QWORD *)(v15 + 56);
            v21 = v20 + 1;
          }
          else
          {
            *((_QWORD *)&v46 + 1) = 0;
            v21 = 1;
            v20 = 0;
          }
          v22 = 0.0;
          v23 = *(_QWORD *)(v45.m128i_i64[0] + 8);
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 < 0 )
              v22 = (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1))
                  + (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1));
            else
              v22 = (double)(int)v24;
          }
          *(_DWORD *)(v15 + 64) = (int)round(v22 / (double)(int)v46 * 100.0);
          if ( *((_QWORD *)&v46 + 1) < v21 )
          {
            v44 = qvector_reserve(v15 + 40, v19, v21, 16);
            v20 = *(_QWORD *)(v15 + 48);
            *(_QWORD *)(v15 + 40) = v44;
            v19 = (char *)v44;
            v21 = v20 + 1;
          }
          v25 = v45.m128i_i64[0];
          *(_QWORD *)(v15 + 48) = v21;
          v26 = (__int64 *)&v19[16 * v20];
          *v26 = v14;
          v27 = *(_QWORD *)(v25 + 8);
          v28 = v53;
          if ( v27 )
            v14 = v14 + v27 - 1;
          v26[1] = v14;
          v29 = v54.m128i_i64[0];
          if ( v54.m128i_i64[1] < (unsigned __int64)(v54.m128i_i64[0] + 1) )
          {
            v53 = (void *)qvector_reserve(&v53, v28, v54.m128i_i64[0] + 1, 8);
            v28 = v53;
            v29 = v54.m128i_i64[0];
          }
          v28[v29] = v15;
          ++v54.m128i_i64[0];
          v13 = *(_DWORD *)v57;
        }
      }
      v57 = (void *)sub_4EE960(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, v13);
      v30 = v57;
      v31 = *(_QWORD *)(qword_2CA1698 + 1480);
      if ( !v57 )
        break;
      while ( 1 )
      {
        v32 = sub_4F9200(v31, ptr, v30, 0);
        v11 = (unsigned int *)v57;
        if ( v32 > 0 )
          break;
        v57 = (void *)sub_4EE960(v31 + 1552, *(unsigned int *)v57);
        v30 = v57;
        if ( !v57 )
          goto LABEL_30;
      }
    }
LABEL_30:
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    v33 = *(_QWORD *)(v45.m128i_i64[0] + 8);
    v34 = haystack;
    if ( v33 )
    {
      v34 = *(const char **)v45.m128i_i64[0];
      --v33;
    }
    sub_427F20((__int64)&v53, v33, (__int64)v34, *(int *)(v50 + 8));
    v35 = _mm_loadu_si128(&v54);
    v36 = v53;
    v54 = 0;
    v45 = v35;
    v53 = nullptr;
    v37 = _mm_srli_si128(v35, 8).m128i_u64[0];
    v38 = __PAIR128__(v37, v35.m128i_u64[0]);
    if ( v51 )
    {
      *(_QWORD *)&v46 = v35.m128i_i64[0];
      *(_QWORD *)&v52 = 0;
      *((_QWORD *)&v46 + 1) = v37;
      qfree(v51);
      v39 = _mm_load_si128(&v45);
      v51 = v36;
      v52 = (unsigned __int128)v39;
      v38 = v46;
      if ( v53 )
      {
        v54.m128i_i64[0] = 0;
        qfree(v53);
        v36 = v51;
        v38 = v52;
      }
    }
  }
  else
  {
    ((void (__fastcall *)(__int64 *, void **, __int64, __int64))v5)(a1, &v51, v45.m128i_i64[0], v50);
    v36 = v51;
    v38 = v52;
  }
  v57 = v36;
  v40 = *(_QWORD *)(v49 + 16) == 0;
  v52 = 0;
  v51 = nullptr;
  LOBYTE(src) = 1;
  *(_OWORD *)ptr = v38;
  if ( v40 )
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, void **, void **))(v49 + 24))(v49, &src, &v57);
  if ( v57 )
  {
    ptr[0] = nullptr;
    qfree(v57);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v51);
  }
  return v59 - __readfsqword(0x28u);
}

