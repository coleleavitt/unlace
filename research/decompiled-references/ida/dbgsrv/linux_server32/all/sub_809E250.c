/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809E250
// Address: 0x0809E250

//----- (0809E250) --------------------------------------------------------
void __usercall sub_809E250(int *a1@<eax>)
{
  int *v1; // esi
  int *v2; // edi
  void *v3; // eax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_809E250();
      v1 = (int *)v1[2];
      if ( v2[5] >= -1 )
      {
        v3 = (void *)v2[6];
        if ( v3 )
        {
          v2[7] = 0;
          sub_80CF780(v3);
        }
      }
      operator delete(v2, 0x24u);
    }
    while ( v1 );
  }
}
