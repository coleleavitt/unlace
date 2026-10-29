/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C96E0
// Address: 0x080C96E0

//----- (080C96E0) --------------------------------------------------------
unsigned int __cdecl sub_80C96E0(int a1, int a2)
{
  int v2; // eax
  unsigned int result; // eax
  _WORD v4[12]; // [esp+0h] [ebp-28h] BYREF
  unsigned int v5; // [esp+18h] [ebp-10h]

  v5 = __readgsdword(0x14u);
  v2 = a1;
  memset(v4, 0, 22);
  if ( a1 < 0 )
  {
    v2 = -a1;
    v4[0] = -1;
  }
  else if ( !a1 )
  {
    goto LABEL_4;
  }
  v4[2] = HIWORD(v2);
  v4[3] = v2;
  v4[1] = 16398 - sub_80C7F40((int)v4);
LABEL_4:
  sub_80C8700(v4, a2);
  result = v5 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
