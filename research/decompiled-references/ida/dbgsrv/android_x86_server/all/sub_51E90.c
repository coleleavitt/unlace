/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51E90
// Address: 0x00051E90

//----- (00051E90) --------------------------------------------------------
bool __cdecl sub_51E90(int a1, char *s, char *a3)
{
  int idc_gvar; // eax
  char *v4; // eax

  idc_gvar = a1;
  if ( a1 )
  {
    if ( *(_BYTE *)a1 == 7 )
    {
      if ( *(_DWORD *)(a1 + 8) )
        v4 = *(char **)(a1 + 4);
      else
        v4 = byte_EF875;
      idc_gvar = find_idc_gvar(v4);
    }
  }
  else
  {
    idc_gvar = 0;
  }
  return set_idcv_attr(idc_gvar, s, a3, 0) == 0;
}
