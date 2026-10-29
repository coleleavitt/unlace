void __fastcall sub_147B8B0(__int64 a1)
{
  int *v1; // r12
  unsigned int v2; // ebp
  unsigned int v4; // r13d
  __int64 *v5; // rdi
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // [rsp+4h] [rbp-84h] BYREF
  char v8; // [rsp+Ch] [rbp-7Ch]
  __int64 v9[15]; // [rsp+10h] [rbp-78h] BYREF

  v1 = (int *)(a1 + 16);
  v2 = 0;
  v4 = *(_DWORD *)(a1 + 16);
  while ( 1 )
  {
    v6 = *(_WORD *)(a1 + 32);
    if ( v6 > 0x144u )
      break;
    if ( v6 < 0x141u && v6 != 80 && v6 != 109 )
    {
LABEL_10:
      if ( !v2 )
        return;
      goto LABEL_14;
    }
LABEL_5:
    v5 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v5, v1);
    v2 = *(_DWORD *)(a1 + 40);
  }
  if ( v6 == 328 )
    goto LABEL_5;
  if ( v6 <= 0x148u )
  {
    if ( v6 != 326 )
      goto LABEL_10;
    goto LABEL_5;
  }
  if ( (unsigned __int16)(v6 - 385) <= 4u )
    goto LABEL_5;
  if ( !v2 )
    return;
LABEL_14:
  sub_1564820(v9, a1, v4, 2150);
  v7 = __PAIR64__(v2, v4);
  v8 = 1;
  sub_AEC610(v9, (__int64 *)&v7);
  sub_AEA040((__int64)v9);
}
