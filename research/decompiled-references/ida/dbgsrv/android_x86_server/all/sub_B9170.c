/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9170
// Address: 0x000B9170

//----- (000B9170) --------------------------------------------------------
unsigned int __cdecl sub_B9170(int *a1, char **a2)
{
  int *v2; // edi
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // edi
  char *v7; // eax
  int v8; // edi
  char *v9; // edi
  unsigned int v10; // esi
  _BYTE *v11; // edx
  int v12; // eax
  int v13; // edi
  _BYTE *v14; // edi
  int v15; // eax
  _BYTE *v16; // eax
  bool v17; // zf
  char *v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // esi
  char *v22; // esi
  _BYTE *v24; // [esp+0h] [ebp-1Ch]
  char v25; // [esp+6h] [ebp-16h] BYREF
  char v26; // [esp+7h] [ebp-15h] BYREF
  unsigned int v27; // [esp+8h] [ebp-14h]

  v2 = a1;
  v27 = __readgsdword(0x14u);
  v3 = a1[1];
  v4 = 11 * v3 + 5;
  v5 = (unsigned int)a2[1];
  if ( v5 >= v4 )
  {
    if ( v5 != v4 )
    {
      v25 = 0;
      v8 = 11 * v3 + 5;
      sub_43860(a2, v4, &v25);
      v4 = v8;
      v2 = a1;
    }
  }
  else
  {
    if ( (unsigned int)a2[2] >= v4 )
    {
      v7 = *a2;
    }
    else
    {
      v6 = 11 * v3 + 5;
      v7 = (char *)qvector_reserve((int)a2, *a2, v6, 1u);
      v4 = v6;
      *a2 = v7;
      v5 = (unsigned int)a2[1];
    }
    v9 = (char *)v4;
    memset(&v7[v5], 0, v4 - v5);
    v4 = (unsigned int)v9;
    a2[1] = v9;
    v2 = a1;
  }
  v10 = (unsigned int)&(*a2)[v4];
  v11 = pack_dd(*a2, v10, v2[1]);
  v12 = 12 * v2[1];
  if ( v12 )
  {
    v13 = *v2;
    v24 = (_BYTE *)(v13 + v12);
    v14 = (_BYTE *)(v13 + 8);
    v15 = 0;
    do
    {
      if ( (unsigned int)v11 < v10 )
        *v11++ = *v14;
      v16 = pack_dd(v11, v10, *((_DWORD *)v14 - 2) - v15);
      v11 = pack_dd(v16, v10, *((_DWORD *)v14 - 1) - *((_DWORD *)v14 - 2));
      v15 = *((_DWORD *)v14 - 1);
      v17 = v14 + 4 == v24;
      v14 += 12;
    }
    while ( !v17 );
  }
  v18 = *a2;
  v19 = (unsigned int)a2[1];
  v20 = v11 - *a2;
  if ( v19 >= v20 )
  {
    if ( v19 != v20 )
    {
      v26 = 0;
      sub_43860(a2, v20, &v26);
    }
  }
  else
  {
    if ( (unsigned int)a2[2] < v20 )
    {
      v21 = v20;
      v18 = (char *)qvector_reserve((int)a2, v18, v20, 1u);
      v20 = v21;
      *a2 = v18;
      v19 = (unsigned int)a2[1];
    }
    v22 = (char *)v20;
    memset(&v18[v19], 0, v20 - v19);
    a2[1] = v22;
  }
  return __readgsdword(0x14u);
}
