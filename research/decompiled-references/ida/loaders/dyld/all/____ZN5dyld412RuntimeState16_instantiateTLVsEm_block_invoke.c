_QWORD *__fastcall ___ZN5dyld412RuntimeState16_instantiateTLVsEm_block_invoke(_QWORD *result)
{
  __int64 v1; // x8
  __int64 v2; // x9
  __int64 v3; // x10
  __int64 v4; // x8
  unsigned int *v5; // x9
  __int64 v6; // x12

  v1 = result[6];
  v2 = *(_QWORD *)(v1 + 544);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v1 + 536);
    v4 = 24 * v2;
    v5 = (unsigned int *)(v3 + 16);
    do
    {
      if ( *((_QWORD *)v5 - 1) == result[7] )
      {
        v6 = v5[1];
        *(_QWORD *)(*(_QWORD *)(result[4] + 8LL) + 24LL) = *((_QWORD *)v5 - 2) + *v5;
        *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 24LL) = v6;
      }
      v5 += 6;
      v4 -= 24;
    }
    while ( v4 );
  }
  return result;
}
