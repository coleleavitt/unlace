/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BD70
// Address: 0x000000000006BD70

//----- (000000000006BD70) ----------------------------------------------------
bool __fastcall sub_6BD70(__int64 idc_gvar, char *a2, char *a3, double a4, __m128 a5)
{
  char *v6; // rdi

  if ( idc_gvar )
  {
    if ( *(_BYTE *)idc_gvar == 7 )
    {
      if ( *(_QWORD *)(idc_gvar + 16) )
        v6 = *(char **)(idc_gvar + 8);
      else
        v6 = (char *)s1;
      idc_gvar = find_idc_gvar(v6);
    }
  }
  else
  {
    idc_gvar = 0;
  }
  return (unsigned int)set_idcv_attr(idc_gvar, a2, a3, 0, a4, a5) == 0;
}
