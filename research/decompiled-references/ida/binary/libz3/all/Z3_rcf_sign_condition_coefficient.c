__int64 __fastcall Z3_rcf_sign_condition_coefficient(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v6; // bp
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
    sub_29FC20(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_24F090(a1);
  v9[0] = a2;
  result = sub_16FC720(v7, v9, a3, a4);
  if ( v6 )
    byte_1C7EBA0 = 1;
  return result;
}

