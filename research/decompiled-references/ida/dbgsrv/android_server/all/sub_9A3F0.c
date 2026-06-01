/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A3F0
// Address: 0x000000000009A3F0

//----- (000000000009A3F0) ----------------------------------------------------
__int64 __fastcall sub_9A3F0(__int64 a1)
{
  __int64 v1; // x3
  unsigned int v3; // w20
  void **v4; // x21
  __int64 v5; // x22
  void *v6; // t1
  void *v7; // x0

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
  {
    v3 = sub_93720(a1, *(__int64 **)(a1 + 72), *(char ***)(a1 + 96), v1);
    if ( *(_QWORD *)(a1 + 80) )
    {
      v4 = *(void ***)(a1 + 96);
      v5 = 8LL * *(_QWORD *)(a1 + 104);
      if ( v5 )
      {
        do
        {
          v6 = *v4++;
          qfree(v6);
          v5 -= 8;
        }
        while ( v5 );
        v4 = *(void ***)(a1 + 96);
      }
      if ( v4 )
      {
        *(_QWORD *)(a1 + 104) = 0;
        qfree(v4);
        *(_QWORD *)(a1 + 96) = 0;
        *(_QWORD *)(a1 + 112) = 0;
      }
      v7 = *(void **)(a1 + 72);
      if ( v7 )
      {
        *(_QWORD *)(a1 + 80) = 0;
        qfree(v7);
        *(_QWORD *)(a1 + 72) = 0;
        *(_QWORD *)(a1 + 88) = 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return v3;
}
