/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41DA10
// Address: 0x000000000041DA10

//----- (000000000041DA10) ----------------------------------------------------
bool __fastcall sub_41DA10(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 v11; // r12
  double v12; // xmm4_8
  double v13; // xmm5_8
  double v14; // xmm4_8
  double v15; // xmm5_8
  unsigned int v16; // esi
  _BYTE v18[128]; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v19[3]; // [rsp+80h] [rbp-88h] BYREF
  __off64_t v20; // [rsp+98h] [rbp-70h]
  unsigned __int64 v21; // [rsp+D8h] [rbp-30h]

  v10 = a2;
  v21 = __readfsqword(0x28u);
  ptrace(PTRACE_GETREGS, a2, 0, v18);
  v11 = *(int *)(a1 + 276);
  if ( (_DWORD)v11 != (unsigned int)sub_41D160(
                                      a1,
                                      a2,
                                      v20,
                                      v19,
                                      *(_DWORD *)(a1 + 276),
                                      0,
                                      a3,
                                      a4,
                                      a5,
                                      a6,
                                      v12,
                                      v13,
                                      a9,
                                      a10) )
  {
    v16 = *(_DWORD *)(a1 + 1340);
    if ( v16 == v10
      || (_DWORD)v11 != (unsigned int)sub_41D160(a1, v16, v20, v19, v11, 0, a3, a4, a5, a6, v14, v15, a9, a10) )
    {
      return 0;
    }
  }
  v20 += v11;
  return ptrace(PTRACE_SETREGS, v10, 0, v18) == 0;
}
// 41DA6E: variable 'v12' is possibly undefined
// 41DA6E: variable 'v13' is possibly undefined
// 41DA96: variable 'v14' is possibly undefined
// 41DA96: variable 'v15' is possibly undefined
