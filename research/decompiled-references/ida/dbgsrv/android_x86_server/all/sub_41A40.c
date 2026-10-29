/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A40
// Address: 0x00041A40

//----- (00041A40) --------------------------------------------------------
unsigned int __cdecl sub_41A40(int *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  char *v5; // eax
  unsigned int v6; // edx
  int *v7; // esi
  int v8; // edx
  __int64 v9; // xmm0_8
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // xmm0_8
  int v14; // edx
  int v15; // edx
  unsigned int v16; // eax
  int v17; // ecx
  __int64 v19; // [esp+0h] [ebp-4Ch]
  __int64 v20; // [esp+8h] [ebp-44h]
  __int64 v21; // [esp+10h] [ebp-3Ch]
  __int64 v22; // [esp+18h] [ebp-34h]
  __int64 v23; // [esp+20h] [ebp-2Ch]
  __int64 v24; // [esp+28h] [ebp-24h]
  __int64 v25; // [esp+30h] [ebp-1Ch]

  v3 = a2;
  v4 = a1[1];
  if ( v4 > a2 )
  {
    a1[1] = a2;
    return __readgsdword(0x14u);
  }
  if ( v4 >= a2 )
    return __readgsdword(0x14u);
  v5 = (char *)*a1;
  v6 = a1[2];
  if ( *a1 <= (unsigned int)a3 )
  {
    v3 = a2;
    if ( &v5[56 * v6] > a3 )
    {
      v25 = *((_QWORD *)a3 + 6);
      v24 = *((_QWORD *)a3 + 5);
      v23 = *((_QWORD *)a3 + 4);
      v22 = *((_QWORD *)a3 + 3);
      v21 = *((_QWORD *)a3 + 2);
      v20 = *((_QWORD *)a3 + 1);
      v19 = *(_QWORD *)a3;
      if ( v6 >= a2 )
      {
        v7 = a1;
        if ( v4 >= a2 )
        {
LABEL_20:
          v7[1] = a2;
          return __readgsdword(0x14u);
        }
      }
      else
      {
        v7 = a1;
        v5 = (char *)qvector_reserve((int)a1, v5, a2, 0x38u);
        *a1 = (int)v5;
        v4 = a1[1];
        if ( v4 >= a2 )
          goto LABEL_20;
      }
      v14 = 56 * v4;
      *(_QWORD *)&v5[v14 + 48] = v25;
      *(_QWORD *)&v5[v14 + 40] = v24;
      *(_QWORD *)&v5[v14 + 32] = v23;
      *(_QWORD *)&v5[v14 + 24] = v22;
      *(_QWORD *)&v5[v14 + 16] = v21;
      *(_QWORD *)&v5[v14 + 8] = v20;
      *(_QWORD *)&v5[v14] = v19;
      if ( v4 + 1 != a2 )
      {
        v15 = v14 + 56;
        v16 = a2 - 1 - v4;
        do
        {
          v17 = *v7;
          *(_QWORD *)(v17 + v15 + 48) = v25;
          *(_QWORD *)(v17 + v15 + 40) = v24;
          *(_QWORD *)(v17 + v15 + 32) = v23;
          *(_QWORD *)(v17 + v15 + 24) = v22;
          *(_QWORD *)(v17 + v15 + 16) = v21;
          *(_QWORD *)(v17 + v15 + 8) = v20;
          *(_QWORD *)(v17 + v15) = v19;
          v15 += 56;
          --v16;
        }
        while ( v16 );
      }
      goto LABEL_20;
    }
  }
  if ( v6 < v3 )
  {
    v5 = (char *)qvector_reserve((int)a1, v5, v3, 0x38u);
    *a1 = (int)v5;
    v4 = a1[1];
  }
  if ( v4 < v3 )
  {
    v8 = 56 * v4;
    *(_QWORD *)&v5[v8 + 48] = *((_QWORD *)a3 + 6);
    *(_QWORD *)&v5[v8 + 40] = *((_QWORD *)a3 + 5);
    *(_QWORD *)&v5[v8 + 32] = *((_QWORD *)a3 + 4);
    *(_QWORD *)&v5[v8 + 24] = *((_QWORD *)a3 + 3);
    *(_QWORD *)&v5[v8 + 16] = *((_QWORD *)a3 + 2);
    v9 = *(_QWORD *)a3;
    *(_QWORD *)&v5[v8 + 8] = *((_QWORD *)a3 + 1);
    *(_QWORD *)&v5[v8] = v9;
    if ( v4 + 1 != v3 )
    {
      v10 = v8 + 56;
      v11 = v3 - 1 - v4;
      do
      {
        v12 = *a1;
        *(_QWORD *)(v12 + v10 + 48) = *((_QWORD *)a3 + 6);
        *(_QWORD *)(v12 + v10 + 40) = *((_QWORD *)a3 + 5);
        *(_QWORD *)(v12 + v10 + 32) = *((_QWORD *)a3 + 4);
        *(_QWORD *)(v12 + v10 + 24) = *((_QWORD *)a3 + 3);
        *(_QWORD *)(v12 + v10 + 16) = *((_QWORD *)a3 + 2);
        v13 = *(_QWORD *)a3;
        *(_QWORD *)(v12 + v10 + 8) = *((_QWORD *)a3 + 1);
        *(_QWORD *)(v12 + v10) = v13;
        v10 += 56;
        --v11;
      }
      while ( v11 );
    }
  }
  a1[1] = v3;
  return __readgsdword(0x14u);
}
