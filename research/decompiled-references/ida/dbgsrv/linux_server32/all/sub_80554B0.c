/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80554B0
// Address: 0x080554B0

//----- (080554B0) --------------------------------------------------------
void __usercall sub_80554B0(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  void *v3; // eax
  void *v4; // eax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_80554B0();
      v3 = (void *)v1[10];
      v1 = (_DWORD *)v1[2];
      if ( v3 )
      {
        v2[11] = 0;
        sub_80CF780(v3);
      }
      v4 = (void *)v2[6];
      if ( v4 )
      {
        v2[7] = 0;
        sub_80CF780(v4);
      }
      operator delete(v2, 0x114u);
    }
    while ( v1 );
  }
}
