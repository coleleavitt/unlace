/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37B60
// Address: 0x00037B60

//----- (00037B60) --------------------------------------------------------
int __fastcall sub_37B60(int a1, int a2)
{
  char *idcv_attr; // r0
  char *v4; // r5
  size_t v5; // r2

  idcv_attr = first_idcv_attr(a1);
  v4 = idcv_attr;
  v5 = 0;
  if ( idcv_attr )
    v5 = strlen(idcv_attr);
  *(_BYTE *)a2 = 7;
  sub_266B8((_DWORD *)(a2 + 8), v4, v5);
  return 0;
}
