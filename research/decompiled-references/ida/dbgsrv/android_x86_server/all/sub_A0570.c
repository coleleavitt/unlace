/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A0570
// Address: 0x000A0570

//----- (000A0570) --------------------------------------------------------
char *__cdecl sub_A0570(char **a1)
{
  char **v1; // edi
  char *v2; // eax
  unsigned int v3; // esi
  char *v4; // ecx
  char *v5; // edi
  int v6; // edx
  char *v7; // edi
  int v8; // esi
  void *v9; // eax
  char **v10; // esi
  char *v11; // edx
  char *result; // eax
  char *v13; // [esp+0h] [ebp-1Ch]
  char *v14; // [esp+4h] [ebp-18h]
  int v15; // [esp+8h] [ebp-14h]

  v1 = a1;
  v2 = a1[1];
  v3 = (unsigned int)a1[2];
  if ( v3 >= (unsigned int)(v2 + 1) )
  {
    v11 = *a1;
  }
  else
  {
    v4 = (char *)qvector_reserve((int)a1, nullptr, (unsigned int)(v2 + 1), 0x1Cu);
    v14 = a1[2];
    a1[2] = (char *)v3;
    v5 = *a1;
    v6 = (int)(a1[1] - 1);
    v13 = v4;
    if ( v6 < 0 )
    {
      v10 = a1;
    }
    else
    {
      v7 = v5 + 16;
      v8 = 0;
      do
      {
        *(_DWORD *)&v4[v8] = *(_DWORD *)&v7[v8 - 16];
        *(_DWORD *)&v4[v8 + 4] = *(_DWORD *)&v7[v8 - 12];
        *(_DWORD *)&v7[v8 - 12] = 0;
        *(_DWORD *)&v4[v8 + 8] = *(_DWORD *)&v7[v8 - 8];
        *(_DWORD *)&v7[v8 - 8] = 0;
        *(_DWORD *)&v4[v8 + 12] = *(_DWORD *)&v7[v8 - 4];
        *(_DWORD *)&v7[v8 - 4] = 0;
        *(_DWORD *)&v4[v8 + 24] = *(_DWORD *)&v7[v8 + 8];
        *(_QWORD *)&v4[v8 + 16] = *(_QWORD *)&v7[v8];
        v9 = *(void **)&v7[v8 - 12];
        if ( v9 )
        {
          v15 = v6;
          *(_DWORD *)&v7[v8 - 8] = 0;
          qfree(v9);
          *(_DWORD *)&v7[v8 - 12] = 0;
          *(_DWORD *)&v7[v8 - 4] = 0;
          v4 = v13;
          v6 = v15;
        }
        v8 += 28;
        --v6;
      }
      while ( v6 >= 0 );
      v10 = a1;
      v5 = *a1;
    }
    qfree(v5);
    v11 = v13;
    *v10 = v13;
    v10[2] = v14;
    v2 = v10[1];
    v1 = v10;
  }
  result = &v11[28 * (_DWORD)v2];
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  ++v1[1];
  return result;
}
