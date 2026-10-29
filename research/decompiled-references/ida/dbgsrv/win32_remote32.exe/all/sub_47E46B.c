/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E46B
// Address: 0x0047E46B

//----- (0047E46B) --------------------------------------------------------
void __cdecl sub_47E46B(unsigned int a1, int a2)
{
  LPVOID *v2; // esi
  int v3; // edi
  int v4; // ebx

  v2 = (LPVOID *)a1;
  v3 = 0;
  v4 = a1 + 4 * a2 >= a1 ? a2 & 0x3FFFFFFF : 0;
  if ( v4 )
  {
    do
    {
      sub_479216(*v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v4 );
  }
}
