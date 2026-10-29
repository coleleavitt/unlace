void __fastcall sub_156DFB0(__int64 a1, int a2, unsigned int a3)
{
  int *v4; // rbp
  int v6; // r12d
  char v7; // r14
  int v8; // r15d
  __int64 *v9; // rdi
  __int64 v10; // rsi
  char v11; // al
  __int64 v12; // rax
  int v14; // [rsp+10h] [rbp-C8h] BYREF
  int v15; // [rsp+14h] [rbp-C4h]
  char v16; // [rsp+18h] [rbp-C0h]
  __int64 v17; // [rsp+1Ch] [rbp-BCh]
  char v18; // [rsp+24h] [rbp-B4h]
  void *v19; // [rsp+28h] [rbp-B0h]
  __int64 v20; // [rsp+30h] [rbp-A8h]
  _BYTE v21[16]; // [rsp+38h] [rbp-A0h] BYREF
  char v22; // [rsp+48h] [rbp-90h]
  unsigned __int8 *v23[17]; // [rsp+50h] [rbp-88h] BYREF

  v4 = (int *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v6;
  v7 = v6 != 0;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 63 && (*(_BYTE *)(a1 + 34) & 1) == 0 )
  {
    do
    {
      v8 = *(_DWORD *)(a1 + 16);
      v9 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v8;
      sub_14634E0(v9, v4);
    }
    while ( *(_WORD *)(a1 + 32) == 63 && (*(_BYTE *)(a1 + 34) & 1) == 0 );
    v10 = *(_QWORD *)(a1 + 104);
    v7 &= v8 != 0;
    if ( a2 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v10 = *(_QWORD *)(a1 + 104);
  if ( !a2 )
  {
    v8 = v6;
LABEL_7:
    v11 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL);
    if ( (v11 & 8) != 0 )
    {
      if ( (v11 & 0x10) != 0 )
        sub_FC70B0((__int64)v23, v10, v6, 2131);
      else
        sub_FC70B0((__int64)v23, v10, v6, 1981);
LABEL_9:
      v18 = 0;
      v21[0] = 0;
      v17 = 0;
      v19 = v21;
      v20 = 0;
      v22 = 0;
      v14 = v6;
      v15 = v8;
      v16 = 1;
      if ( !v7 )
        goto LABEL_10;
      goto LABEL_14;
    }
LABEL_8:
    sub_FC70B0((__int64)v23, v10, v6, 1980);
    sub_AE9DF0(v23, a2, 2u);
    v12 = sub_15AC9B0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL);
    sub_AE9DF0(v23, v12, 1u);
    goto LABEL_9;
  }
  if ( a2 != 3 )
  {
    v8 = v6;
    goto LABEL_8;
  }
  sub_FC70B0((__int64)v23, v10, v6, 2144);
  v18 = 0;
  v21[0] = 0;
  v17 = 0;
  v19 = v21;
  v20 = 0;
  v22 = 0;
  v14 = v6;
  v15 = v6;
  v16 = 1;
  if ( !v6 )
    goto LABEL_10;
LABEL_14:
  sub_1569180((__int64 *)v23, (unsigned __int64)&v14);
  if ( v19 != v21 )
    operator delete(v19);
LABEL_10:
  sub_AEA040((__int64)v23);
}
