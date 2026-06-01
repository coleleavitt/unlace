/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A0D0
// Address: 0x0006A0D0

//----- (0006A0D0) --------------------------------------------------------
void __cdecl sub_6A0D0(int a1)
{
  char *v1; // edi
  char *v2; // esi
  void *v3; // eax

  v1 = *(char **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = *(char **)v1;
      sub_757F0((char **)v1 + 5);
      if ( (v1[8] & 1) != 0 )
        operator delete(*((void **)v1 + 4));
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
