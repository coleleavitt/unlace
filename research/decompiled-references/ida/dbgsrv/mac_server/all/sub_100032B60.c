/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032B60
// Address: 0x0000000100032B60

//----- (0000000100032B60) ----------------------------------------------------
bool __fastcall sub_100032B60(__int64 idc_gvar, char *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r14
  char *v4; // rdi

  if ( idc_gvar )
  {
    if ( *(_BYTE *)idc_gvar == 7 )
    {
      v3 = a3;
      if ( *(_QWORD *)(idc_gvar + 16) )
        v4 = *(char **)(idc_gvar + 8);
      else
        v4 = (char *)_s1;
      idc_gvar = find_idc_gvar(v4);
      a3 = v3;
    }
  }
  else
  {
    idc_gvar = 0;
  }
  return (unsigned int)set_idcv_attr(idc_gvar, a2, a3, 0) == 0;
}
