/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68CA0
// Address: 0x0000000000068CA0

//----- (0000000000068CA0) ----------------------------------------------------
bool __fastcall sub_68CA0(__int64 idc_gvar, char *a2, unsigned __int8 *a3)
{
  const char *v5; // x0

  if ( idc_gvar && *(_BYTE *)idc_gvar == 7 )
  {
    if ( *(_QWORD *)(idc_gvar + 16) )
      v5 = *(const char **)(idc_gvar + 8);
    else
      v5 = &byte_F154B;
    idc_gvar = find_idc_gvar(v5);
  }
  return (unsigned int)set_idcv_attr(idc_gvar, a2, a3, 0) == 0;
}
// F154B: using guessed type char byte_F154B;
