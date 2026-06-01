/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38030
// Address: 0x00038030

//----- (00038030) --------------------------------------------------------
int __fastcall sub_38030(int a1, int a2)
{
  const char *v3; // r5
  size_t v4; // r2

  if ( !*(_DWORD *)(a1 + 12) )
  {
    v3 = &byte_B3CBE;
    goto LABEL_5;
  }
  v3 = *(const char **)(a1 + 8);
  v4 = 0;
  if ( v3 )
  {
LABEL_5:
    v4 = strlen(v3);
    goto LABEL_6;
  }
  v3 = nullptr;
LABEL_6:
  *(_BYTE *)a2 = 7;
  sub_266B8((_DWORD *)(a2 + 8), v3, v4);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
