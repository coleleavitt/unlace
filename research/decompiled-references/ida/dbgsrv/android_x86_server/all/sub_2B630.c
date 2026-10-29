/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B630
// Address: 0x0002B630

//----- (0002B630) --------------------------------------------------------
void __cdecl sub_2B630(_DWORD *ptr)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  void *v3; // eax
  void *v4; // eax

  *ptr = &off_1346D4;
  v1 = (_DWORD *)ptr[7];
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
  v3 = (void *)ptr[5];
  ptr[5] = 0;
  if ( v3 )
    operator delete(v3);
  v4 = (void *)ptr[2];
  if ( v4 )
  {
    ptr[3] = 0;
    qfree(v4);
  }
  operator delete(ptr);
}
// 1346D4: using guessed type int (__cdecl *off_1346D4)(int);
