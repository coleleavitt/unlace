/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A690
// Address: 0x0006A690

//----- (0006A690) --------------------------------------------------------
void __cdecl sub_6A690(int a1)
{
  char *v1; // edi
  char *v2; // esi
  int v3; // eax
  int i; // ecx

  if ( !*(_BYTE *)(a1 + 272) )
    sub_6C460(*(void ***)(a1 + 248));
  *(_DWORD *)(a1 + 248) = 0;
  *(_BYTE *)(a1 + 272) = 0;
  if ( *(_DWORD *)(a1 + 264) )
  {
    v1 = *(char **)(a1 + 260);
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
    *(_DWORD *)(a1 + 260) = 0;
    v3 = *(_DWORD *)(a1 + 256);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
        *(_DWORD *)(*(_DWORD *)(a1 + 252) + 4 * i) = 0;
    }
    *(_DWORD *)(a1 + 264) = 0;
  }
}
