/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4274C0
// Address: 0x004274C0

//----- (004274C0) --------------------------------------------------------
int __thiscall sub_4274C0(_DWORD *this, const char *a2)
{
  int result; // eax
  const char **v3; // eax

  result = sub_427E40(this, a2);
  if ( result == -1 )
  {
    v3 = sub_4279E0(a2);
    if ( v3 && v3[1] )
      return ((char *)v3 - (char *)off_4B4064) / -24;
    else
      return 0x7FFFFFFF;
  }
  return result;
}
// 4B4064: using guessed type int (**off_4B4064)[49];
