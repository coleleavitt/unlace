/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idc_func
// Address: 0x00041D20

//----- (00041D20) --------------------------------------------------------
int __fastcall del_idc_func(const char *a1)
{
  int v1; // r6
  char **v2; // r5
  int v3; // r7
  unsigned int v4; // r4
  _DWORD *v6; // r7
  int v7; // [sp+4h] [bp-10h]
  pthread_mutex_t *mutex; // [sp+8h] [bp-Ch]
  unsigned int v9; // [sp+Ch] [bp-8h]

  v1 = 0;
  if ( a1 )
  {
    mutex = (pthread_mutex_t *)dword_DE374;
    qmutex_lock((pthread_mutex_t *)dword_DE374);
    v1 = 0;
    if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
    {
      v6 = operator new(0x50u);
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      v6[4] = 0;
      v6[5] = 0;
      v6[6] = 0;
      memset(v6 + 8, 0, 0x29u);
      dword_DE390 = (int)v6;
      _cxa_guard_release(&dword_DE394);
    }
    v9 = dword_DD60C;
    if ( dword_DD60C )
    {
      v7 = dword_DE390;
      v2 = off_DD610;
      v3 = 0;
      v4 = 0;
      while ( strcmp(v2[v3], a1) )
      {
        v3 += 6;
        ++v4;
        v1 = 0;
        if ( v4 >= v9 )
          goto LABEL_11;
      }
      v1 = 0;
      if ( &v2[v3] && (unsigned int)(-1431655765 * ((v3 * 4) >> 3)) >= *(_DWORD *)(v7 + 24) )
      {
        v2[v3 + 1] = nullptr;
        v1 = 1;
      }
    }
LABEL_11:
    qmutex_unlock(mutex);
  }
  return v1;
}
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
