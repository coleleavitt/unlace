void __fastcall sub_15230E0(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  char v4; // bp
  bool v5; // bp
  char v6; // r14
  unsigned __int64 v7; // rdi
  char v8; // dl
  char v9; // r15
  char v10; // r13
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // ecx
  char v15; // al
  bool v16; // zf
  unsigned __int64 v17; // rdi
  unsigned __int16 v18; // r15
  char v19; // r14
  char v20; // al
  __int64 v21; // r15
  int v22; // r14d
  __int64 v23; // rax
  unsigned __int16 v24; // [rsp+8h] [rbp-B0h]
  int v25; // [rsp+Ch] [rbp-ACh]
  int v26; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-A0h]
  unsigned __int16 v28; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v29[17]; // [rsp+30h] [rbp-88h] BYREF

  v25 = *a4;
  v4 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v4 | 0x20;
  v5 = (v4 & 0x20) != 0;
  sub_14634E0((__int64 *)a2, &v26);
  v6 = 32 * v5;
  v7 = v28;
  v24 = v28;
  v8 = (32 * v5) | *(_BYTE *)(a2 + 544) & 0xDF;
  *(_BYTE *)(a2 + 544) = v8;
  v9 = v8;
  v10 = v8;
  v11 = sub_141A630(v7);
  if ( v24 == 1 || v11 || !v27 )
    goto LABEL_6;
  v12 = *(_QWORD *)(v27 + 16);
  if ( (unsigned int)*(_QWORD *)v12 == 3 )
  {
    if ( *(_WORD *)(v12 + 16) == 28528 )
    {
      v21 = 0;
      if ( *(_BYTE *)(v12 + 18) == 112 )
        goto LABEL_14;
    }
LABEL_6:
    v13 = *(_QWORD *)(a2 + 48);
    v14 = 2189;
LABEL_7:
    sub_FC70B0((__int64)v29, v13, v26, v14);
    sub_1520A40(v29, (__int64)"visibility");
    sub_AEA040((__int64)v29);
    return;
  }
  if ( (unsigned int)*(_QWORD *)v12 != 4 || *(_DWORD *)(v12 + 16) != 1752397168 )
    goto LABEL_6;
  *(_BYTE *)(a2 + 544) = v9 | 0x20;
  sub_14634E0((__int64 *)a2, &v26);
  v15 = v6 | *(_BYTE *)(a2 + 544) & 0xDF;
  v16 = v28 == 22;
  *(_BYTE *)(a2 + 544) = v15;
  if ( !v16 )
  {
    v13 = *(_QWORD *)(a2 + 48);
    v14 = 2192;
    goto LABEL_7;
  }
  *(_BYTE *)(a2 + 544) = v15 | 0x20;
  sub_14634E0((__int64 *)a2, &v26);
  v17 = v28;
  v18 = v28;
  v19 = *(_BYTE *)(a2 + 544) & 0xDF | v6;
  *(_BYTE *)(a2 + 544) = v19;
  v20 = sub_141A630(v17);
  if ( v18 == 1 )
    goto LABEL_6;
  if ( v20 )
    goto LABEL_6;
  v21 = v27;
  if ( !v27 )
    goto LABEL_6;
  *(_BYTE *)(a2 + 544) = v19 | 0x20;
  sub_14634E0((__int64 *)a2, &v26);
  v16 = v28 == 23;
  v10 = (32 * v5) | *(_BYTE *)(a2 + 544) & 0xDF;
  *(_BYTE *)(a2 + 544) = v10;
  if ( !v16 )
  {
    v13 = *(_QWORD *)(a2 + 48);
    v14 = 2196;
    goto LABEL_7;
  }
LABEL_14:
  v22 = v26;
  *(_BYTE *)(a2 + 544) = v10 | 0x20;
  sub_14634E0((__int64 *)a2, &v26);
  v16 = v28 == 2;
  *(_BYTE *)(a2 + 544) = (32 * v5) | *(_BYTE *)(a2 + 544) & 0xDF;
  if ( !v16 )
  {
    v13 = *(_QWORD *)(a2 + 48);
    v14 = 2202;
    goto LABEL_7;
  }
  v23 = operator new[](0x18u);
  *(_DWORD *)(v23 + 4) = v22;
  *(_DWORD *)v23 = v25;
  *(_DWORD *)(v23 + 16) = 427;
  *(_QWORD *)(v23 + 8) = v21;
  sub_14368B0(a2, (char *)v23, 1, 1u, 1u, 0);
}
