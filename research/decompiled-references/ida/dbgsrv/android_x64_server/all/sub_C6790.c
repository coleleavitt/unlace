/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C6790
// Address: 0x00000000000C6790

//----- (00000000000C6790) ----------------------------------------------------
void *__fastcall sub_C6790(__int64 a1)
{
  unsigned int i; // r14d
  __pid_t v2; // ebp
  pthread_mutex_t *v3; // r15
  int v4; // r13d
  int v5; // r14d
  _BYTE *v6; // rax
  int *v7; // r15
  int v8; // eax
  pthread_mutex_t *v9; // r13
  int v10; // ebp
  pthread_mutex_t *v11; // rbp
  unsigned int v13; // [rsp+8h] [rbp-40h]
  int stat_loc; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v15; // [rsp+10h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  for ( i = 1073741832; ; i = v13 )
  {
    while ( 1 )
    {
      stat_loc = 0;
      v2 = waitpid(-1, &stat_loc, i);
      if ( v2 != -1 )
        goto LABEL_4;
      v7 = (int *)__errno(0xFFFFFFFFLL);
      v8 = *v7;
      if ( *v7 == 10 )
        break;
LABEL_24:
      if ( v8 == 4 )
      {
        v2 = -1;
        goto LABEL_4;
      }
      if ( v8 == 22 )
      {
        if ( (i & 8) != 0 )
        {
          i &= ~8u;
        }
        else
        {
          if ( (i & 0x40000000) == 0 )
          {
            if ( !(_BYTE)under_debugger )
              interr(1160);
            BUG();
          }
          i = i & 0xBFFFFFF7 | 8;
        }
      }
    }
    v9 = *(pthread_mutex_t **)(a1 + 48);
    if ( v9 )
      pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 48));
    sub_C6A10(a1);
    v2 = waitpid(-1, &stat_loc, i | 1);
    if ( v2 == -1 )
      break;
    if ( v9 )
      pthread_mutex_unlock(v9);
LABEL_4:
    v13 = i;
    v3 = *(pthread_mutex_t **)(a1 + 48);
    if ( v3 )
      pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 48));
    if ( v2 > 0 )
    {
      v4 = i | 1;
      do
      {
        if ( !(unsigned __int8)sub_C6AF0(a1, v2, stat_loc) )
        {
          v5 = stat_loc;
          v6 = qalloc_or_throw(32);
          v6[24] = 0;
          *((_QWORD *)v6 + 2) = 0;
          *(_QWORD *)v6 = a1;
          *((_QWORD *)v6 + 1) = *(_QWORD *)(a1 + 8);
          **(_QWORD **)(a1 + 8) = v6;
          *(_QWORD *)(a1 + 8) = v6;
          ++*(_QWORD *)(a1 + 16);
          *((_DWORD *)v6 + 4) = v2;
          *((_DWORD *)v6 + 5) = v5;
        }
        v2 = waitpid(-1, &stat_loc, v4);
      }
      while ( v2 > 0 );
    }
    sub_C6A10(a1);
    if ( v3 )
      pthread_mutex_unlock(v3);
  }
  v10 = *v7;
  if ( v9 )
    pthread_mutex_unlock(v9);
  if ( v10 != 10 )
  {
    v8 = *v7;
    goto LABEL_24;
  }
  v11 = *(pthread_mutex_t **)(a1 + 56);
  if ( v11 )
  {
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 56));
    *(_BYTE *)(a1 + 80) = 0;
    pthread_mutex_unlock(v11);
  }
  else
  {
    *(_BYTE *)(a1 + 80) = 0;
  }
  return nullptr;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B40: using guessed type __int64 under_debugger;
