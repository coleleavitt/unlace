/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56630
// Address: 0x00056630

//----- (00056630) --------------------------------------------------------
char *__cdecl sub_56630(char **a1, char *a2)
{
  char **v2; // edx
  char *v3; // esi
  unsigned int v4; // edi
  char *result; // eax
  char *v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  char *v9; // edx
  char *v10; // edi
  int v11; // ecx
  char **v12; // edi
  char *v13; // ecx
  unsigned int v14; // edi
  int v15; // eax
  char *v16; // edx
  char *v17; // edi
  int v18; // ecx
  char **v19; // edi
  _DWORD *v20; // edx
  int v21; // ecx
  unsigned int v22; // edi
  int v23; // ebx
  __int128 v24; // xmm1
  unsigned int v25; // edi
  int v26; // ebx
  __int128 v27; // xmm1
  unsigned int v28; // [esp+8h] [ebp-24h]
  unsigned int v29; // [esp+8h] [ebp-24h]
  char *v30; // [esp+Ch] [ebp-20h]
  char *v31; // [esp+Ch] [ebp-20h]
  int v32; // [esp+10h] [ebp-1Ch]
  char *v33; // [esp+10h] [ebp-1Ch]
  char *v34; // [esp+18h] [ebp-14h]

  v2 = a1;
  v3 = *a1;
  v4 = (unsigned int)a1[2];
  if ( *a1 > a2 || &v3[4 * v4] <= a2 )
  {
    result = a1[1];
    if ( v4 >= (unsigned int)(result + 1) )
    {
LABEL_26:
      v20 = v2 + 1;
      v21 = *(_DWORD *)a2;
      goto LABEL_27;
    }
    v3 = (char *)qvector_reserve((int)a1, nullptr, (unsigned int)(result + 1), 4u);
    v33 = a1[2];
    a1[2] = (char *)v4;
    v13 = *a1;
    v14 = (unsigned int)a1[1];
    v15 = v14 - 1;
    if ( (int)(v14 - 1) < 0 )
    {
      v19 = a1;
      goto LABEL_25;
    }
    if ( v14 >= 8 && (v3 >= &v13[4 * v14] || &v3[4 * v14] <= v13) )
    {
      v31 = a1[1];
      v25 = v14 & 0xFFFFFFF8;
      v15 -= v25;
      v16 = &v3[4 * v25];
      v29 = v25;
      v17 = &v13[4 * v25];
      v26 = 0;
      do
      {
        v27 = *(_OWORD *)&v13[4 * v26 + 16];
        *(_OWORD *)&v3[4 * v26] = *(_OWORD *)&v13[4 * v26];
        *(_OWORD *)&v3[4 * v26 + 16] = v27;
        v26 += 8;
      }
      while ( v29 != v26 );
      if ( v31 == (char *)v29 )
        goto LABEL_20;
    }
    else
    {
      v16 = v3;
      v17 = *a1;
    }
    v18 = 0;
    do
    {
      *(_DWORD *)&v16[v18] = *(_DWORD *)&v17[v18];
      v18 += 4;
      --v15;
    }
    while ( v15 >= 0 );
LABEL_20:
    v19 = a1;
    v13 = *a1;
LABEL_25:
    qfree(v13);
    *v19 = v3;
    v19[2] = v33;
    result = v19[1];
    v2 = v19;
    goto LABEL_26;
  }
  v32 = *(_DWORD *)a2;
  result = a1[1];
  if ( v4 < (unsigned int)(result + 1) )
  {
    v3 = (char *)qvector_reserve((int)a1, nullptr, (unsigned int)(result + 1), 4u);
    v30 = a1[2];
    a1[2] = (char *)v4;
    v6 = *a1;
    v7 = (unsigned int)a1[1];
    v8 = v7 - 1;
    if ( (int)(v7 - 1) < 0 )
    {
      v12 = a1;
      goto LABEL_22;
    }
    if ( v7 >= 8 && (v3 >= &v6[4 * v7] || &v3[4 * v7] <= v6) )
    {
      v34 = a1[1];
      v22 = v7 & 0xFFFFFFF8;
      v8 -= v22;
      v9 = &v3[4 * v22];
      v28 = v22;
      v10 = &v6[4 * v22];
      v23 = 0;
      do
      {
        v24 = *(_OWORD *)&v6[4 * v23 + 16];
        *(_OWORD *)&v3[4 * v23] = *(_OWORD *)&v6[4 * v23];
        *(_OWORD *)&v3[4 * v23 + 16] = v24;
        v23 += 8;
      }
      while ( v28 != v23 );
      if ( v34 == (char *)v28 )
        goto LABEL_11;
    }
    else
    {
      v9 = v3;
      v10 = *a1;
    }
    v11 = 0;
    do
    {
      *(_DWORD *)&v9[v11] = *(_DWORD *)&v10[v11];
      v11 += 4;
      --v8;
    }
    while ( v8 >= 0 );
LABEL_11:
    v12 = a1;
    v6 = *a1;
LABEL_22:
    qfree(v6);
    *v12 = v3;
    v12[2] = v30;
    result = v12[1];
    v2 = v12;
  }
  v20 = v2 + 1;
  v21 = v32;
LABEL_27:
  *(_DWORD *)&v3[4 * (_DWORD)result] = v21;
  ++*v20;
  return result;
}
