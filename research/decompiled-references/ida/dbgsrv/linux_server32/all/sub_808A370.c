/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A370
// Address: 0x0808A370

//----- (0808A370) --------------------------------------------------------
int __cdecl sub_808A370(char **a1, unsigned __int8 *a2)
{
  char *v2; // edx
  char *v3; // eax
  char *v4; // eax

  v2 = a1[1];
  v3 = *a1;
  if ( a1[2] < v2 + 1 )
  {
    v3 = (char *)sub_80CF920((int)a1, v3, (unsigned int)(v2 + 1), 0x14u);
    v2 = a1[1];
    *a1 = v3;
  }
  v4 = &v3[20 * (_DWORD)v2];
  *v4 = 2;
  *(_OWORD *)(v4 + 4) = 0;
  ++a1[1];
  return sub_808A290((unsigned __int8 *)v4, a2);
}
