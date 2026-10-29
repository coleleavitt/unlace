/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_683F4
// Address: 0x000683F4

//----- (000683F4) --------------------------------------------------------
int __fastcall sub_683F4(int a1, unsigned int *a2)
{
  unsigned int v3; // r6
  unsigned int v4; // r2
  unsigned int v5; // r3
  _BYTE *v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r1
  _BOOL4 v9; // r0
  bool v10; // zf
  unsigned int v11; // r3
  unsigned int v12; // r2
  _BYTE *v13; // r0
  const char *v14; // r4
  size_t v15; // r0
  _BYTE v18[10]; // [sp+10h] [bp-10h] BYREF
  _BYTE v19[6]; // [sp+1Ah] [bp-6h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *a2 != -1 )
    v4 = *a2 + 1;
  v5 = 0;
  if ( *a2 != -1 )
    v5 = ((unsigned __int64)*a2 + 1) >> 32;
  v6 = pack_dq(v18, (unsigned int)v19, v4, v5);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v18, v6 - v18);
  v7 = a2[1];
  v8 = v7 + 1;
  v9 = __CFADD__(v7, 1);
  v11 = v7 + 1;
  v10 = v7 == -1;
  v12 = 0;
  if ( !v10 )
    v12 = v8;
  if ( v11 )
    v3 = v9;
  v13 = pack_dq(v18, (unsigned int)v19, v12, v3);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v18, v13 - v18);
  if ( !a2[3] )
  {
    v14 = &byte_B3CBE;
    if ( &byte_B3CBE )
      goto LABEL_12;
    goto LABEL_11;
  }
  v14 = (const char *)a2[2];
  if ( !v14 )
LABEL_11:
    v14 = &byte_A0742;
LABEL_12:
  v15 = strlen(v14);
  ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v14, v15 + 1);
  return _stack_chk_guard - *(_DWORD *)&v19[2];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
