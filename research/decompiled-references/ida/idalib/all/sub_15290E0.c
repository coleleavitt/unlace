void __fastcall sub_15290E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // bp
  char v7; // al
  _BYTE *v8; // rdi
  unsigned int *v9; // rsi
  __int64 (*v10)(void); // rax
  signed __int64 v11; // r13
  _BYTE *v12; // r14
  char v13; // al
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  int v20; // edx
  int v21; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-A0h]
  __int16 v23; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v24[17]; // [rsp+20h] [rbp-88h] BYREF

  v6 = *(_WORD *)(a4 + 16);
  v7 = sub_141A630(v6);
  if ( v6 == 1 || v7 )
    BUG();
  v8 = (_BYTE *)a2[8];
  v9 = *(unsigned int **)(*(_QWORD *)(a4 + 8) + 16LL);
  v10 = *(__int64 (**)(void))(*(_QWORD *)v8 + 152LL);
  v11 = *v9;
  v12 = v9 + 4;
  if ( (char *)v10 == (char *)sub_102B840 )
    v13 = v8[285];
  else
    v13 = v10();
  if ( !v13 && (*(_BYTE *)(a2[7] + 106) & 0x40) == 0 )
  {
    v14 = a2[6];
    v16 = *(_DWORD *)a4;
    v15 = 2204;
    goto LABEL_10;
  }
  sub_14634E0(a2, &v21);
  if ( v23 != 22 )
  {
    v14 = a2[6];
    v15 = 2192;
LABEL_9:
    v16 = v21;
LABEL_10:
    sub_FC70B0((__int64)v24, v14, v16, v15);
    sub_AEC220(v24, v12, v11);
    sub_AEA040((__int64)v24);
    return;
  }
  sub_14634E0(a2, &v21);
  if ( v23 != 5 )
    goto LABEL_15;
  v17 = *(_QWORD *)(v22 + 16);
  if ( (unsigned int)*(_QWORD *)v17 != 2 )
  {
    if ( (unsigned int)*(_QWORD *)v17 == 3 && *(_WORD *)(v17 + 16) == 26223 && *(_BYTE *)(v17 + 18) == 102 )
    {
      v18 = 1;
      sub_14634E0(a2, &v21);
      goto LABEL_19;
    }
LABEL_15:
    sub_FC70B0((__int64)v24, a2[6], v21, 2211);
    sub_AEA040((__int64)v24);
    return;
  }
  if ( *(_WORD *)(v17 + 16) != 28271 )
    goto LABEL_15;
  v18 = 0;
  sub_14634E0(a2, &v21);
LABEL_19:
  if ( v23 != 23 )
  {
    v14 = a2[6];
    v15 = 2196;
    goto LABEL_9;
  }
  sub_14634E0(a2, &v21);
  if ( v23 != 2 )
  {
    v14 = a2[6];
    v15 = 2202;
    goto LABEL_9;
  }
  v19 = sub_15290A0(a2 + 16, 24, 3u);
  *(_QWORD *)v19 = 0;
  *(_DWORD *)(v19 + 16) = 439;
  v20 = *(_DWORD *)a4;
  *(_QWORD *)(v19 + 8) = v18;
  *(_DWORD *)v19 = v20;
  *(_DWORD *)(v19 + 4) = v21;
  sub_14368B0((__int64)a2, (char *)v19, 1, 1u, 0, 0);
}
