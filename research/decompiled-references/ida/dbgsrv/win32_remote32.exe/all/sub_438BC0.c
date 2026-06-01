/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438BC0
// Address: 0x00438BC0

//----- (00438BC0) --------------------------------------------------------
int __cdecl sub_438BC0(unsigned __int8 *a1, int a2, unsigned int a3)
{
  unsigned int v4; // edi
  int v5; // esi

  if ( a2 <= 0 )
  {
    if ( a2 < 0 )
    {
      v4 = a3;
      if ( !a3 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1834);
      }
      v5 = -a2;
      do
      {
        sub_45A2D0(nullptr, &a1, v4);
        --v5;
      }
      while ( v5 );
    }
    return sub_45A040((int *)&a1);
  }
  else
  {
    sub_45A590(&a1, a2);
    return sub_45A040((int *)&a1);
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
