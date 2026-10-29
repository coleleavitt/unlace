/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DAA0
// Address: 0x0003DAA0

//----- (0003DAA0) --------------------------------------------------------
char *__cdecl sub_3DAA0(int *a1)
{
  char *result; // eax
  int v2; // esi
  char *v3; // edx
  int v4; // edi
  int v5; // ecx
  void *v6; // eax
  char *v7; // edi
  char *v8; // [esp+10h] [ebp-1Ch]
  int v9; // [esp+14h] [ebp-18h]
  char *v10; // [esp+18h] [ebp-14h]

  result = (char *)a1[1];
  if ( result )
  {
    v2 = *a1;
    v3 = result - 1;
    a1[1] = (int)(result - 1);
    v4 = 27 * (_DWORD)(result - 1);
    v5 = (int)&result[v4 - 1];
    v6 = *(void **)(v2 + v5 + 12);
    if ( v6 )
    {
      v9 = v5;
      v10 = v3;
      v8 = &v3[v4];
      *(_DWORD *)&v3[v4 + 16 + v2] = 0;
      qfree(v6);
      *(_DWORD *)(v2 + v9 + 12) = 0;
      *(_DWORD *)&v8[v2 + 20] = 0;
      v3 = v10;
    }
    v7 = &v3[v4];
    result = *(char **)&v7[v2];
    if ( result )
    {
      *(_DWORD *)&v7[v2 + 4] = 0;
      qfree(result);
      *(_DWORD *)&v7[v2] = 0;
      *(_DWORD *)&v7[v2 + 8] = 0;
      return &v7[v2];
    }
  }
  return result;
}
