/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C0300
// Address: 0x080C0300

//----- (080C0300) --------------------------------------------------------
int __cdecl sub_80C0300(int a1, char *s)
{
  int v2; // esi
  int result; // eax

  v2 = (*(int (__cdecl **)(int, int))(*(_DWORD *)dword_811E820 + 92))(dword_811E820, a1);
  strlen(s);
  result = sub_80BBF20(*(_DWORD *)(v2 + 16));
  if ( result <= 0 )
    *(_DWORD *)(v2 + 32) = "irs";
  return result;
}
// 811E820: using guessed type int dword_811E820;
