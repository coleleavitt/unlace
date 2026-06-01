/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Find_FDE
// Address: 0x000DC0F2

//----- (000DC0F2) --------------------------------------------------------
int __cdecl Unwind_Find_FDE(unsigned int a1, _DWORD *a2)
{
  unsigned int *i; // esi
  int v3; // edi
  int *v4; // edx
  unsigned int *j; // eax
  char v6; // al
  _BYTE *v7; // eax
  char v9; // [esp+0h] [ebp-3Ch]
  unsigned int v10; // [esp+Ch] [ebp-30h] BYREF
  int v11; // [esp+10h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-28h]
  int v13; // [esp+18h] [ebp-24h]
  int v14; // [esp+1Ch] [ebp-20h]
  int v15; // [esp+20h] [ebp-1Ch]

  if ( &pthread_create )
    pthread_mutex_lock((pthread_mutex_t *)&dword_13E700);
  for ( i = (unsigned int *)dword_13E704; ; i = (unsigned int *)i[5] )
  {
    if ( !i )
      goto LABEL_8;
    if ( a1 >= *i )
      break;
  }
  v3 = sub_DB8BB((int)i, a1);
  while ( 1 )
  {
    if ( v3 )
    {
      if ( &pthread_create )
      {
LABEL_17:
        pthread_mutex_unlock((pthread_mutex_t *)&dword_13E700);
        if ( !v3 )
          goto LABEL_21;
      }
      *a2 = i[1];
      a2[1] = i[2];
      v6 = (unsigned __int16)i[4] >> 3;
      if ( (i[4] & 4) != 0 )
        v6 = sub_DB198(v3);
      v9 = v6;
      v7 = (_BYTE *)sub_DAE47(v6, (int)i);
      sub_DAECB(v9, v7, (_BYTE *)(v3 + 8), &v10);
      a2[2] = v10;
      return v3;
    }
LABEL_8:
    i = (unsigned int *)dword_13E708;
    if ( !dword_13E708 )
      break;
    dword_13E708 = *(_DWORD *)(dword_13E708 + 20);
    v3 = sub_DB8BB((int)i, a1);
    v4 = &dword_13E704;
    for ( j = (unsigned int *)dword_13E704; j && *j >= *i; j = (unsigned int *)j[5] )
      v4 = (int *)(j + 5);
    i[5] = (unsigned int)j;
    *v4 = (int)i;
  }
  v3 = 0;
  if ( &pthread_create )
    goto LABEL_17;
LABEL_21:
  v3 = 0;
  v11 = 0;
  v12 = 0;
  v10 = a1;
  v13 = 0;
  v14 = 0;
  v15 = 1;
  if ( dl_iterate_phdr(sub_DB1A9, &v10, a1, a1) >= 0 )
  {
    v3 = v14;
    if ( v14 )
    {
      *a2 = v11;
      a2[1] = v12;
      a2[2] = v13;
    }
  }
  return v3;
}
// 18640: using guessed type int __cdecl dl_iterate_phdr(_DWORD, _DWORD, _DWORD, _DWORD);
// 13E700: using guessed type int dword_13E700;
// 13E704: using guessed type int dword_13E704;
// 13E708: using guessed type int dword_13E708;
