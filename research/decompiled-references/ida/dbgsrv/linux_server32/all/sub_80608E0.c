/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80608E0
// Address: 0x080608E0

//----- (080608E0) --------------------------------------------------------
int __cdecl sub_80608E0(int a1, signed int a2, int a3)
{
  int *v3; // ebp
  void *v4; // eax
  int v6; // eax
  int v7; // [esp-18h] [ebp-28h]
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp-10h] [ebp-20h]

  if ( *(_BYTE *)(a1 + 734) )
  {
    if ( ptrace(PTRACE_GETSIGINFO|PTRACE_POKETEXT, a2, 0, 0) )
      goto LABEL_3;
    v6 = ptrace(PTRACE_SETSIGINFO|PTRACE_POKETEXT, a2, 0, 0);
  }
  else
  {
    v6 = ptrace(PTRACE_ATTACH, a2, 0, 0);
  }
  if ( !v6 )
    return sub_8060260(a1, a2, a3, 0);
LABEL_3:
  v3 = __errno_location();
  v4 = sub_80D0500(*v3);
  sub_8058E20(a1, "Attaching to %d thread: %s\n", a2, v4);
  if ( (*v3 & 0xFFFFFFFD) != 1 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(30197, v7, v8, v9);
    JUMPOUT(0x804C4A4);
  }
  return 0;
}
// 80609A5: control flows out of bounds to 804C4A4
// 80609B3: variable 'v7' is possibly undefined
// 80609B3: variable 'v8' is possibly undefined
// 80609B3: variable 'v9' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
