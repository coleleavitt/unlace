char *__fastcall sub_21D6B20(char **a1)
{
  char *v1; // r13
  char *v2; // rbp
  size_t v3; // r12
  size_t v4; // r14
  size_t v5; // r13
  char *result; // rax
  __int64 v7; // rdx
  char *v8; // rdx
  char *v9; // rax
  char *v10; // rsi
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]

  v1 = a1[1];
  v2 = *a1;
  v3 = v1 - *a1;
  if ( sub_20D1BF0(v3, *a1, 3u, "fpT") )
  {
    *a1 = v2 + 3;
    return (char *)sub_21D51C0((__int64)(a1 + 101), "this");
  }
  else
  {
    v4 = j__strlen("fp");
    if ( sub_20D1BF0(v3, v2, v4, "fp") )
    {
      *a1 = &v2[v4];
      sub_21CFF20(a1, v1);
      v13 = sub_21CFC00(a1, 0);
      result = nullptr;
      v14 = v7;
      v8 = *a1;
      if ( *a1 != a1[1] && *v8 == 95 )
      {
        *a1 = v8 + 1;
        return sub_21D6990((__int64)(a1 + 101), &v13);
      }
    }
    else
    {
      v5 = j__strlen("fL");
      if ( sub_20D1BF0(v3, v2, v5, "fL")
        && (*a1 = &v2[v5], sub_21CFC00(a1, 0))
        && (v9 = *a1, v10 = a1[1], *a1 != v10)
        && *v9 == 112
        && (*a1 = v9 + 1, sub_21CFF20(a1, v10), v13 = sub_21CFC00(a1, 0), v11 = *a1, v14 = v12, v11 != a1[1])
        && *v11 == 95 )
      {
        *a1 = v11 + 1;
        return sub_21D6990((__int64)(a1 + 101), &v13);
      }
      else
      {
        return nullptr;
      }
    }
  }
  return result;
}
