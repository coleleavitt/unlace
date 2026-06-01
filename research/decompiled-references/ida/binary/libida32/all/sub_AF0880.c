__int64 __fastcall sub_AF0880(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-38h] BYREF
  int v7; // [rsp+20h] [rbp-28h]
  unsigned __int8 v8; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+28h] [rbp-20h]

  v6[0] = a1;
  v6[1] = a2;
  v9 = 0;
  LODWORD(v5) = 0;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=sw0", 10);
  LODWORD(v5) = 1;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=sw1", 10);
  LODWORD(v5) = 2;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=hw0", 10);
  LODWORD(v5) = 3;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=hw1", 10);
  LODWORD(v5) = 4;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=hw2", 10);
  LODWORD(v5) = 5;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=hw3", 10);
  LODWORD(v5) = 6;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=hw4", 10);
  LODWORD(v5) = 7;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "vector=hw5", 10);
  LODWORD(v5) = 8;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, "eic", 3);
  LODWORD(v5) = 8;
  BYTE4(v5) = 1;
  sub_AD70F0((__int64)v6, &v5, &byte_22CD811, 0);
  result = (unsigned __int8)v9;
  if ( (_BYTE)v9 )
  {
    result = v8;
    if ( v8 )
      *a3 = v7;
  }
  return result;
}

