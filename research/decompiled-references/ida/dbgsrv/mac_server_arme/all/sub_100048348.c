/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100048348
// Address: 0x0000000100048348

//----- (0000000100048348) ----------------------------------------------------
__int64 *__fastcall sub_100048348(__int64 *a1)
{
  __int64 v2; // x20
  void *v3; // x0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 16) == 1 )
    {
      v3 = *(void **)(v2 + 40);
      if ( v3 )
      {
        *(_QWORD *)(v2 + 48) = 0;
        qfree(v3);
        *(_QWORD *)(v2 + 40) = 0;
        *(_QWORD *)(v2 + 56) = 0;
      }
      if ( *(char *)(v2 + 39) < 0 )
        operator delete(*(void **)(v2 + 16));
    }
    operator delete((void *)v2);
  }
  return a1;
}
