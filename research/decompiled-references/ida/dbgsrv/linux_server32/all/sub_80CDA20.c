/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CDA20
// Address: 0x080CDA20

//----- (080CDA20) --------------------------------------------------------
FILE *__cdecl sub_80CDA20(int a1, char *a2)
{
  FILE *v2; // esi
  char s[20]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v5; // [esp+14h] [ebp-10h]

  v5 = __readgsdword(0x14u);
  sub_80D0740((unsigned int)s, a2, 20);
  sub_80D08C0(s, "e", 20);
  v2 = sub_80CD940(a1, s, 8);
  if ( !v2 )
    sub_80C7880(1);
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
