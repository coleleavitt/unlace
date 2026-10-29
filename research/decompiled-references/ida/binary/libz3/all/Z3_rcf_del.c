char __fastcall Z3_rcf_del(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rax
  char result; // al
  __int64 v5[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29F310(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v5[0] = a2;
  v3 = sub_24F090(a1);
  result = sub_16FC880(v3, v5);
  if ( v2 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

