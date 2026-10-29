/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DA50
// Address: 0x0002DA50

//----- (0002DA50) --------------------------------------------------------
char *__fastcall sub_2DA50(int a1, _DWORD *a2)
{
  unsigned int *v3; // r6
  void **v4; // r5
  unsigned int v5; // r1
  unsigned int v6; // r2
  char *v7; // r0
  int v8; // r2
  int v9; // r1
  char *result; // r0
  int v11; // r1
  int v12; // r1

  v3 = (unsigned int *)(a1 + 464);
  v4 = (void **)(a1 + 460);
  v5 = *(_DWORD *)(a1 + 464);
  v6 = v5 + 1;
  if ( *(_DWORD *)(a1 + 468) >= v5 + 1 )
  {
    v7 = (char *)*v4;
  }
  else
  {
    v7 = (char *)qvector_reserve(a1 + 460, *v4, v6, 0x18u);
    *v4 = v7;
    v5 = *v3;
    v6 = *v3 + 1;
  }
  *v3 = v6;
  v8 = 24 * v5;
  v9 = a2[3];
  *(_DWORD *)&v7[v8] = a2[2];
  result = &v7[v8];
  *((_DWORD *)result + 1) = v9;
  v11 = a2[8];
  *((_DWORD *)result + 3) = a2[9];
  *((_DWORD *)result + 2) = v11;
  v12 = a2[4];
  *((_DWORD *)result + 5) = a2[5];
  *((_DWORD *)result + 4) = v12;
  return result;
}
