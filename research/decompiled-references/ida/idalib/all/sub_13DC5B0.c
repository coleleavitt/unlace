const char *__fastcall sub_13DC5B0(int a1, __int64 *a2, __int64 a3, __m128i a4, double a5)
{
  int v7; // edx
  int v8; // r13d
  char *v9; // rbx
  size_t v10; // r15
  char *v11; // rax
  int v12; // r13d
  int v13; // edx
  unsigned __int64 v14; // rbx
  const char *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  char *s; // [rsp+0h] [rbp-58h] BYREF
  int v20; // [rsp+8h] [rbp-50h]

  while ( 1 )
  {
    v8 = a1;
    if ( !(unsigned __int8)sub_1020490((__int64)a2, a1, nullptr) )
      break;
    s = (char *)sub_101FC50((__int64)a2, a1);
    a1 = (int)s;
    v20 = v7;
  }
  if ( a1 < 0 )
  {
    a1 = sub_1021B90((__int64)a2, a1);
    if ( a1 < 0 )
      return nullptr;
  }
  sub_1022900((__int64)&s, a2, a1, 1);
  v9 = s;
  if ( s )
  {
    v10 = j__strlen(s);
    if ( v10 == j__strlen("<scratch space>") && (!v10 || !memcmp(v9, "<scratch space>", v10)) )
      return nullptr;
  }
  v11 = (char *)sub_101FC50((__int64)a2, v8);
  s = v11;
  v12 = (int)v11;
  v20 = v13;
  if ( (int)v11 < 0 )
    v12 = sub_1021B90((__int64)a2, (int)v11);
  v14 = sub_A80750((__int64)a2, v12);
  sub_13DBE60(v12, (__int64)&s, a2, a3, a4, a5);
  v15 = sub_10202B0(a2, v14, nullptr);
  v17 = HIDWORD(v14);
  if ( HIDWORD(v14) > v16 )
    v17 = v16;
  return &v15[v17];
}
