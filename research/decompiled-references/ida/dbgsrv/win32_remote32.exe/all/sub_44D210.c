/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D210
// Address: 0x0044D210

//----- (0044D210) --------------------------------------------------------
int __thiscall sub_44D210(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = sub_4627C2(8u);
  v3 = v2;
  if ( v2 )
  {
    sub_44DDF0(v2);
    *v3 = &off_48F878;
    v3[1] = this;
  }
  return sub_44E060();
}
// 48F878: using guessed type _UNKNOWN *off_48F878;
