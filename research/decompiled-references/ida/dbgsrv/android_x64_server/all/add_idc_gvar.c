/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_gvar
// Address: 0x000000000006D1C0

//----- (000000000006D1C0) ----------------------------------------------------
__int64 __fastcall add_idc_gvar(const char *a1)
{
  pthread_mutex_t *v1; // r15
  __int64 v2; // rbx
  _OWORD *v4; // rax

  v1 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v4 = operator new(0x80u);
    *(_OWORD *)((char *)v4 + 109) = 0;
    v4[6] = 0;
    v4[5] = 0;
    v4[4] = 0;
    v4[3] = 0;
    v4[2] = 0;
    v4[1] = 0;
    *v4 = 0;
    qword_155820 = (__int64)v4;
    _cxa_guard_release(&byte_155828);
  }
  v2 = sub_6D290((_QWORD *)qword_155820, a1);
  qmutex_unlock(v1);
  return v2;
}
// 155820: using guessed type __int64 qword_155820;
