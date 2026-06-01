__m128i *__fastcall sub_13DC730(__m128i *a1, int a2, __int64 *a3, __int64 a4, char a5, __m128i a6, double a7)
{
  int v11; // esi
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  const char *v14; // rax
  __int64 v15; // rdx
  __int64 v17; // r15
  _DWORD *v18; // rax
  int v19; // esi
  __int64 v20; // rax
  __m128i v21; // xmm0
  _BYTE *v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-150h]
  __int64 v24; // [rsp+10h] [rbp-148h]
  int v25[4]; // [rsp+1Ch] [rbp-13Ch] BYREF
  char v26; // [rsp+2Fh] [rbp-129h] BYREF
  __m128i v27; // [rsp+30h] [rbp-128h] BYREF
  __int64 v28; // [rsp+40h] [rbp-118h]
  _QWORD v29[10]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v30[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v25[0] = a2;
  if ( (a2 >= 0 || (unsigned __int8)sub_13DBFA0(a2, a3, a4, v25, a6, a7))
    && ((v27.m128i_i32[0] = v25[0]) == 0
     || v25[0] < 0 && !(unsigned __int8)sub_13DBFA0(v25[0], a3, a4, v27.m128i_i32, a6, a7)
      ? (v11 = 0)
      : (unsigned __int8)sub_13DBE60(v27.m128i_i32[0], (__int64)v29, a3, a4, a6, a7)
      ? (v11 = v27.m128i_i32[0])
      : (v11 = v27.m128i_i32[0] + HIDWORD(v29[0])),
        v25[0] = v11,
        v12 = sub_A80750((__int64)a3, v11),
        v26 = 0,
        v13 = v12,
        v14 = sub_10202B0(a3, v12, &v26),
        !v26) )
  {
    v23 = (__int64)v14;
    v17 = (__int64)&v14[v15];
    v24 = (__int64)&v14[HIDWORD(v13)];
    v18 = (_DWORD *)sub_101FFD0((__int64)a3, v13);
    v19 = 0;
    if ( v18 )
      v19 = *v18 & 0x7FFFFFFF;
    sub_13D1080((__int64)v29, v19, a4, v23, v24, v17, 1);
    v30[66] = a5;
    sub_13DB5F0(v29, (__int64)&v27, a6, a7);
    v20 = v28;
    v21 = _mm_load_si128(&v27);
    a1[1].m128i_i8[8] = 1;
    v22 = (_BYTE *)v29[8];
    a1[1].m128i_i64[0] = v20;
    *a1 = v21;
    v29[0] = &off_2C449F0;
    if ( v22 != v30 )
      free(v22);
  }
  else
  {
    a1[1].m128i_i8[8] = 0;
  }
  return a1;
}
