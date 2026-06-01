/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetc
// Address: 0x000ABA90

//----- (000ABA90) --------------------------------------------------------
int __cdecl qlgetc(int a1)
{
  int v1; // eax
  int result; // eax
  bool v3; // zf
  unsigned __int8 dest; // [esp+Fh] [ebp-15h] BYREF
  unsigned int v5; // [esp+10h] [ebp-14h]

  v5 = __readgsdword(0x14u);
  if ( !a1 )
    return -1;
  if ( *(int *)a1 < 2 )
    v1 = qfread(*(FILE **)(a1 + 4), &dest, 1);
  else
    v1 = sub_AB320(__SPAIR64__(&dest, a1), 1);
  v3 = v1 == 1;
  result = -1;
  if ( v3 )
    return dest;
  return result;
}
