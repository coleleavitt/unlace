/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D710
// Address: 0x0007D710

//----- (0007D710) --------------------------------------------------------
unsigned int __cdecl sub_7D710(unsigned int *a1, unsigned int a2)
{
  int v3; // [esp+10h] [ebp-38h] BYREF
  void *v4; // [esp+14h] [ebp-34h]
  __int128 v5; // [esp+18h] [ebp-30h]
  unsigned __int64 v6; // [esp+28h] [ebp-20h]
  int v7; // [esp+30h] [ebp-18h]
  unsigned int v8; // [esp+3Ch] [ebp-Ch]

  v8 = __readgsdword(0x14u);
  if ( a1[1] != a2 )
  {
    v6 = 0xFFFFFFFF00000000LL;
    v3 = -1;
    v4 = nullptr;
    v5 = xmmword_EFCC0;
    v7 = 0;
    sub_87D60(a1, a2, (unsigned int)&v3);
    if ( v4 )
    {
      LODWORD(v5) = 0;
      qfree(v4);
      v4 = nullptr;
      DWORD1(v5) = 0;
    }
  }
  return __readgsdword(0x14u);
}
// EFCC0: using guessed type __int128 xmmword_EFCC0;
