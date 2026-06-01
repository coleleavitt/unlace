/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59544
// Address: 0x00059544

//----- (00059544) --------------------------------------------------------
int __fastcall sub_59544(int a1)
{
  void **v1; // r0
  void **v2; // r7
  int v3; // r6
  _UNKNOWN **v5; // [sp+0h] [bp-248h] BYREF
  void *ptr; // [sp+4h] [bp-244h]
  int v7; // [sp+8h] [bp-240h]
  int v8; // [sp+Ch] [bp-23Ch]

  v1 = (void **)sub_74920(a1, 0);
  if ( !v1 )
    return -1;
  v2 = v1;
  ptr = nullptr;
  v7 = 0;
  v8 = 0;
  v5 = &off_CFE60;
  if ( sub_582F4((int)&v5, (int)v1, 0, 1) )
    v3 = 11;
  else
    v3 = -1;
  v5 = &off_CFE60;
  if ( ptr )
  {
    v7 = 0;
    sub_77E08(ptr);
  }
  sub_749E8(v2);
  return v3;
}
// CFE60: using guessed type _UNKNOWN *off_CFE60;
