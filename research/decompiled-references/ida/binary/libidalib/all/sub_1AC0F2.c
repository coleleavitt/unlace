__int64 __fastcall sub_1AC0F2(__int64 a1, unsigned __int64 a2)
{
  _BYTE v4[28]; // [rsp+10h] [rbp-20h] BYREF
  int v5; // [rsp+2Ch] [rbp-4h]

  v5 = 15;
  while ( v5 >= 0 )
  {
    v4[v5--] = a0123456789abcd[(a2 & 0xF) + 32];
    a2 >>= 4;
  }
  v4[16] = 0;
  return sub_1AAFA4(a1, (__int64)v4);
}

