/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A7D8
// Address: 0x000000000043A7D8

//----- (000000000043A7D8) ----------------------------------------------------
__int64 __fastcall sub_43A7D8(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  pthread_mutex_t *v8; // x20
  __int64 v9; // x19

  v8 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v9 = sub_43CF60();
  sub_454EE8(*(_QWORD *)(v9 + 32), a1, *(_QWORD *)(v9 + 24));
  LODWORD(v9) = sub_43A350(v9, a3, a2, a4 ^ 1u);
  sub_494760(v8);
  return (unsigned int)v9;
}
// 454EE8: using guessed type __int64 __fastcall sub_454EE8(_QWORD, _QWORD, _QWORD);
// 522288: using guessed type __int64 qword_522288;
