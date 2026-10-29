__int64 __fastcall sub_E5CFC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  size_t v4; // rax
  __int16 vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars8; // [rsp+8h] [rbp+8h]

  v2 = a1 + 1048;
  vars0 = 1;
  vars8 = 1;
  sub_222AB70(a1 + 1048, "isExpr", 6);
  sub_222CAC0(a1 + 1048, &vars0);
  sub_2229BF0(a1 + 1048);
  result = sub_222B2A0(&vars0);
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    vars8 = 1;
    vars0 = 1;
    v4 = j__strlen("isCanonical");
    sub_222AB70(v2, "isCanonical", v4);
    sub_222CAC0(v2, &vars0);
    sub_2229BF0(v2);
    return sub_222B2A0(&vars0);
  }
  return result;
}
