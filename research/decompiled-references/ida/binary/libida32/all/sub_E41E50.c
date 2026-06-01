void __fastcall sub_E41E50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  char *v7; // rax
  char v8; // dl
  size_t v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  __m128i v13; // xmm1
  __m128i v15; // [rsp+8h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-D8h] BYREF
  __m128i v17; // [rsp+28h] [rbp-C8h] BYREF
  __m128i v18; // [rsp+38h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-A8h]
  __m128i v20; // [rsp+58h] [rbp-98h] BYREF
  __m128i v21; // [rsp+68h] [rbp-88h]
  __int64 v22; // [rsp+78h] [rbp-78h]
  __int64 v23; // [rsp+88h] [rbp-68h] BYREF
  __int64 v24; // [rsp+90h] [rbp-60h]
  __int64 v25; // [rsp+98h] [rbp-58h]
  int v26; // [rsp+A0h] [rbp-50h]

  if ( !a2 )
    return;
  v4 = a1 + 1048;
  v17.m128i_i64[0] = (__int64)"TypeLoc";
  v5 = a2 & 7;
  LOWORD(v19) = 259;
  if ( v5 | (a2 >> 3) & 1 || (v6 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v6 + 16) == 59) )
  {
    v7 = "Qualified";
    v8 = 3;
LABEL_11:
    v20.m128i_i64[0] = (__int64)v7;
    v21 = v17;
    LOBYTE(v22) = 3;
    BYTE1(v22) = v8;
    goto LABEL_7;
  }
  v7 = (char *)sub_F34CF0(v6, 259, v5);
  if ( *v7 )
  {
    v8 = v19;
    goto LABEL_11;
  }
  v13 = _mm_load_si128(&v18);
  v20 = _mm_load_si128(&v17);
  v21 = v13;
  v22 = v19;
LABEL_7:
  sub_222F820(&v15, &v20);
  sub_E35650((__int64)&v23, &v15);
  v9 = j__strlen("kind");
  sub_2206E30(v4, "kind", v9);
  sub_2208D80(v4, &v23);
  sub_2205EB0(v4);
  sub_2207560(&v23);
  if ( (__int64 *)v15.m128i_i64[0] != &v16 )
    operator delete((void *)v15.m128i_i64[0]);
  sub_E3FD20((__int64)&v20, a1, a2, 0);
  LOWORD(v23) = 7;
  v10 = v20.m128i_i64[1];
  v24 = v20.m128i_i64[0];
  v20 = 0u;
  v25 = v10;
  LODWORD(v10) = v21.m128i_i32[0];
  v21.m128i_i32[0] = 0;
  v26 = v10;
  v11 = j__strlen("type");
  sub_2206E30(v4, "type", v11);
  sub_2208D80(v4, &v23);
  sub_2205EB0(v4);
  sub_2207560(&v23);
  sub_E395A0(v20.m128i_i64);
  v23 = a2;
  v25 = a1;
  v24 = a3;
  v12 = j__strlen("range");
  sub_2206E30(v4, "range", v12);
  sub_2205CB0(v4);
  sub_E364E0((__int64)&v23);
  sub_2205E20(v4);
  sub_2205EB0(v4);
}

