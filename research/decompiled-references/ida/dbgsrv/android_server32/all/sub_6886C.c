/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6886C
// Address: 0x0006886C

//----- (0006886C) --------------------------------------------------------
int __fastcall sub_6886C(int a1, int a2)
{
  _BYTE *v4; // r0
  _BYTE *v5; // r0
  __int64 v6; // kr00_8
  bool v7; // zf
  int v8; // r6
  __int64 v9; // r2
  _BYTE *v10; // r0
  const char *v11; // r5
  size_t v12; // r0
  _BYTE v14[5]; // [sp+8h] [bp-10h] BYREF
  _BYTE v15[5]; // [sp+Dh] [bp-Bh] BYREF
  _BYTE v16[6]; // [sp+12h] [bp-6h] BYREF

  v4 = pack_dd(v14, (unsigned int)v15, *(_DWORD *)a2);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v14, v4 - v14);
  v5 = pack_dd(v14, (unsigned int)v15, *(unsigned __int8 *)(a2 + 4));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v14, v5 - v14);
  v9 = *(unsigned int *)(a2 + 8);
  v6 = v9 + 1;
  v8 = v9 + 1;
  v7 = (_DWORD)v9 == -1;
  LODWORD(v9) = 0;
  if ( !v7 )
    LODWORD(v9) = v6;
  if ( v8 )
    HIDWORD(v9) = HIDWORD(v6);
  v10 = pack_dq(v14, (unsigned int)v16, v9, HIDWORD(v9));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v14, v10 - v14);
  if ( *(_DWORD *)(a2 + 16) )
  {
    v11 = *(const char **)(a2 + 12);
    if ( v11 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v11 = &byte_B3CBE;
  if ( !&byte_B3CBE )
LABEL_9:
    v11 = &byte_A0742;
LABEL_10:
  v12 = strlen(v11);
  ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v11, v12 + 1);
  return _stack_chk_guard - *(_DWORD *)&v16[2];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
