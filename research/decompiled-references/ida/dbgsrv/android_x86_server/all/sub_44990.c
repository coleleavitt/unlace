/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44990
// Address: 0x00044990

//----- (00044990) --------------------------------------------------------
int __cdecl sub_44990(int a1, int a2)
{
  char *idcv_attr; // eax
  char *v3; // esi
  size_t v4; // eax

  idcv_attr = first_idcv_attr(a1);
  v3 = idcv_attr;
  if ( idcv_attr )
    v4 = strlen(idcv_attr);
  else
    v4 = 0;
  *(_BYTE *)a2 = 7;
  sub_2DCA0((_DWORD *)(a2 + 4), v3, v4);
  return 0;
}
