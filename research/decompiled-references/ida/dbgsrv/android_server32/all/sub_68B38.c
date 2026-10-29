/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68B38
// Address: 0x00068B38

//----- (00068B38) --------------------------------------------------------
int __fastcall sub_68B38(int a1, int a2)
{
  _BYTE *v4; // r0
  _BYTE *v5; // r0
  _BYTE *v6; // r0
  __int64 v7; // kr00_8
  bool v8; // zf
  int v9; // r7
  __int64 v10; // r2
  _BYTE *v11; // r0
  _BYTE *v12; // r0
  const char *v13; // r4
  size_t v14; // r2
  int v15; // r0
  const char *v16; // r1
  unsigned int v18; // r2
  unsigned int v19; // r4
  __int64 v20; // kr08_8
  unsigned int v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r3
  _BYTE *v24; // r0
  int v25; // r2
  unsigned int v26; // r1
  _BOOL4 v27; // r0
  int v28; // r3
  unsigned int v29; // r2
  int v30; // [sp+14h] [bp-14h]
  _BYTE v31[5]; // [sp+18h] [bp-10h] BYREF
  _BYTE v32[5]; // [sp+1Dh] [bp-Bh] BYREF
  _BYTE v33[6]; // [sp+22h] [bp-6h] BYREF

  v4 = pack_dd(v31, (unsigned int)v32, *(_DWORD *)(a2 + 16) & 0xFFFFFFF);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v31, v4 - v31);
  v5 = pack_dd(v31, (unsigned int)v32, *(_DWORD *)a2);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v31, v5 - v31);
  v6 = pack_dd(v31, (unsigned int)v32, *(_DWORD *)(a2 + 4));
  v30 = a1;
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v31, v6 - v31);
  v10 = *(unsigned int *)(a2 + 8);
  v7 = v10 + 1;
  v9 = v10 + 1;
  v8 = (_DWORD)v10 == -1;
  LODWORD(v10) = 0;
  if ( !v8 )
    LODWORD(v10) = v7;
  if ( v9 )
    HIDWORD(v10) = HIDWORD(v7);
  v11 = pack_dq(v31, (unsigned int)v33, v10, HIDWORD(v10));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v30, v31, v11 - v31);
  v12 = pack_dd(v31, (unsigned int)v32, *(unsigned __int8 *)(a2 + 12));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v30, v31, v12 - v31);
  switch ( *(_DWORD *)(a2 + 16) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      sub_686E4(v30, a2 + 20);
      return _stack_chk_guard - *(_DWORD *)&v33[2];
    case 2:
    case 4:
      v13 = v31;
      v14 = pack_dd(v31, (unsigned int)v32, *(_DWORD *)(a2 + 20)) - v31;
      goto LABEL_14;
    case 3:
    case 9:
    case 0xA:
      if ( *(_DWORD *)(a2 + 24) )
      {
        v13 = *(const char **)(a2 + 20);
        if ( v13 )
          goto LABEL_13;
      }
      else
      {
        v13 = &byte_B3CBE;
        if ( &byte_B3CBE )
          goto LABEL_13;
      }
      v13 = &byte_A0742;
LABEL_13:
      v14 = strlen(v13) + 1;
LABEL_14:
      v15 = v30;
      v16 = v13;
LABEL_15:
      ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(v15, v16, v14);
      return _stack_chk_guard - *(_DWORD *)&v33[2];
    case 5:
      v18 = *(_DWORD *)(a2 + 20);
      v19 = 0;
      v20 = v18 + 1LL;
      v21 = v18 + 1;
      v8 = v18 == -1;
      v22 = 0;
      if ( !v8 )
        v22 = v20;
      v8 = v21 == 0;
      v23 = 0;
      if ( !v8 )
        v23 = HIDWORD(v20);
      v24 = pack_dq(v31, (unsigned int)v33, v22, v23);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(v30, v31, v24 - v31);
      v25 = *(_DWORD *)(a2 + 24);
      v26 = v25 + 1;
      v27 = __CFADD__(v25, 1);
      v28 = v25 + 1;
      v8 = v25 == -1;
      v29 = 0;
      if ( !v8 )
        v29 = v26;
      if ( v28 )
        v19 = v27;
      v14 = pack_dq(v31, (unsigned int)v33, v29, v19) - v31;
      v15 = v30;
      v16 = v31;
      goto LABEL_15;
    case 7:
      sub_6886C(v30, a2 + 20);
      return _stack_chk_guard - *(_DWORD *)&v33[2];
    default:
      return _stack_chk_guard - *(_DWORD *)&v33[2];
  }
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
