/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A870
// Address: 0x000000010006A870

//----- (000000010006A870) ----------------------------------------------------
void __fastcall sub_10006A870(pthread_mutex_t **__p)
{
  *__p = (pthread_mutex_t *)&off_1000AA620;
  qmutex_free(__p[4]);
  *__p = (pthread_mutex_t *)&off_1000AA658;
  sub_10006A970((__int64)(__p + 1), __p[2]);
  operator delete(__p);
}
// 1000AA620: using guessed type __int64 (__fastcall *off_1000AA620)();
// 1000AA658: using guessed type __int64 (__fastcall *off_1000AA658)();
