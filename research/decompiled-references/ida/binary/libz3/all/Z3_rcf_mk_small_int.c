__int64 __fastcall Z3_rcf_mk_small_int(__int64 a1, unsigned int a2)
{
  char v2; // bp
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-40h]
  _QWORD v6[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29F390(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v6[0] = 0;
  v3 = sub_24F090(a1);
  sub_16FC8E0(v3, v6, a2);
  result = v6[0];
  if ( v2 )
  {
    v5 = v6[0];
    sub_2BB620(v6[0]);
    byte_1C7EBA0 = 1;
    return v5;
  }
  return result;
}

