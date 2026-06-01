/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A820
// Address: 0x000000010006A820

//----- (000000010006A820) ----------------------------------------------------
void __fastcall sub_10006A820(__int64 a1)
{
  *(_QWORD *)a1 = &off_1000AA620;
  qmutex_free(*(pthread_mutex_t **)(a1 + 32));
  *(_QWORD *)a1 = &off_1000AA658;
  sub_10006A970(a1 + 8, *(_QWORD **)(a1 + 16));
}
// 1000AA620: using guessed type __int64 (__fastcall *off_1000AA620)();
// 1000AA658: using guessed type __int64 (__fastcall *off_1000AA658)();
