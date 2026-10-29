/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48530
// Address: 0x0000000000048530

//----- (0000000000048530) ----------------------------------------------------
__int64 __fastcall sub_48530(unsigned __int64 a1, int a2, double a3, double a4)
{
  unsigned int v4; // ebp
  _BYTE v6[128]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v7; // [rsp+80h] [rbp-78h]
  unsigned __int64 v8; // [rsp+D8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 376) )
  {
    sub_385C0((__int64 *)(a1 + 376), 0);
    qfree(*(void **)(a1 + 376));
    *(_QWORD *)(a1 + 376) = 0;
    *(_QWORD *)(a1 + 392) = 0;
  }
  *(_BYTE *)(a1 + 1230) = 0;
  v4 = a1 + 1016;
  sub_48950(a1 + 1008, *(_QWORD **)(a1 + 1016));
  *(_QWORD *)(a1 + 1008) = a1 + 1016;
  *(_OWORD *)(a1 + 1016) = 0;
  if ( sub_A3200((_QWORD *)a1) && (unsigned __int8)sub_43480(a1, a2, 2, 0.0, a4) )
  {
    sub_3E060((_QWORD *)a1, 0.0, a4);
    LOBYTE(v4) = 1;
    if ( (*(_DWORD *)(a1 + 188) & 0xFFFFFFF) == 5 )
    {
      if ( ptrace(PTRACE_GETREGS, *(unsigned int *)(a1 + 172), 0, v6) )
        goto LABEL_10;
      if ( *(_QWORD *)(a1 + 176) == v7 - 1 )
        v7 = *(_QWORD *)(a1 + 176);
      if ( ptrace(PTRACE_SETREGS, *(unsigned int *)(a1 + 172), 0, v6) )
LABEL_10:
        sub_391F0(
          a1,
          "Debugger failed to correctly restore the instruction pointer after recovering from a broken connection.\n");
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
