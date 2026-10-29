/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_686E4
// Address: 0x000686E4

//----- (000686E4) --------------------------------------------------------
int __fastcall sub_686E4(int a1, int a2)
{
  const char *v3; // r4
  size_t v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r6
  __int64 v7; // kr00_8
  bool v8; // zf
  unsigned int v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r3
  _BYTE *v12; // r0
  int v13; // r2
  unsigned int v14; // r1
  _BOOL4 v15; // r0
  int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r3
  _BYTE *v19; // r0
  int v20; // r2
  unsigned int v21; // r1
  _BOOL4 v22; // r0
  int v23; // r3
  unsigned int v24; // r2
  _BYTE *v25; // r0
  _BYTE v28[10]; // [sp+10h] [bp-10h] BYREF
  _BYTE v29[6]; // [sp+1Ah] [bp-6h] BYREF

  if ( !*(_DWORD *)(a2 + 4) )
  {
    v3 = &byte_B3CBE;
    if ( &byte_B3CBE )
      goto LABEL_6;
    goto LABEL_5;
  }
  v3 = *(const char **)a2;
  if ( !*(_DWORD *)a2 )
LABEL_5:
    v3 = &byte_A0742;
LABEL_6:
  v4 = strlen(v3);
  ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v3, v4 + 1);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = 0;
  v7 = v5 + 1LL;
  v9 = v5 + 1;
  v8 = v5 == -1;
  v10 = 0;
  if ( !v8 )
    v10 = v7;
  v8 = v9 == 0;
  v11 = 0;
  if ( !v8 )
    v11 = HIDWORD(v7);
  v12 = pack_dq(v28, (unsigned int)v29, v10, v11);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v28, v12 - v28);
  v13 = *(_DWORD *)(a2 + 16);
  v14 = v13 + 1;
  v15 = __CFADD__(v13, 1);
  v16 = v13 + 1;
  v8 = v13 == -1;
  v17 = 0;
  if ( !v8 )
    v17 = v14;
  v8 = v16 == 0;
  v18 = 0;
  if ( !v8 )
    v18 = v15;
  v19 = pack_dq(v28, (unsigned int)v29, v17, v18);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v28, v19 - v28);
  v20 = *(_DWORD *)(a2 + 20);
  v21 = v20 + 1;
  v22 = __CFADD__(v20, 1);
  v23 = v20 + 1;
  v8 = v20 == -1;
  v24 = 0;
  if ( !v8 )
    v24 = v21;
  if ( v23 )
    v6 = v22;
  v25 = pack_dq(v28, (unsigned int)v29, v24, v6);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v28, v25 - v28);
  return _stack_chk_guard - *(_DWORD *)&v29[2];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
