/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: remove_extlang
// Address: 0x000000010002CD6C

//----- (000000010002CD6C) ----------------------------------------------------
bool __fastcall remove_extlang(__int64 a1)
{
  pthread_mutex_t *v2; // x19
  unsigned __int64 v3; // x21
  __int64 v4; // x11
  _BOOL8 v5; // x22

  v2 = (pthread_mutex_t *)qword_1000A57B8;
  qmutex_lock((pthread_mutex_t *)qword_1000A57B8);
  if ( !qword_1000A5960 )
  {
LABEL_7:
    v5 = 0;
    goto LABEL_14;
  }
  if ( *(_QWORD *)qword_1000A5958 != a1 )
  {
    v3 = 0;
    while ( qword_1000A5960 - 1 != v3 )
    {
      v4 = *(_QWORD *)(qword_1000A5958 + 8 + 8 * v3++);
      if ( v4 == a1 )
      {
        v5 = v3 < qword_1000A5960;
        goto LABEL_9;
      }
    }
    goto LABEL_7;
  }
  v3 = 0;
  v5 = 1;
LABEL_9:
  if ( v3 == qword_1000A5970 )
    select_extlang(nullptr);
  if ( *(_DWORD *)(a1 + 12) && (byte_1000A5900 & 1) == 0 )
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
  *(_QWORD *)(qword_1000A5958 + 8 * v3) = 0;
  nullsub_29(1, a1, v3);
LABEL_14:
  qmutex_unlock(v2);
  return v5;
}
// 100068AA0: using guessed type __int64 __fastcall nullsub_29(_QWORD, _QWORD, _QWORD);
// 1000A57B8: using guessed type __int64 qword_1000A57B8;
// 1000A5900: using guessed type char byte_1000A5900;
// 1000A590D: using guessed type char under_debugger;
// 1000A5958: using guessed type __int64 qword_1000A5958;
// 1000A5960: using guessed type __int64 qword_1000A5960;
// 1000A5970: using guessed type __int64 qword_1000A5970;
