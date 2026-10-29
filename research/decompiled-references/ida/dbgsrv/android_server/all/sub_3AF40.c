/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AF40
// Address: 0x000000000003AF40

//----- (000000000003AF40) ----------------------------------------------------
bool sub_3AF40()
{
  int v0; // w19
  const char *v1; // x20

  v0 = sub_37E68();
  if ( v0 )
  {
    if ( (unsigned int)(v0 - 1) >= 0x14 )
    {
      v1 = (const char *)qword_1669F8;
      qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v0);
    }
    else
    {
      v1 = off_156800[v0 - 1];
    }
    sub_39FA0((__int64)"%s: %s\n", "td_thr_event_enable", v1);
  }
  return v0 == 0;
}
// 156800: using guessed type char *off_156800[24];
// 1669F8: using guessed type __int64 qword_1669F8[8];
