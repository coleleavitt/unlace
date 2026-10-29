unsigned __int64 __fastcall vcred_init_0(__m128 *a1)
{
  char *v1; // r12
  char v2; // al
  void *v3; // rbp
  void *v4; // r13
  unsigned __int64 v5; // rax
  __m128 v6; // xmm0
  void *v7; // r12
  unsigned __int64 v8; // rax
  bool should_store_info; // cl
  __int32 v10; // eax
  __int32 v11; // edx
  __int128 v13; // [rsp+0h] [rbp-108h] BYREF
  __int128 v14; // [rsp+10h] [rbp-F8h] BYREF
  void *v15; // [rsp+20h] [rbp-E8h]
  void *v16; // [rsp+28h] [rbp-E0h]
  char *s1; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+38h] [rbp-D0h]
  void *v19; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-B0h]
  void *v21; // [rsp+70h] [rbp-98h] BYREF
  __int128 v22; // [rsp+78h] [rbp-90h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  void *v24; // [rsp+90h] [rbp-78h]
  __int128 v25; // [rsp+98h] [rbp-70h]
  void *v26; // [rsp+A8h] [rbp-60h]
  __int128 v27; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v18 = 0;
  s1 = nullptr;
  sub_851530(&s1);
  if ( (_QWORD)v18 && (v1 = s1, !strcmp(s1, "hvui")) )
  {
    if ( v1 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v1);
      s1 = nullptr;
      *((_QWORD *)&v18 + 1) = 0;
    }
  }
  else
  {
    set_registry_name("hvui");
  }
  v19 = nullptr;
  v21 = nullptr;
  v23 = 0;
  v24 = nullptr;
  v26 = nullptr;
  v20 = 0;
  v22 = 0;
  v25 = 0;
  v27 = 0;
  v2 = sub_7C90A0((__int64)&v21);
  v3 = v26;
  v15 = v21;
  v14 = v22;
  *((_QWORD *)&v13 + 1) = *((_QWORD *)&v25 + 1);
  v16 = v24;
  if ( v2 )
  {
    v4 = (void *)a1[2].m128_u64[1];
    v5 = a1[3].m128_u64[1];
    v6 = _mm_loadh_ps((const double *)&v14 + 1);
    v7 = (void *)a1->m128_u64[1];
    a1[3] = _mm_loadh_ps((const double *)&v13 + 1);
    *((_QWORD *)&v13 + 1) = v5;
    a1[2].m128_u64[1] = (unsigned __int64)v16;
    *(_QWORD *)&v14 = a1[1].m128_u64[0];
    v8 = a1[1].m128_u64[1];
    a1[1] = v6;
    *((_QWORD *)&v14 + 1) = v8;
    a1->m128_u64[1] = (unsigned __int64)v15;
    a1[2].m128_i16[0] = v23;
    vcred_load_site((__int64)a1);
    sub_7C9E00((__int64)a1);
  }
  else
  {
    if ( (unsigned __int8)qgetenv("http_proxy") )
    {
      if ( !(unsigned __int8)sub_7C9140((__int64)&v19, "http://", &byte_22F0C30) )
        sub_7C9140((__int64)&v19, "https://", &byte_22F0C30);
      if ( (unsigned __int8)sub_7C8940((__int64)&a1[5].m128_i64[1], &v19, 0) )
        a1[10].m128_i32[2] |= 0x400u;
    }
    v4 = v16;
    v7 = v15;
  }
  if ( v3 )
    qfree(v3);
  if ( v4 )
    qfree(v4);
  if ( v7 )
    qfree(v7);
  should_store_info = vcred_reg_should_store_info();
  v10 = a1[10].m128_i32[2];
  v11 = v10;
  BYTE1(v10) &= ~2u;
  BYTE1(v11) |= 2u;
  if ( should_store_info )
    v10 = v11;
  a1[10].m128_i32[2] = v10;
  qgetenv("VAULT_HOST");
  qgetenv("VAULT_USER");
  qgetenv("VAULT_PASS");
  qgetenv("VAULT_SITE");
  if ( (unsigned __int8)qgetenv("VAULT_PROXY") )
  {
    a1[10].m128_i32[2] |= 0x400u;
    sub_7C8940((__int64)&a1[5].m128_i64[1], &v19, 0);
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  if ( (unsigned __int64)v18 > 1 )
    set_registry_name(s1);
  if ( s1 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(s1);
  }
  return v28 - __readfsqword(0x28u);
}
