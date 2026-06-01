/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BC00
// Address: 0x000000000043BC00

//----- (000000000043BC00) ----------------------------------------------------
__int64 __fastcall sub_43BC00(__int64 a1)
{
  pthread_mutex_t *v2; // x22
  __int64 v3; // x19

  v2 = (pthread_mutex_t *)qword_522180;
  sub_494720((pthread_mutex_t *)qword_522180);
  if ( !qword_522170 )
  {
LABEL_6:
    sub_494760(v2);
    return 0;
  }
  v3 = 0;
  if ( a1 != *(_QWORD *)qword_522168 )
  {
    while ( ++v3 != qword_522170 )
    {
      if ( *(_QWORD *)(qword_522168 + 8 * v3) == a1 )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( qword_522160 == v3 )
    sub_43BA08(nullptr);
  if ( *(_DWORD *)(a1 + 12) && !byte_524511 )
  {
    if ( !under_debugger )
      sub_492270(1442);
    __break(0x3E8u);
  }
  *(_QWORD *)(qword_522168 + 8 * v3) = 0;
  nullsub_5(1, a1, (unsigned int)v3);
  sub_494760(v2);
  return 1;
}
// 47DB68: using guessed type __int64 __fastcall nullsub_5(_QWORD, _QWORD, _QWORD);
// 522160: using guessed type __int64 qword_522160;
// 522168: using guessed type __int64 qword_522168;
// 522170: using guessed type __int64 qword_522170;
// 522180: using guessed type __int64 qword_522180;
// 524511: using guessed type char byte_524511;
// 52451C: using guessed type char under_debugger;
