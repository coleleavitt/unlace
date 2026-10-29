/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FFF0
// Address: 0x0005FFF0

//----- (0005FFF0) --------------------------------------------------------
char __cdecl sub_5FFF0(void **a1)
{
  pthread_mutex_t *v1; // edi
  _DWORD *v2; // eax
  int v3; // ecx
  void *v4; // eax
  char *v5; // eax
  void *v6; // ecx
  _DWORD *v7; // edx
  char *v8; // eax
  char *v9; // ecx
  char *v10; // edx
  int v11; // edi
  char *v12; // ecx
  void *v13; // eax
  void **v15; // edi
  unsigned int v16; // ecx
  void *v17; // eax
  int v18; // ecx
  int v19; // [esp+18h] [ebp-44h] BYREF
  void *v20; // [esp+1Ch] [ebp-40h]
  int v21; // [esp+20h] [ebp-3Ch]
  int v22; // [esp+24h] [ebp-38h]
  int v23; // [esp+28h] [ebp-34h]
  int v24; // [esp+30h] [ebp-2Ch] BYREF
  void *v25; // [esp+34h] [ebp-28h]
  int v26; // [esp+38h] [ebp-24h]
  int v27; // [esp+3Ch] [ebp-20h]
  int v28; // [esp+40h] [ebp-1Ch]
  unsigned int v29; // [esp+48h] [ebp-14h]

  v29 = __readgsdword(0x14u);
  v1 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v2 = a1[14];
  if ( !v2 || (v3 = v2[17], v3 <= 0) )
  {
    if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
      interr(487);
    BUG();
  }
  v2[17] = v3 - 1;
  qmutex_unlock(v1);
  v4 = a1[4];
  if ( (char *)a1[12] + 1 == v4 )
    goto LABEL_4;
  LOBYTE(v19) = 2;
  v21 = 0;
  v20 = nullptr;
  v23 = 0;
  v22 = 0;
  if ( move_idcv((char *)&v19, (char *)a1[3] + 20 * (_DWORD)v4 - 20) )
  {
    if ( (char)v19 != 5 )
    {
      if ( (char)v19 != 7 || !v20 )
        return 0;
      goto LABEL_17;
    }
    goto LABEL_26;
  }
  if ( (_BYTE)v19 == 10 && v21 >= (int)a1[12] && !deref_idcv((char *)&v19, 2) )
  {
    if ( (char)v19 != 5 )
    {
      if ( (char)v19 != 7 || !v20 )
        return 0;
LABEL_17:
      v21 = 0;
      qfree(v20);
      v20 = nullptr;
      v22 = 0;
      return 0;
    }
LABEL_26:
    sub_59680(v20, (char *)&v19);
    return 0;
  }
  v15 = a1 + 3;
  v16 = (unsigned int)a1[12];
  if ( a1[4] != (void *)v16 )
  {
    LOBYTE(v24) = 2;
    v26 = 0;
    v25 = nullptr;
    v28 = 0;
    v27 = 0;
    sub_4EB10(a1 + 3, v16, (char *)&v24);
    if ( (char)v24 == 5 )
    {
      sub_59680(v25, (char *)&v24);
    }
    else if ( (char)v24 == 7 && v25 )
    {
      v26 = 0;
      qfree(v25);
      v25 = nullptr;
      v27 = 0;
    }
    v16 = (unsigned int)a1[4];
  }
  if ( (unsigned int)a1[5] >= v16 + 1 )
  {
    v17 = *v15;
  }
  else
  {
    v17 = qvector_reserve((int)(a1 + 3), *v15, v16 + 1, 0x14u);
    a1[3] = v17;
    v16 = (unsigned int)a1[4];
  }
  v18 = 5 * v16;
  *((_BYTE *)v17 + 4 * v18) = 2;
  *((_DWORD *)v17 + v18 + 4) = 0;
  *((_DWORD *)v17 + v18 + 3) = 0;
  *((_DWORD *)v17 + v18 + 2) = 0;
  *((_DWORD *)v17 + v18 + 1) = 0;
  a1[4] = (char *)a1[4] + 1;
  move_idcv((char *)v17 + 4 * v18, (char *)&v19);
  if ( (char)v19 == 5 )
  {
    sub_59680(v20, (char *)&v19);
  }
  else if ( (char)v19 == 7 && v20 )
  {
    v21 = 0;
    qfree(v20);
    v20 = nullptr;
    v22 = 0;
  }
LABEL_4:
  v5 = (char *)a1[10];
  if ( v5 )
  {
    v6 = a1[4];
    v7 = a1[9];
    v8 = v5 - 1;
    do
    {
      if ( v7[(_DWORD)v8] < (unsigned int)v6 )
        break;
      a1[10] = v8--;
    }
    while ( v8 != (char *)-1 );
  }
  v9 = (char *)a1[6];
  v10 = (char *)a1[7];
  v11 = 16 * (_DWORD)(v10 - 1);
  a1[13] = *(void **)&v9[v11 + 12];
  a1[12] = *(void **)&v9[v11 + 8];
  a1[15] = *(void **)&v9[v11 + 4];
  v12 = *(char **)&v9[v11];
  a1[14] = v12;
  if ( v10 )
    a1[7] = v10 - 1;
  v13 = v12 + 16;
  if ( !v12 )
    v13 = nullptr;
  a1[17] = v13;
  return 1;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BD5C: using guessed type int dword_13BD5C;
