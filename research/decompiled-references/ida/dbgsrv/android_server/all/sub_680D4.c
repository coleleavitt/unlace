/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_680D4
// Address: 0x00000000000680D4

//----- (00000000000680D4) ----------------------------------------------------
__int64 __fastcall sub_680D4(__int64 result, int a2)
{
  unsigned __int8 v2; // w8
  __int64 v3; // x19
  int v4; // w8
  _QWORD *v5; // x0

  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)result = result + 8;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 1;
  *(_DWORD *)(result + 28) = a2;
  v2 = atomic_load((unsigned __int8 *)&byte_166AE8);
  if ( (v2 & 1) == 0 )
  {
    v3 = result;
    v4 = _cxa_guard_acquire((__guard *)&byte_166AE8);
    result = v3;
    if ( v4 )
    {
      v5 = operator new(0x80u);
      *(_QWORD *)((char *)v5 + 117) = 0;
      v5[14] = 0;
      *((_OWORD *)v5 + 5) = 0u;
      *((_OWORD *)v5 + 6) = 0u;
      *((_OWORD *)v5 + 3) = 0u;
      *((_OWORD *)v5 + 4) = 0u;
      *((_OWORD *)v5 + 1) = 0u;
      *((_OWORD *)v5 + 2) = 0u;
      *(_OWORD *)v5 = 0u;
      qword_166AE0 = (__int64)v5;
      _cxa_guard_release((__guard *)&byte_166AE8);
      result = v3;
    }
  }
  if ( *(_QWORD *)(qword_166AE0 + 72) <= (unsigned __int64)*(int *)(result + 28) )
    *(_DWORD *)(result + 28) = 0;
  return result;
}
// 166AE0: using guessed type __int64 qword_166AE0;
// 166AE8: using guessed type char byte_166AE8;
