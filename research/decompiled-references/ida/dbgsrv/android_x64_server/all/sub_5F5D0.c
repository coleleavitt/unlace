/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F5D0
// Address: 0x000000000005F5D0

//----- (000000000005F5D0) ----------------------------------------------------
__int64 __fastcall sub_5F5D0(__int64 a1, _BYTE *a2)
{
  const char *idcv_attr; // rax
  const char *v3; // r14
  size_t v4; // rdx

  idcv_attr = first_idcv_attr(a1);
  v3 = idcv_attr;
  if ( idcv_attr )
    v4 = strlen(idcv_attr);
  else
    v4 = 0;
  *a2 = 7;
  sub_4ABC0((__int64)(a2 + 8), v3, v4);
  return 0;
}
