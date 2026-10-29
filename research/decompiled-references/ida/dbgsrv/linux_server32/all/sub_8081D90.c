/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8081D90
// Address: 0x08081D90

//----- (08081D90) --------------------------------------------------------
int __cdecl sub_8081D90(int a1, int a2, const char *a3, void **a4)
{
  int result; // eax
  _DWORD v5[2]; // [esp+0h] [ebp-18h] BYREF
  unsigned int v6; // [esp+8h] [ebp-10h]

  v6 = __readgsdword(0x14u);
  result = 0;
  if ( a3 )
  {
    v5[0] = &off_811BD60;
    v5[1] = a2;
    result = sub_80816C0(a1, a3, a4, (int)v5, 0);
  }
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811BD60: using guessed type int (__cdecl *off_811BD60)(int, int);
