/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4FF80
// Address: 0x0004FF80

//----- (0004FF80) --------------------------------------------------------
int __cdecl sub_4FF80(_DWORD *a1, char a2)
{
  char v2; // dl
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // edi
  void *v6; // eax

  v2 = a2;
  v3 = a1;
  v4 = a1[1];
  v5 = v4 - 1;
  if ( !v4 )
    v5 = 0;
  v6 = (void *)*a1;
  if ( a1[2] < (unsigned int)(v5 + 2) )
  {
    v6 = qvector_reserve((int)a1, v6, v5 + 2, 1u);
    v2 = a2;
    v3 = a1;
    *a1 = v6;
  }
  v3[1] = v5 + 2;
  *((_BYTE *)v6 + v5) = v2;
  *(_BYTE *)(*v3 + v5 + 1) = 0;
  return 0;
}
