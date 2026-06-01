/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A50
// Address: 0x00044A50

//----- (00044A50) --------------------------------------------------------
int __cdecl sub_44A50(int a1, int a2)
{
  char *v2; // ecx
  char *idcv_attr; // eax
  char *v4; // esi
  size_t v5; // eax

  if ( *(_DWORD *)(a1 + 28) )
    v2 = *(char **)(a1 + 24);
  else
    v2 = byte_EF875;
  idcv_attr = next_idcv_attr(a1, v2);
  v4 = idcv_attr;
  if ( idcv_attr )
    v5 = strlen(idcv_attr);
  else
    v5 = 0;
  *(_BYTE *)a2 = 7;
  sub_2DCA0((_DWORD *)(a2 + 4), v4, v5);
  return 0;
}
