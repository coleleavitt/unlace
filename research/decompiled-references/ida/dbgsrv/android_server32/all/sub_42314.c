/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42314
// Address: 0x00042314

//----- (00042314) --------------------------------------------------------
bool sub_42314()
{
  _DWORD *v1; // r4

  remove_extlang((int)dword_DD648);
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v1 = operator new(0x50u);
    *v1 = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v1[4] = 0;
    v1[5] = 0;
    v1[6] = 0;
    memset(v1 + 8, 0, 0x29u);
    dword_DE390 = (int)v1;
    _cxa_guard_release(&dword_DE394);
  }
  sub_423C4(dword_DE390);
  qmutex_free((pthread_mutex_t *)dword_DE374);
  return qmutex_free((pthread_mutex_t *)dword_DE360);
}
// DD648: using guessed type int dword_DD648[3];
// DE360: using guessed type int dword_DE360;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
