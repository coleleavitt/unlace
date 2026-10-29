/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B974
// Address: 0x0009B974

//----- (0009B974) --------------------------------------------------------
void __fastcall sub_9B974(char *ptr)
{
  int v1; // r4
  int v3; // r7
  _DWORD *v4; // r6

  v1 = *(_DWORD *)ptr;
  if ( *(_DWORD *)ptr )
  {
    *(_DWORD *)ptr = v1 - 1;
    sub_9B96C(dword_E07CC, ptr);
  }
  else
  {
    v3 = *((_DWORD *)ptr + 1);
    v4 = ptr + 8;
    while ( v1 != v3 )
    {
      if ( *v4 )
        free(*(void **)(*v4 - 4));
      ++v1;
      ++v4;
    }
    free(ptr);
  }
}
// E07CC: using guessed type int dword_E07CC;
