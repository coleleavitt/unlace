__int64 __fastcall sub_C103E0(__int64 *a1, __int64 a2)
{
  unsigned int v3; // eax
  void *v4; // rsi
  char v5; // cl
  int v6; // edx
  __int64 v7; // rdi
  void *v9; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-70h]
  char v11; // [rsp+Ch] [rbp-6Ch]
  int v12; // [rsp+10h] [rbp-68h]
  unsigned int v13; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+24h] [rbp-54h]
  void *v15; // [rsp+28h] [rbp-50h]
  unsigned int v16; // [rsp+30h] [rbp-48h]
  char v17; // [rsp+34h] [rbp-44h]
  int v18; // [rsp+38h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 8);
  v10 = v3;
  if ( v3 > 0x40 )
  {
    sub_2205510(&v9);
    v3 = v10;
    v4 = v9;
  }
  else
  {
    v4 = *(void **)a2;
    v9 = v4;
  }
  v5 = *(_BYTE *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 16);
  v15 = v4;
  v7 = *a1;
  v16 = v3;
  v14 &= ~1u;
  v11 = v5;
  v12 = v6;
  v10 = 0;
  v17 = v5;
  v18 = v6;
  v13 = 4;
  sub_A4FD20(v7, (__int64)&v13);
  if ( v13 > 1 )
    sub_A4F8E0((int *)&v13);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return 1;
}
