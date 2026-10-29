/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FCA0
// Address: 0x000000000003FCA0

//----- (000000000003FCA0) ----------------------------------------------------
__int64 __fastcall sub_3FCA0(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r14d
  int v4; // ebp
  unsigned int v5; // esi
  _BYTE v7[128]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v8[24]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v9; // [rsp+98h] [rbp-70h]
  unsigned __int64 v10; // [rsp+D8h] [rbp-30h]

  v3 = a2;
  v10 = __readfsqword(0x28u);
  ptrace(PTRACE_GETREGS, a2, 0, v7);
  v4 = *(_DWORD *)(a1 + 244);
  if ( (unsigned int)sub_3D950(a1, a2, v9, (__int64)v8, v4, 0) != v4 )
  {
    v5 = *(_DWORD *)(a1 + 1140);
    if ( v5 == v3 )
      return 0;
    v2 = 0;
    if ( (unsigned int)sub_3D950(a1, v5, v9, (__int64)v8, v4, 0) != v4 )
      return v2;
  }
  v9 += v4;
  LOBYTE(v2) = ptrace(PTRACE_SETREGS, v3, 0, v7) == 0;
  return v2;
}
// 3FD70: variable 'v2' is possibly undefined
