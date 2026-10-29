void __fastcall sub_15695F0(__int64 a1, int a2, int a3, unsigned __int64 a4, __m128i a5, double a6)
{
  unsigned __int64 v6; // r14
  int v8; // ebp
  int v9; // eax
  int v10; // r15d
  size_t v11; // rax
  __int8 *v12; // rdi
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  _BYTE *v15; // rdi
  unsigned __int64 v16; // rdx
  size_t v17; // rdx
  unsigned __int64 v18; // rdx
  __int8 *v19; // [rsp+8h] [rbp-130h] BYREF
  void *src; // [rsp+10h] [rbp-128h] BYREF
  size_t n; // [rsp+18h] [rbp-120h]
  _QWORD v22[2]; // [rsp+20h] [rbp-118h] BYREF
  int v23; // [rsp+30h] [rbp-108h] BYREF
  int v24; // [rsp+34h] [rbp-104h]
  char v25; // [rsp+38h] [rbp-100h]
  __int64 v26; // [rsp+3Ch] [rbp-FCh]
  char v27; // [rsp+44h] [rbp-F4h]
  void *v28; // [rsp+48h] [rbp-F0h]
  __m128 v29; // [rsp+50h] [rbp-E8h] BYREF
  char v30; // [rsp+68h] [rbp-D0h]
  void *v31; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+78h] [rbp-C0h] BYREF
  void *dest; // [rsp+88h] [rbp-B0h]
  __m128 v34; // [rsp+90h] [rbp-A8h] BYREF
  char v35; // [rsp+A8h] [rbp-90h]
  __int64 v36[17]; // [rsp+B0h] [rbp-88h] BYREF

  v6 = HIDWORD(a4);
  v8 = a4;
  v9 = sub_13DC060(
         SHIDWORD(a4),
         0,
         *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
         a5,
         a6);
  if ( !v9 || v6 >> 31 )
  {
    sub_FC70B0((__int64)v36, *(_QWORD *)(a1 + 104), a2, a3);
    sub_AEA040((__int64)v36);
    return;
  }
  v10 = v9;
  sub_FC70B0((__int64)v36, *(_QWORD *)(a1 + 104), a2, a3);
  v11 = j__strlen("(");
  v23 = v8;
  v24 = v8;
  v26 = 0;
  v27 = 0;
  v28 = &v29.m128_u16[4];
  v29.m128_u64[0] = 0;
  v29.m128_i8[8] = 0;
  v30 = 0;
  v25 = 0;
  v31 = (char *)&v32 + 8;
  sub_1563B60(&v31, "(", (__int64)&asc_22F6C36[v11 + 2]);
  v12 = &v29.m128_i8[8];
  if ( v31 == (char *)&v32 + 8 )
  {
    v18 = v32;
    if ( (_QWORD)v32 )
    {
      if ( (_QWORD)v32 == 1 )
        *(_BYTE *)v28 = BYTE8(v32);
      else
        memcpy(v28, v31, v32);
      v18 = v32;
      v12 = (__int8 *)v28;
    }
    v29.m128_u64[0] = v18;
    v12[v18] = 0;
    v12 = (__int8 *)v31;
  }
  else
  {
    if ( v28 == &v29.m128_u16[4] )
    {
      v19 = *((__int8 **)&v32 + 1);
      v28 = v31;
      v29 = _mm_loadh_ps((const double *)&v19);
    }
    else
    {
      v19 = *((__int8 **)&v32 + 1);
      v13 = v29.m128_u64[1];
      v28 = v31;
      v29 = _mm_loadh_ps((const double *)&v19);
      if ( &v29 != (__m128 *)-8LL )
      {
        v31 = &v29.m128_u16[4];
        *((_QWORD *)&v32 + 1) = v13;
        goto LABEL_7;
      }
    }
    v12 = (char *)&v32 + 8;
    v31 = (char *)&v32 + 8;
  }
LABEL_7:
  *(_QWORD *)&v32 = 0;
  *v12 = 0;
  if ( v31 != (char *)&v32 + 8 )
    operator delete(v31);
  v30 = 0;
  if ( v23 && v24 )
    sub_1569180(v36, (unsigned __int64)&v23);
  v14 = j__strlen(")");
  v19 = &v34.m128_i8[8];
  dest = &v34.m128_u16[4];
  *(_QWORD *)((char *)&v32 + 4) = 0;
  BYTE12(v32) = 0;
  v34.m128_u64[0] = 0;
  v34.m128_i8[8] = 0;
  v35 = 0;
  LODWORD(v31) = v10;
  HIDWORD(v31) = v10;
  LOBYTE(v32) = 0;
  src = v22;
  sub_1563B60(&src, ")", (__int64)&aBtmtCharIllega[v14 + 26]);
  v15 = dest;
  if ( src == v22 )
  {
    v17 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v22[0];
      else
        memcpy(dest, src, n);
      v17 = n;
      v15 = dest;
    }
    v34.m128_u64[0] = v17;
    v15[v17] = 0;
    v15 = src;
    goto LABEL_16;
  }
  if ( dest == v19 )
  {
    v19 = (__int8 *)v22[0];
    dest = src;
    v34 = _mm_loadh_ps((const double *)&v19);
    goto LABEL_28;
  }
  v19 = (__int8 *)v22[0];
  v16 = v34.m128_u64[1];
  dest = src;
  v34 = _mm_loadh_ps((const double *)&v19);
  if ( !v15 )
  {
LABEL_28:
    v15 = v22;
    src = v22;
    goto LABEL_16;
  }
  src = v15;
  v22[0] = v16;
LABEL_16:
  n = 0;
  *v15 = 0;
  if ( src != v22 )
    operator delete(src);
  v35 = 0;
  if ( (_DWORD)v31 && HIDWORD(v31) )
    sub_1569180(v36, (unsigned __int64)&v31);
  if ( dest != &v34.m128_u16[4] )
    operator delete(dest);
  if ( v28 != &v29.m128_u16[4] )
    operator delete(v28);
  sub_AEA040((__int64)v36);
}
