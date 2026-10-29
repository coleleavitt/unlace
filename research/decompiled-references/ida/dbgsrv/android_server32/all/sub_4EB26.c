/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4EB26
// Address: 0x0004EB26

//----- (0004EB26) --------------------------------------------------------
int __fastcall sub_4EB26(int a1)
{
  void **v2; // r5
  void **v3; // r6
  void *v4; // r0

  v2 = *(void ***)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = (void **)*v2;
      if ( *((unsigned __int8 *)v2 + 8) << 31 )
        operator delete(v2[4]);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
  return a1;
}
