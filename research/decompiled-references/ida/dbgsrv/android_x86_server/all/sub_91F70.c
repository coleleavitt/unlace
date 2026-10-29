/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91F70
// Address: 0x00091F70

//----- (00091F70) --------------------------------------------------------
unsigned int __cdecl sub_91F70(char **a1, unsigned int a2, char *a3)
{
  unsigned int v3; // ecx
  char *v4; // eax
  unsigned int v5; // esi
  int v6; // edx
  int v7; // edx
  unsigned int v8; // eax
  char *v9; // ecx
  int v10; // edx
  __int64 v11; // xmm0_8
  int v12; // edx
  unsigned int v13; // eax
  char *v14; // ecx
  __int64 v15; // xmm0_8
  __int64 v17; // [esp+8h] [ebp-24h]
  __int64 v18; // [esp+10h] [ebp-1Ch]

  v3 = (unsigned int)a1[1];
  if ( v3 <= a2 )
  {
    if ( v3 < a2 )
    {
      v4 = *a1;
      v5 = (unsigned int)a1[2];
      if ( *a1 > a3 || &v4[16 * v5] <= a3 )
      {
        if ( v5 < a2 )
        {
          v4 = (char *)qvector_reserve((int)a1, v4, a2, 0x10u);
          *a1 = v4;
          v3 = (unsigned int)a1[1];
        }
        if ( v3 < a2 )
        {
          v10 = 16 * v3;
          v11 = *(_QWORD *)a3;
          *(_QWORD *)&v4[v10 + 8] = *((_QWORD *)a3 + 1);
          *(_QWORD *)&v4[v10] = v11;
          if ( v3 + 1 != a2 )
          {
            v12 = v10 + 16;
            v13 = a2 - 1 - v3;
            do
            {
              v14 = *a1;
              v15 = *(_QWORD *)a3;
              *(_QWORD *)&v14[v12 + 8] = *((_QWORD *)a3 + 1);
              *(_QWORD *)&v14[v12] = v15;
              v12 += 16;
              --v13;
            }
            while ( v13 );
          }
        }
        a1[1] = (char *)a2;
      }
      else
      {
        v18 = *((_QWORD *)a3 + 1);
        v17 = *(_QWORD *)a3;
        if ( v5 < a2 )
        {
          v4 = (char *)qvector_reserve((int)a1, v4, a2, 0x10u);
          *a1 = v4;
          v3 = (unsigned int)a1[1];
        }
        if ( v3 < a2 )
        {
          v6 = 16 * v3;
          *(_QWORD *)&v4[v6 + 8] = v18;
          *(_QWORD *)&v4[v6] = v17;
          if ( v3 + 1 != a2 )
          {
            v7 = v6 + 16;
            v8 = a2 - 1 - v3;
            do
            {
              v9 = *a1;
              *(_QWORD *)&v9[v7 + 8] = v18;
              *(_QWORD *)&v9[v7] = v17;
              v7 += 16;
              --v8;
            }
            while ( v8 );
          }
        }
        a1[1] = (char *)a2;
      }
    }
  }
  else
  {
    a1[1] = (char *)a2;
  }
  return __readgsdword(0x14u);
}
