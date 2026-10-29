__int64 __fastcall sub_13F4110(__int64 a1, std::_V2 *a2)
{
  __int64 v2; // rax
  size_t v3; // rdx
  size_t v4; // r13
  __int64 v5; // r14
  size_t v6; // rbx
  char *v7; // r15
  const void *v8; // rax
  __int64 v9; // rdx
  char *v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned int v14; // ebp
  const void *v16; // rax
  const void *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 v20; // rax
  size_t v21; // rdx
  size_t v22; // rax
  size_t v23; // rax
  size_t n; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+18h] [rbp-50h] BYREF
  char *v26; // [rsp+20h] [rbp-48h] BYREF
  size_t v27; // [rsp+28h] [rbp-40h]

  v2 = sub_228A4B0(*(_QWORD *)a2, *((_QWORD *)a2 + 1), 0);
  v4 = v3;
  v5 = v2;
  v6 = v3;
  v7 = (char *)v2;
  n = j__strlen("Modules");
  v8 = (const void *)sub_228AA60(v5, v4, 0);
  if ( n == v9 && (!n || !memcmp(v8, "Modules", n)) )
  {
    v20 = sub_228A4B0(v5, v4, 0);
    v27 = v21;
    v26 = (char *)v20;
    v22 = j__strlen(".framework");
    if ( sub_9EC680(&v26, ".framework", v22) )
    {
      v7 = v26;
      v6 = v27;
    }
  }
  v10 = v7;
  v11 = v6;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  if ( !v6 )
  {
    v23 = j__strlen(".");
    v10 = ".";
    v11 = v23;
  }
  sub_FD9440((__int64)&v26, v12, v10, v11, 1);
  if ( (v27 & 1) != 0 )
  {
    v13 = (__int64)v26;
    v26 = nullptr;
    v25 = v13;
    v14 = sub_2220DB0(&v25);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
  }
  else
  {
    v16 = (const void *)sub_FDBEF0(v12, (__int64)v26);
    v17 = v16;
    v19 = v18;
    if ( v6 != v18 || v6 && memcmp(v16, v7, v6) )
      sub_228ED60(a2, v7, v6, v17, v19, 0);
    v14 = 0;
    sub_228F0B0(a2, 0, 0);
    std::_V2::system_category(a2);
  }
  sub_A04D70((__int64 *)&v26);
  return v14;
}
