/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qctime
// Address: 0x00000000000BEF6C

//----- (00000000000BEF6C) ----------------------------------------------------
__int64 __fastcall qctime(pthread_mutex_t *a1, unsigned __int64 a2, int a3)
{
  time_t v6; // [xsp+0h] [xbp-50h] BYREF
  char buf[32]; // [xsp+8h] [xbp-48h] BYREF
  __int64 v8; // [xsp+28h] [xbp-28h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a3;
  if ( a3 < 0 || !ctime_r(&v6, buf) )
  {
    qstrncpy(a1, "[wrong timestamp]\n", a2);
    return 0;
  }
  else
  {
    qstrncpy(a1, buf, a2);
    if ( a2 >= 9 && a1->__size[8] == 32 )
      a1->__size[8] = 48;
    return 1;
  }
}
