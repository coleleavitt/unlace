/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003CA70
// Address: 0x000000010003CA70

//----- (000000010003CA70) ----------------------------------------------------
__int64 *__fastcall sub_10003CA70(__int64 *a1)
{
  __int64 v2; // x20
  int v3; // w8
  void *v4; // x0
  void *v5; // x0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 16) == 1 )
    {
      v3 = *(unsigned __int8 *)(v2 + 56);
      if ( v3 == 5 )
      {
        sub_100031978(*(_QWORD *)(v2 + 64), (unsigned __int8 *)(v2 + 56));
      }
      else if ( v3 == 7 )
      {
        v4 = *(void **)(v2 + 64);
        if ( v4 )
        {
          *(_QWORD *)(v2 + 72) = 0;
          qfree(v4);
          *(_QWORD *)(v2 + 80) = 0;
        }
      }
      *(_BYTE *)(v2 + 56) = 2;
      *(_QWORD *)(v2 + 64) = 0;
      v5 = *(void **)(v2 + 32);
      if ( v5 )
      {
        *(_QWORD *)(v2 + 40) = 0;
        qfree(v5);
      }
    }
    operator delete((void *)v2);
  }
  return a1;
}
