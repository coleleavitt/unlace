/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8084390
// Address: 0x08084390

//----- (08084390) --------------------------------------------------------
int *__cdecl sub_8084390(int a1)
{
  int *v1; // edx
  int v2; // eax
  int v3; // ecx

  v1 = nullptr;
  if ( a1
    && *(_BYTE *)a1 == 5
    && (v2 = *(_DWORD *)(a1 + 4), v3 = *(_DWORD *)(v2 + 12), v3 != v2 + 4)
    && (v1 = &dword_80DDFD8, *(_DWORD *)(v3 + 20)) )
  {
    return *(int **)(v3 + 16);
  }
  else
  {
    return v1;
  }
}
// 80DDFD8: using guessed type int dword_80DDFD8;
