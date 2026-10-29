/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: add_idc_class
// Address: 0x000000000006A49C

//----- (000000000006A49C) ----------------------------------------------------
char *__fastcall add_idc_class(const char *a1, __int64 a2)
{
  unsigned __int8 v2; // w9
  __int64 v3; // x2
  const char *v4; // x8
  int v7; // w0
  _QWORD *v8; // x0

  v2 = atomic_load((unsigned __int8 *)&byte_166AE8);
  v3 = a2;
  v4 = a1;
  if ( (v2 & 1) == 0 )
  {
    v7 = _cxa_guard_acquire((__guard *)&byte_166AE8);
    v4 = a1;
    v3 = a2;
    if ( v7 )
    {
      v8 = operator new(0x80u);
      *(_QWORD *)((char *)v8 + 117) = 0;
      v8[14] = 0;
      *((_OWORD *)v8 + 5) = 0u;
      *((_OWORD *)v8 + 6) = 0u;
      *((_OWORD *)v8 + 3) = 0u;
      *((_OWORD *)v8 + 4) = 0u;
      *((_OWORD *)v8 + 1) = 0u;
      *((_OWORD *)v8 + 2) = 0u;
      *(_OWORD *)v8 = 0u;
      qword_166AE0 = (__int64)v8;
      _cxa_guard_release((__guard *)&byte_166AE8);
      v4 = a1;
      v3 = a2;
    }
  }
  return sub_6A550((_QWORD *)qword_166AE0, v4, v3);
}
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
