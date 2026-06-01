/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: remove_extlang
// Address: 0x000000000006A760

//----- (000000000006A760) ----------------------------------------------------
__int64 __fastcall remove_extlang(__int64 a1)
{
  unsigned int v1; // ebp
  pthread_mutex_t *v2; // r14
  __int64 v3; // rbx

  v2 = (pthread_mutex_t *)qword_1557C0;
  qmutex_lock((pthread_mutex_t *)qword_1557C0);
  if ( *((_QWORD *)&xmmword_1557C8 + 1) )
  {
    v3 = 0;
    while ( *(_QWORD *)(xmmword_1557C8 + 8 * v3) != a1 )
    {
      if ( (unsigned __int64)++v3 >= *((_QWORD *)&xmmword_1557C8 + 1) )
        goto LABEL_5;
    }
    if ( qword_1557E0 == v3 )
      select_extlang(nullptr);
    if ( *(_DWORD *)(a1 + 12) && !byte_158B24 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1442);
      BUG();
    }
    *(_QWORD *)(xmmword_1557C8 + 8 * v3) = 0;
    LOBYTE(v1) = 1;
    nullsub_21(1, a1, (unsigned int)v3);
  }
  else
  {
LABEL_5:
    v1 = 0;
  }
  qmutex_unlock(v2);
  return v1;
}
// 6A7F0: variable 'v1' is possibly undefined
// AF4A0: using guessed type __int64 __fastcall nullsub_21(_QWORD, _QWORD, _QWORD);
// 1557C0: using guessed type __int64 qword_1557C0;
// 1557C8: using guessed type __int128 xmmword_1557C8;
// 1557E0: using guessed type __int64 qword_1557E0;
// 158B24: using guessed type char byte_158B24;
// 158B40: using guessed type __int64 under_debugger;
