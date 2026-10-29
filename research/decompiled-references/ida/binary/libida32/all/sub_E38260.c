__int64 __fastcall sub_E38260(__int64 a1, int *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  double v8[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v9; // [rsp+18h] [rbp-80h] BYREF
  __m128i v10; // [rsp+20h] [rbp-78h] BYREF
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  __m128 v12; // [rsp+40h] [rbp-58h] BYREF

  v2 = a1 + 1048;
  v3 = *a2;
  v12.m128_i16[0] = 1;
  v12.m128_i8[8] = (v3 & 0x100000) != 0;
  v4 = j__strlen("usesADL");
  sub_2206E30(a1 + 1048, "usesADL", v4);
  sub_2208D80(a1 + 1048, &v12);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v12);
  v9 = *((_QWORD *)a2 + 2);
  sub_B62CC0((__int64)&v10, &v9);
  sub_E35650((__int64)&v12, &v10);
  v5 = j__strlen("name");
  sub_2206E30(a1 + 1048, "name", v5);
  sub_2208D80(a1 + 1048, &v12);
  sub_2205EB0(a1 + 1048);
  sub_2207560(&v12);
  if ( (__int64 *)v10.m128i_i64[0] != &v11 )
    operator delete((void *)v10.m128i_i64[0]);
  *(_QWORD *)&v8[0] = a2;
  v12 = _mm_loadh_ps(v8);
  v6 = j__strlen("lookups");
  sub_2206E30(v2, "lookups", v6);
  sub_2205AB0(v2);
  sub_E44150(&v12);
  sub_2205C20(v2);
  return sub_2205EB0(v2);
}

