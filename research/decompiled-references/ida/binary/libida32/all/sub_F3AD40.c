void __fastcall sub_F3AD40(__int64 a1, __int64 a2, __int16 a3)
{
  __int16 v3; // bx
  unsigned int v4; // eax
  char v5; // bp
  char v6; // cl
  __int16 v7; // r14
  char v8; // bp
  char v9; // r13
  void *v10; // rdx
  __int16 v11; // bx
  __int16 v12; // dx
  void *v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-50h]
  void *v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-40h]
  char v17; // [rsp+1Ch] [rbp-3Ch]
  __int16 v18; // [rsp+20h] [rbp-38h]
  __int16 v19; // [rsp+22h] [rbp-36h]

  v3 = (__int16)(-8 * a3) >> 3;
  v5 = *(_BYTE *)(a2 + 12);
  v6 = v5 & 1;
  v7 = *(_DWORD *)(a2 + 8);
  v14 = *(_DWORD *)(a2 + 8);
  v4 = v14;
  v8 = v5 ^ 1;
  v9 = v6;
  if ( v14 > 0x40 )
  {
    sub_21E17D0(&v13);
    v4 = v14;
    v10 = v13;
  }
  else
  {
    v10 = *(void **)a2;
  }
  v15 = v10;
  v11 = v3 & 0x1FFF;
  v16 = v4;
  v17 = v9;
  v12 = v11 | v19 & 0xE000;
  v18 = v7;
  LOBYTE(v19) = v11;
  HIBYTE(v19) = (32 * (v8 & 1)) & 0x3F | HIBYTE(v12) & 0x1F;
  sub_21CDA90(&v15, a1);
  if ( v16 > 0x40 )
  {
    if ( v15 )
      operator delete[](v15);
  }
}

