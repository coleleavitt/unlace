/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D850
// Address: 0x000000000040D850

//----- (000000000040D850) ----------------------------------------------------
_BOOL8 __fastcall sub_40D850(__int64 a1, int a2)
{
  bool v2; // dl
  _BOOL8 result; // rax
  void *v4; // rbp
  int v5; // r12d

  v2 = sub_480B00((char *)(a1 + 8));
  result = 0;
  if ( v2 )
  {
    result = 1;
    if ( a2 == 1 )
    {
      v4 = (void *)sub_47F560((const char *)(a1 + 8), 0);
      v5 = sub_476CD0((__int64)v4);
      sub_47F680(v4);
      return *(_DWORD *)(a1 + 1128) == v5;
    }
  }
  return result;
}
