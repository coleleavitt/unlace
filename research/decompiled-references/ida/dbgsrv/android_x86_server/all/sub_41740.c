/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41740
// Address: 0x00041740

//----- (00041740) --------------------------------------------------------
unsigned int __cdecl sub_41740(int *a1, unsigned int a2, char *a3)
{
  unsigned int v3; // ecx
  char *v4; // eax
  unsigned int v5; // edi
  int *v6; // edi
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int64 v9; // xmm0_8
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // xmm0_8
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // ecx
  __int64 v19; // [esp+8h] [ebp-54h]
  __int64 v20; // [esp+10h] [ebp-4Ch]
  __int64 v21; // [esp+18h] [ebp-44h]
  __int64 v22; // [esp+20h] [ebp-3Ch]
  __int64 v23; // [esp+28h] [ebp-34h]
  __int64 v24; // [esp+30h] [ebp-2Ch]
  __int64 v25; // [esp+38h] [ebp-24h]
  __int64 v26; // [esp+40h] [ebp-1Ch]

  v3 = a1[1];
  if ( v3 > a2 )
  {
    a1[1] = a2;
    return __readgsdword(0x14u);
  }
  if ( v3 >= a2 )
    return __readgsdword(0x14u);
  v4 = (char *)*a1;
  v5 = a1[2];
  if ( *a1 <= (unsigned int)a3 && &v4[64 * v5] > a3 )
  {
    v26 = *((_QWORD *)a3 + 7);
    v25 = *((_QWORD *)a3 + 6);
    v24 = *((_QWORD *)a3 + 5);
    v23 = *((_QWORD *)a3 + 4);
    v22 = *((_QWORD *)a3 + 3);
    v21 = *((_QWORD *)a3 + 2);
    v20 = *((_QWORD *)a3 + 1);
    v19 = *(_QWORD *)a3;
    if ( v5 >= a2 )
    {
      v6 = a1;
      if ( v3 >= a2 )
      {
LABEL_20:
        v6[1] = a2;
        return __readgsdword(0x14u);
      }
    }
    else
    {
      v6 = a1;
      v4 = (char *)qvector_reserve((int)a1, v4, a2, 0x40u);
      *a1 = (int)v4;
      v3 = a1[1];
      if ( v3 >= a2 )
        goto LABEL_20;
    }
    v14 = v3 << 6;
    *(_QWORD *)&v4[v14 + 56] = v26;
    *(_QWORD *)&v4[v14 + 48] = v25;
    *(_QWORD *)&v4[v14 + 40] = v24;
    *(_QWORD *)&v4[v14 + 32] = v23;
    *(_QWORD *)&v4[v14 + 24] = v22;
    *(_QWORD *)&v4[v14 + 16] = v21;
    *(_QWORD *)&v4[v14 + 8] = v20;
    *(_QWORD *)&v4[v14] = v19;
    if ( v3 + 1 != a2 )
    {
      v15 = v14 + 64;
      v16 = a2 - 1 - v3;
      do
      {
        v17 = *v6;
        *(_QWORD *)(v17 + v15 + 56) = v26;
        *(_QWORD *)(v17 + v15 + 48) = v25;
        *(_QWORD *)(v17 + v15 + 40) = v24;
        *(_QWORD *)(v17 + v15 + 32) = v23;
        *(_QWORD *)(v17 + v15 + 24) = v22;
        *(_QWORD *)(v17 + v15 + 16) = v21;
        *(_QWORD *)(v17 + v15 + 8) = v20;
        *(_QWORD *)(v17 + v15) = v19;
        v15 += 64;
        --v16;
      }
      while ( v16 );
    }
    goto LABEL_20;
  }
  v7 = a2;
  if ( v5 < a2 )
  {
    v4 = (char *)qvector_reserve((int)a1, v4, a2, 0x40u);
    v7 = a2;
    *a1 = (int)v4;
    v3 = a1[1];
  }
  if ( v3 < v7 )
  {
    v8 = v3 << 6;
    *(_QWORD *)&v4[v8 + 56] = *((_QWORD *)a3 + 7);
    *(_QWORD *)&v4[v8 + 48] = *((_QWORD *)a3 + 6);
    *(_QWORD *)&v4[v8 + 40] = *((_QWORD *)a3 + 5);
    *(_QWORD *)&v4[v8 + 32] = *((_QWORD *)a3 + 4);
    *(_QWORD *)&v4[v8 + 24] = *((_QWORD *)a3 + 3);
    *(_QWORD *)&v4[v8 + 16] = *((_QWORD *)a3 + 2);
    v9 = *(_QWORD *)a3;
    *(_QWORD *)&v4[v8 + 8] = *((_QWORD *)a3 + 1);
    *(_QWORD *)&v4[v8] = v9;
    if ( v3 + 1 != a2 )
    {
      v10 = v8 + 64;
      v11 = a2 - 1 - v3;
      do
      {
        v12 = *a1;
        *(_QWORD *)(v12 + v10 + 56) = *((_QWORD *)a3 + 7);
        *(_QWORD *)(v12 + v10 + 48) = *((_QWORD *)a3 + 6);
        *(_QWORD *)(v12 + v10 + 40) = *((_QWORD *)a3 + 5);
        *(_QWORD *)(v12 + v10 + 32) = *((_QWORD *)a3 + 4);
        *(_QWORD *)(v12 + v10 + 24) = *((_QWORD *)a3 + 3);
        *(_QWORD *)(v12 + v10 + 16) = *((_QWORD *)a3 + 2);
        v13 = *(_QWORD *)a3;
        *(_QWORD *)(v12 + v10 + 8) = *((_QWORD *)a3 + 1);
        *(_QWORD *)(v12 + v10) = v13;
        v10 += 64;
        --v11;
      }
      while ( v11 );
    }
  }
  a1[1] = a2;
  return __readgsdword(0x14u);
}
