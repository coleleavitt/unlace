/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19BF0
// Address: 0x00019BF0

//----- (00019BF0) --------------------------------------------------------
int __cdecl sub_19BF0(int a1, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = ptrace(PTRACE_PEEKUSER, *(_DWORD *)(a1 + 4), 48, 0);
  result = 0;
  if ( v2 == a2 + 1 )
  {
    dword_13BCC0 = ptrace(PTRACE_PEEKUSER, *(_DWORD *)(a1 + 4), 4, 0);
    dword_13BCC4 = dword_13BCC0;
    return 66;
  }
  return result;
}
// 13BCC0: using guessed type int dword_13BCC0;
// 13BCC4: using guessed type int dword_13BCC4;
