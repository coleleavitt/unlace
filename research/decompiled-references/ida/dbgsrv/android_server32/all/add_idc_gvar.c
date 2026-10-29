/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_gvar
// Address: 0x00040D70

//----- (00040D70) --------------------------------------------------------
int __fastcall add_idc_gvar(const char *a1)
{
  pthread_mutex_t *v2; // r4
  int v3; // r5
  _DWORD *v5; // r6

  v2 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v5 = operator new(0x50u);
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    memset(v5 + 8, 0, 0x29u);
    dword_DE390 = (int)v5;
    _cxa_guard_release(&dword_DE394);
  }
  v3 = sub_40E24((_DWORD *)dword_DE390, a1);
  qmutex_unlock(v2);
  return v3;
}
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
