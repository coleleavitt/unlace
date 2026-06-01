/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456E0
// Address: 0x00000000000456E0

//----- (00000000000456E0) ----------------------------------------------------
__int64 __fastcall sub_456E0(__int64 a1)
{
  unsigned int v1; // r14d
  unsigned int v2; // ebp
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+0h] [rbp-278h] BYREF
  char v6; // [rsp+10h] [rbp-268h] BYREF
  unsigned __int64 v7; // [rsp+258h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 3528) )
  {
    v1 = 0;
    if ( ptrace(PTRACE_SETREGS, *(unsigned int *)(a1 + 84), 0, a1 + 88) )
      return v1;
  }
  if ( *(_BYTE *)(a1 + 3530) )
  {
    v2 = *(_DWORD *)(a1 + 84);
    if ( dword_15401C < 0 )
    {
      v5[0] = &v6;
      v5[1] = 576;
      v3 = ptrace(PTRACE_GETREGSET, v2, 514, v5);
      dword_15401C = v3 == 0;
      if ( !v3 )
      {
LABEL_6:
        v1 = 0;
        if ( ptrace(PTRACE_SETREGSET, v2, 514, a1 + 3512) )
          return v1;
        goto LABEL_7;
      }
    }
    else if ( dword_15401C > 0 )
    {
      goto LABEL_6;
    }
    return 0;
  }
LABEL_7:
  if ( !*(_BYTE *)(a1 + 3529) || (v1 = 0, !ptrace(PTRACE_SETFPREGS, *(unsigned int *)(a1 + 84), 0, a1 + 304)) )
    LOBYTE(v1) = 1;
  return v1;
}
// 457EE: variable 'v1' is possibly undefined
// 15401C: using guessed type int dword_15401C;
