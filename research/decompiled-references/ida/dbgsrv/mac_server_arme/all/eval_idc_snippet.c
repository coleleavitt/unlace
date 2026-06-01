/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_snippet
// Address: 0x000000010002D83C

//----- (000000010002D83C) ----------------------------------------------------
__int64 __fastcall eval_idc_snippet(unsigned __int8 *a1, const char *a2, char **a3, __int64 a4)
{
  __int64 v8; // x23
  char v9; // w24
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int64 v18; // x19
  _OWORD *v20; // x0
  char v21[16]; // [xsp+8h] [xbp-48h] BYREF

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1000A59B0, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1000A59B0) )
  {
    v20 = operator new(0x80u);
    *(_OWORD *)((char *)v20 + 109) = 0u;
    v20[5] = 0u;
    v20[6] = 0u;
    v20[3] = 0u;
    v20[4] = 0u;
    v20[1] = 0u;
    v20[2] = 0u;
    *v20 = 0u;
    qword_1000A59A8 = (__int64)v20;
    __cxa_guard_release(&qword_1000A59B0);
  }
  v8 = qword_1000A59A8;
  v9 = sub_10002D328(qword_1000A59A8);
  qsnprintf(v21, 0x10u, "___idcexec%d", v10, v11, v12, v13, v14, v9);
  if ( (unsigned int)compile_idc_snippet((char)v21, a2, (__int64)a3, a4, 0, v15, v16, v17) )
    v18 = call_idc_func(a1, v21, nullptr, 0, a3, a4);
  else
    v18 = 0;
  sub_10002D3D8(v8, v9);
  return v18;
}
// 10002D8B0: variable 'v10' is possibly undefined
// 10002D8B0: variable 'v11' is possibly undefined
// 10002D8B0: variable 'v12' is possibly undefined
// 10002D8B0: variable 'v13' is possibly undefined
// 10002D8B0: variable 'v14' is possibly undefined
// 10002D8C8: variable 'v15' is possibly undefined
// 10002D8C8: variable 'v16' is possibly undefined
// 10002D8C8: variable 'v17' is possibly undefined
// 1000A59A8: using guessed type __int64 qword_1000A59A8;
// 1000A59B0: using guessed type __int64 qword_1000A59B0;
