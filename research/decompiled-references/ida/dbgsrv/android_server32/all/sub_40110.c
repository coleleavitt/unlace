/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40110
// Address: 0x00040110

//----- (00040110) --------------------------------------------------------
bool __fastcall sub_40110(int idc_gvar, char *a2, unsigned __int8 *a3)
{
  int v5; // r1
  const char *v6; // r0

  v5 = 0;
  if ( idc_gvar )
  {
    if ( *(_BYTE *)idc_gvar == 7 )
    {
      if ( *(_DWORD *)(idc_gvar + 12) )
        v6 = *(const char **)(idc_gvar + 8);
      else
        v6 = &byte_B3CBE;
      idc_gvar = find_idc_gvar(v6);
    }
    v5 = idc_gvar;
  }
  return set_idcv_attr(v5, a2, a3, 0) == 0;
}
// B3CBE: using guessed type char byte_B3CBE;
