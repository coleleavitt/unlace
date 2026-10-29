void __fastcall sub_E42120(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // rax
  size_t v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  size_t v7; // rax
  unsigned __int64 v8; // rdx
  size_t v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-80h] BYREF
  __m128i v11; // [rsp+10h] [rbp-78h] BYREF
  _DWORD v12[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h]
  __int64 v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]

  v2 = a1 + 1048;
  sub_E3A830(&v11, a2);
  sub_E35650((__int64)&v13, &v11);
  v3 = j__strlen("id");
  sub_2206E30(a1 + 1048, "id", v3);
  sub_2208D80(a1 + 1048, &v13);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v13);
  if ( (_DWORD *)v11.m128i_i64[0] != v12 )
    operator delete((void *)v11.m128i_i64[0]);
  sub_E35B80((__int64)&v13, "QualType");
  v4 = j__strlen("kind");
  sub_2206E30(v2, "kind", v4);
  sub_2208D80(v2, &v13);
  sub_2205EB0(v2);
  sub_2207560(&v13);
  sub_E3FD20((__int64)&v11, a1, a2, 1);
  v13 = 7;
  v5 = v11.m128i_i64[0];
  v11.m128i_i64[0] = 0;
  v14 = v5;
  v6 = v11.m128i_i64[1];
  v11.m128i_i64[1] = 0;
  v15 = v6;
  LODWORD(v6) = v12[0];
  v12[0] = 0;
  v16 = v6;
  v7 = j__strlen("type");
  sub_2206E30(v2, "type", v7);
  sub_2208D80(v2, &v13);
  sub_2205EB0(v2);
  sub_2207560(&v13);
  sub_E395A0(v11.m128i_i64);
  v8 = a2 & 7;
  if ( (a2 & 8) != 0 )
    v8 |= *(__int64 *)((char *)&qword_18 + (a2 & 0xFFFFFFFFFFFFFFF0LL));
  v10 = v8;
  sub_F4DEF0(&v11, &v10);
  sub_E35650((__int64)&v13, &v11);
  v9 = j__strlen("qualifiers");
  sub_2206E30(v2, "qualifiers", v9);
  sub_2208D80(v2, &v13);
  sub_2205EB0(v2);
  sub_2207560(&v13);
  if ( (_DWORD *)v11.m128i_i64[0] != v12 )
    operator delete((void *)v11.m128i_i64[0]);
}

