__int64 __fastcall Z3_rcf_coefficient(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bp
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29FAC0(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_24F090(a1);
  v7[0] = a2;
  result = sub_16FC7C0(v5, v7, a3);
  if ( v4 )
    byte_1C7EBA0 = 1;
  return result;
}

