/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8054CA0
// Address: 0x08054CA0

//----- (08054CA0) --------------------------------------------------------
int __cdecl sub_8054CA0(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // eax
  _OWORD v5[2]; // [esp+0h] [ebp-54h] BYREF
  __int128 v6; // [esp+20h] [ebp-34h]
  __int128 v7; // [esp+30h] [ebp-24h]
  int v8; // [esp+40h] [ebp-14h]
  unsigned int v9; // [esp+44h] [ebp-10h]

  v9 = __readgsdword(0x14u);
  *a2 = 0;
  if ( a4
    && ((v8 = -1, memset(v5, 255, sizeof(v5)), v6 = -1, v7 = -1, ptrace(PTRACE_GETREGS, a3, 0, v5))
     || DWORD1(v6) == a4
     || DWORD2(v6) == a4) )
  {
    result = -1;
  }
  else
  {
    result = 1;
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
