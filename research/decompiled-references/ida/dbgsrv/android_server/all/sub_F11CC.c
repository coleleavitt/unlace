/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F11CC
// Address: 0x00000000000F11CC

//----- (00000000000F11CC) ----------------------------------------------------
void __fastcall sub_F11CC(__int64 *ptr)
{
  __int64 v2; // x0
  __int64 v3; // x21
  __int64 *v4; // x19
  __int64 i; // x20
  __int64 v6; // x0

  v2 = *ptr;
  if ( v2 )
  {
    *ptr = v2 - 1;
    pthread_setspecific(dword_169580, ptr);
  }
  else
  {
    v3 = ptr[1];
    v4 = ptr;
    for ( i = 0; i != v3; ++i )
    {
      v6 = v4[i + 2];
      if ( v6 )
        free(*(void **)(v6 - 8));
    }
    free(v4);
  }
}
// 169580: using guessed type int dword_169580;
