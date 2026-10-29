__int64 __fastcall sub_E5A4B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  size_t v4; // rdx
  __int64 v5; // r12
  _BYTE v7[72]; // [rsp+0h] [rbp-48h] BYREF

  v2 = a1 + 1048;
  v3 = sub_B1B550(*(_DWORD *)(a2 + 40));
  v4 = 0;
  v5 = (__int64)v3;
  if ( v3 )
    v4 = strlen(v3);
  sub_E59830((__int64)v7, v5, v4);
  sub_222AB70(v2, "visibility", 10);
  sub_222CAC0(v2, v7);
  sub_2229BF0(v2);
  return sub_222B2A0(v7);
}
