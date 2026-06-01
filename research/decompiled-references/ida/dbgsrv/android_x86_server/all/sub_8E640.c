/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E640
// Address: 0x0008E640

//----- (0008E640) --------------------------------------------------------
int *__cdecl sub_8E640(int *a1, int *a2)
{
  int *result; // eax
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ecx
  int *v6; // ecx
  int *v7; // edx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // [esp+8h] [ebp-14h]

  result = a2;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v3 = a2[1];
  if ( v3 )
  {
    v4 = qalloc_or_throw(16 * v3);
    *a1 = (int)v4;
    a1[2] = v3;
    v5 = *a2;
    *v4 = -2;
    v4[3] = 0;
    v4[2] = 0;
    v4[1] = 0;
    sub_88A70(v4, v5);
    v12 = v3;
    v6 = a1;
    v7 = a2;
    if ( v3 != 1 )
    {
      v8 = v3 - 1;
      v9 = 16;
      do
      {
        v10 = *v6;
        v11 = v9 + *v7;
        *(_DWORD *)(v10 + v9) = -2;
        *(_DWORD *)(v10 + v9 + 12) = 0;
        *(_DWORD *)(v10 + v9 + 8) = 0;
        *(_DWORD *)(v10 + v9 + 4) = 0;
        sub_88A70((_DWORD *)(v10 + v9), v11);
        v7 = a2;
        v6 = a1;
        v9 += 16;
        --v8;
      }
      while ( v8 );
    }
    v6[1] = v12;
    return (int *)v12;
  }
  return result;
}
