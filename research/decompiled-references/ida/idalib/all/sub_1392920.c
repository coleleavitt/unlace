void __fastcall sub_1392920(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // rax
  char *v9; // rsi
  const void *v10; // r13
  signed __int64 v11; // rbx
  _QWORD *v12; // rbp
  char *v13; // rax
  char *v14; // r14
  __int64 v15; // rdi
  _BYTE *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rbp
  _BYTE *v19; // rax
  unsigned __int64 v20; // r13
  char *v21; // rax
  char *v22; // rcx
  size_t v23; // r14
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __m128i v26; // [rsp+0h] [rbp-90h] BYREF
  __int64 v27; // [rsp+10h] [rbp-80h] BYREF
  void *src[2]; // [rsp+18h] [rbp-78h] BYREF
  void *v29; // [rsp+28h] [rbp-68h]
  void *v30[2]; // [rsp+38h] [rbp-58h] BYREF
  void *v31; // [rsp+48h] [rbp-48h]

  v2 = *(_QWORD **)a2;
  v3 = *(_QWORD **)(a2 + 8);
  *(_BYTE *)(a1 + 8) = 1;
  *(_OWORD *)a2 = 0;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = v3;
  *(_QWORD *)a1 = &off_2C440B0;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)src = 0;
  v29 = nullptr;
  *(_OWORD *)v30 = 0;
  v31 = nullptr;
  if ( v3 == v2 )
    goto LABEL_23;
  do
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 136LL))(*v2);
    v27 = v6;
    if ( v6 )
    {
      v7 = (char *)src[1];
      if ( src[1] == v29 )
      {
        sub_1392680((__int64)src, src[1], &v27);
      }
      else
      {
        *(_QWORD *)src[1] = v6;
        src[1] = v7 + 8;
      }
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 144LL))(*v2);
    v27 = v8;
    if ( v8 )
    {
      v9 = (char *)v30[1];
      if ( v30[1] == v31 )
      {
        sub_13927D0((__int64)v30, v30[1], &v27);
      }
      else
      {
        *(_QWORD *)v30[1] = v8;
        v30[1] = v9 + 8;
      }
    }
    ++v2;
  }
  while ( v3 != v2 );
  v10 = src[0];
  if ( src[1] != src[0] )
  {
    v11 = (char *)src[1] - (char *)src[0];
    v12 = (_QWORD *)operator new(0x20u);
    v12[1] = 0;
    v12[2] = 0;
    *v12 = &off_2BB2420;
    v12[3] = 0;
    if ( (unsigned __int64)(v11 >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      goto LABEL_29;
    v13 = (char *)operator new(v11);
    v14 = &v13[v11];
    v12[1] = v13;
    v12[3] = &v13[v11];
    memmove(v13, v10, v11);
    v15 = *(_QWORD *)(a1 + 40);
    v12[2] = v14;
    *(_QWORD *)(a1 + 40) = v12;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
  v16 = v30[0];
  if ( v30[1] != v30[0] )
  {
    v17 = (_QWORD *)operator new(0x20u);
    v16 = v30[0];
    v18 = v17;
    v17[1] = 0;
    v17[2] = 0;
    *v17 = &off_2BB23B0;
    v19 = v30[1];
    v18[3] = 0;
    v20 = v19 - v16;
    if ( !((v19 - v16) >> 3) )
    {
      v23 = v19 - v16;
      v22 = nullptr;
      goto LABEL_17;
    }
    if ( (unsigned __int64)((v19 - v16) >> 3) <= 0x1FFFFFFFFFFFFFFFLL )
    {
      v21 = (char *)operator new(v20);
      v16 = v30[0];
      v22 = v21;
      v19 = v30[1];
      v23 = (char *)v30[1] - (char *)v30[0];
LABEL_17:
      v26.m128i_i64[0] = (__int64)v22;
      v24 = _mm_loadl_epi64(&v26);
      v18[3] = &v22[v20];
      *(__m128i *)(v18 + 1) = _mm_unpacklo_epi64(v24, v24);
      if ( v16 != v19 )
        v22 = (char *)memmove(v22, v16, v23);
      v25 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = v18;
      v18[2] = &v22[v23];
      if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        v16 = v30[0];
      }
      goto LABEL_21;
    }
LABEL_29:
    std::__throw_bad_alloc();
  }
LABEL_21:
  if ( v16 )
    operator delete(v16);
LABEL_23:
  if ( src[0] )
    operator delete(src[0]);
}
