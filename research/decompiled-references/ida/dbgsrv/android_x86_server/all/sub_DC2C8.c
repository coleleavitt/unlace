/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DC2C8
// Address: 0x000DC2C8

//----- (000DC2C8) --------------------------------------------------------
void __cdecl sub_DC2C8(_DWORD *pointer)
{
  int v1; // edi
  int v2; // edx
  int v3; // [esp+0h] [ebp-1Ch]

  if ( *pointer )
  {
    --*pointer;
    pthread_setspecific(dword_13E718, pointer);
  }
  else
  {
    v1 = 0;
    v3 = pointer[1];
    while ( v1 != v3 )
    {
      v2 = pointer[v1 + 2];
      if ( v2 )
        free(*(void **)(v2 - 4));
      ++v1;
    }
    free(pointer);
  }
}
// 13E718: using guessed type int dword_13E718;
