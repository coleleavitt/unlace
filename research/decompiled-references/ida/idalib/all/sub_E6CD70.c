void __fastcall sub_E6CD70(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  size_t v4; // rax
  const char *v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // rax
  const char *v15; // rsi
  char v16; // al
  size_t v17; // rax
  __int64 v18; // [rsp+0h] [rbp-A0h] BYREF
  __m128 *v19; // [rsp+8h] [rbp-98h] BYREF
  __int64 v20; // [rsp+10h] [rbp-90h]
  __m128i v21; // [rsp+18h] [rbp-88h] BYREF
  int v22; // [rsp+28h] [rbp-78h] BYREF
  __m128 v23; // [rsp+38h] [rbp-68h] BYREF
  __int64 v24; // [rsp+48h] [rbp-58h]
  int v25; // [rsp+50h] [rbp-50h]

  if ( a2 )
  {
    v2 = a1 + 1048;
    sub_E5E570(&v21, a2);
    sub_E59390((__int64)&v23, &v21);
    v4 = j__strlen("id");
    v19 = &v23;
    v20 = a1 + 1048;
    sub_E585D0(a1 + 1048, (__int64)"id", v4, (__int64)sub_E58580, &v19);
    sub_222B2A0(&v23);
    if ( (int *)v21.m128i_i64[0] != &v22 )
      operator delete((void *)v21.m128i_i64[0]);
    v5 = (const char *)sub_EE9730(a2);
    sub_E598C0((__int64)&v23, v5);
    v6 = j__strlen("kind");
    v21.m128i_i64[0] = (__int64)&v23;
    v21.m128i_i64[1] = a1 + 1048;
    sub_E585D0(v2, (__int64)"kind", v6, (__int64)sub_E58580, &v21);
    sub_222B2A0(&v23);
    v18 = a1;
    v23 = _mm_loadh_ps((const double *)&v18);
    v7 = j__strlen("range");
    sub_222AB70(v2, "range", v7);
    sub_22299F0(v2);
    sub_E5A250(&v23);
    sub_2229B60(v2);
    sub_2229BF0(v2);
    if ( ((*(_WORD *)a2 + 509) & 0x1FFu) <= 0x7E )
    {
      sub_E63A60((__int64)&v21, a1, *(_QWORD *)(a2 + 8), 1);
      v23.m128_i16[0] = 7;
      v12 = v21.m128i_i64[0];
      v21.m128i_i64[0] = 0;
      v23.m128_u64[1] = v12;
      v13 = v21.m128i_i64[1];
      v21.m128i_i64[1] = 0;
      v24 = v13;
      LODWORD(v13) = v22;
      v22 = 0;
      v25 = v13;
      v14 = j__strlen("type");
      v19 = &v23;
      v20 = a1 + 1048;
      sub_E585D0(v2, (__int64)"type", v14, (__int64)sub_E58580, &v19);
      sub_222B2A0(&v23);
      sub_E5D2E0(v21.m128i_i64);
      v15 = "lvalue";
      v16 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
      if ( v16 != 1 )
      {
        v15 = "prvalue";
        if ( v16 )
        {
          v15 = "xvalue";
          if ( v16 != 2 )
            v15 = nullptr;
        }
      }
      sub_E598C0((__int64)&v23, v15);
      v17 = j__strlen("valueCategory");
      v21.m128i_i64[0] = (__int64)&v23;
      v21.m128i_i64[1] = a1 + 1048;
      sub_E585D0(v2, (__int64)"valueCategory", v17, (__int64)sub_E58580, &v21);
      sub_222B2A0(&v23);
    }
    sub_E6C980(a1, a2, v8, v9, v10, v11);
  }
}
