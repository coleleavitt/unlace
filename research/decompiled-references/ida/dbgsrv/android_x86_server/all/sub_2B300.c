/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B300
// Address: 0x0002B300

//----- (0002B300) --------------------------------------------------------
char __cdecl sub_2B300(int a1, int a2)
{
  char result; // al
  _BYTE v3[48]; // [esp+0h] [ebp-5Ch] BYREF
  int v4; // [esp+30h] [ebp-2Ch]
  unsigned int v5; // [esp+48h] [ebp-14h]

  v5 = __readgsdword(0x14u);
  if ( *(_DWORD *)(a1 + 196) )
  {
    sub_1BDA0((int *)(a1 + 196), 0);
    qfree(*(void **)(a1 + 196));
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 204) = 0;
  }
  *(_BYTE *)(a1 + 678) = 0;
  sub_2B780(a1 + 556, *(void ***)(a1 + 560));
  *(_DWORD *)(a1 + 564) = 0;
  *(_DWORD *)(a1 + 556) = a1 + 560;
  *(_DWORD *)(a1 + 560) = 0;
  if ( !sub_8DBF0((_DWORD *)a1) || !(unsigned __int8)sub_26F90(a1, a2, 2) )
    return 0;
  sub_21A20((_DWORD *)a1);
  result = 1;
  if ( (*(_DWORD *)(a1 + 96) & 0xFFFFFFF) == 5 )
  {
    if ( ptrace(PTRACE_GETREGS, *(_DWORD *)(a1 + 84), 0, v3) )
      goto LABEL_10;
    if ( *(_DWORD *)(a1 + 88) == v4 - 1 )
      v4 = *(_DWORD *)(a1 + 88);
    if ( ptrace(PTRACE_SETREGS, *(_DWORD *)(a1 + 84), 0, v3) )
LABEL_10:
      sub_1C9D0(
        a1,
        "Debugger failed to correctly restore the instruction pointer after recovering from a broken connection.\n");
    return 1;
  }
  return result;
}
