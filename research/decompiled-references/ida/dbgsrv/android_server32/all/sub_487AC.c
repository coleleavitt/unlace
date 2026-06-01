/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_487AC
// Address: 0x000487AC

//----- (000487AC) --------------------------------------------------------
int __fastcall sub_487AC(void **a1)
{
  pthread_mutex_t *v2; // r5
  _DWORD *v3; // r0
  int v4; // r1
  void *v5; // r1
  void **v6; // r5
  void *v7; // r0
  unsigned int v8; // r1
  char *v10; // r0
  unsigned __int8 *v11; // r5
  void *v12; // r0
  _DWORD *v13; // r1
  void *v14; // r2
  char *v15; // r1
  char *v16; // r2
  int v17; // r3
  char *v18; // r1
  void *v19; // r0
  unsigned __int8 v20[8]; // [sp+14h] [bp-34h] BYREF
  void *v21; // [sp+1Ch] [bp-2Ch]
  int v22; // [sp+20h] [bp-28h]
  int v23; // [sp+24h] [bp-24h]
  int v24; // [sp+28h] [bp-20h]
  unsigned __int8 v25[8]; // [sp+2Ch] [bp-1Ch] BYREF
  void *v26; // [sp+34h] [bp-14h]
  int v27; // [sp+38h] [bp-10h]
  int v28; // [sp+3Ch] [bp-Ch]
  int v29; // [sp+40h] [bp-8h]

  v2 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v3 = a1[14];
  if ( !v3 || (v4 = v3[17], v4 <= 0) )
  {
    if ( !under_debugger )
      interr(487);
    __debugbreak();
  }
  v3[17] = v4 - 1;
  qmutex_unlock(v2);
  v5 = a1[4];
  v6 = a1 + 3;
  if ( (char *)a1[12] + 1 != v5 )
  {
    v20[0] = 2;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = nullptr;
    if ( move_idcv(v20, (unsigned __int8 *)a1[3] + 24 * (_DWORD)v5 - 24) )
    {
      if ( v20[0] != 5 )
      {
        if ( v20[0] != 7 )
          return 0;
        v7 = v21;
        if ( !v21 )
          return 0;
        goto LABEL_8;
      }
      goto LABEL_17;
    }
    if ( v20[0] == 10 && v22 >= (int)a1[12] && !deref_idcv(v20, 2) )
    {
      if ( v20[0] != 5 )
      {
        if ( v20[0] != 7 )
          return 0;
        v7 = v21;
        if ( !v21 )
          return 0;
LABEL_8:
        v22 = 0;
        qfree(v7);
        v23 = 0;
        v21 = nullptr;
        return 0;
      }
LABEL_17:
      sub_448A0((int)v21, v20);
      return 0;
    }
    v8 = (unsigned int)a1[12];
    if ( a1[4] != (void *)v8 )
    {
      v25[0] = 2;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v26 = nullptr;
      sub_3DE8C(a1 + 3, v8, v25);
      if ( v25[0] == 5 )
      {
        sub_448A0((int)v26, v25);
      }
      else if ( v25[0] == 7 && v26 )
      {
        v27 = 0;
        qfree(v26);
        v28 = 0;
        v26 = nullptr;
      }
      v8 = (unsigned int)a1[4];
    }
    if ( (unsigned int)a1[5] >= v8 + 1 )
    {
      v10 = (char *)*v6;
    }
    else
    {
      v10 = (char *)qvector_reserve((int)(a1 + 3), *v6, v8 + 1, 0x18u);
      a1[3] = v10;
      v8 = (unsigned int)a1[4];
    }
    v10[24 * v8] = 2;
    v11 = (unsigned __int8 *)&v10[24 * v8];
    memset(v11 + 8, 0, 0x10u);
    *((_DWORD *)v11 + 2) = 0;
    a1[4] = (char *)a1[4] + 1;
    move_idcv(v11, v20);
    if ( v20[0] == 5 )
    {
      sub_448A0((int)v21, v20);
    }
    else if ( v20[0] == 7 && v21 )
    {
      v22 = 0;
      qfree(v21);
      v23 = 0;
      v21 = nullptr;
    }
  }
  v12 = a1[10];
  if ( v12 )
  {
    v13 = (char *)a1[9] + 4 * (_DWORD)v12 - 4;
    v14 = a1[4];
    do
    {
      v12 = (char *)v12 - 1;
      if ( *v13 < (unsigned int)v14 )
        break;
      a1[10] = v12;
      --v13;
    }
    while ( v12 );
  }
  v15 = (char *)a1[6];
  v16 = (char *)a1[7];
  v17 = 16 * (_DWORD)(v16 - 1);
  a1[13] = *(void **)&v15[v17 + 12];
  a1[12] = *(void **)&v15[v17 + 8];
  a1[15] = *(void **)&v15[v17 + 4];
  v18 = *(char **)&v15[v17];
  a1[14] = v18;
  if ( v16 )
    a1[7] = v16 - 1;
  v19 = v18 + 16;
  if ( !v18 )
    v19 = nullptr;
  a1[17] = v19;
  return 1;
}
// DE374: using guessed type int dword_DE374;
// E0550: using guessed type char under_debugger;
