/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CA68
// Address: 0x000000010002CA68

//----- (000000010002CA68) ----------------------------------------------------
bool __fastcall sub_10002CA68(__int64 idc_gvar, char *a2, unsigned __int8 *a3)
{
  char *v3; // x19
  unsigned __int8 *v4; // x20
  const char *v5; // x0

  if ( idc_gvar && *(_BYTE *)idc_gvar == 7 )
  {
    v3 = a2;
    v4 = a3;
    if ( *(_QWORD *)(idc_gvar + 16) )
      v5 = *(const char **)(idc_gvar + 8);
    else
      v5 = &byte_100075A30;
    idc_gvar = find_idc_gvar(v5);
    a3 = v4;
    a2 = v3;
  }
  return (unsigned int)set_idcv_attr(idc_gvar, a2, a3, 0) == 0;
}
// 100075A30: using guessed type char byte_100075A30;
