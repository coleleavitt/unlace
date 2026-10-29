__int64 __fastcall sub_E5B910(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  __int64 v3; // rdx
  _BYTE v5[72]; // [rsp+0h] [rbp-48h] BYREF

  v2 = sub_E58850(a2);
  sub_E59830((__int64)v5, (__int64)v2, v3);
  sub_222AB70(a1 + 1048, "name", 4);
  sub_222CAC0(a1 + 1048, v5);
  sub_2229BF0(a1 + 1048);
  return sub_222B2A0(v5);
}
