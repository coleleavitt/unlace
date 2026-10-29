/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000180B0
// Address: 0x00000001000180B0

//----- (00000001000180B0) ----------------------------------------------------
__int64 __fastcall sub_1000180B0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // r14d
  _QWORD *v9; // rax
  void *__p; // [rsp+8h] [rbp-38h]

  v8 = 0;
  v9 = open_linput(a2, 0);
  __p = v9;
  if ( v9 )
  {
    if ( (unsigned __int8)sub_100018180(a1, (__int64)v9, a5) )
      v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, __p, a3, a4);
    else
      v8 = 0;
    close_linput(__p);
  }
  return v8;
}
