__int64 __fastcall Z3_rcf_power(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // bp
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29F630(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v10 = 0;
  v5 = sub_24F090(a1);
  v11 = a2;
  sub_16FE580(v5, (unsigned int)&v11, a3, (unsigned int)&v10, v6, v7);
  result = v10;
  if ( v4 )
  {
    v9 = v10;
    sub_2BB620(v10);
    byte_1C7EBA0 = 1;
    return v9;
  }
  return result;
}

