unsigned __int64 __fastcall sub_1A2D1F0(
        __int64 *a1,
        unsigned __int32 a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned __int16 **a10)
{
  __int64 v12; // rax
  __m128 si128; // xmm0
  unsigned __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int32 *v18; // rdx
  size_t v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbp
  unsigned int *v23; // rdx
  unsigned __int16 *v24; // r15
  __int32 v25; // r14d
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int32 *v29; // rdx
  __int64 *v31; // [rsp+10h] [rbp-2088h]
  int v32; // [rsp+10h] [rbp-2088h]
  __int64 v34; // [rsp+28h] [rbp-2070h] BYREF
  __m128i v35; // [rsp+30h] [rbp-2068h] BYREF
  int v36; // [rsp+40h] [rbp-2058h] BYREF
  __int64 v37; // [rsp+48h] [rbp-2050h]
  unsigned __int64 v38; // [rsp+50h] [rbp-2048h]
  int v39; // [rsp+58h] [rbp-2040h]
  __int64 v40; // [rsp+60h] [rbp-2038h]
  unsigned __int32 v41; // [rsp+68h] [rbp-2030h]
  void *v42; // [rsp+70h] [rbp-2028h] BYREF
  __m128i v43; // [rsp+78h] [rbp-2020h]
  _DWORD v44[9]; // [rsp+88h] [rbp-2010h] BYREF
  char v45; // [rsp+ACh] [rbp-1FECh]
  _BYTE v46[8168]; // [rsp+B0h] [rbp-1FE8h] BYREF

  v12 = sub_A75AF0(a1[31]);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v14 = v12;
  v44[8] = 0;
  v42 = v44;
  v43 = (__m128i)si128;
  v45 = 0;
  sub_1EA6140(&v42, v12, 16, 8);
  *v18 = a2;
  if ( a3 )
  {
    v14 = sub_1E70650(a1, v14, 1, a2, a6);
    sub_1EA6140(&v42, v14, 4, 4);
    *v29 = a2;
  }
  if ( a4 && (*(_DWORD *)*a10 & 0x4000) != 0 )
  {
    sub_168B9F0((__int64)v46, a1 + 1, a4, ((*(char *)(a1[29] + 1) >> 31) & 0x484) + 5585, 0);
    sub_15F7200(v46);
    v14 = sub_A781D0(a1[31], v14, a5);
    sub_1EA6140(&v42, v14, 4, 4);
    *v23 = a4;
  }
  v19 = v43.m128i_i64[0] - v43.m128i_i64[1];
  v31 = sub_A81BC0((_QWORD *)a1[31], v14, v43.m128i_i32[0] - v43.m128i_i32[2], v15, v16, v17);
  memcpy(v31 + 1, (char *)v42 + v43.m128i_i64[1], v19);
  v20 = sub_17CA050(
          (__int64)a1,
          0,
          a6,
          v14,
          v31,
          a2 | ((unsigned __int64)a2 << 32),
          *(double *)si128.m128_u64,
          a9,
          *a10);
  v21 = v20;
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v24 = *a10;
    if ( (**a10 & 0x1FF) == 0x13 )
    {
      v36 = 16;
      v37 = 0;
      v38 = v20;
      v39 = 0;
      v40 = a6;
      v41 = a2;
      if ( a9 )
      {
        v25 = sub_EEC140((unsigned __int64)v24);
        v35.m128i_i32[1] = a2;
        v35.m128i_i16[0] = 0;
        v35.m128i_i32[2] = sub_EEB7E0((unsigned __int64)v24, 0, *(double *)si128.m128_u64);
        v35.m128i_i32[3] = v25;
      }
      else
      {
        v35.m128i_i32[1] = a2;
        v35.m128i_i16[0] = 2;
        v35.m128i_i32[2] = sub_EEB7E0((unsigned __int64)v24, 0, *(double *)si128.m128_u64);
        v35.m128i_i32[3] = v35.m128i_i32[2];
      }
      v26 = *((unsigned int *)v24 + 1);
      v27 = (__int64)(v24 + 12);
    }
    else
    {
      v36 = 16;
      v37 = 0;
      v38 = v20;
      v39 = 0;
      v40 = a6;
      v41 = a2;
      if ( a9 )
      {
        v35.m128i_i32[1] = a2;
        v27 = (__int64)a10;
        v26 = 1;
        v35.m128i_i16[0] = 1;
        v35.m128i_i32[2] = a2;
        v35.m128i_i32[3] = a2;
      }
      else
      {
        v26 = 1;
        v35.m128i_i32[1] = a2;
        v35.m128i_i32[2] = sub_EEB7E0((unsigned __int64)v24, 0, *(double *)si128.m128_u64);
        v35.m128i_i32[3] = v35.m128i_i32[2];
        v27 = (__int64)a10;
        v35.m128i_i16[0] = 2;
      }
    }
    v34 = 0;
    v32 = v27;
    sub_1A19220((__int64)v46, (__int64)a1, (__int64)&v36, &v35, v27, v26, si128, a8, 0, 1u);
    v28 = sub_1A1D600((unsigned int)v46, (_DWORD)a1, (unsigned int)&v36, (unsigned int)&v35, v32, v26, (__int64)&v34);
    if ( v28 == 1 )
      v21 = 0;
    else
      *a10 = (unsigned __int16 *)(v28 & 0xFFFFFFFFFFFFFFFELL);
    sub_1A0BB10((__int64)v46);
  }
  else
  {
    v21 = 0;
  }
  if ( v42 && v42 != v44 )
    operator delete[](v42);
  return v21;
}
