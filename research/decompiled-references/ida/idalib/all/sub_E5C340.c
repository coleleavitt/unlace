__int64 __fastcall sub_E5C340(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  bool v6; // r13
  size_t v7; // rax
  char v8; // cl
  char v9; // r13
  size_t v10; // rax
  __int64 result; // rax
  size_t v12; // rax
  double v13[2]; // [rsp+8h] [rbp-90h] BYREF
  __int64 v14; // [rsp+18h] [rbp-80h] BYREF
  __m128i v15; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  __m128 v17; // [rsp+40h] [rbp-58h] BYREF

  v2 = a1 + 1048;
  v3 = *a2;
  v17.m128_i16[0] = 1;
  v17.m128_i8[8] = (v3 & 0x80000) != 0;
  v4 = j__strlen("isArrow");
  sub_222AB70(a1 + 1048, "isArrow", v4);
  sub_222CAC0(a1 + 1048, &v17);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v17);
  v14 = a2[6];
  sub_B86A00((__int64)&v15, &v14);
  sub_E59390((__int64)&v17, &v15);
  v5 = j__strlen("member");
  sub_222AB70(a1 + 1048, "member", v5);
  sub_222CAC0(a1 + 1048, &v17);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v17);
  if ( (__int64 *)v15.m128i_i64[0] != &v16 )
    operator delete((void *)v15.m128i_i64[0]);
  v6 = 0;
  if ( (*a2 & 0x100000) != 0 )
    v6 = *((_DWORD *)a2 + 20) != 0;
  v7 = j__strlen("hasTemplateKeyword");
  v8 = v6;
  v9 = 0;
  sub_E59B90(a1, (__int64)"hasTemplateKeyword", v7, v8);
  if ( (*a2 & 0x100000) != 0 )
    v9 = *((_DWORD *)a2 + 18) != 0;
  v10 = j__strlen("hasExplicitTemplateArgs");
  result = sub_E59B90(a1, (__int64)"hasExplicitTemplateArgs", v10, v9);
  if ( (*a2 & 0x100000) != 0 && *((_DWORD *)a2 + 18) )
  {
    result = *((unsigned int *)a2 + 21);
    if ( (_DWORD)result )
    {
      *(_QWORD *)&v13[0] = a1;
      v17 = _mm_loadh_ps(v13);
      v12 = j__strlen("explicitTemplateArgs");
      sub_222AB70(v2, "explicitTemplateArgs", v12);
      sub_22297F0(v2);
      sub_E6C200(&v17);
      sub_2229960(v2);
      return sub_2229BF0(v2);
    }
  }
  return result;
}
