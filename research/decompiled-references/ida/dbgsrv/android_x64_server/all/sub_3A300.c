/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A300
// Address: 0x000000000003A300

//----- (000000000003A300) ----------------------------------------------------
bool __fastcall sub_3A300(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 *v4; // r14

  v3 = sub_36790();
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) >= 0x14 )
    {
      v4 = qword_155730;
      qsnprintf((char *)qword_155730, 64, "tdb error %d", v3);
    }
    else
    {
      v4 = (__int64 *)off_146F90[v3 - 1];
    }
    sub_390A0((int)"%s: %s\n", "td_thr_event_enable", v4);
  }
  return v3 == 0;
}
// 146F90: using guessed type char *off_146F90[24];
// 155730: using guessed type __int64 qword_155730[8];
