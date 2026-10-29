void __fastcall sub_144F860(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  char v5; // bp
  bool v6; // bp
  char v7; // al
  __int16 v8; // dx
  __int64 v9; // rdx
  char v10; // r13
  bool v11; // zf
  int v12; // r14d
  __int64 v13; // rbp
  int v14; // [rsp+0h] [rbp-98h] BYREF
  __int64 v15; // [rsp+8h] [rbp-90h]
  __int16 v16; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v17[15]; // [rsp+20h] [rbp-78h] BYREF

  v4 = *a4;
  v5 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v5 | 0x20;
  v6 = (v5 & 0x20) != 0;
  sub_14634E0(a2, &v14);
  v7 = (32 * v6) | *(_BYTE *)(a2 + 544) & 0xDF;
  v8 = v16;
  *(_BYTE *)(a2 + 544) = v7;
  if ( (unsigned __int16)(v8 - 7) <= 0xCu || v8 == 1 || !v15 )
    goto LABEL_2;
  v9 = *(_QWORD *)(v15 + 16);
  if ( (unsigned int)*(_QWORD *)v9 != 5 )
  {
    if ( (unsigned int)*(_QWORD *)v9 == 3 && *(_WORD *)(v9 + 16) == 28261 )
    {
      v10 = 0;
      if ( *(_BYTE *)(v9 + 18) == 100 )
        goto LABEL_9;
    }
LABEL_2:
    sub_FC70B0((__int64)v17, *(_QWORD *)(a2 + 48), v14, 1104);
    sub_AEA040((__int64)v17);
    return;
  }
  if ( *(_DWORD *)(v9 + 16) != 1768383842 )
    goto LABEL_2;
  v10 = 1;
  if ( *(_BYTE *)(v9 + 20) != 110 )
    goto LABEL_2;
LABEL_9:
  *(_BYTE *)(a2 + 544) = v7 | 0x20;
  sub_14634E0(a2, &v14);
  v11 = v16 == 2;
  *(_BYTE *)(a2 + 544) = (32 * v6) | *(_BYTE *)(a2 + 544) & 0xDF;
  if ( !v11 )
  {
    sub_FC70B0((__int64)v17, *(_QWORD *)(a2 + 48), v14, 1239);
    sub_AE9DF0(v17, (__int64)"pragma", 1u);
    sub_AEA040((__int64)v17);
  }
  v12 = *(_DWORD *)(a2 + 960);
  v13 = *(_QWORD *)(a2 + 1192);
  if ( v10 )
  {
    if ( v12 )
    {
      sub_FC70B0((__int64)v17, *(_QWORD *)(a2 + 48), v4, 1110);
      sub_AEA040((__int64)v17);
      sub_FC70B0((__int64)v17, *(_QWORD *)(a2 + 48), v12, 111);
      sub_AEA040((__int64)v17);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 232LL))(v13, v4);
LABEL_16:
    *(_DWORD *)(a2 + 960) = v4;
    return;
  }
  if ( v12 )
  {
    v4 = 0;
    if ( v13 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13 + 240LL))(*(_QWORD *)(a2 + 1192), 0);
    goto LABEL_16;
  }
  sub_FC70B0((__int64)v17, *(_QWORD *)(a2 + 48), v4, 1176);
  sub_AEA040((__int64)v17);
}
