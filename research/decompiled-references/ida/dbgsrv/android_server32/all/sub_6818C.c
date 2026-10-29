/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6818C
// Address: 0x0006818C

//----- (0006818C) --------------------------------------------------------
int __fastcall sub_6818C(int a1, int a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r6
  __int64 v5; // kr08_8
  bool v6; // zf
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r3
  _BYTE *v10; // r0
  int v11; // r2
  unsigned int v12; // r1
  _BOOL4 v13; // r0
  int v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r3
  _BYTE *v17; // r0
  int v18; // kr00_4
  unsigned int v19; // r2
  unsigned __int64 v20; // kr10_8
  _BYTE *v21; // r0
  _BYTE *v22; // r0
  const char *v23; // r4
  size_t v24; // r0
  const char *v25; // r4
  size_t v26; // r0
  _BYTE v29[5]; // [sp+10h] [bp-10h] BYREF
  _BYTE v30[3]; // [sp+15h] [bp-Bh] BYREF
  _BYTE v31[6]; // [sp+1Ah] [bp-6h] BYREF

  v3 = *(_DWORD *)(a2 + 32);
  v4 = 0;
  v5 = v3 + 1LL;
  v7 = v3 + 1;
  v6 = v3 == -1;
  v8 = 0;
  if ( !v6 )
    v8 = v5;
  v6 = v7 == 0;
  v9 = 0;
  if ( !v6 )
    v9 = HIDWORD(v5);
  v10 = pack_dq(v29, (unsigned int)v31, v8, v9);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v29, v10 - v29);
  v11 = *(_DWORD *)a2 - 16 * *(_DWORD *)(a2 + 32);
  v12 = v11 + 1;
  v13 = __CFADD__(v11, 1);
  v14 = v11 + 1;
  v6 = v11 == -1;
  v15 = 0;
  if ( !v6 )
    v15 = v12;
  v6 = v14 == 0;
  v16 = 0;
  if ( !v6 )
    v16 = v13;
  v17 = pack_dq(v29, (unsigned int)v31, v15, v16);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v29, v17 - v29);
  v18 = *(_DWORD *)(a2 + 4) - *(_DWORD *)a2;
  v19 = 0;
  if ( v18 != -1 )
  {
    v20 = (unsigned int)v18 + 1LL;
    v4 = HIDWORD(v20);
    v19 = v20;
  }
  v21 = pack_dq(v29, (unsigned int)v31, v19, v4);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v29, v21 - v29);
  v22 = pack_dd(v29, (unsigned int)v30, (16 * *(unsigned __int8 *)(a2 + 36)) | *(unsigned __int8 *)(a2 + 37));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v29, v22 - v29);
  if ( *(_DWORD *)(a2 + 12) )
  {
    v23 = *(const char **)(a2 + 8);
    if ( v23 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v23 = &byte_B3CBE;
  if ( !&byte_B3CBE )
LABEL_13:
    v23 = &byte_A0742;
LABEL_14:
  v24 = strlen(v23);
  ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v23, v24 + 1);
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v25 = &byte_B3CBE;
    if ( &byte_B3CBE )
      goto LABEL_17;
    goto LABEL_16;
  }
  v25 = *(const char **)(a2 + 20);
  if ( !v25 )
LABEL_16:
    v25 = &byte_A0742;
LABEL_17:
  v26 = strlen(v25);
  ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v25, v26 + 1);
  return _stack_chk_guard - *(_DWORD *)&v31[2];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
