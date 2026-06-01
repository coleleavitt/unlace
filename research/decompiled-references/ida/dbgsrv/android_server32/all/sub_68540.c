/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68540
// Address: 0x00068540

//----- (00068540) --------------------------------------------------------
int __fastcall sub_68540(int a1, int *a2)
{
  unsigned int v3; // r6
  _BYTE *v4; // r0
  int v5; // r7
  int v6; // r6
  _BYTE *v7; // r0
  const char *v8; // r4
  size_t v9; // r0
  int v11; // [sp+14h] [bp-24h]
  int v13; // [sp+24h] [bp-14h]
  unsigned int v14; // [sp+28h] [bp-10h]
  _BYTE v15[5]; // [sp+2Ch] [bp-Ch] BYREF
  _BYTE v16[7]; // [sp+31h] [bp-7h] BYREF

  v3 = a2[1];
  v4 = pack_dd(v15, (unsigned int)v16, v3);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v15, v4 - v15);
  if ( v3 )
  {
    v5 = 8;
    v11 = a1;
    do
    {
      v14 = v3;
      v6 = *a2;
      v13 = *a2 + v5;
      v7 = pack_dd(v15, (unsigned int)v16, *(_DWORD *)(v13 - 8));
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v15, v7 - v15);
      v8 = &byte_B3CBE;
      if ( *(_DWORD *)(v6 + v5) )
        v8 = *(const char **)(v13 - 4);
      if ( !v8 )
        v8 = &byte_A0742;
      a1 = v11;
      v9 = strlen(v8);
      ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(v11, v8, v9 + 1);
      v5 += 16;
      v3 = v14 - 1;
    }
    while ( v14 != 1 );
  }
  return _stack_chk_guard - *(_DWORD *)&v16[3];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
