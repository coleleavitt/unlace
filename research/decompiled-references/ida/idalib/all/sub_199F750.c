__int64 __fastcall sub_199F750(int a1, unsigned __int64 *a2, __int64 a3, double a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebp
  unsigned __int64 v8; // [rsp+18h] [rbp-2030h] BYREF
  _WORD v9[2]; // [rsp+20h] [rbp-2028h] BYREF
  int v10; // [rsp+24h] [rbp-2024h]
  __int64 v11; // [rsp+28h] [rbp-2020h]
  int v12; // [rsp+30h] [rbp-2018h] BYREF
  __int64 v13; // [rsp+38h] [rbp-2010h]
  __int64 v14; // [rsp+40h] [rbp-2008h]
  int v15; // [rsp+48h] [rbp-2000h]
  __int64 v16; // [rsp+50h] [rbp-1FF8h]
  _BYTE v17[8168]; // [rsp+60h] [rbp-1FE8h] BYREF

  v4 = *a2;
  v14 = a3;
  v4 &= ~1uLL;
  v12 = 9;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v9[0] = 2;
  v10 = sub_EEB7E0(v4, (__int64)a2, a4);
  v8 = v4;
  v11 = 0;
  sub_1A19220((unsigned int)v17, a1, (unsigned int)&v12, (unsigned int)v9, (unsigned int)&v8, 1, 0, 1);
  v5 = sub_1A1D600((unsigned int)v17, a1, (unsigned int)&v12, (unsigned int)v9, (unsigned int)&v8, 1, 0);
  v6 = 1;
  if ( v5 != 1 )
  {
    *a2 = v5;
    v6 = 0;
  }
  sub_1A0BB10(v17);
  return v6;
}
