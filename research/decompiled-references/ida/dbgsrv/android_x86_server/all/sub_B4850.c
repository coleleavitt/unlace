/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4850
// Address: 0x000B4850

//----- (000B4850) --------------------------------------------------------
int __cdecl sub_B4850(int a1)
{
  unsigned int i; // eax
  int v2; // ecx
  __pid_t v3; // esi
  int v4; // ecx
  pthread_mutex_t *v5; // edi
  int v6; // edi
  _DWORD *v7; // eax
  int *v8; // eax
  int v9; // edx
  int v10; // ecx
  pthread_mutex_t *v11; // edi
  int *v12; // eax
  int v13; // esi
  pthread_mutex_t *v14; // esi
  unsigned int v16; // [esp+14h] [ebp-28h]
  int *v17; // [esp+18h] [ebp-24h]
  pthread_mutex_t *j; // [esp+1Ch] [ebp-20h]
  int v19; // [esp+20h] [ebp-1Ch]
  int stat_loc[6]; // [esp+24h] [ebp-18h] BYREF

  stat_loc[1] = __readgsdword(0x14u);
  for ( i = 1073741832; ; i = v16 )
  {
    while ( 1 )
    {
      stat_loc[0] = 0;
      v16 = i;
      v3 = waitpid(-1, stat_loc, i);
      if ( v3 != -1 )
        goto LABEL_4;
      v8 = (int *)__errno(v2);
      v9 = *v8;
      v10 = a1;
      if ( *v8 == 10 )
        break;
LABEL_23:
      if ( v9 == 4 )
      {
        v3 = -1;
        goto LABEL_4;
      }
      if ( v9 == 22 )
      {
        if ( (v16 & 8) != 0 )
        {
          i = v16 & 0xFFFFFFF7;
        }
        else
        {
          if ( (v16 & 0x40000000) == 0 )
          {
            if ( !(_BYTE)under_debugger )
              interr(1160);
            BUG();
          }
          i = v16 & 0xBFFFFFF7 | 8;
        }
      }
      else
      {
        i = v16;
      }
    }
    v17 = v8;
    v11 = *(pthread_mutex_t **)(a1 + 24);
    if ( v11 )
    {
      pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 24));
      v10 = a1;
    }
    sub_B4B00(v10);
    v3 = waitpid(-1, stat_loc, v16 | 1);
    if ( v3 == -1 )
      break;
    if ( v11 )
      pthread_mutex_unlock(v11);
LABEL_4:
    v4 = a1;
    v5 = *(pthread_mutex_t **)(a1 + 24);
    if ( v5 )
    {
      pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 24));
      v4 = a1;
    }
    for ( j = v5; v3 > 0; v4 = v6 )
    {
      v6 = v4;
      if ( !sub_B4BE0(v4, v3, stat_loc[0]) )
      {
        v19 = stat_loc[0];
        v7 = qalloc_or_throw(20);
        v7[2] = 0;
        v7[3] = 0;
        *((_BYTE *)v7 + 16) = 0;
        *v7 = v6;
        v7[1] = *(_DWORD *)(v6 + 4);
        **(_DWORD **)(v6 + 4) = v7;
        *(_DWORD *)(v6 + 4) = v7;
        ++*(_DWORD *)(v6 + 8);
        v7[2] = v3;
        v7[3] = v19;
      }
      v3 = waitpid(-1, stat_loc, v16 | 1);
    }
    sub_B4B00(v4);
    if ( j )
      pthread_mutex_unlock(j);
  }
  v12 = v17;
  v13 = *v17;
  if ( v11 )
  {
    pthread_mutex_unlock(v11);
    v12 = v17;
  }
  if ( v13 != 10 )
  {
    v9 = *v12;
    goto LABEL_23;
  }
  v14 = *(pthread_mutex_t **)(a1 + 28);
  if ( v14 )
  {
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 28));
    *(_BYTE *)(a1 + 40) = 0;
    pthread_mutex_unlock(v14);
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 0;
  }
  return 0;
}
// B4990: variable 'v2' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
