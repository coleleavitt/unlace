/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_extlang
// Address: 0x00000000000674C4

//----- (00000000000674C4) ----------------------------------------------------
__int64 __fastcall find_extlang(const char *a1, int a2)
{
  pthread_mutex_t *v2; // x19
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 *v7; // x24
  __int64 v8; // x8
  const char *v9; // x1

  if ( a1 )
  {
    v2 = (pthread_mutex_t *)qword_166A80;
    qmutex_lock((pthread_mutex_t *)qword_166A80);
    if ( a2 == 2 )
    {
      if ( *(_QWORD *)a1 < (unsigned __int64)qword_166A90 )
      {
        v5 = *(_QWORD *)(qword_166A88 + 8LL * *(_QWORD *)a1);
        if ( !v5 )
          goto LABEL_18;
        goto LABEL_17;
      }
    }
    else
    {
      v6 = 8 * qword_166A90;
      if ( 8 * qword_166A90 )
      {
        v7 = (__int64 *)qword_166A88;
        while ( 1 )
        {
          v5 = *v7;
          if ( *v7 )
          {
            v8 = a2 ? 16LL : 24LL;
            v9 = *(const char **)(v5 + v8);
            if ( v9 )
            {
              if ( !strcasecmp(a1, v9) )
                break;
            }
          }
          v6 -= 8;
          ++v7;
          if ( !v6 )
            goto LABEL_16;
        }
LABEL_17:
        ++*(_DWORD *)(v5 + 12);
        goto LABEL_18;
      }
    }
LABEL_16:
    v5 = 0;
LABEL_18:
    qmutex_unlock(v2);
    return v5;
  }
  return 0;
}
// 166A80: using guessed type __int64 qword_166A80;
// 166A88: using guessed type __int64 qword_166A88;
// 166A90: using guessed type __int64 qword_166A90;
