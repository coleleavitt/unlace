unsigned __int64 __fastcall vcred_init_0(const char *a1, void **a2)
{
  const char *v2; // rbx
  char *v3; // r12
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r13
  __int64 v11; // rax
  __m128 v12; // xmm0
  char *v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char should_store_info; // cl
  int v18; // eax
  int v19; // edx
  __int64 v21; // [rsp+0h] [rbp-108h]
  __int64 v22; // [rsp+8h] [rbp-100h] BYREF
  __int128 v23; // [rsp+10h] [rbp-F8h] BYREF
  char *v24; // [rsp+20h] [rbp-E8h]
  char *v25; // [rsp+28h] [rbp-E0h]
  char *s1; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+38h] [rbp-D0h]
  void *v28; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+58h] [rbp-B0h]
  char *v30; // [rsp+70h] [rbp-98h] BYREF
  __int128 v31; // [rsp+78h] [rbp-90h]
  __int64 v32; // [rsp+88h] [rbp-80h]
  char *v33; // [rsp+90h] [rbp-78h]
  __int128 v34; // [rsp+98h] [rbp-70h]
  void *v35; // [rsp+A8h] [rbp-60h]
  __int128 v36; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+C8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = a1;
  v27 = 0;
  s1 = nullptr;
  sub_82DBD0(&s1);
  if ( (_QWORD)v27 && (v3 = s1, a2 = (void **)"hvui", !strcmp(s1, "hvui")) )
  {
    if ( v3 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v3);
      s1 = nullptr;
      *((_QWORD *)&v27 + 1) = 0;
    }
  }
  else
  {
    set_registry_name("hvui");
  }
  v28 = nullptr;
  v30 = nullptr;
  v32 = 0;
  v33 = nullptr;
  v35 = nullptr;
  v29 = 0;
  v31 = 0;
  v34 = 0;
  v36 = 0;
  v4 = sub_7A5C40((__int64)&v30);
  v7 = (char *)v35;
  v24 = v30;
  v8 = v34;
  v23 = v31;
  v22 = *((_QWORD *)&v34 + 1);
  v25 = v33;
  v9 = *((_QWORD *)&v34 + 1);
  if ( v4 )
  {
    v10 = *((char **)a1 + 5);
    v21 = *((_QWORD *)a1 + 6);
    v11 = *((_QWORD *)a1 + 7);
    v12 = _mm_loadh_ps((const double *)&v23 + 1);
    v13 = *((char **)a1 + 1);
    *((__m128 *)a1 + 3) = _mm_loadh_ps((const double *)&v22);
    v22 = v11;
    *((_QWORD *)a1 + 5) = v25;
    *(_QWORD *)&v23 = *((_QWORD *)a1 + 2);
    v14 = *((_QWORD *)a1 + 3);
    *((__m128 *)a1 + 1) = v12;
    *((_QWORD *)&v23 + 1) = v14;
    *((_QWORD *)a1 + 1) = v24;
    *((_WORD *)a1 + 16) = v32;
    vcred_load_site(a1, a2, v8, v9, v5, v6, v21, v22, v23, *((_QWORD *)&v23 + 1));
    sub_7A69A0((__int64)a1);
  }
  else
  {
    a1 = "http_proxy";
    a2 = &v28;
    if ( (unsigned __int8)qgetenv("http_proxy") )
    {
      if ( !(unsigned __int8)sub_7A5CE0((__int64)&v28, "http://", &byte_22CD811) )
        sub_7A5CE0((__int64)&v28, "https://", &byte_22CD811);
      a1 = v2 + 88;
      a2 = &v28;
      if ( (unsigned __int8)sub_7A54E0((__int64)(v2 + 88), &v28, 0) )
        *((_DWORD *)v2 + 42) |= 0x400u;
    }
    v10 = v25;
    v13 = v24;
  }
  if ( v7 )
  {
    a1 = v7;
    qfree(v7);
  }
  if ( v10 )
  {
    a1 = v10;
    qfree(v10);
  }
  if ( v13 )
  {
    a1 = v13;
    qfree(v13);
  }
  should_store_info = vcred_reg_should_store_info(a1, a2, v15, v16);
  v18 = *((_DWORD *)v2 + 42);
  v19 = v18;
  BYTE1(v18) &= ~2u;
  BYTE1(v19) |= 2u;
  if ( should_store_info )
    v18 = v19;
  *((_DWORD *)v2 + 42) = v18;
  qgetenv("VAULT_HOST");
  qgetenv("VAULT_USER");
  qgetenv("VAULT_PASS");
  qgetenv("VAULT_SITE");
  if ( (unsigned __int8)qgetenv("VAULT_PROXY") )
  {
    *((_DWORD *)v2 + 42) |= 0x400u;
    sub_7A54E0((__int64)(v2 + 88), &v28, 0);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( (unsigned __int64)v27 > 1 )
    set_registry_name(s1);
  if ( s1 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(s1);
  }
  return v37 - __readfsqword(0x28u);
}

