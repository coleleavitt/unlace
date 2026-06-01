__int64 __fastcall Z3_rcf_neg(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-40h]
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29F5B0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v9 = 0;
  v3 = sub_24F090(a1);
  v10 = a2;
  sub_16FD690(v3, (unsigned int)&v10, (unsigned int)&v9, v4, v5, v6);
  result = v9;
  if ( v2 )
  {
    v8 = v9;
    sub_2BB620(v9);
    byte_1C7EBA0 = 1;
    return v8;
  }
  return result;
}

