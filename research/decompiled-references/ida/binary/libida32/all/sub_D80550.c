__int64 __fastcall sub_D80550(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4, unsigned __int64 a5)
{
  __int64 *v7; // rsi
  __m128 v8; // xmm0
  __m128i v9; // xmm0
  __int64 *v10; // rsi
  unsigned __int8 *v11; // r12
  unsigned __int8 *v12; // rbx
  __int64 v13; // rax
  __m128i v15; // [rsp+0h] [rbp-B8h] BYREF
  int v16; // [rsp+1Ch] [rbp-9Ch] BYREF
  __m128i v17; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int8 *v18; // [rsp+30h] [rbp-88h] BYREF
  __int64 v19; // [rsp+38h] [rbp-80h]
  _BYTE v20[120]; // [rsp+40h] [rbp-78h] BYREF

  v7 = *(__int64 **)(a1 + 184);
  v15.m128i_i64[0] = (__int64)&v16;
  v18 = v20;
  v19 = 0x100000000LL;
  v8 = _mm_loadh_ps((const double *)v15.m128i_i64);
  v17.m128i_i64[0] = (__int64)&v18;
  v15 = (__m128i)v8;
  sub_D7F2B0(
    a3,
    v7,
    0,
    a5,
    (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, __int64))sub_D869C0,
    (__int64)&v17);
  v9 = _mm_load_si128(&v15);
  v10 = *(__int64 **)(a1 + 184);
  v16 = 0;
  v17 = v9;
  sub_D7F2B0(
    a4,
    v10,
    0,
    a5,
    (__int64 (__fastcall *)(__int64, __int64 *, _QWORD, unsigned __int64, __int64, __int64))sub_D7CD40,
    (__int64)&v17);
  v11 = v18;
  v12 = &v18[72 * (unsigned int)v19];
  if ( v18 != v12 )
  {
    do
    {
      while ( 1 )
      {
        v12 -= 72;
        v13 = v12[64];
        if ( (_BYTE)v13 == 0xFF )
          break;
        ((void (__fastcall *)())funcs_D80626[v13])();
        if ( v11 == v12 )
          goto LABEL_4;
      }
    }
    while ( v11 != v12 );
LABEL_4:
    v12 = v18;
  }
  if ( v12 != v20 )
    free(v12);
  return 1;
}

