/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BAB80
// Address: 0x00000000000BAB80

//----- (00000000000BAB80) ----------------------------------------------------
size_t __fastcall sub_BAB80(__int64 a1, void *dest, size_t a3)
{
  __int64 v3; // x8
  size_t v6; // x8
  __int64 v7; // x0
  signed __int64 v8; // x0
  size_t v9; // x21
  FILE *v10; // x0

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    v6 = v3 - *(_QWORD *)(a1 + 40);
    if ( v6 <= a3 )
      a3 = v6;
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return -1;
  if ( *(int *)v7 < 2 )
    v8 = qfread(*(FILE **)(v7 + 8), dest, a3);
  else
    v8 = sub_B9818((pthread_mutex_t *)v7, dest, a3);
  v9 = v8;
  if ( v8 >= 1 )
  {
    v10 = *(FILE **)(a1 + 32);
    if ( !v10 || !(unsigned int)qfseek(v10, *(_QWORD *)(a1 + 40), 0) && qfwrite(*(FILE **)(a1 + 32), dest, v9) == v9 )
    {
      *(_QWORD *)(a1 + 40) += v9;
      return v9;
    }
    return -1;
  }
  return v9;
}
