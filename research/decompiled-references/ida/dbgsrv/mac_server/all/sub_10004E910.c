/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004E910
// Address: 0x000000010004E910

//----- (000000010004E910) ----------------------------------------------------
void __fastcall sub_10004E910(__int64 *a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
  {
    if ( *((_BYTE *)a1 + 16) == 1 )
    {
      v2 = *(void **)(v1 + 40);
      if ( v2 )
      {
        *(_QWORD *)(v1 + 48) = 0;
        qfree(v2);
        *(_QWORD *)(v1 + 40) = 0;
        *(_QWORD *)(v1 + 56) = 0;
      }
      if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
        operator delete(*(void **)(v1 + 32));
    }
    operator delete((void *)v1);
  }
}
