__int64 __fastcall sub_D1F920(void **a1, __int64 a2, __int64 a3, unsigned int a4)
{
  void **v6; // rbx
  void **v7; // rsi
  __m128i v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  unsigned int v13; // ebx
  __int64 v16; // [rsp+8h] [rbp-B0h]
  void *v17; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v19; // [rsp+1Ch] [rbp-9Ch]
  __m128i v20; // [rsp+20h] [rbp-98h] BYREF
  void *v21; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-80h]
  unsigned __int8 v23; // [rsp+3Ch] [rbp-7Ch]
  void *v24; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-70h]
  _QWORD v26[11]; // [rsp+60h] [rbp-58h] BYREF

  v6 = a1;
  sub_CE7240((__int64)&v24, (__int64)a1[22]);
  sub_CD4C20((__int64)&v17, (__int64 *)&v24);
  v7 = (void **)a3;
  v8.m128i_i64[0] = sub_D1E4A0(a1, a3);
  v20 = v8;
  v9 = (a4 >> 3) & 7;
  if ( ((a4 >> 3) & 7) == 7 )
    v9 = 1;
  v22 = v18;
  if ( v18 > 0x40 )
  {
    v7 = &v17;
    a1 = &v21;
    sub_21E17D0(&v21);
  }
  else
  {
    v21 = v17;
  }
  v23 = v19;
  v10 = sub_21D5390(a1, v7, v8.m128i_i64[1]);
  v16 = v10;
  if ( a3 == v10 )
    sub_21DBE90(v26, v10);
  else
    sub_21D7CC0(v26, a3);
  v11 = v23 ^ 1u;
  if ( v26[0] == v16 )
    v12 = sub_21DE2A0(v26, &v21, v11, v9);
  else
    v12 = sub_21D7400(v26, &v21, v11, v9);
  sub_CDAFD0((__int64)&v20, v26);
  sub_971860(v26);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  *(__m128i *)sub_DFD980(v6[22], 16) = _mm_load_si128(&v20);
  v13 = sub_DA7060(v6, a2, &v20, v12, a4);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
  return v13;
}

