/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: remove_extlang
// Address: 0x000000010002BAD4

//----- (000000010002BAD4) ----------------------------------------------------
bool __fastcall remove_extlang(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  unsigned __int64 v3; // x21
  __int64 v4; // x11
  _BOOL8 v5; // x22

  v2 = (pthread_mutex_t *)qword_10009D7B8;
  qmutex_lock((pthread_mutex_t *)qword_10009D7B8);
  if ( !qword_10009D960 )
  {
LABEL_7:
    v5 = 0;
    goto LABEL_14;
  }
  if ( *(_QWORD *)qword_10009D958 != a1 )
  {
    v3 = 0;
    while ( qword_10009D960 - 1 != v3 )
    {
      v4 = *(_QWORD *)(qword_10009D958 + 8 + 8 * v3++);
      if ( v4 == a1 )
      {
        v5 = v3 < qword_10009D960;
        goto LABEL_9;
      }
    }
    goto LABEL_7;
  }
  v3 = 0;
  v5 = 1;
LABEL_9:
  if ( v3 == qword_10009D970 )
    select_extlang(nullptr);
  if ( *(_DWORD *)(a1 + 12) && (byte_10009D900 & 1) == 0 )
  {
    if ( under_debugger != 1 )
      goto LABEL_17;
    while ( 1 )
    {
      __break(1u);
LABEL_17:
      interr(1442);
    }
  }
  *(_QWORD *)(qword_10009D958 + 8 * v3) = 0;
  nullsub_29(1, a1, v3);
LABEL_14:
  qmutex_unlock(v2);
  return v5;
}
// 100063E9C: using guessed type __int64 __fastcall nullsub_29(_QWORD, _QWORD, _QWORD);
// 10009D7B8: using guessed type __int64 qword_10009D7B8;
// 10009D900: using guessed type char byte_10009D900;
// 10009D90D: using guessed type char under_debugger;
// 10009D958: using guessed type __int64 qword_10009D958;
// 10009D960: using guessed type __int64 qword_10009D960;
// 10009D970: using guessed type __int64 qword_10009D970;
