/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D000
// Address: 0x000000000043D000

//----- (000000000043D000) ----------------------------------------------------
__int64 __fastcall sub_43D000(__int64 a1)
{
  pthread_mutex_t *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x0
  unsigned int v5; // w19

  v2 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v3 = *(_QWORD *)(a1 + 56);
  if ( (v3 & 1) != 0 )
  {
    v4 = 2;
    v5 = 1;
    while ( (v3 & v4) != 0 )
    {
      ++v5;
      v4 *= 2;
      if ( v5 == 64 )
      {
        if ( !under_debugger )
          sub_492270(1443);
        __break(0x3E8u);
        goto LABEL_8;
      }
    }
  }
  else
  {
LABEL_8:
    v5 = 0;
    v4 = 1;
  }
  *(_QWORD *)(a1 + 56) = v3 | v4;
  sub_494760(v2);
  return v5;
}
// 522288: using guessed type __int64 qword_522288;
// 52451C: using guessed type char under_debugger;
