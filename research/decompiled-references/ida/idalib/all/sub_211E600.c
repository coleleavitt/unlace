__int64 __fastcall sub_211E600(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int32 a6,
        __int128 a7,
        char a8,
        __int128 a9,
        __int64 a10)
{
  __int64 v10; // r10
  _BYTE *v11; // r11
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __m128i v16; // xmm3
  char v17; // r12
  __m128i v18; // xmm4
  char v19; // r14
  _BYTE *v20; // rdi
  __int64 v21; // rdx
  _BYTE *v22; // rdi
  __int64 v23; // rdx
  char v24; // al
  __m128i v25; // xmm5
  __int64 result; // rax
  __int64 v27; // rax
  size_t v28; // rdx
  size_t v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-F0h] BYREF
  _BYTE *v31; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-E0h]
  __m128i v33; // [rsp+20h] [rbp-D8h] BYREF
  char v34; // [rsp+30h] [rbp-C8h]
  __m128i v35; // [rsp+40h] [rbp-B8h] BYREF
  char v36; // [rsp+50h] [rbp-A8h]
  __m128i v37; // [rsp+60h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-88h]
  __m128i v39; // [rsp+80h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-68h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  size_t n; // [rsp+A8h] [rbp-50h]
  _QWORD v43[9]; // [rsp+B0h] [rbp-48h] BYREF

  v10 = a3;
  v11 = a2;
  v13 = *(_QWORD *)(a1 + 8);
  v30 = a5;
  v39.m128i_i32[0] = a6;
  v34 = a8;
  v14 = v13 + 1720;
  v33 = _mm_loadu_si128((const __m128i *)&a7);
  v38 = a10;
  v15 = *(_QWORD *)(v13 + 1728);
  v37 = _mm_loadu_si128((const __m128i *)&a9);
  if ( !v15 )
    goto LABEL_21;
  do
  {
    while ( a6 <= *(_DWORD *)(v15 + 32) )
    {
      v14 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v15 )
        goto LABEL_6;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v15 );
LABEL_6:
  if ( v13 + 1720 == v14 || a6 < *(_DWORD *)(v14 + 32) )
  {
LABEL_21:
    v32 = a3;
    v31 = a2;
    src = &v39;
    v27 = sub_211E240((_QWORD *)(v13 + 1712), v14, (_DWORD **)&src);
    v10 = v32;
    v11 = a2;
    v14 = v27;
  }
  v16 = _mm_load_si128(&v33);
  v17 = v34;
  v18 = _mm_load_si128(&v37);
  src = v43;
  v35 = v16;
  v19 = v38;
  v36 = v34;
  v39 = v18;
  v40 = v38;
  sub_211A0D0(&src, v11, (__int64)&v11[v10]);
  v20 = *(_BYTE **)(v14 + 440);
  if ( src == v43 )
  {
    v28 = n;
    if ( n )
    {
      if ( n == 1 )
        *v20 = v43[0];
      else
        memcpy(v20, src, n);
      v28 = n;
      v20 = *(_BYTE **)(v14 + 440);
    }
    *(_QWORD *)(v14 + 448) = v28;
    v20[v28] = 0;
    v20 = src;
  }
  else
  {
    if ( v20 == (_BYTE *)(v14 + 456) )
    {
      v31 = (_BYTE *)v43[0];
      *(_QWORD *)(v14 + 440) = src;
      *(__m128 *)(v14 + 448) = _mm_loadh_ps((const double *)&v31);
    }
    else
    {
      v31 = (_BYTE *)v43[0];
      v21 = *(_QWORD *)(v14 + 456);
      *(_QWORD *)(v14 + 440) = src;
      *(__m128 *)(v14 + 448) = _mm_loadh_ps((const double *)&v31);
      if ( v20 )
      {
        src = v20;
        v43[0] = v21;
        goto LABEL_12;
      }
    }
    v20 = v43;
    src = v43;
  }
LABEL_12:
  n = 0;
  *v20 = 0;
  if ( src != v43 )
    operator delete(src);
  src = v43;
  sub_211A0D0(&src, a4, (__int64)&a4[v30]);
  v22 = *(_BYTE **)(v14 + 472);
  if ( src == v43 )
  {
    v29 = n;
    if ( n )
    {
      if ( n == 1 )
        *v22 = v43[0];
      else
        memcpy(v22, src, n);
      v29 = n;
      v22 = *(_BYTE **)(v14 + 472);
    }
    *(_QWORD *)(v14 + 480) = v29;
    v22[v29] = 0;
    v22 = src;
  }
  else
  {
    if ( v22 == (_BYTE *)(v14 + 488) )
    {
      v30 = v43[0];
      *(_QWORD *)(v14 + 472) = src;
      *(__m128 *)(v14 + 480) = _mm_loadh_ps((const double *)&v30);
    }
    else
    {
      v30 = v43[0];
      v23 = *(_QWORD *)(v14 + 488);
      *(_QWORD *)(v14 + 472) = src;
      *(__m128 *)(v14 + 480) = _mm_loadh_ps((const double *)&v30);
      if ( v22 )
      {
        src = v22;
        v43[0] = v23;
        goto LABEL_18;
      }
    }
    v22 = v43;
    src = v43;
  }
LABEL_18:
  n = 0;
  *v22 = 0;
  if ( src != v43 )
    operator delete(src);
  v24 = v36;
  v25 = _mm_load_si128(&v35);
  *(_DWORD *)(v14 + 504) = 0;
  *(__m128i *)(v14 + 508) = v25;
  *(_BYTE *)(v14 + 524) = v24;
  *(__m128i *)(v14 + 528) = _mm_load_si128(&v39);
  result = v40;
  *(_BYTE *)(v14 + 553) &= v17;
  *(_QWORD *)(v14 + 544) = result;
  *(_BYTE *)(v14 + 554) |= v17;
  *(_BYTE *)(v14 + 552) |= v19;
  return result;
}
