/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807D9C0
// Address: 0x0807D9C0

//----- (0807D9C0) --------------------------------------------------------
int sub_807D9C0()
{
  int v0; // edx
  int result; // eax
  int v2; // [esp+0h] [ebp-14h]
  unsigned int v3; // [esp+4h] [ebp-10h]

  v3 = __readgsdword(0x14u);
  v0 = sub_80C3640();
  result = -1;
  if ( v0 )
    result = v2;
  if ( v3 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 807D9FE: variable 'v2' is possibly undefined
