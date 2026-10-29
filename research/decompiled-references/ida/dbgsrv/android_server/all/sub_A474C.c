/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A474C
// Address: 0x00000000000A474C

//----- (00000000000A474C) ----------------------------------------------------
void __fastcall sub_A474C(__int64 a1)
{
  pthread_mutex_t *v2; // x0

  v2 = *(pthread_mutex_t **)(a1 + 32);
  *(_QWORD *)a1 = off_15F1F8;
  qmutex_free(v2);
  *(_QWORD *)a1 = off_15F230;
  sub_A4868(a1 + 8, *(_QWORD **)(a1 + 16));
}
// 15F1F8: using guessed type __int64 (__fastcall *off_15F1F8[5])();
// 15F230: using guessed type __int64 (__fastcall *off_15F230[5])();
