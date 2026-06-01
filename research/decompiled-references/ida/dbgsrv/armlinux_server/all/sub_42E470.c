/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E470
// Address: 0x000000000042E470

//----- (000000000042E470) ----------------------------------------------------
__int64 __fastcall sub_42E470(const char *a1, __int64 (***a2)(), char a3)
{
  void **v4; // x0
  void **v5; // x19
  unsigned int v6; // w20

  v4 = (void **)sub_48BF60(a1, a3);
  if ( v4 )
  {
    v5 = v4;
    sub_461B48();
    v6 = sub_42DC30((__int64)v5, a2);
    sub_461B50();
    sub_48C0F8(v5);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}
