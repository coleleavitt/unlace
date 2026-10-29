void __fastcall sub_E658D0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  _BYTE *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  size_t v7; // rax
  int v8; // eax
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  size_t v12; // rax
  _QWORD v13[2]; // [rsp+10h] [rbp-128h] BYREF
  __m128i v14; // [rsp+20h] [rbp-118h] BYREF
  __int64 v15; // [rsp+30h] [rbp-108h] BYREF
  __m128i v16[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+60h] [rbp-D8h]
  __m128i v18[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int16 v19; // [rsp+90h] [rbp-A8h]
  __m128i v20; // [rsp+A0h] [rbp-98h] BYREF
  _DWORD v21[8]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v22; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-60h]
  __int64 v24; // [rsp+E0h] [rbp-58h]
  int v25; // [rsp+E8h] [rbp-50h]

  v2 = a1 + 1048;
  sub_E5E570(&v20, a2);
  sub_E59390((__int64)&v22, &v20);
  v3 = j__strlen("id");
  sub_222AB70(a1 + 1048, "id", v3);
  sub_222CAC0(a1 + 1048, &v22);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v22);
  if ( (_DWORD *)v20.m128i_i64[0] != v21 )
    operator delete((void *)v20.m128i_i64[0]);
  if ( a2 )
  {
    v18[0].m128i_i64[0] = (__int64)"Decl";
    v19 = 259;
    v4 = (_BYTE *)sub_B88090(a2);
    v17 = 257;
    if ( *v4 )
    {
      v16[0].m128i_i64[0] = (__int64)v4;
      LOBYTE(v17) = 3;
    }
    sub_A41580(&v20, v16, v18, 257, v5, v6);
    sub_2253560(&v14, &v20);
    sub_E59390((__int64)&v22, &v14);
    v7 = j__strlen("kind");
    v13[0] = &v22;
    v13[1] = a1 + 1048;
    sub_E585D0(v2, (__int64)"kind", v7, (__int64)sub_E58580, v13);
    sub_222B2A0(&v22);
    if ( (__int64 *)v14.m128i_i64[0] != &v15 )
      operator delete((void *)v14.m128i_i64[0]);
    v8 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)(v8 - 18) <= 0x3F )
    {
      v16[0].m128i_i64[0] = *(_QWORD *)(a2 + 40);
      sub_B86A00((__int64)&v20, v16[0].m128i_i64);
      sub_E59390((__int64)&v22, &v20);
      v9 = j__strlen("name");
      v18[0].m128i_i64[0] = (__int64)&v22;
      v18[0].m128i_i64[1] = a1 + 1048;
      sub_E585D0(v2, (__int64)"name", v9, (__int64)sub_E58580, v18);
      sub_222B2A0(&v22);
      if ( (_DWORD *)v20.m128i_i64[0] != v21 )
        operator delete((void *)v20.m128i_i64[0]);
      v8 = *(_BYTE *)(a2 + 28) & 0x7F;
    }
    if ( (unsigned int)(v8 - 26) <= 0x1A )
    {
      sub_E63A60((__int64)&v20, a1, *(_QWORD *)(a2 + 48), 1);
      v22 = 7;
      v10 = v20.m128i_i64[0];
      v20.m128i_i64[0] = 0;
      v23 = v10;
      v11 = v20.m128i_i64[1];
      v20.m128i_i64[1] = 0;
      v24 = v11;
      LODWORD(v11) = v21[0];
      v21[0] = 0;
      v25 = v11;
      v12 = j__strlen("type");
      v18[0].m128i_i64[0] = (__int64)&v22;
      v18[0].m128i_i64[1] = a1 + 1048;
      sub_E585D0(v2, (__int64)"type", v12, (__int64)sub_E58580, v18);
      sub_222B2A0(&v22);
      sub_E5D2E0(v20.m128i_i64);
    }
  }
}
