__int64 __fastcall sub_E5BC40(__int64 a1, __int64 a2)
{
  const char *v2; // rbp
  __int64 v3; // rbx
  size_t v4; // rax
  _BYTE v6[72]; // [rsp+0h] [rbp-48h] BYREF

  v2 = "__objc_yes";
  v3 = a1 + 1048;
  if ( !*(_BYTE *)(a2 + 16) )
    v2 = "__objc_no";
  v4 = strlen(v2);
  sub_E59830((__int64)v6, (__int64)v2, v4);
  sub_222AB70(v3, "value", 5);
  sub_222CAC0(v3, v6);
  sub_2229BF0(v3);
  return sub_222B2A0(v6);
}
