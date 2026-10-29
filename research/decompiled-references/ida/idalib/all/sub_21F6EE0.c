__int64 __fastcall sub_21F6EE0(__int64 a1, __int64 a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v5; // eax
  char v6; // bl
  char v7; // di
  __int16 v8; // r13
  char v9; // bl
  void *v10; // rsi
  unsigned __int16 *v12; // [rsp+0h] [rbp-68h]
  _BYTE *v13; // [rsp+8h] [rbp-60h]
  void *v14; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-50h]
  void *v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-40h]
  char v18; // [rsp+2Ch] [rbp-3Ch]
  __int16 v19; // [rsp+30h] [rbp-38h]
  __int16 v20; // [rsp+32h] [rbp-36h]

  v6 = *(_BYTE *)(a2 + 12);
  v7 = v6 & 1;
  v8 = *(_DWORD *)(a2 + 8);
  v15 = *(_DWORD *)(a2 + 8);
  v5 = v15;
  v9 = v6 ^ 1;
  if ( v15 > 0x40 )
  {
    v13 = a4;
    v12 = a3;
    sub_2205510(&v14);
    v5 = v15;
    v10 = v14;
    a4 = v13;
    a3 = v12;
  }
  else
  {
    v10 = *(void **)a2;
  }
  v17 = v5;
  v16 = v10;
  v18 = v7;
  v19 = v8;
  HIBYTE(v20) = (32 * (v9 & 1)) | HIBYTE(v20) & 0xDF;
  v20 &= 0x2000u;
  sub_21EDE90(a1, (__int64)&v16, a3, a4);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  return a1;
}
