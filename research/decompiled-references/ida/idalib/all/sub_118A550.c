__int64 __fastcall sub_118A550(__int64 a1, __int64 a2)
{
  const char *v2; // rbx
  size_t v3; // rsi
  __int64 v4; // rdx
  _QWORD v6[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v7; // [rsp+20h] [rbp-28h]

  v2 = *(const char **)(a2 + 32);
  v3 = 0;
  if ( v2 )
    v3 = strlen(v2);
  v7 = 261;
  v6[0] = sub_228AA60(v2, v3, 0);
  v6[1] = v4;
  return sub_10DA6C0(a1, (__int64)v6);
}
