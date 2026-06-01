/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007D800
// Address: 0x000000010007D800

//----- (000000010007D800) ----------------------------------------------------
__int64 __fastcall sub_10007D800(__int64 a1)
{
  _QWORD *v2; // r14
  void *v3; // rdi
  __int64 v4; // rax
  void (*v5)(void); // r15
  pthread_mutex_t *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdx
  void (**v10)(void); // rdi
  __int64 v11; // rdx

  while ( 1 )
  {
    v2 = (_QWORD *)qword_1000AECF0;
    if ( !qword_1000AECF0 )
      break;
    v3 = *(void **)qword_1000AECF0;
    v4 = *(_QWORD *)(qword_1000AECF0 + 8);
    if ( !v4 )
    {
      if ( v3 )
      {
        *(_QWORD *)(qword_1000AECF0 + 8) = 0;
        qfree(v3);
        *v2 = 0;
        v2[2] = 0;
      }
      qfree(v2);
      break;
    }
    v5 = *((void (**)(void))v3 + v4 - 1);
    v6 = (pthread_mutex_t *)qword_1000AECE8;
    qmutex_lock((pthread_mutex_t *)qword_1000AECE8);
    v7 = qword_1000AECF0;
    if ( qword_1000AECF0 )
    {
      v8 = *(_QWORD *)(qword_1000AECF0 + 8);
      v9 = 8 * v8;
      v10 = *(void (***)(void))qword_1000AECF0;
      if ( 8 * v8 )
      {
        v10 = *(void (***)(void))qword_1000AECF0;
        while ( *v10 != v5 )
        {
          ++v10;
          v9 -= 8;
          if ( !v9 )
            goto LABEL_11;
        }
      }
      v11 = *(_QWORD *)qword_1000AECF0 + 8 * v8;
      if ( v10 != (void (**)(void))v11 )
      {
        memmove(v10, v10 + 1, v11 - (_QWORD)v10 - 8);
        --*(_QWORD *)(v7 + 8);
      }
    }
LABEL_11:
    qmutex_unlock(v6);
    v5();
  }
  qword_1000AECF0 = 0;
  if ( *(_BYTE *)(a1 + 28) == 1 )
    exit(*(_DWORD *)(a1 + 24));
  return 0;
}
// 1000AECE8: using guessed type __int64 qword_1000AECE8;
// 1000AECF0: using guessed type __int64 qword_1000AECF0;
