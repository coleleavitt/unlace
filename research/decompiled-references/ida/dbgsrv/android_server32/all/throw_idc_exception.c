/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: throw_idc_exception
// Address: 0x00037928

//----- (00037928) --------------------------------------------------------
int __fastcall throw_idc_exception(int a1, const char *a2)
{
  int idc_class; // r0
  size_t v5; // r6
  int v6; // r4
  unsigned __int8 v8[8]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+14h] [bp-14h] BYREF

  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v8[0] = 2;
  v5 = 0;
  memset(v9, 0, sizeof(v9));
  free_idcv(v8);
  if ( a2 )
    v5 = strlen(a2);
  v8[0] = 7;
  sub_266B8(v9, a2, v5);
  set_idcv_attr(a1, "description", v8, 0);
  v6 = set_qerrno(90);
  free_idcv(v8);
  return v6;
}
