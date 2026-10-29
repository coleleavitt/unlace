/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_gvar
// Address: 0x00040C08

//----- (00040C08) --------------------------------------------------------
int __fastcall find_idc_gvar(const char *a1)
{
  int v2; // r5
  int v3; // r5
  pthread_mutex_t *v4; // r6
  int v5; // r0
  int v6; // r5
  int v7; // r7
  const char *v8; // r0
  _DWORD *v10; // r6

  v2 = 0;
  if ( sub_9B7B4((int)&dword_DE394, 0, 0) << 31 || !_cxa_guard_acquire(&dword_DE394) )
  {
    if ( !a1 )
      return v2;
  }
  else
  {
    v10 = operator new(0x50u);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 0;
    v10[4] = 0;
    v10[5] = 0;
    v10[6] = 0;
    memset(v10 + 8, 0, 0x29u);
    dword_DE390 = (int)v10;
    _cxa_guard_release(&dword_DE394);
    if ( !a1 )
      return v2;
  }
  v3 = dword_DE390;
  v4 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v5 = *(_DWORD *)(v3 + 56);
  if ( 40 * v5 )
  {
    v6 = *(_DWORD *)(v3 + 52);
    v7 = 40 * v5;
    while ( 1 )
    {
      v8 = &byte_B3CBE;
      if ( *(_DWORD *)(v6 + 4) )
        v8 = *(const char **)v6;
      if ( !strcmp(v8, a1) )
        break;
      v7 -= 40;
      v6 += 40;
      if ( !v7 )
      {
        v2 = 0;
        goto LABEL_12;
      }
    }
    v2 = v6 + 16;
  }
  else
  {
    v2 = 0;
  }
LABEL_12:
  qmutex_unlock(v4);
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
