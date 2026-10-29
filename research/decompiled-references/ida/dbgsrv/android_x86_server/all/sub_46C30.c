/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C30
// Address: 0x00046C30

//----- (00046C30) --------------------------------------------------------
unsigned int __cdecl sub_46C30(unsigned int *a1, unsigned int a2)
{
  void *v3; // [esp+10h] [ebp-18h] BYREF
  int v4; // [esp+14h] [ebp-14h]
  int v5; // [esp+18h] [ebp-10h]
  unsigned int v6; // [esp+1Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  if ( a1[1] != a2 )
  {
    v3 = nullptr;
    v4 = 0;
    v5 = 0;
    sub_4E850(a1, a2, (unsigned int)&v3);
    if ( v3 )
    {
      v4 = 0;
      qfree(v3);
      v3 = nullptr;
      v5 = 0;
    }
  }
  return __readgsdword(0x14u);
}
