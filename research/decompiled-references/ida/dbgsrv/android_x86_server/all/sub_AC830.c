/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC830
// Address: 0x000AC830

//----- (000AC830) --------------------------------------------------------
void __cdecl sub_AC830(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_139338;
  v1 = (void *)a1[4];
  if ( v1 )
  {
    a1[5] = 0;
    qfree(v1);
    a1[4] = 0;
    a1[6] = 0;
  }
}
// 139338: using guessed type int (__cdecl *off_139338)(int, int, int, void *dest, int);
