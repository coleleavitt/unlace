/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FCE0
// Address: 0x0004FCE0

//----- (0004FCE0) --------------------------------------------------------
int __cdecl sub_4FCE0(int a1, int a2)
{
  void *v3; // [esp+10h] [ebp-18h] BYREF
  unsigned int v4; // [esp+14h] [ebp-14h]
  int v5; // [esp+18h] [ebp-10h]
  unsigned int v6; // [esp+1Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  v3 = nullptr;
  v4 = 0;
  v5 = 0;
  sub_4F1E0((int (__cdecl *)(int, int))sub_4FDE0, (int)&v3, a1, a2);
  if ( v4 >= 2 )
    sub_1C900();
  if ( v3 )
  {
    v4 = 0;
    qfree(v3);
    v3 = nullptr;
    v5 = 0;
  }
  return 0;
}
