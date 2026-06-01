/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805D6C0
// Address: 0x0805D6C0

//----- (0805D6C0) --------------------------------------------------------
int __cdecl sub_805D6C0(_DWORD *a1)
{
  int v1; // edx
  int v3; // eax
  _BYTE v4[48]; // [esp+0h] [ebp-54h] BYREF
  int v5; // [esp+30h] [ebp-24h]
  unsigned int v6; // [esp+44h] [ebp-10h]

  v1 = 1;
  v6 = __readgsdword(0x14u);
  if ( (a1[28] & 0xFFFFFFF) == 5 )
  {
    v3 = ptrace(PTRACE_GETREGS, a1[25], 0, v4);
    v1 = 0;
    if ( !v3 )
    {
      if ( a1[26] == v5 - 1 )
        --v5;
      LOBYTE(v1) = ptrace(PTRACE_SETREGS, a1[25], 0, v4) == 0;
    }
  }
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v1;
}
// 805D702: variable 'v1' is possibly undefined
