/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B7A0
// Address: 0x000000000045B7A0

//----- (000000000045B7A0) ----------------------------------------------------
__int64 __fastcall sub_45B7A0(__int64 a1, int a2)
{
  const char *v2; // x0
  void **v4; // x0
  void **v5; // x20
  unsigned int v6; // w1
  int v7; // w21

  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 592) )
    v2 = *(const char **)(a1 + 584);
  else
    v2 = (const char *)&qword_4B2D48;
  v4 = (void **)sub_48BF60(v2, 0);
  v5 = v4;
  v6 = 0;
  if ( v4 )
  {
    v7 = sub_47FF28((__int64)v4);
    sub_48C0F8(v5);
    return a2 == v7;
  }
  return v6;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
