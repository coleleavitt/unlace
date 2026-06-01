unsigned __int64 __fastcall sub_63A6B0(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // r8
  char v5; // di
  char v6; // si
  char v7; // cl
  char v8; // dl
  unsigned __int16 v9; // ax
  unsigned int v10; // r12d
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  int v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 v15; // [rsp+4h] [rbp-44h]
  _BYTE v16[9]; // [rsp+5h] [rbp-43h]
  _BYTE v17[5]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v18; // [rsp+15h] [rbp-33h]
  char v19; // [rsp+1Dh] [rbp-2Bh]
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 24;
    v7 = 0;
    v8 = 0;
    v9 = 40;
    v10 = 74;
  }
  else
  {
    v4 = 2;
    v5 = 1;
    v6 = 40;
    v7 = 16;
    v8 = 3;
    v9 = 132;
    v10 = 75;
  }
  v16[1] = v5;
  v16[2] = v6;
  v16[3] = v7;
  v16[4] = v8;
  *(_DWORD *)&v16[5] = v9;
  v14 = 14;
  v15 = a2;
  v16[0] = v4;
  v11 = sub_630CA0(a1, v10, &v14, 0xEu, v4);
  v12 = v14;
  if ( (unsigned __int64)v14 < 4 )
    v12 = 4;
  if ( v11 < v12 )
    sub_6301B0(a1, v10);
  dto_init(v17, a2);
  v18 = *(_QWORD *)v16;
  v17[4] = v15 != 0;
  v19 = v16[8];
  sub_632E00((__int64)v17, a1, a2);
  return v20 - __readfsqword(0x28u);
}
