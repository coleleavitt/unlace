/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68E54
// Address: 0x00068E54

//----- (00068E54) --------------------------------------------------------
int __fastcall sub_68E54(int a1, unsigned int *a2, int a3)
{
  _BYTE *v5; // r0
  _BYTE *v6; // r0
  char *v7; // r0
  const char *v8; // r7
  size_t v9; // r0
  char *v10; // r0
  const char *v11; // r7
  size_t v12; // r0
  int v14; // [sp+14h] [bp-14h]
  _BYTE v15[5]; // [sp+1Ch] [bp-Ch] BYREF
  _BYTE v16[7]; // [sp+21h] [bp-7h] BYREF

  if ( a3 >= 1 )
  {
    do
    {
      v14 = a3;
      v5 = pack_dd(v15, (unsigned int)v16, *a2);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v15, v5 - v15);
      v6 = pack_dd(v15, (unsigned int)v16, a2[1]);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v15, v6 - v15);
      v7 = &byte_B3CBE;
      if ( a2[3] )
        v7 = (char *)a2[2];
      v8 = &byte_A0742;
      if ( v7 )
        v8 = v7;
      v9 = strlen(v8);
      ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v8, v9 + 1);
      v10 = &byte_B3CBE;
      if ( a2[6] )
        v10 = (char *)a2[5];
      v11 = &byte_A0742;
      if ( v10 )
        v11 = v10;
      v12 = strlen(v11);
      ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v11, v12 + 1);
      a2 += 8;
      a3 = v14 - 1;
    }
    while ( v14 != 1 );
  }
  return _stack_chk_guard - *(_DWORD *)&v16[3];
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
