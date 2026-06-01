void __fastcall sub_97E720(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rdx
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  char *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm1
  const double *v17; // rax
  __m128i v18; // xmm2
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+0h] [rbp-118h] BYREF
  int v22; // [rsp+8h] [rbp-110h]
  char v23; // [rsp+Ch] [rbp-10Ch]
  void *ptr; // [rsp+10h] [rbp-108h] BYREF
  __int64 v25; // [rsp+18h] [rbp-100h]
  _BYTE v26[248]; // [rsp+20h] [rbp-F8h] BYREF

  v4 = *(_QWORD **)(a1 + 24);
  ptr = v26;
  v25 = 0x400000000LL;
  v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 104LL);
  if ( v5 == sub_8D7E60 )
  {
    v6 = (_QWORD *)v4[3];
    v7 = *(__int64 (**)(void))(*v6 + 104LL);
    if ( (char *)v7 != (char *)v5 )
    {
LABEL_16:
      v11 = v7();
      goto LABEL_6;
    }
    v8 = (_QWORD *)v6[3];
    v5 = *(__int64 (__fastcall **)(__int64))(*v8 + 104LL);
    if ( (char *)v5 == (char *)v7 )
    {
      v9 = (_QWORD **)v8[3];
      v7 = (__int64 (*)(void))(*v9)[13];
      if ( (char *)v7 == (char *)v5 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 104LL))(v9[3]);
        goto LABEL_6;
      }
      goto LABEL_16;
    }
  }
  v11 = ((__int64 (*)(void))v5)();
LABEL_6:
  sub_A9FA70(v11, a2, &ptr, v10, v12);
  v13 = (char *)ptr;
  if ( 56LL * (unsigned int)v25 )
  {
    v14 = (0xDB6DB6DB6DB6DB7LL * ((56 * (unsigned __int64)(unsigned int)v25 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL;
    v15 = v14 + 1;
    if ( v14 )
    {
      v16 = 0;
      v17 = (const double *)ptr;
      v18 = _mm_unpacklo_epi64((__m128i)2uLL, (__m128i)2uLL);
      do
      {
        v17 += 14;
        v16 = _mm_add_epi64(v16, _mm_add_epi64((__m128i)_mm_loadh_ps(v17 - 4), v18));
      }
      while ( v17 != (const double *)((char *)ptr + 112 * (v15 >> 1)) );
      v19 = _mm_add_epi64(v16, _mm_srli_si128(v16, 8)).m128i_u64[0] + 2;
      if ( (v15 & 1) == 0 )
        goto LABEL_13;
      v13 = (char *)ptr + 56 * (v15 & 0xFFFFFFFFFFFFFFFELL);
    }
    else
    {
      v19 = 2;
    }
    v19 += *((_QWORD *)v13 + 3) + 2LL;
  }
  else
  {
    v19 = 2;
  }
LABEL_13:
  v20 = *(_QWORD *)(a2 + 8);
  v21 = v19;
  v22 = 64;
  v23 = 0;
  sub_97E3E0(a1, (__int64)&v21, v20);
  if ( ptr != v26 )
    free(ptr);
}

