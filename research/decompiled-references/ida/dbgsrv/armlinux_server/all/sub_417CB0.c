/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417CB0
// Address: 0x0000000000417CB0

//----- (0000000000417CB0) ----------------------------------------------------
__int64 __fastcall sub_417CB0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  *(_BYTE *)(a1 + 861) = a4 & 1;
  if ( !(unsigned __int8)sub_4950A8("IDA_FORCE_PTRACE_ATTACH", 0) && !ptrace(PTRACE_SEIZE, a2, 0, 0) )
  {
    if ( !ptrace(PTRACE_INTERRUPT, a2, 0, 0) )
    {
      *(_BYTE *)(a1 + 2054) = 1;
      goto LABEL_4;
    }
    ptrace(PTRACE_DETACH, a2, 0, 0);
  }
  *(_BYTE *)(a1 + 2054) = 0;
  if ( ptrace(PTRACE_ATTACH, a2, 0, 0) )
    return 0xFFFFFFFFLL;
LABEL_4:
  if ( (unsigned __int8)sub_416400(a1, a2, 1) )
  {
    sub_416EF8((_QWORD *)a1);
    return 1;
  }
  else
  {
    ptrace(PTRACE_DETACH, a2, 0, 0);
    return 0xFFFFFFFFLL;
  }
}
