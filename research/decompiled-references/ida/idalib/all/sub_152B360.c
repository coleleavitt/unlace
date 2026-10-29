void __fastcall sub_152B360(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _BYTE *v6; // rdi
  __int64 v7; // r13
  unsigned __int16 v8; // r12
  __int64 (*v9)(void); // rax
  char v10; // al
  unsigned int *v11; // rdx
  __int64 v12; // rax
  bool v13; // si
  __int64 v14; // r12
  char v15; // al
  __int64 v16; // rsi
  int v17; // edx
  char v18; // al
  unsigned __int64 v19; // rax
  int v20; // edx
  unsigned __int8 *v21[15]; // [rsp+0h] [rbp-78h] BYREF

  v6 = (_BYTE *)a2[8];
  v7 = *(_QWORD *)(a4 + 8);
  v8 = *(_WORD *)(a4 + 16);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v6 + 152LL);
  if ( (char *)v9 == (char *)sub_102B840 )
    v10 = v6[285];
  else
    v10 = v9();
  if ( !v10 && (*(_BYTE *)(a2[7] + 106) & 0x40) == 0 )
  {
    sub_FC70B0((__int64)v21, a2[6], *(_DWORD *)a4, 2204);
    v18 = sub_141A630(v8);
    if ( v8 == 1 || v18 )
      BUG();
    goto LABEL_17;
  }
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 5 )
  {
    sub_FC70B0((__int64)v21, a2[6], *(_DWORD *)a4, 2189);
    v15 = sub_141A630(v8);
    if ( v8 == 1 || v15 )
      BUG();
LABEL_17:
    sub_AEC220(v21, (_BYTE *)(*(_QWORD *)(v7 + 16) + 16LL), **(unsigned int **)(v7 + 16));
    sub_AEA040((__int64)v21);
    return;
  }
  v11 = *(unsigned int **)(*(_QWORD *)(a4 + 8) + 16LL);
  v12 = *v11;
  switch ( v12 )
  {
    case 13LL:
      if ( *((_QWORD *)v11 + 2) != 0x5241574F545F4546LL || v11[6] != 1380276804 || (v13 = 1, *((_BYTE *)v11 + 28) != 79) )
        v13 = 0;
      v14 = 0;
      break;
    case 12LL:
      v14 = 1;
      v13 = *((_QWORD *)v11 + 2) == 0x41454E4F545F4546LL && v11[6] == 1414743378;
      break;
    case 9LL:
      if ( *((_QWORD *)v11 + 2) != 0x52415750555F4546LL || (v13 = 1, v14 = 2, *((_BYTE *)v11 + 24) != 68) )
      {
        v13 = 0;
        v14 = 0;
      }
LABEL_11:
      if ( v12 == 10 )
      {
        if ( v13 )
          goto LABEL_25;
        if ( *((_QWORD *)v11 + 2) == 0x4D414E59445F4546LL )
        {
          v14 = 7;
          if ( *((_WORD *)v11 + 12) == 17225 )
            goto LABEL_25;
        }
LABEL_14:
        sub_FC70B0((__int64)v21, a2[6], *(_DWORD *)a4, 2227);
        sub_AEA040((__int64)v21);
        return;
      }
      goto LABEL_24;
    case 11LL:
      if ( *((_QWORD *)v11 + 2) == 0x574E574F445F4546LL && *((_WORD *)v11 + 12) == 21057 )
      {
        v14 = 3;
        if ( *((_BYTE *)v11 + 26) == 68 )
          goto LABEL_25;
      }
      goto LABEL_14;
    default:
      v14 = 0;
      v13 = 0;
      break;
  }
  if ( v13 || v12 != 20 )
    goto LABEL_11;
  if ( !(*((_QWORD *)v11 + 2) ^ 0x41454E4F545F4546LL | *((_QWORD *)v11 + 3) ^ 0x4D4F524654534552LL)
    && v11[8] == 1330791770 )
  {
    v14 = 4;
    goto LABEL_25;
  }
LABEL_24:
  if ( !v13 )
    goto LABEL_14;
LABEL_25:
  sub_14634E0(a2, (int *)a4);
  v16 = a2[6];
  v17 = *(_DWORD *)a4;
  if ( *(_WORD *)(a4 + 16) == 2 )
  {
    sub_FC70B0((__int64)v21, v16, v17, 2226);
    sub_AEA040((__int64)v21);
    v19 = sub_15290A0(a2 + 16, 24, 3u);
    *(_QWORD *)v19 = 0;
    *(_DWORD *)(v19 + 16) = 440;
    *(_DWORD *)v19 = *(_DWORD *)a4;
    v20 = *(_DWORD *)a4;
    *(_QWORD *)(v19 + 8) = v14;
    *(_DWORD *)(v19 + 4) = v20;
    sub_14368B0((__int64)a2, (char *)v19, 1, 1u, 0, 0);
  }
  else
  {
    sub_FC70B0((__int64)v21, v16, v17, 2202);
    sub_1520A40(v21, (__int64)"STDC FENV_ROUND");
    sub_AEA040((__int64)v21);
  }
}
