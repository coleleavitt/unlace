/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6804C
// Address: 0x000000000006804C

//----- (000000000006804C) ----------------------------------------------------
__int64 sub_6804C()
{
  unsigned __int8 v0; // w8
  _QWORD *v2; // x0

  v0 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v0 & 1) == 0 && _cxa_guard_acquire((__guard *)&byte_166AE8) )
  {
    v2 = operator new(0x80u);
    *(_QWORD *)((char *)v2 + 117) = 0;
    v2[14] = 0;
    *((_OWORD *)v2 + 5) = 0u;
    *((_OWORD *)v2 + 6) = 0u;
    *((_OWORD *)v2 + 3) = 0u;
    *((_OWORD *)v2 + 4) = 0u;
    *((_OWORD *)v2 + 1) = 0u;
    *((_OWORD *)v2 + 2) = 0u;
    *(_OWORD *)v2 = 0u;
    qword_166AE0 = (__int64)v2;
    _cxa_guard_release((__guard *)&byte_166AE8);
  }
  return qword_166AE0;
}
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
