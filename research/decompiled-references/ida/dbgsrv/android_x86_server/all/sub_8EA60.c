/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EA60
// Address: 0x0008EA60

//----- (0008EA60) --------------------------------------------------------
void __cdecl sub_8EA60(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_1386D4;
  v1 = (void *)a1[15];
  if ( v1 )
  {
    a1[16] = 0;
    qfree(v1);
    a1[15] = 0;
    a1[17] = 0;
  }
  sub_936A0(a1);
}
// 1386D4: using guessed type int (__cdecl *off_1386D4)(int);
