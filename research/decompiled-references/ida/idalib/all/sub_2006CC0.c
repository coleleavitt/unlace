__int64 *__fastcall sub_2006CC0(__int64 *a1, void *a2, size_t a3, __int64 a4, int a5)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __m128i si128; // xmm0
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i *v15; // rax
  __m128i *v16; // rdi
  __int64 v17; // rax
  size_t v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v21[2]; // [rsp+10h] [rbp-A8h] BYREF
  char v22; // [rsp+20h] [rbp-98h]
  void *v23[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v24; // [rsp+40h] [rbp-78h] BYREF
  void *src; // [rsp+50h] [rbp-68h] BYREF
  size_t n; // [rsp+58h] [rbp-60h]
  __m128i v27; // [rsp+60h] [rbp-58h] BYREF
  __int16 v28; // [rsp+70h] [rbp-48h]

  src = a2;
  n = a3;
  v28 = 261;
  sub_2230FD0(v21, &src, 0, 1, 1, 0);
  if ( (v22 & 1) == 0 || !LODWORD(v21[0]) )
  {
    v8 = v21[0];
    v21[0] = 0;
    v9 = operator new(0xA8u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A9340);
    v11 = v9;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 48) = 0;
    *(_QWORD *)v9 = &off_2BE4E10;
    *(__m128i *)(v9 + 16) = si128;
    *(_OWORD *)(v9 + 32) = 0;
    sub_1FF5A80((_QWORD *)(v9 + 56));
    *(_QWORD *)(v11 + 72) = v8;
    *(_DWORD *)(v11 + 80) = a5;
    *(_QWORD *)(v11 + 144) = 0;
    v12 = *(_QWORD *)(v8 + 8);
    v13 = *(_QWORD *)(v8 + 16);
    *(_QWORD *)(v11 + 88) = 0;
    *(_QWORD *)(v11 + 96) = 0;
    *(_QWORD *)(v11 + 104) = 0;
    *(_QWORD *)(v11 + 112) = 0;
    *(_QWORD *)(v11 + 120) = 0;
    *(_QWORD *)(v11 + 128) = 0;
    *(_QWORD *)(v11 + 136) = 0;
    sub_2270920(v11 + 152, v12, v13 - v12, v11 + 88, 1, 0);
    if ( (unsigned __int8)sub_2005DF0(v11, (void **)a4) )
    {
      *a1 = v11;
    }
    else
    {
      v14 = *(_QWORD *)v11;
      *a1 = 0;
      (*(void (__fastcall **)(__int64))(v14 + 8))(v11);
    }
    goto LABEL_16;
  }
  (*(void (__fastcall **)(void **))(*(_QWORD *)v21[1] + 32LL))(v23);
  v15 = (__m128i *)sub_99BDC0(v23, 0, 0, "Error while opening JSON database: ", 0x23u);
  src = &v27;
  if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
  {
    v27 = _mm_loadu_si128(v15 + 1);
  }
  else
  {
    src = (void *)v15->m128i_i64[0];
    v27.m128i_i64[0] = v15[1].m128i_i64[0];
  }
  n = v15->m128i_u64[1];
  v15->m128i_i64[0] = (__int64)v15[1].m128i_i64;
  v15->m128i_i64[1] = 0;
  v15[1].m128i_i8[0] = 0;
  v16 = *(__m128i **)a4;
  if ( src == &v27 )
  {
    v19 = n;
    if ( n )
    {
      if ( n == 1 )
        v16->m128i_i8[0] = v27.m128i_i8[0];
      else
        memcpy(v16, src, n);
      v19 = n;
      v16 = *(__m128i **)a4;
    }
    *(_QWORD *)(a4 + 8) = v19;
    v16->m128i_i8[v19] = 0;
    v16 = (__m128i *)src;
    goto LABEL_11;
  }
  if ( v16 == (__m128i *)(a4 + 16) )
  {
    v20 = v27.m128i_i64[0];
    *(_QWORD *)a4 = src;
    *(__m128 *)(a4 + 8) = _mm_loadh_ps((const double *)&v20);
    goto LABEL_25;
  }
  v20 = v27.m128i_i64[0];
  v17 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)a4 = src;
  *(__m128 *)(a4 + 8) = _mm_loadh_ps((const double *)&v20);
  if ( !v16 )
  {
LABEL_25:
    v16 = &v27;
    src = &v27;
    goto LABEL_11;
  }
  src = v16;
  v27.m128i_i64[0] = v17;
LABEL_11:
  n = 0;
  v16->m128i_i8[0] = 0;
  if ( src != &v27 )
    operator delete(src);
  if ( v23[0] != &v24 )
    operator delete(v23[0]);
  *a1 = 0;
LABEL_16:
  sub_FC2AF0(v21);
  return a1;
}
