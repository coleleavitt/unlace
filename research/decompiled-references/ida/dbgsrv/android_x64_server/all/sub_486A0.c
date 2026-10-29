/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_486A0
// Address: 0x00000000000486A0

//----- (00000000000486A0) ----------------------------------------------------
__int64 __fastcall sub_486A0(__int64 a1)
{
  unsigned int v1; // ebx
  _BYTE v3[128]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v4; // [rsp+88h] [rbp-70h]
  unsigned __int64 v5; // [rsp+E0h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  LOBYTE(v1) = 1;
  if ( (*(_DWORD *)(a1 + 188) & 0xFFFFFFF) == 5 )
  {
    v1 = 0;
    if ( !ptrace(PTRACE_GETREGS, *(unsigned int *)(a1 + 172), 0, v3) )
    {
      if ( *(_QWORD *)(a1 + 176) == v4 - 1 )
        v4 = *(_QWORD *)(a1 + 176);
      LOBYTE(v1) = ptrace(PTRACE_SETREGS, *(unsigned int *)(a1 + 172), 0, v3) == 0;
    }
  }
  return v1;
}
// 48743: variable 'v1' is possibly undefined
