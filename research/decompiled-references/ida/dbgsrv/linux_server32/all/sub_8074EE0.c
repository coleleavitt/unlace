/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8074EE0
// Address: 0x08074EE0

//----- (08074EE0) --------------------------------------------------------
int __cdecl sub_8074EE0(_DWORD *a1)
{
  char *v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int result; // eax
  char *v6; // eax

  v1 = (char *)&dword_80DDFD8;
  if ( a1[6] )
    v1 = (char *)a1[5];
  v2 = sub_8080DF0(a1[15], v1);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 28);
    v4 = a1[25];
    result = v3;
    do
    {
      result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1[15] + 36) + 4 * result) + 24);
      if ( *(_DWORD *)(v4 + 28) == result )
        return sub_80C7880(1537);
    }
    while ( result );
    *(_DWORD *)(v4 + 24) = v3;
  }
  else
  {
    v6 = (char *)&dword_80DDFD8;
    if ( a1[6] )
      v6 = (char *)a1[5];
    sub_80C7910(0, v6);
    return sub_80C7880(1536);
  }
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
