/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408928
// Address: 0x0000000000408928

//----- (0000000000408928) ----------------------------------------------------
bool __fastcall sub_408928(__int64 a1, int a2)
{
  const char *v2; // x20
  _BOOL8 result; // x0
  void **v6; // x21
  int v7; // w20

  v2 = (const char *)(a1 + 8);
  if ( !(unsigned __int8)sub_490268((const char *)(a1 + 8)) )
    return 0;
  result = 1;
  if ( a2 == 1 )
  {
    v6 = (void **)sub_48BF60(v2, 0);
    v7 = sub_47FF28((__int64)v6);
    sub_48C0F8(v6);
    return *(_DWORD *)(a1 + 1128) == v7;
  }
  return result;
}
