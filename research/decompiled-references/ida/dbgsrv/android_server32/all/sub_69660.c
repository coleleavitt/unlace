/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_69660
// Address: 0x00069660

//----- (00069660) --------------------------------------------------------
int __fastcall sub_69660(int a1, unsigned int *a2)
{
  _BYTE *v4; // r0
  const char *v5; // r5
  size_t v6; // r0
  _BYTE v8[5]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v9[7]; // [sp+9h] [bp-7h] BYREF

  v4 = pack_dd(v8, (unsigned int)v9, a2[1]);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v8, v4 - v8);
  if ( a2[3] )
  {
    v5 = (const char *)a2[2];
    if ( v5 )
      goto LABEL_6;
    goto LABEL_5;
  }
  v5 = &byte_B3CBE;
  if ( !&byte_B3CBE )
LABEL_5:
    v5 = &byte_A0742;
LABEL_6:
  v6 = strlen(v5);
  ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v5, v6 + 1);
  return _stack_chk_guard - *(_DWORD *)&v9[3];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
