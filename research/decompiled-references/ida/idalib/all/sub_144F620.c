void __fastcall sub_144F620(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  char v6; // r14
  bool v7; // r14
  char v8; // al
  __int16 v9; // dx
  __int64 v10; // rdx
  char v11; // r13
  bool v12; // zf
  int v13; // r14d
  __int16 v14; // dx
  __int64 v15; // rax
  int v16; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-A0h]
  __int16 v18; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v19[17]; // [rsp+20h] [rbp-88h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v6 | 0x20;
  v7 = (v6 & 0x20) != 0;
  sub_14634E0(a2, &v16);
  v8 = (32 * v7) | *(_BYTE *)(a2 + 544) & 0xDF;
  v9 = v18;
  *(_BYTE *)(a2 + 544) = v8;
  if ( (unsigned __int16)(v9 - 7) <= 0xCu || v9 == 1 || !v17 )
    goto LABEL_2;
  v10 = *(_QWORD *)(v17 + 16);
  if ( (unsigned int)*(_QWORD *)v10 != 5 )
  {
    if ( (unsigned int)*(_QWORD *)v10 == 3 && *(_WORD *)(v10 + 16) == 28261 )
    {
      v11 = 0;
      if ( *(_BYTE *)(v10 + 18) == 100 )
        goto LABEL_9;
    }
LABEL_2:
    sub_FC70B0((__int64)v19, *(_QWORD *)(a2 + 48), v16, 1103);
    sub_AEA040((__int64)v19);
    return;
  }
  if ( *(_DWORD *)(v10 + 16) != 1768383842 )
    goto LABEL_2;
  v11 = 1;
  if ( *(_BYTE *)(v10 + 20) != 110 )
    goto LABEL_2;
LABEL_9:
  *(_BYTE *)(a2 + 544) = v8 | 0x20;
  sub_14634E0(a2, &v16);
  v12 = v18 == 2;
  *(_BYTE *)(a2 + 544) = (32 * v7) | *(_BYTE *)(a2 + 544) & 0xDF;
  if ( !v12 )
  {
    sub_FC70B0((__int64)v19, *(_QWORD *)(a2 + 48), v16, 1239);
    sub_AE9DF0(v19, (__int64)"pragma", 1u);
    sub_AEA040((__int64)v19);
  }
  v13 = *(_DWORD *)(a2 + 944);
  if ( v11 )
  {
    if ( v13 )
    {
      sub_FC70B0((__int64)v19, *(_QWORD *)(a2 + 48), v5, 1109);
      sub_AEA040((__int64)v19);
      sub_FC70B0((__int64)v19, *(_QWORD *)(a2 + 48), v13, 111);
      sub_AEA040((__int64)v19);
    }
  }
  else
  {
    if ( !v13 )
    {
      sub_FC70B0((__int64)v19, *(_QWORD *)(a2 + 48), v5, 1175);
      sub_AEA040((__int64)v19);
      return;
    }
    v5 = 0;
  }
  v14 = *(_WORD *)(a4 + 16);
  v15 = 0;
  if ( (unsigned __int16)(v14 - 7) > 0xCu && v14 != 1 )
    v15 = *(_QWORD *)(a4 + 8);
  *(_DWORD *)(a2 + 944) = v5;
  *(_QWORD *)(a2 + 952) = v15;
}
