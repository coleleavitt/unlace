__int64 __fastcall sub_E59C00(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 result; // rax
  __int16 v6; // [rsp+0h] [rbp-58h] BYREF
  char v7; // [rsp+8h] [rbp-50h]

  v2 = "case";
  v3 = a1 + 1048;
  if ( !*(_QWORD *)(a2 + 8) )
    v2 = "default";
  v4 = j__strlen(v2);
  sub_E59830((__int64)&v6, (__int64)v2, v4);
  sub_222AB70(v3, "associationKind", 15);
  sub_222CAC0(v3, &v6);
  sub_2229BF0(v3);
  result = sub_222B2A0(&v6);
  if ( *(_BYTE *)(a2 + 16) )
  {
    v7 = 1;
    v6 = 1;
    sub_222AB70(v3, "selected", 8);
    sub_222CAC0(v3, &v6);
    sub_2229BF0(v3);
    return sub_222B2A0(&v6);
  }
  return result;
}
