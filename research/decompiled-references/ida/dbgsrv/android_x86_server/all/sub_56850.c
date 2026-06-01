/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56850
// Address: 0x00056850

//----- (00056850) --------------------------------------------------------
char *__cdecl sub_56850(char **a1)
{
  char **v1; // edi
  char *v2; // ecx
  unsigned int v3; // esi
  char *v4; // ecx
  char *v5; // edi
  int v6; // edx
  int v7; // esi
  void *v8; // eax
  char **v9; // esi
  char *v10; // edx
  char *result; // eax
  char *v12; // [esp+0h] [ebp-1Ch]
  char *v13; // [esp+4h] [ebp-18h]
  int v14; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = a1[1];
  v3 = (unsigned int)a1[2];
  if ( v3 >= (unsigned int)(v2 + 1) )
  {
    v10 = *a1;
  }
  else
  {
    v4 = (char *)qvector_reserve((int)a1, nullptr, (unsigned int)(v2 + 1), 0x10u);
    v13 = a1[2];
    a1[2] = (char *)v3;
    v5 = *a1;
    v6 = (int)(a1[1] - 1);
    v12 = v4;
    if ( v6 < 0 )
    {
      v9 = a1;
    }
    else
    {
      v7 = 0;
      do
      {
        *(_DWORD *)&v4[v7] = *(_DWORD *)&v5[v7];
        *(_DWORD *)&v5[v7] = 0;
        *(_DWORD *)&v4[v7 + 4] = *(_DWORD *)&v5[v7 + 4];
        *(_DWORD *)&v5[v7 + 4] = 0;
        *(_DWORD *)&v4[v7 + 8] = *(_DWORD *)&v5[v7 + 8];
        *(_DWORD *)&v5[v7 + 8] = 0;
        *(_DWORD *)&v4[v7 + 12] = *(_DWORD *)&v5[v7 + 12];
        v8 = *(void **)&v5[v7];
        if ( v8 )
        {
          v14 = v6;
          *(_DWORD *)&v5[v7 + 4] = 0;
          qfree(v8);
          *(_DWORD *)&v5[v7] = 0;
          *(_DWORD *)&v5[v7 + 8] = 0;
          v4 = v12;
          v6 = v14;
        }
        v7 += 16;
        --v6;
      }
      while ( v6 >= 0 );
      v9 = a1;
      v5 = *a1;
    }
    qfree(v5);
    v10 = v12;
    *v9 = v12;
    v9[2] = v13;
    v2 = v9[1];
    v1 = v9;
  }
  result = &v10[16 * (_DWORD)v2];
  *(_DWORD *)result = 0;
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  ++v1[1];
  return result;
}
