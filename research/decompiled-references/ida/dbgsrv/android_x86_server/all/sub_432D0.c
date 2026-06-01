/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432D0
// Address: 0x000432D0

//----- (000432D0) --------------------------------------------------------
void __cdecl sub_432D0(_DWORD *a1)
{
  *a1 = &off_13484C;
  if ( a1[7] )
  {
    sub_41610(a1 + 7, 0);
    qfree((void *)a1[7]);
    a1[7] = 0;
    a1[9] = 0;
  }
}
// 13484C: using guessed type int (__cdecl *off_13484C)(int);
