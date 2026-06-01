/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A1A0
// Address: 0x0006A1A0

//----- (0006A1A0) --------------------------------------------------------
void __cdecl sub_6A1A0(int a1)
{
  void **v1; // edi
  void **v2; // esi
  void *v3; // eax

  v1 = *(void ***)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (void **)*v1;
      if ( ((_BYTE)v1[2] & 1) != 0 )
        operator delete(v1[4]);
      operator delete(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  v3 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v3 )
    operator delete(v3);
}
