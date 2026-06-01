/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065794
// Address: 0x0000000100065794

//----- (0000000100065794) ----------------------------------------------------
__int64 sub_100065794()
{
  __int64 _18; // [xsp+18h] [xbp+8h]

  signal(2, (void (__cdecl *)(int))sub_100065828);
  signal(15, (void (__cdecl *)(int))sub_100065828);
  signal(11, (void (__cdecl *)(int))sub_100065828);
  signal(4, (void (__cdecl *)(int))sub_100065828);
  signal(10, (void (__cdecl *)(int))sub_100065828);
  signal(1, (void (__cdecl *)(int))sub_100065828);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return atexit(sub_10006584C);
}
// 100065818: variable '_18' is possibly undefined
