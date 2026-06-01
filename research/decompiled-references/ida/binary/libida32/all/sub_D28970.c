__int64 __fastcall sub_D28970(void **a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void **v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  void **v9; // rsi
  __m128i v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 result; // rax
  unsigned __int8 v17; // [rsp+0h] [rbp-A8h]
  __int64 v18; // [rsp+8h] [rbp-A0h]
  _QWORD v19[2]; // [rsp+10h] [rbp-98h] BYREF
  void *v20; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-80h]
  unsigned __int8 v22; // [rsp+2Ch] [rbp-7Ch]
  __m128i v23; // [rsp+30h] [rbp-78h] BYREF
  void *v24; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-60h]
  unsigned __int8 v26; // [rsp+4Ch] [rbp-5Ch]
  _QWORD v27[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a1;
  v7 = sub_D01480((__int64)a1[22]);
  v19[1] = v8;
  v19[0] = v7;
  sub_D27A40((__int64)&v20, (__int64)v19, 0);
  v9 = (void **)a3;
  v10.m128i_i64[0] = sub_D1E4A0(a1, a3);
  v23 = v10;
  v11 = (a4 >> 3) & 7;
  if ( ((a4 >> 3) & 7) == 7 )
    v11 = 1;
  v25 = v21;
  if ( v21 > 0x40 )
  {
    v9 = &v20;
    a1 = &v24;
    sub_21E17D0(&v24);
  }
  else
  {
    v24 = v20;
  }
  v26 = v22;
  v12 = sub_21D5390(a1, v9, v10.m128i_i64[1]);
  v18 = v12;
  if ( a3 == v12 )
    sub_21DBE90(v27, v12);
  else
    sub_21D7CC0(v27, a3);
  v13 = v26 ^ 1u;
  if ( v27[0] == v18 )
    v14 = sub_21DE2A0(v27, &v24, v13, v11);
  else
    v14 = sub_21D7400(v27, &v24, v13, v11);
  sub_CDAFD0((__int64)&v23, v27);
  sub_971860(v27);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  *(__m128i *)sub_DFD980(v6[22], 16) = _mm_load_si128(&v23);
  result = sub_DA7060(v6, a2, &v23, v14, a4);
  if ( v21 > 0x40 )
  {
    if ( v20 )
    {
      v17 = result;
      operator delete[](v20);
      return v17;
    }
  }
  return result;
}

