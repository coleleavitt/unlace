__int64 __fastcall sub_18C1BF0(int a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rbp
  unsigned __int64 v6; // [rsp+18h] [rbp-2020h] BYREF
  _WORD v7[2]; // [rsp+20h] [rbp-2018h] BYREF
  int v8; // [rsp+24h] [rbp-2014h]
  __int64 v9; // [rsp+28h] [rbp-2010h]
  int v10; // [rsp+30h] [rbp-2008h] BYREF
  __int64 v11; // [rsp+38h] [rbp-2000h]
  __int64 v12; // [rsp+40h] [rbp-1FF8h]
  int v13; // [rsp+48h] [rbp-1FF0h]
  __int64 v14; // [rsp+50h] [rbp-1FE8h]
  _BYTE v15[8152]; // [rsp+60h] [rbp-1FD8h] BYREF

  v6 = a2;
  v12 = a3;
  v10 = 9;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  v8 = sub_EEB7E0(a2, a2, a4);
  v7[0] = 2;
  v9 = 0;
  sub_1A19220((unsigned int)v15, a1, (unsigned int)&v10, (unsigned int)v7, (unsigned int)&v6, 1, 0, 1);
  v4 = sub_1A1D600((unsigned int)v15, a1, (unsigned int)&v10, (unsigned int)v7, (unsigned int)&v6, 1, 0);
  sub_1A0BB10(v15);
  return v4;
}
