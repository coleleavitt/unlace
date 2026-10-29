/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8FF0
// Address: 0x000B8FF0

//----- (000B8FF0) --------------------------------------------------------
unsigned int __cdecl sub_B8FF0(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int *v3; // edi
  _DWORD *v4; // esi
  unsigned int v5; // eax
  char *v6; // eax
  int v7; // ecx
  int v8; // edx
  _DWORD *v9; // edi
  int v10; // eax
  __int64 v11; // xmm0_8
  unsigned int v12; // eax
  char *v13; // eax
  int v14; // ecx
  int v15; // edx
  unsigned int v17; // [esp+4h] [ebp-28h]
  unsigned int v18; // [esp+8h] [ebp-24h]
  unsigned int v19; // [esp+8h] [ebp-24h]
  __int64 v20; // [esp+Ch] [ebp-20h]
  int v21; // [esp+14h] [ebp-18h]

  v2 = a2;
  v3 = a1;
  v4 = (_DWORD *)*a1;
  v17 = a1[2];
  if ( *a1 > a2 || (unsigned int)&v4[3 * v17] <= a2 )
  {
    v12 = a1[1];
    if ( v17 < v12 + 1 )
    {
      v4 = qvector_reserve((int)a1, nullptr, v12 + 1, 0xCu);
      v19 = a1[2];
      a1[2] = v17;
      v13 = (char *)*a1;
      v14 = a1[1] - 1;
      if ( v14 >= 0 )
      {
        v15 = 0;
        do
        {
          v4[v15 + 2] = *(_DWORD *)&v13[v15 * 4 + 8];
          *(_QWORD *)&v4[v15] = *(_QWORD *)&v13[v15 * 4];
          v15 += 3;
          --v14;
        }
        while ( v14 >= 0 );
        v3 = a1;
        v13 = (char *)*a1;
      }
      qfree(v13);
      *v3 = (unsigned int)v4;
      v3[2] = v19;
      v12 = v3[1];
      v2 = a2;
    }
    v9 = v3 + 1;
    v10 = 3 * v12;
    v4[v10 + 2] = *(_DWORD *)(v2 + 8);
    v11 = *(_QWORD *)v2;
  }
  else
  {
    v21 = *(_DWORD *)(a2 + 8);
    v20 = *(_QWORD *)a2;
    v5 = a1[1];
    if ( v17 < v5 + 1 )
    {
      v4 = qvector_reserve((int)a1, nullptr, v5 + 1, 0xCu);
      v18 = a1[2];
      a1[2] = v17;
      v6 = (char *)*a1;
      v7 = a1[1] - 1;
      if ( v7 >= 0 )
      {
        v8 = 0;
        do
        {
          v4[v8 + 2] = *(_DWORD *)&v6[v8 * 4 + 8];
          *(_QWORD *)&v4[v8] = *(_QWORD *)&v6[v8 * 4];
          v8 += 3;
          --v7;
        }
        while ( v7 >= 0 );
        v3 = a1;
        v6 = (char *)*a1;
      }
      qfree(v6);
      *v3 = (unsigned int)v4;
      v3[2] = v18;
      v5 = v3[1];
    }
    v9 = v3 + 1;
    v10 = 3 * v5;
    v4[v10 + 2] = v21;
    v11 = v20;
  }
  *(_QWORD *)&v4[v10] = v11;
  ++*v9;
  return __readgsdword(0x14u);
}
