__int64 __fastcall sub_1AB5B6(__int64 a1, unsigned __int16 a2)
{
  _BYTE v4[5]; // [rsp+17h] [rbp-9h] BYREF
  int v5; // [rsp+1Ch] [rbp-4h]

  v5 = 3;
  while ( v5 >= 0 )
  {
    v4[v5--] = a0123456789abcd[(a2 & 0xF) + 64];
    a2 = (int)a2 >> 4;
  }
  v4[4] = 0;
  return sub_1AA3A4(a1, (__int64)v4);
}

