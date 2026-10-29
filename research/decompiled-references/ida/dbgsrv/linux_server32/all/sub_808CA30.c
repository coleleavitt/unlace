/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808CA30
// Address: 0x0808CA30

//----- (0808CA30) --------------------------------------------------------
unsigned int __cdecl sub_808CA30(_DWORD *a1)
{
  int v1; // edx
  int v2; // ebx
  char *v4; // eax
  char *v5; // eax

  v1 = a1[4];
  if ( !v1 )
  {
    v4 = (char *)a1[3];
    if ( !a1[5] )
    {
      v4 = (char *)sub_80CF920((int)(a1 + 3), v4, 1u, 0x14u);
      v1 = a1[4];
      a1[3] = v4;
    }
    v5 = &v4[20 * v1];
    *v5 = 2;
    *(_OWORD *)(v5 + 4) = 0;
    v1 = a1[4] + 1;
    a1[4] = v1;
  }
  v2 = a1[3] + 20 * v1 - 20;
  sub_808C8A0(v2);
  return sub_808C590((int)a1, v2);
}
