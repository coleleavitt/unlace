/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28A10
// Address: 0x00028A10

//----- (00028A10) --------------------------------------------------------
int __cdecl sub_28A10(int a1, _DWORD *a2, int a3, int a4)
{
  _BYTE v5[32]; // [esp+0h] [ebp-58h] BYREF
  __int128 v6; // [esp+20h] [ebp-38h]
  __int128 v7; // [esp+30h] [ebp-28h]
  int v8; // [esp+40h] [ebp-18h]
  unsigned int v9; // [esp+4Ch] [ebp-Ch]

  v9 = __readgsdword(0x14u);
  *a2 = 0;
  if ( !a4 )
    return 1;
  v7 = -1;
  v6 = -1;
  memset(v5, 255, sizeof(v5));
  v8 = -1;
  if ( ptrace(PTRACE_GETREGS, a3, 0, v5) || DWORD1(v6) == a4 )
    return -1;
  else
    return 2 * (DWORD2(v6) != a4) - 1;
}
