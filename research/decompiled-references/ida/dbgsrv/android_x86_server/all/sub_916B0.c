/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_916B0
// Address: 0x000916B0

//----- (000916B0) --------------------------------------------------------
unsigned int __cdecl sub_916B0(unsigned int *a1, unsigned int a2)
{
  __int128 v3; // [esp+10h] [ebp-28h] BYREF
  int v4; // [esp+20h] [ebp-18h]
  unsigned int v5; // [esp+2Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  if ( a1[1] != a2 )
  {
    v3 = 0;
    v4 = 0;
    sub_920E0(a1, a2, (unsigned int)&v3);
    if ( DWORD2(v3) )
    {
      HIDWORD(v3) = 0;
      qfree((void *)DWORD2(v3));
      DWORD2(v3) = 0;
      v4 = 0;
    }
  }
  return __readgsdword(0x14u);
}
