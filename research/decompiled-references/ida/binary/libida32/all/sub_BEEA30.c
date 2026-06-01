__int64 __fastcall sub_BEEA30(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  void *v3; // rcx
  char v4; // dl
  void *v6; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-60h]
  char v8; // [rsp+Ch] [rbp-5Ch]
  unsigned int v9; // [rsp+10h] [rbp-58h] BYREF
  char v10; // [rsp+14h] [rbp-54h]
  void *v11; // [rsp+18h] [rbp-50h]
  unsigned int v12; // [rsp+20h] [rbp-48h]
  char v13; // [rsp+24h] [rbp-44h]

  v2 = *(_DWORD *)(a1 + 8);
  v7 = v2;
  if ( v2 > 0x40 )
  {
    sub_21E17D0(&v6);
    v2 = v7;
    v3 = v6;
  }
  else
  {
    v3 = *(void **)a1;
    v6 = *(void **)a1;
  }
  v4 = *(_BYTE *)(a1 + 12);
  v10 &= ~1u;
  v9 = 2;
  v8 = v4;
  v7 = 0;
  v11 = v3;
  v12 = v2;
  v13 = v4;
  sub_A2BFE0(a2, (__int64)&v9);
  if ( v9 > 1 )
    sub_A2BBA0((int *)&v9);
  if ( v7 > 0x40 && v6 )
    operator delete[](v6);
  return 1;
}

