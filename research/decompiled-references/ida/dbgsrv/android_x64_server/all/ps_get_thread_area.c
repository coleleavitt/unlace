/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_get_thread_area
// Address: 0x0000000000039EA0

//----- (0000000000039EA0) ----------------------------------------------------
__int64 __fastcall ps_get_thread_area(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v9[2] = __readfsqword(0x28u);
  v9[0] = &v8;
  v9[1] = 8;
  v6 = ptrace(PTRACE_GETREGSET, a2, 1025, v9);
  result = 1;
  if ( !v6 )
  {
    *a4 = v8 - a3;
    return 0;
  }
  return result;
}
