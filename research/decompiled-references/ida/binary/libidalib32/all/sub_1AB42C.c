__int64 __fastcall sub_1AB42C(__int64 a1, unsigned __int8 a2)
{
  _BYTE v4[3]; // [rsp+19h] [rbp-7h] BYREF
  int v5; // [rsp+1Ch] [rbp-4h]

  v5 = 1;
  while ( v5 >= 0 )
  {
    v4[v5--] = a0123456789abcd[a2 & 0xF];
    a2 = (int)a2 >> 4;
  }
  v4[2] = 0;
  return sub_1AA3A4(a1, (__int64)v4);
}

