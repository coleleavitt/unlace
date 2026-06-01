/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_get_thread_area
// Address: 0x08059CE0

//----- (08059CE0) --------------------------------------------------------
int __cdecl ps_get_thread_area(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // edx
  int result; // eax
  _BYTE v6[4]; // [esp+0h] [ebp-20h] BYREF
  int v7; // [esp+4h] [ebp-1Ch]
  unsigned int v8; // [esp+10h] [ebp-10h]

  v8 = __readgsdword(0x14u);
  v4 = ptrace(PTRACE_SYSCALL|PTRACE_PEEKTEXT, a2, a3, v6);
  result = 1;
  if ( v4 >= 0 )
  {
    *a4 = v7;
    result = 0;
  }
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
