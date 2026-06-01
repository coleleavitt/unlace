/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_851D0
// Address: 0x000851D0

//----- (000851D0) --------------------------------------------------------
void __cdecl sub_851D0(_DWORD *a1)
{
  void *v1; // eax

  *a1 = &off_13836C;
  v1 = (void *)a1[2];
  if ( v1 )
  {
    a1[3] = 0;
    qfree(v1);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 13836C: using guessed type int (__cdecl *off_13836C)(int);
