__int64 __fastcall sub_183C230(int a1, __int64 a2, unsigned __int64 a3, int a4, double a5)
{
  __int64 v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // rbp
  int v11; // r12d
  unsigned __int64 v12; // [rsp+18h] [rbp-2020h] BYREF
  _WORD v13[2]; // [rsp+20h] [rbp-2018h] BYREF
  int v14; // [rsp+24h] [rbp-2014h]
  int v15; // [rsp+28h] [rbp-2010h]
  int v16; // [rsp+2Ch] [rbp-200Ch]
  int v17; // [rsp+30h] [rbp-2008h] BYREF
  __int64 v18; // [rsp+38h] [rbp-2000h]
  __int64 v19; // [rsp+40h] [rbp-1FF8h]
  int v20; // [rsp+48h] [rbp-1FF0h]
  __int64 v21; // [rsp+50h] [rbp-1FE8h]
  __int16 v22; // [rsp+58h] [rbp-1FE0h]
  _BYTE v23[8152]; // [rsp+60h] [rbp-1FD8h] BYREF

  v7 = *(_QWORD *)(a2 + 48);
  v12 = a3;
  v19 = v7;
  v8 = *(_BYTE *)(a2 + 68);
  v22 = 256;
  v17 = 6;
  v20 = 0;
  v18 = 0;
  v21 = a2;
  if ( (v8 & 0xC) != 0xC && ((v8 >> 2) & 3) == 2 )
  {
    v11 = sub_EEC140(a3);
    v15 = sub_EEB7E0(a3, a2, a5);
    v13[0] = 1;
    v14 = sub_EEB7E0(a3, a2, a5);
    v16 = v11;
  }
  else
  {
    v15 = a4;
    v13[0] = 2;
    v14 = sub_EEB7E0(a3, a2, a5);
    v16 = a4;
  }
  sub_1A19220((unsigned int)v23, a1, (unsigned int)&v17, (unsigned int)v13, (unsigned int)&v12, 1, 0, 1);
  v9 = sub_1A1D600((unsigned int)v23, a1, (unsigned int)&v17, (unsigned int)v13, (unsigned int)&v12, 1, 0);
  sub_1A0BB10(v23);
  return v9;
}
