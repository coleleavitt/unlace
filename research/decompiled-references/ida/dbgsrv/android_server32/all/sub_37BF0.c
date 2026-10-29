/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37BF0
// Address: 0x00037BF0

//----- (00037BF0) --------------------------------------------------------
int __fastcall sub_37BF0(int a1, int a2)
{
  char *v3; // r1
  char *idcv_attr; // r0
  char *v5; // r5
  size_t v6; // r2

  if ( *(_DWORD *)(a1 + 36) )
    v3 = *(char **)(a1 + 32);
  else
    v3 = &byte_B3CBE;
  idcv_attr = prev_idcv_attr(a1, v3);
  v5 = idcv_attr;
  v6 = 0;
  if ( idcv_attr )
    v6 = strlen(idcv_attr);
  *(_BYTE *)a2 = 7;
  sub_266B8((_DWORD *)(a2 + 8), v5, v6);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
