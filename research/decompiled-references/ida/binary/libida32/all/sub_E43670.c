__int64 __fastcall sub_E43670(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  void *v9; // rax
  void *v10; // rax
  __int64 v11; // r12
  __int64 v13; // [rsp+10h] [rbp-158h]
  void *v14[4]; // [rsp+20h] [rbp-148h] BYREF
  __m128i v15; // [rsp+40h] [rbp-128h] BYREF
  __int64 v16; // [rsp+50h] [rbp-118h] BYREF
  __m128i v17[2]; // [rsp+60h] [rbp-108h] BYREF
  __int16 v18; // [rsp+80h] [rbp-E8h]
  __m128i v19[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int16 v20; // [rsp+B0h] [rbp-B8h]
  __m128i v21; // [rsp+C0h] [rbp-A8h] BYREF
  _DWORD v22[8]; // [rsp+D0h] [rbp-98h] BYREF
  void *v23[3]; // [rsp+F0h] [rbp-78h] BYREF
  _DWORD v24[24]; // [rsp+108h] [rbp-60h] BYREF

  sub_E35E20((void ***)v23, "id");
  sub_E3A830(&v21, a3);
  sub_E35650((__int64)v24, &v21);
  sub_E3FB10(a1, (__int64)v23);
  sub_2207560(v24);
  if ( v23[0] )
    sub_E34850((void **)v23[0]);
  if ( (_DWORD *)v21.m128i_i64[0] != v22 )
    operator delete((void *)v21.m128i_i64[0]);
  if ( a3 )
  {
    v19[0].m128i_i64[0] = (__int64)"Decl";
    v20 = 259;
    v4 = (_BYTE *)sub_B64350(a3);
    v18 = 257;
    if ( *v4 )
    {
      v17[0].m128i_i64[0] = (__int64)v4;
      LOBYTE(v18) = 3;
    }
    sub_A1D840(&v21, v17, v19, 257, v5, v6);
    sub_222F820(&v15, &v21);
    sub_E35650((__int64)v23, &v15);
    sub_E35E20((void ***)v14, "kind");
    v13 = sub_220A4E0(a1, v14);
    sub_2207560(v13);
    sub_2205840(v13, v23);
    if ( v14[0] )
      sub_E34850((void **)v14[0]);
    sub_2207560(v23);
    if ( (__int64 *)v15.m128i_i64[0] != &v16 )
      operator delete((void *)v15.m128i_i64[0]);
    v7 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( (unsigned int)(v7 - 18) <= 0x3F )
    {
      v17[0].m128i_i64[0] = *(_QWORD *)(a3 + 40);
      sub_B62CC0((__int64)&v21, v17[0].m128i_i64);
      sub_E35650((__int64)v23, &v21);
      sub_E35E20((void ***)v19, (char *)"name");
      v8 = sub_220A4E0(a1, v19);
      sub_2207560(v8);
      sub_2205840(v8, v23);
      if ( v19[0].m128i_i64[0] )
        sub_E34850((void **)v19[0].m128i_i64[0]);
      sub_2207560(v23);
      if ( (_DWORD *)v21.m128i_i64[0] != v22 )
        operator delete((void *)v21.m128i_i64[0]);
      v7 = *(_BYTE *)(a3 + 28) & 0x7F;
    }
    if ( (unsigned int)(v7 - 26) <= 0x1A )
    {
      sub_E3FD20((__int64)&v21, a2, *(_QWORD *)(a3 + 48), 1);
      LOWORD(v23[0]) = 7;
      v9 = (void *)v21.m128i_i64[0];
      v21.m128i_i64[0] = 0;
      v23[1] = v9;
      v10 = (void *)v21.m128i_i64[1];
      v21.m128i_i64[1] = 0;
      v23[2] = v10;
      LODWORD(v10) = v22[0];
      v22[0] = 0;
      v24[0] = (_DWORD)v10;
      sub_E35E20((void ***)v19, (char *)"type");
      v11 = sub_220A4E0(a1, v19);
      sub_2207560(v11);
      sub_2205840(v11, v23);
      if ( v19[0].m128i_i64[0] )
        sub_E34850((void **)v19[0].m128i_i64[0]);
      sub_2207560(v23);
      sub_E395A0(v21.m128i_i64);
    }
  }
  return a1;
}

