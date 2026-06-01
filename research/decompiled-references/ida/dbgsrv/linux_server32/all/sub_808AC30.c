/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808AC30
// Address: 0x0808AC30

//----- (0808AC30) --------------------------------------------------------
void __cdecl sub_808AC30(char **a1)
{
  void *v1; // eax
  char *v2; // ebp
  char *i; // esi
  int v4; // edx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1[1];
    if ( v2 )
    {
      for ( i = nullptr; i != v2; ++i )
      {
        v4 = 5 * (_DWORD)i;
        sub_8089430((int)v1 + 4 * v4);
        v1 = *a1;
      }
    }
    a1[1] = nullptr;
    sub_80CF780(v1);
  }
}
