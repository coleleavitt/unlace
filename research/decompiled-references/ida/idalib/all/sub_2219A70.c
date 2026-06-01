__int64 __fastcall sub_2219A70(std::_V2 *a1, const char *a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r13
  __int64 v7; // r14
  __m128 v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rbp
  void *v11; // rdi
  __m128 v12; // xmm0
  const char *v13; // [rsp+8h] [rbp-F0h] BYREF
  __m128i v14; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v15; // [rsp+20h] [rbp-D8h] BYREF
  void *v16; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C0h]
  _BYTE v18[16]; // [rsp+40h] [rbp-B8h] BYREF
  __m128 v19; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v20; // [rsp+60h] [rbp-98h]
  unsigned __int64 v21; // [rsp+70h] [rbp-88h]
  void **v22; // [rsp+80h] [rbp-78h] BYREF
  int v23; // [rsp+88h] [rbp-70h]
  __int128 v24; // [rsp+90h] [rbp-68h]
  __int64 v25; // [rsp+A0h] [rbp-58h]
  char v26; // [rsp+A8h] [rbp-50h]
  int v27; // [rsp+ACh] [rbp-4Ch]
  void **v28; // [rsp+B0h] [rbp-48h]

  if ( __CFADD__(a2, a3) || (result = 1, *((_QWORD *)a1 + 1) <= (unsigned __int64)&a2[a3 - 1]) )
  {
    result = 0;
    if ( a4 )
    {
      v5 = *((_QWORD *)a1 + 1);
      v7 = std::_V2::generic_category(a1);
      if ( v5 < (unsigned __int64)a2 )
      {
        v13 = a2;
        v24 = 0;
        v16 = v18;
        v12 = _mm_loadh_ps((const double *)&v13);
        v28 = &v16;
        v14 = (__m128i)v12;
        v17 = 0;
        v18[0] = 0;
        v23 = 0;
        v26 = 0;
        v27 = 1;
        v25 = 0;
        v22 = (void **)&off_2BEBE68;
        sub_227B8B0(&v22, 0, 0, 0);
        v20 = _mm_load_si128(&v14);
        v13 = "offset 0x%lx is beyond the end of data at 0x%zx";
        v19 = _mm_loadh_ps((const double *)&v13);
        sub_227C560(&v22, &v19);
        v22 = (void **)&off_2BEBE68;
        sub_227B7A0(&v22);
        v22 = &v16;
        LOWORD(v25) = 260;
        v10 = operator new(0x40u);
        sub_2220590(v10, &v22, 22, v7);
        v11 = v16;
        if ( v16 == v18 )
          goto LABEL_7;
      }
      else
      {
        v13 = a2;
        v24 = 0;
        v16 = v18;
        v8 = _mm_loadh_ps((const double *)&v13);
        v28 = &v16;
        v22 = (void **)&off_2BEBE68;
        v14.m128i_i64[0] = (__int64)&off_2BEBE68;
        v15 = (__m128i)v8;
        v17 = 0;
        v18[0] = 0;
        v23 = 0;
        v26 = 0;
        v27 = 1;
        v25 = 0;
        sub_227B8B0(&v22, 0, 0, 0);
        v9 = _mm_load_si128(&v15);
        v21 = v5;
        v20 = v9;
        v13 = "unexpected end of data at offset 0x%zx while reading [0x%lx, 0x%lx)";
        v19 = _mm_loadh_ps((const double *)&v13);
        sub_227C560(&v22, &v19);
        v22 = (void **)v14.m128i_i64[0];
        sub_227B7A0(&v22);
        v22 = &v16;
        LOWORD(v25) = 260;
        v10 = operator new(0x40u);
        sub_2220590(v10, &v22, 84, v7);
        v11 = v16;
        if ( v16 == v18 )
        {
LABEL_7:
          *a4 = v10;
          return 0;
        }
      }
      operator delete(v11);
      goto LABEL_7;
    }
  }
  return result;
}
