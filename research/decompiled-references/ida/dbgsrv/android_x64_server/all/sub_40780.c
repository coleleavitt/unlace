/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40780
// Address: 0x0000000000040780

//----- (0000000000040780) ----------------------------------------------------
__int64 __fastcall sub_40780(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebx
  _BYTE v11[144]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v12; // [rsp+98h] [rbp-70h]
  unsigned __int64 v13; // [rsp+E0h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  v2 = -1;
  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 4);
    v4 = *(_QWORD *)(a1 + 1040);
    if ( !v4 )
      goto LABEL_36;
    v5 = a1 + 1040;
    do
    {
      if ( *(_DWORD *)(v4 + 32) >= v3 )
        v5 = v4;
      v4 = *(_QWORD *)(v4 + 8LL * (*(_DWORD *)(v4 + 32) < v3));
    }
    while ( v4 );
    if ( v5 != a1 + 1040 && *(_DWORD *)(v5 + 32) <= v3 )
    {
      v6 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      if ( v6 > 9 || (v7 = 792, !_bittest(&v7, v6)) && (v6 != 7 || *(_BYTE *)(a2 + 16)) )
        *(_DWORD *)(v5 + 52) = 0;
      v8 = *(_DWORD *)(v5 + 60);
      if ( v8 == 3 )
      {
        sub_3C600(a1, *(_DWORD *)(a2 + 4));
      }
      else if ( v8 == 2 )
      {
        *(_QWORD *)(v5 + 44) = 0;
        sub_402C0(a1, *(_DWORD *)(v5 + 40), 0);
      }
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7
        && !*(_BYTE *)(v5 + 56)
        && *(_DWORD *)(a2 + 24) == 5
        && *(_BYTE *)(a2 + 16) )
      {
        v9 = *(_DWORD *)(a2 + 4);
        if ( ptrace(PTRACE_GETREGS, v9, 0, v11) )
        {
          sub_390A0((int)"clear_tbit: error reading registers for thread %d\n", v9);
        }
        else if ( (v12 & 0x100) != 0 )
        {
          v12 &= ~0x100uLL;
          if ( ptrace(PTRACE_SETREGS, v9, 0, v11) )
            sub_390A0((int)"clear_tbit: error writting registers for thread %d\n", v9);
        }
      }
    }
    else
    {
LABEL_36:
      if ( v3 && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 4 && !*(_BYTE *)(a1 + 1149) )
      {
        sub_40970(a1, "could not find thread %d!\n", v3);
        return v2;
      }
    }
    *(_BYTE *)(a1 + 1230) = 0;
    return 2 * (unsigned int)sub_3FD90(a1, 0) - 1;
  }
  return v2;
}
