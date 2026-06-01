/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_snippet
// Address: 0x00000001000326A0

//----- (00000001000326A0) ----------------------------------------------------
__int64 __fastcall eval_idc_snippet(unsigned __int8 *a1, const char *a2, void **a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  _OWORD *v10; // rax
  char v11[16]; // [rsp+10h] [rbp-40h] BYREF

  if ( !(_BYTE)byte_1000AE2E8 && __cxa_guard_acquire(&byte_1000AE2E8) )
  {
    v10 = operator new(0x80u);
    *(_OWORD *)((char *)v10 + 109) = 0;
    v10[6] = 0;
    v10[5] = 0;
    v10[4] = 0;
    v10[3] = 0;
    v10[2] = 0;
    v10[1] = 0;
    *v10 = 0;
    qword_1000AE2E0 = (__int64)v10;
    __cxa_guard_release(&byte_1000AE2E8);
  }
  v6 = qword_1000AE2E0;
  v7 = sub_100032170(qword_1000AE2E0);
  qsnprintf(v11, 16, "___idcexec%d", v7);
  if ( (unsigned __int8)compile_idc_snippet(v11, a2, (__int64)a3, a4, 0) )
    v8 = call_idc_func(a1, v11, nullptr, 0, a3, a4);
  else
    v8 = 0;
  sub_100032250(v6, v7);
  return v8;
}
// 1000AE2E0: using guessed type __int64 qword_1000AE2E0;
