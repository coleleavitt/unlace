/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E040
// Address: 0x0002E040

//----- (0002E040) --------------------------------------------------------
void __cdecl sub_2E040(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  void *v3; // eax
  void *v4; // eax

  *a1 = &off_1346D4;
  v1 = (_DWORD *)a1[7];
  if ( v1 )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      operator delete(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  v3 = (void *)a1[5];
  a1[5] = 0;
  if ( v3 )
    operator delete(v3);
  v4 = (void *)a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 1346D4: using guessed type int (__cdecl *off_1346D4)(int);
