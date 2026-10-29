__int64 __fastcall Z3_rcf_le(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  int v5; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29F6F0(a1, a2, a3);
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = sub_24F090(a1);
  result = (unsigned int)sub_16FD800(v5, (unsigned int)&v11, (unsigned int)&v10, v6, v7, v8, a2, a3) ^ 1;
  if ( v4 )
    byte_1C7EBA0 = 1;
  return result;
}

