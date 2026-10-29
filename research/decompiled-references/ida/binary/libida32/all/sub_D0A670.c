void __fastcall sub_D0A670(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebp
  unsigned int v4; // ebp
  void *v5; // rsi
  __int64 v6; // rbp
  unsigned __int8 **v7; // rbp
  __int64 v8; // rdi
  unsigned __int8 v9; // si
  bool v10; // cc
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int8 **v12; // [rsp+8h] [rbp-60h] BYREF
  void *v13; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-50h]
  char v15; // [rsp+1Ch] [rbp-4Ch]
  void *v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-40h]
  char v18; // [rsp+2Ch] [rbp-3Ch]
  void *v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(unsigned __int16 *)(v2 + 16);
  sub_CD4C20((__int64)&v16, (__int64 *)v2);
  v4 = v3 + 2;
  sub_BF2AD0((__int64)&v19, (__int64)&v16, v4);
  v15 = 0;
  v14 = v20;
  v13 = v19;
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  v5 = **(void ***)a1;
  v20 = v4;
  if ( v4 > 0x40 )
  {
    sub_21E1730(&v19, v5, 1);
  }
  else
  {
    v19 = v5;
    sub_CD43C0((unsigned __int64 *)&v19);
  }
  v18 = 0;
  v17 = v20;
  v16 = v19;
  sub_CD4B40((__int64)&v19, (__int64 *)&v16, (__int64)&v13);
  v6 = *(_QWORD *)(a1 + 8);
  v11 = sub_DFB160(*(_QWORD *)(v6 + 400), **(_QWORD **)(a1 + 16));
  v12 = (unsigned __int8 **)sub_E0FFE0(v6, &v11, 2381, 0);
  v7 = v12;
  if ( !v12 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v8 + 24) )
      goto LABEL_11;
    goto LABEL_22;
  }
  sub_CD4D00(&v12, (__int64)&v19);
  v8 = *(_QWORD *)(a1 + 24);
  v7 = v12;
  v9 = 1;
  if ( !*(_DWORD *)(v8 + 24) )
LABEL_22:
    v9 = *(_BYTE *)(sub_CDA220(v8) + 60) ^ 1;
  if ( v7 )
  {
    sub_AC60B0(v7, v9, 2u);
    if ( v12 )
      sub_AC60B0(v12, **(_QWORD **)(a1 + 32), 3u);
  }
LABEL_11:
  v10 = v20 <= 0x40;
  **(_BYTE **)(a1 + 40) = 1;
  if ( !v10 && v19 )
    operator delete[](v19);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  if ( v14 > 0x40 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

