/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_952C4
// Address: 0x00000000000952C4

//----- (00000000000952C4) ----------------------------------------------------
__int64 __fastcall sub_952C4(__int64 a1, __int16 a2)
{
  __int16 v2; // w20
  __int64 v4; // x0
  char *v5; // x1
  char *v6; // t1
  __int64 v7; // x8
  unsigned __int64 v8; // x9
  unsigned __int64 v9; // x2
  char *v10; // x0
  char *v11; // x0
  char v13[4]; // [xsp+Ch] [xbp-24h] BYREF

  v2 = a2;
  *(_WORD *)v13 = a2;
  v6 = *(char **)(a1 + 128);
  v4 = a1 + 128;
  v5 = v6;
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v4 + 16);
  v9 = v7 + 1;
  if ( v6 > v13 || &v5[2 * v8] <= v13 )
  {
    if ( v8 < v9 )
    {
      v11 = (char *)qvector_reserve((pthread_mutex_t *)v4, v5, v9, 2u);
      *(_QWORD *)(a1 + 128) = v11;
      v7 = *(_QWORD *)(a1 + 136);
      v2 = *(_WORD *)v13;
      v5 = v11;
    }
  }
  else if ( v8 < v9 )
  {
    v10 = (char *)qvector_reserve((pthread_mutex_t *)v4, v5, v9, 2u);
    v7 = *(_QWORD *)(a1 + 136);
    v5 = v10;
    *(_QWORD *)(a1 + 128) = v10;
  }
  *(_WORD *)&v5[2 * v7] = v2;
  ++*(_QWORD *)(a1 + 136);
  return 0;
}
