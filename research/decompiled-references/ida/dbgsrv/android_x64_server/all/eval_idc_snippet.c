/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eval_idc_snippet
// Address: 0x000000000006B730

//----- (000000000006B730) ----------------------------------------------------
__int64 __fastcall eval_idc_snippet(char *a1, _BYTE *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v8; // rbx
  unsigned int v9; // ebp
  unsigned int v10; // r15d
  _OWORD *v12; // rax
  char v13[16]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+20h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_155828 && _cxa_guard_acquire(&byte_155828) )
  {
    v12 = operator new(0x80u);
    a5 = 0.0;
    *(_OWORD *)((char *)v12 + 109) = 0;
    v12[6] = 0;
    v12[5] = 0;
    v12[4] = 0;
    v12[3] = 0;
    v12[2] = 0;
    v12[1] = 0;
    *v12 = 0;
    qword_155820 = (__int64)v12;
    _cxa_guard_release(&byte_155828);
  }
  v8 = qword_155820;
  v9 = sub_6B230(qword_155820);
  v10 = 0;
  qsnprintf(v13, 16, "___idcexec%d", v9);
  if ( (unsigned __int8)compile_idc_snippet(v13, a2, a3, a4, 0, a5, a6) )
    v10 = call_idc_func(a1, v13, nullptr, 0, a3, a4, a5, a6);
  sub_6B300(v8, v9);
  return v10;
}
// 155820: using guessed type __int64 qword_155820;
