/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453CB0
// Address: 0x0000000000453CB0

//----- (0000000000453CB0) ----------------------------------------------------
bool __fastcall sub_453CB0(__int64 a1, int a2)
{
  bool result; // al
  const char *v3; // rax
  void *v4; // rbp
  int v5; // r12d

  result = 1;
  if ( a2 )
  {
    v3 = s1;
    if ( *(_QWORD *)(a1 + 592) )
      v3 = *(const char **)(a1 + 584);
    v4 = (void *)sub_47F560(v3, 0);
    result = 0;
    if ( v4 )
    {
      v5 = sub_476CD0((__int64)v4);
      sub_47F680(v4);
      return a2 == v5;
    }
  }
  return result;
}
