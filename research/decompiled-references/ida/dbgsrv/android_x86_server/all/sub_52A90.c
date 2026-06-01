/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52A90
// Address: 0x00052A90

//----- (00052A90) --------------------------------------------------------
unsigned int __cdecl sub_52A90(unsigned int *a1, unsigned int a2)
{
  unsigned int *v2; // edx
  char *v3; // esi
  unsigned int v4; // edi
  unsigned int result; // eax
  char *v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  char *v9; // edx
  char *v10; // edi
  int v11; // ecx
  unsigned int *v12; // edi
  char *v13; // ecx
  unsigned int v14; // edi
  int v15; // eax
  char *v16; // edx
  char *v17; // edi
  int v18; // ecx
  unsigned int *v19; // edi
  _DWORD *v20; // edx
  unsigned int v21; // edi
  int v22; // ebx
  __int128 v23; // xmm1
  unsigned int v24; // edi
  int v25; // ebx
  __int128 v26; // xmm1
  unsigned int v27; // [esp+8h] [ebp-24h]
  unsigned int v28; // [esp+8h] [ebp-24h]
  int v29; // [esp+Ch] [ebp-20h]
  unsigned int v30; // [esp+Ch] [ebp-20h]
  int v31; // [esp+10h] [ebp-1Ch]
  unsigned int v32; // [esp+10h] [ebp-1Ch]
  unsigned int v33; // [esp+14h] [ebp-18h]
  unsigned int v34; // [esp+18h] [ebp-14h]

  v2 = a1;
  v3 = (char *)*a1;
  v4 = a1[2];
  if ( *a1 > a2 || (unsigned int)&v3[8 * v4] <= a2 )
  {
    result = a1[1];
    if ( v4 >= result + 1 )
    {
LABEL_26:
      v20 = v2 + 1;
      *(_QWORD *)&v3[8 * result] = *(_QWORD *)a2;
      goto LABEL_27;
    }
    v3 = (char *)qvector_reserve((int)a1, nullptr, result + 1, 8u);
    v32 = a1[2];
    a1[2] = v4;
    v13 = (char *)*a1;
    v14 = a1[1];
    v15 = v14 - 1;
    if ( (int)(v14 - 1) < 0 )
    {
      v19 = a1;
      goto LABEL_25;
    }
    if ( v14 >= 4 && (v3 >= &v13[8 * v14] || &v3[8 * v14] <= v13) )
    {
      v30 = a1[1];
      v24 = v14 & 0xFFFFFFFC;
      v15 -= v24;
      v16 = &v3[8 * v24];
      v28 = v24;
      v17 = &v13[8 * v24];
      v25 = 0;
      do
      {
        v26 = *(_OWORD *)&v13[8 * v25 + 16];
        *(_OWORD *)&v3[8 * v25] = *(_OWORD *)&v13[8 * v25];
        *(_OWORD *)&v3[8 * v25 + 16] = v26;
        v25 += 4;
      }
      while ( v28 != v25 );
      if ( v30 == v28 )
        goto LABEL_20;
    }
    else
    {
      v16 = v3;
      v17 = (char *)*a1;
    }
    v18 = 0;
    do
    {
      *(_QWORD *)&v16[v18] = *(_QWORD *)&v17[v18];
      v18 += 8;
      --v15;
    }
    while ( v15 >= 0 );
LABEL_20:
    v19 = a1;
    v13 = (char *)*a1;
LABEL_25:
    qfree(v13);
    *v19 = (unsigned int)v3;
    v19[2] = v32;
    result = v19[1];
    v2 = v19;
    goto LABEL_26;
  }
  v31 = *(_DWORD *)a2;
  v29 = *(_DWORD *)(a2 + 4);
  result = a1[1];
  if ( v4 < result + 1 )
  {
    v3 = (char *)qvector_reserve((int)a1, nullptr, result + 1, 8u);
    v34 = a1[2];
    a1[2] = v4;
    v6 = (char *)*a1;
    v7 = a1[1];
    v8 = v7 - 1;
    if ( (int)(v7 - 1) < 0 )
    {
      v12 = a1;
      goto LABEL_22;
    }
    if ( v7 >= 4 && (v3 >= &v6[8 * v7] || &v3[8 * v7] <= v6) )
    {
      v33 = a1[1];
      v21 = v7 & 0xFFFFFFFC;
      v8 -= v21;
      v9 = &v3[8 * v21];
      v27 = v21;
      v10 = &v6[8 * v21];
      v22 = 0;
      do
      {
        v23 = *(_OWORD *)&v6[8 * v22 + 16];
        *(_OWORD *)&v3[8 * v22] = *(_OWORD *)&v6[8 * v22];
        *(_OWORD *)&v3[8 * v22 + 16] = v23;
        v22 += 4;
      }
      while ( v27 != v22 );
      if ( v33 == v27 )
        goto LABEL_11;
    }
    else
    {
      v9 = v3;
      v10 = (char *)*a1;
    }
    v11 = 0;
    do
    {
      *(_QWORD *)&v9[v11] = *(_QWORD *)&v10[v11];
      v11 += 8;
      --v8;
    }
    while ( v8 >= 0 );
LABEL_11:
    v12 = a1;
    v6 = (char *)*a1;
LABEL_22:
    qfree(v6);
    *v12 = (unsigned int)v3;
    v12[2] = v34;
    result = v12[1];
    v2 = v12;
  }
  v20 = v2 + 1;
  *(_DWORD *)&v3[8 * result] = v31;
  *(_DWORD *)&v3[8 * result + 4] = v29;
LABEL_27:
  ++*v20;
  return result;
}
