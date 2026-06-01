/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: remove_extlang
// Address: 0x0000000100031C20

//----- (0000000100031C20) ----------------------------------------------------
__int64 __fastcall remove_extlang(__int64 a1)
{
  unsigned int v1; // r15d
  pthread_mutex_t *v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // r12

  v2 = (pthread_mutex_t *)qword_1000AD0E8;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0E8);
  if ( !*((_QWORD *)&xmmword_1000AE290 + 1) )
  {
LABEL_8:
    v1 = 0;
    goto LABEL_14;
  }
  if ( *(_QWORD *)xmmword_1000AE290 != a1 )
  {
    v3 = 0;
    while ( *((_QWORD *)&xmmword_1000AE290 + 1) - 1LL != v3 )
    {
      v4 = v3 + 1;
      if ( *(_QWORD *)(xmmword_1000AE290 + 8 * v3++ + 8) == a1 )
      {
        LOBYTE(v1) = v4 < *((_QWORD *)&xmmword_1000AE290 + 1);
        if ( v4 == qword_1000AE2A8 )
          goto LABEL_10;
        goto LABEL_11;
      }
    }
    goto LABEL_8;
  }
  LOBYTE(v1) = 1;
  v4 = 0;
  if ( !qword_1000AE2A8 )
LABEL_10:
    select_extlang(nullptr);
LABEL_11:
  if ( *(_DWORD *)(a1 + 12) && !byte_1000AE230 )
  {
    if ( under_debugger != 1 )
      interr(0x5A2u);
    BUG();
  }
  *(_QWORD *)(xmmword_1000AE290 + 8 * v4) = 0;
  sub_100070A90();
LABEL_14:
  qmutex_unlock(v2);
  return v1;
}
// 100031CDA: variable 'v1' is possibly undefined
// 1000AD0E8: using guessed type __int64 qword_1000AD0E8;
// 1000AE230: using guessed type char byte_1000AE230;
// 1000AE23D: using guessed type char under_debugger;
// 1000AE290: using guessed type __int128 xmmword_1000AE290;
// 1000AE2A8: using guessed type __int64 qword_1000AE2A8;
