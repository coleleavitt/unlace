/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455A0
// Address: 0x00000000000455A0

//----- (00000000000455A0) ----------------------------------------------------
__int64 __fastcall sub_455A0(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // ebp
  int v3; // ecx
  _QWORD v5[2]; // [rsp+0h] [rbp-278h] BYREF
  char v6; // [rsp+10h] [rbp-268h] BYREF
  unsigned __int64 v7; // [rsp+258h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) )
    return 0;
  if ( *(_BYTE *)(a1 + 3528) )
  {
    v1 = 0;
    if ( ptrace(PTRACE_GETREGS, *(unsigned int *)(a1 + 84), 0, a1 + 88) )
      return v1;
  }
  if ( !*(_BYTE *)(a1 + 3529) && !*(_BYTE *)(a1 + 3530) )
    goto LABEL_12;
  v1 = 0;
  if ( ptrace(PTRACE_GETFPREGS, *(unsigned int *)(a1 + 84), 0, a1 + 304) )
    return v1;
  if ( !*(_BYTE *)(a1 + 3530) )
  {
LABEL_12:
    LOBYTE(v1) = 1;
    return v1;
  }
  v2 = *(_DWORD *)(a1 + 84);
  v3 = dword_15401C;
  if ( dword_15401C < 0 )
  {
    v5[0] = &v6;
    v5[1] = 576;
    v3 = ptrace(PTRACE_GETREGSET, v2, 514, v5) == 0;
    dword_15401C = v3;
  }
  if ( v3 <= 0 )
    return 0;
  v1 = 0;
  if ( !ptrace(PTRACE_GETREGSET, v2, 514, a1 + 3512) )
    goto LABEL_12;
  return v1;
}
// 456BD: variable 'v1' is possibly undefined
// 15401C: using guessed type int dword_15401C;
