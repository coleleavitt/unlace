__int64 __fastcall Z3_rcf_infinitesimal_name(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29FA40(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_24F090(a1);
  v5[0] = a2;
  result = sub_16FC1A0(v3, v5);
  if ( v2 )
    byte_1C7EBA0 = 1;
  return result;
}

