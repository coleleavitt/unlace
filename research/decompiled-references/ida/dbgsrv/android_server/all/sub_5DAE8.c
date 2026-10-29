/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DAE8
// Address: 0x000000000005DAE8

//----- (000000000005DAE8) ----------------------------------------------------
__int64 __fastcall sub_5DAE8(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  unsigned __int64 v3; // x21
  __int64 v4; // x9

  v2 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( v3 < qword_166A50 )
    {
      qfclose(*(FILE **)(qword_166A48 + 8 * v3));
      *(_QWORD *)(qword_166A48 + 8 * v3) = 0;
      if ( qword_166A50 )
      {
        v4 = qword_166A50 - 1;
        do
        {
          if ( *(_QWORD *)(qword_166A48 + 8 * v4) )
            break;
          qword_166A50 = v4--;
        }
        while ( v4 != -1 );
      }
    }
  }
  qmutex_unlock(v2);
  return 0;
}
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
// 166AA8: using guessed type __int64 qword_166AA8;
