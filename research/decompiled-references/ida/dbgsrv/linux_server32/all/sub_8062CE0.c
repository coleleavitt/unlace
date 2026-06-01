/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8062CE0
// Address: 0x08062CE0

//----- (08062CE0) --------------------------------------------------------
int __cdecl sub_8062CE0(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int result; // eax
  _BYTE v5[48]; // [esp+10h] [ebp-64h] BYREF
  unsigned int v6[3]; // [esp+40h] [ebp-34h] BYREF
  int v7; // [esp+4Ch] [ebp-28h]
  unsigned int v8; // [esp+54h] [ebp-20h]

  v8 = __readgsdword(0x14u);
  ptrace(PTRACE_GETREGS, a2, 0, v5);
  v2 = *(_DWORD *)(a1 + 144);
  if ( v2 == sub_80623D0(a1, a2, v7, v6, v2, 0)
    || (v3 = *(_DWORD *)(a1 + 724), v3 != a2) && v2 == sub_80623D0(a1, v3, v7, v6, v2, 0) )
  {
    v7 += v2;
    result = ptrace(PTRACE_SETREGS, a2, 0, v5);
    LOBYTE(result) = result == 0;
  }
  else
  {
    result = 0;
  }
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
