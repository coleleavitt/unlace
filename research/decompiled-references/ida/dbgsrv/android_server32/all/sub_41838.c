/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41838
// Address: 0x00041838

//----- (00041838) --------------------------------------------------------
char *__fastcall sub_41838(const char *a1, int *a2)
{
  int v3; // r5
  const char *v4; // r7
  int v5; // r6
  int v6; // r1
  const char *v7; // r0
  char **v8; // r6
  int v9; // r4
  unsigned int v10; // r5
  int v11; // r0
  int v12; // r0
  char *v13; // r0
  unsigned int v14; // r0
  _DWORD *v16; // r5
  pthread_mutex_t *mutex; // [sp+8h] [bp-10h]
  unsigned int v19; // [sp+Ch] [bp-Ch]
  char *v20; // [sp+10h] [bp-8h]
  _DWORD *v21; // [sp+14h] [bp-4h]

  mutex = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v16 = operator new(0x50u);
    *v16 = 0;
    v16[1] = 0;
    v16[2] = 0;
    v16[3] = 0;
    v16[4] = 0;
    v16[5] = 0;
    v16[6] = 0;
    memset(v16 + 8, 0, 0x29u);
    dword_DE390 = (int)v16;
    _cxa_guard_release(&dword_DE394);
  }
  v20 = nullptr;
  v3 = -1;
  v21 = (_DWORD *)dword_DE390;
  if ( !a1 )
  {
LABEL_18:
    v11 = *a2;
    *a2 = v3;
    if ( v11 < 0 )
    {
      v20 = &byte_A0742;
      if ( v11 == -1 )
        goto LABEL_28;
      v14 = -v11;
      if ( dword_DD60C <= v14 )
        goto LABEL_28;
      v13 = off_DD610[6 * v14];
    }
    else if ( v21[1] <= (unsigned int)v11 )
    {
      v13 = &byte_A0742;
    }
    else
    {
      v12 = *(_DWORD *)(*v21 + 4 * v11);
      if ( *(_DWORD *)(v12 + 4) )
        v13 = *(char **)v12;
      else
        v13 = &byte_B3CBE;
    }
    v20 = v13;
    goto LABEL_28;
  }
  v4 = a1;
  v3 = *(_DWORD *)(dword_DE390 + 4);
  v5 = 4 * v3 - 4;
  while ( --v3 >= 0 )
  {
    v6 = *(_DWORD *)(*v21 + v5);
    v7 = &byte_B3CBE;
    if ( *(_DWORD *)(v6 + 4) )
      v7 = *(const char **)v6;
    v5 -= 4;
    if ( !strcmp(v7, v4) )
    {
      if ( v3 != 0x7FFFFFFF )
        goto LABEL_18;
      goto LABEL_28;
    }
  }
  v19 = dword_DD60C;
  if ( dword_DD60C )
  {
    v8 = off_DD610;
    v9 = 0;
    v10 = 0;
    while ( strcmp(v8[v9], v4) )
    {
      v9 += 6;
      ++v10;
      v20 = nullptr;
      if ( v10 >= v19 )
        goto LABEL_28;
    }
    v20 = nullptr;
    if ( &v8[v9] )
    {
      if ( v8[v9 + 1] )
      {
        v3 = v9 * 4 / -24;
        goto LABEL_18;
      }
    }
  }
LABEL_28:
  qmutex_unlock(mutex);
  return v20;
}
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
