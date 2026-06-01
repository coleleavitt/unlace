/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_func
// Address: 0x000000000006E9F0

//----- (000000000006E9F0) ----------------------------------------------------
__int64 __fastcall find_idc_func(__int64 a1, const char *a2, unsigned int a3)
{
  pthread_mutex_t *v4; // rbx
  int *v5; // r14
  char **v6; // r15
  int v7; // r13d
  unsigned __int64 v8; // rax
  const char *v9; // rbx
  size_t v11; // rax
  size_t v12; // r12
  size_t v13; // r13
  char *v14; // rdi
  pthread_mutex_t *v15; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+10h] [rbp-38h]

  if ( a2 )
  {
    v4 = (pthread_mutex_t *)qword_1557E8;
    qmutex_lock((pthread_mutex_t *)qword_1557E8);
    n = strlen(a2);
    v5 = off_154A20;
    if ( off_154A20 )
    {
      v15 = v4;
      v6 = off_154A28;
      v7 = 1;
      v8 = 0;
      while ( 1 )
      {
        v9 = v6[5 * v8];
        if ( !strncmp(a2, v9, n) && (--a3 & 0x80000000) != 0 )
          break;
        v8 = v7++;
        if ( (unsigned __int64)v5 <= v8 )
        {
          a3 = 0;
          goto LABEL_8;
        }
      }
      LOBYTE(a3) = 1;
      if ( a1 )
      {
        if ( v9 && (v11 = strlen(v9)) != 0 )
        {
          v12 = v11;
          v13 = v11 + 1;
          if ( *(_QWORD *)(a1 + 16) >= v11 + 1 )
          {
            v14 = *(char **)a1;
          }
          else
          {
            v14 = (char *)qvector_reserve(a1, *(char **)a1, v11 + 1, 1u);
            *(_QWORD *)a1 = v14;
          }
          *(_QWORD *)(a1 + 8) = v13;
          memmove(v14, v9, v12);
          *(_BYTE *)(*(_QWORD *)a1 + v12) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
      }
LABEL_8:
      v4 = v15;
    }
    else
    {
      a3 = 0;
    }
    qmutex_unlock(v4);
  }
  else
  {
    return 0;
  }
  return a3;
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
