/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_class
// Address: 0x00041018

//----- (00041018) --------------------------------------------------------
int __fastcall find_idc_class(char *a1)
{
  int v2; // r5
  int v3; // r4
  int *v4; // r6
  unsigned int v5; // r4
  const char *v6; // r0
  _DWORD *v8; // r6
  pthread_mutex_t *mutex; // [sp+0h] [bp-Ch]
  unsigned int v10; // [sp+4h] [bp-8h]
  char *s2; // [sp+8h] [bp-4h]

  v2 = 0;
  if ( sub_9B7B4((int)&dword_DE394, 0, 0) << 31 || !_cxa_guard_acquire(&dword_DE394) )
  {
    if ( !a1 )
      return v2;
  }
  else
  {
    v8 = operator new(0x50u);
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    memset(v8 + 8, 0, 0x29u);
    dword_DE390 = (int)v8;
    _cxa_guard_release(&dword_DE394);
    if ( !a1 )
      return v2;
  }
  s2 = a1;
  v3 = dword_DE390;
  mutex = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v2 = 0;
  v10 = *(_DWORD *)(v3 + 44);
  if ( v10 )
  {
    v4 = *(int **)(v3 + 40);
    v5 = 0;
    do
    {
      v2 = *v4;
      v6 = &byte_B3CBE;
      if ( *(_DWORD *)(*v4 + 24) )
        v6 = *(const char **)(v2 + 20);
      ++v5;
      if ( !strcmp(v6, s2) )
        break;
      ++v4;
      v2 = 0;
    }
    while ( v5 < v10 );
  }
  qmutex_unlock(mutex);
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
