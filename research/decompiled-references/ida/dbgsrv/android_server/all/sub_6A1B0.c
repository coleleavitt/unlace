/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A1B0
// Address: 0x000000000006A1B0

//----- (000000000006A1B0) ----------------------------------------------------
__int64 __fastcall sub_6A1B0(unsigned __int64 a1)
{
  unsigned __int8 v1; // w8
  unsigned __int64 v2; // x1
  int v5; // w0
  _QWORD *v6; // x0

  v1 = atomic_load((unsigned __int8 *)&byte_166AE8);
  v2 = a1;
  if ( (v1 & 1) == 0 )
  {
    v5 = _cxa_guard_acquire((__guard *)&byte_166AE8);
    v2 = a1;
    if ( v5 )
    {
      v6 = operator new(0x80u);
      *(_QWORD *)((char *)v6 + 117) = 0;
      v6[14] = 0;
      *((_OWORD *)v6 + 5) = 0u;
      *((_OWORD *)v6 + 6) = 0u;
      *((_OWORD *)v6 + 3) = 0u;
      *((_OWORD *)v6 + 4) = 0u;
      *((_OWORD *)v6 + 1) = 0u;
      *((_OWORD *)v6 + 2) = 0u;
      *(_OWORD *)v6 = 0u;
      qword_166AE0 = (__int64)v6;
      _cxa_guard_release((__guard *)&byte_166AE8);
      v2 = a1;
    }
  }
  return sub_6A248(qword_166AE0, v2);
}
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
