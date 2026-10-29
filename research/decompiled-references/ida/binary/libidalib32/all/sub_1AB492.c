__int64 __fastcall sub_1AB492(__int64 a1, int a2)
{
  _BYTE v4[9]; // [rsp+13h] [rbp-Dh] BYREF
  int v5; // [rsp+1Ch] [rbp-4h]

  v5 = 7;
  while ( v5 >= 0 )
  {
    v4[v5--] = a0123456789abcd[(a2 & 0xF) + 16];
    a2 >>= 4;
  }
  v4[8] = 0;
  return sub_1AA3A4(a1, (__int64)v4);
}

