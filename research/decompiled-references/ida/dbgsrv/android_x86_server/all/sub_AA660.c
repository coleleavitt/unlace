/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA660
// Address: 0x000AA660

//----- (000AA660) --------------------------------------------------------
pthread_mutex_t *__cdecl sub_AA660(int a1)
{
  pthread_mutex_t *v1; // eax
  unsigned int v2; // esi
  const char *v3; // esi
  char *v4; // eax
  const char **v5; // edi
  int v6; // eax
  size_t v7; // esi
  int v8; // edi
  void *v9; // eax
  const void *v10; // edx
  void *v11; // eax
  pthread_mutex_t *v13; // [esp+0h] [ebp-102Ch]
  int v14; // [esp+4h] [ebp-1028h]
  pthread_mutex_t *v15[3]; // [esp+8h] [ebp-1024h] BYREF
  int *v16; // [esp+14h] [ebp-1018h] BYREF
  char src[4096]; // [esp+18h] [ebp-1014h] BYREF
  unsigned int v18; // [esp+1018h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v1 = sub_B3B30(v15);
  v2 = dword_13D31C;
  if ( (unsigned int)dword_13D31C <= 1 )
  {
    v3 = ".idapro";
    v16 = &dword_0;
    v15[2] = (pthread_mutex_t *)".idapro";
    v4 = sub_AA500();
    v1 = (pthread_mutex_t *)qstrncpy((unsigned int)src, (int)v4, 4096);
    if ( src[0] )
    {
      if ( ".idapro" )
      {
        v5 = (const char **)&v16;
        do
        {
          qmakepath(src, 4096, src, (int)v3);
          if ( !qfileexist(src) )
            qmkdir(src, 0x1FFu);
          v3 = *v5++;
        }
        while ( v3 );
      }
      v6 = __strlen_chk(src, 4096);
      v7 = v6;
      if ( !v6 )
      {
        dword_13D31C = 0;
        goto LABEL_19;
      }
      v8 = v6 + 1;
      v9 = (void *)dword_13D318;
      if ( dword_13D320 < v7 + 1 )
      {
        v9 = qvector_reserve((int)&dword_13D318, (void *)dword_13D318, v7 + 1, 1u);
        dword_13D318 = (int)v9;
      }
      dword_13D31C = v8;
      memmove(v9, src, v7);
      v1 = (pthread_mutex_t *)dword_13D318;
      *(_BYTE *)(dword_13D318 + v7) = 0;
    }
    v2 = dword_13D31C;
    if ( (unsigned int)dword_13D31C >= 2 )
      goto LABEL_13;
LABEL_19:
    v13 = nullptr;
    goto LABEL_20;
  }
LABEL_13:
  LOBYTE(v1) = 1;
  v13 = v1;
  if ( (int *)a1 != &dword_13D318 )
  {
    v10 = (const void *)dword_13D318;
    if ( *(_DWORD *)(a1 + 8) >= v2 )
    {
      v11 = *(void **)a1;
    }
    else
    {
      v14 = dword_13D318;
      v11 = qvector_reserve(a1, *(void **)a1, v2, 1u);
      *(_DWORD *)a1 = v11;
      v10 = (const void *)v14;
    }
    *(_DWORD *)(a1 + 4) = v2;
    memmove(v11, v10, v2 - 1);
    *(_BYTE *)(*(_DWORD *)a1 + v2 - 1) = 0;
  }
LABEL_20:
  qmutex_unlock(v15[0]);
  return v13;
}
// 0: using guessed type int dword_0;
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13D318: using guessed type int dword_13D318;
// 13D31C: using guessed type int dword_13D31C;
// 13D320: using guessed type int dword_13D320;
