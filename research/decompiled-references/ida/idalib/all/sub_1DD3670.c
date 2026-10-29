_QWORD *__fastcall sub_1DD3670(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        int a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __m128 si128; // xmm0
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *v16; // r12
  _QWORD *v17; // rbx
  size_t v19; // r13
  _QWORD *v20; // rax
  size_t v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  _BYTE *v26; // r12
  __int64 v27; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+10h] [rbp-98h]
  unsigned int v30; // [rsp+18h] [rbp-90h]
  __int64 v31; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+30h] [rbp-78h]
  __int16 v34; // [rsp+38h] [rbp-70h]
  char v35; // [rsp+3Ah] [rbp-6Eh]
  void *v36; // [rsp+40h] [rbp-68h] BYREF
  __m128i v37; // [rsp+48h] [rbp-60h]
  _BYTE v38[32]; // [rsp+58h] [rbp-50h] BYREF
  int v39; // [rsp+78h] [rbp-30h]
  char v40; // [rsp+7Ch] [rbp-2Ch]

  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return nullptr;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0xA) != 0 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v27 = a1;
    v34 = 1;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = a4;
    v32 = a5;
    v33 = a6;
    v35 = 0;
    v36 = v38;
    v37 = (__m128i)si128;
    v39 = 0;
    v40 = 0;
    if ( (unsigned int)sub_F6C560(a2) > si128.m128_u64[0] )
      sub_1EA60C0(&v36);
    v12 = sub_1DCE820(&v27, (__int64)&v36, a2, a3, si128, a8, v10, v11);
    if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v19 = v37.m128i_i64[0] - v37.m128i_i64[1];
      v20 = sub_A81BC0(*(_QWORD **)(a1 + 248), v12, v37.m128i_i32[0] - v37.m128i_i32[2], v13, v14, v15);
      v16 = v36;
      v17 = v20;
      memcpy(v20 + 1, (char *)v36 + v37.m128i_i64[1], v19);
    }
    else
    {
      v16 = v36;
      v17 = nullptr;
    }
    if ( v16 != v38 )
    {
      if ( v16 )
        operator delete[](v16);
    }
    operator delete(v28, 16LL * v30, 8);
  }
  else
  {
    v40 = 0;
    v39 = 0;
    v37 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
    v36 = v38;
    sub_1EA6360(&v36, a2, a3);
    v21 = v37.m128i_i64[0] - v37.m128i_i64[1];
    v25 = sub_A81BC0(*(_QWORD **)(a1 + 248), a2, v37.m128i_i32[0] - v37.m128i_i32[2], v22, v23, v24);
    v26 = v36;
    v17 = v25;
    memcpy(v25 + 1, (char *)v36 + v37.m128i_i64[1], v21);
    if ( v26 && v26 != v38 )
      operator delete[](v26);
  }
  return v17;
}
