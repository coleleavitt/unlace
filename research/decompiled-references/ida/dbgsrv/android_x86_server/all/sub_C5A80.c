/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5A80
// Address: 0x000C5A80

//----- (000C5A80) --------------------------------------------------------
char *__fastcall sub_C5A80(char **a1)
{
  char *v1; // eax
  char *v2; // edi
  unsigned int v3; // edx
  int v4; // esi
  char **v5; // esi
  char *v6; // eax
  char *v7; // ecx
  char *result; // eax
  char *v9; // edx
  char *v10; // eax
  char **v11; // edi
  char *v12; // eax
  char *v13; // edx
  char *v14; // esi
  char **v15; // ecx
  int v16; // esi
  int v17; // edi
  char *v18; // esi
  char *v19; // eax
  int v20; // ebx
  char *v21; // edi
  char *v22; // esi
  unsigned int v23; // esi
  char *v24; // edi
  int v25; // edx
  _DWORD *v26; // eax
  char *v27; // eax
  signed int v28; // edi
  char *v29; // ecx
  _DWORD *v30; // ebx
  _DWORD *v31; // eax
  char **v32; // edx
  int v33; // edi
  char *v34; // esi
  int v35; // ecx
  char **v36; // edi
  _DWORD *v37; // eax
  _DWORD *v38; // edx
  size_t v39; // [esp+4h] [ebp-38h]
  size_t v40; // [esp+8h] [ebp-34h]
  char **v41; // [esp+10h] [ebp-2Ch]
  int v42; // [esp+14h] [ebp-28h]
  char *v43; // [esp+14h] [ebp-28h]
  int v44; // [esp+14h] [ebp-28h]
  char **v45; // [esp+18h] [ebp-24h]
  char *v46; // [esp+18h] [ebp-24h]
  char *v47; // [esp+18h] [ebp-24h]
  int v48; // [esp+20h] [ebp-1Ch]
  int v49; // [esp+20h] [ebp-1Ch]
  int v50; // [esp+24h] [ebp-18h]
  char **v51; // [esp+28h] [ebp-14h]

  v1 = *a1;
  v41 = a1;
  v2 = a1[1];
  v3 = v2 - *a1;
  if ( !v3 )
    return sub_C2AF0(a1);
  v4 = *v1;
  if ( v4 != 74 )
  {
    if ( v4 == 76 )
    {
      if ( v3 < 2 || v1[1] != 90 )
        return sub_CC680(a1);
      v5 = a1;
      *a1 = v1 + 2;
      v6 = sub_C1A20(a1);
      goto LABEL_6;
    }
    if ( v4 == 88 )
    {
      v5 = a1;
      *a1 = v1 + 1;
      v6 = sub_C8090((int)a1);
LABEL_6:
      v7 = v6;
      result = nullptr;
      if ( v7 )
      {
        v9 = *v5;
        if ( *v5 != v5[1] && *v9 == 69 )
        {
          *v41 = v9 + 1;
          return v7;
        }
      }
      return result;
    }
    return sub_C2AF0(a1);
  }
  v10 = v1 + 1;
  *a1 = v10;
  v48 = (a1[3] - a1[2]) >> 2;
  v45 = a1 + 5;
  if ( v10 != v2 )
    goto LABEL_15;
  do
  {
    do
    {
      v11 = a1;
      v12 = sub_C5A80(a1);
      if ( !v12 )
        return nullptr;
      v13 = v12;
      v14 = v11[3];
      a1 = v11;
      if ( v14 == v11[4] )
      {
        v15 = (char **)v11[2];
        v16 = v14 - (char *)v15;
        v17 = v16 >> 2;
        v42 = v16 >> 1;
        if ( v45 == v15 )
        {
          v51 = v15;
          v50 = v16 >> 2;
          v21 = v12;
          v19 = (char *)malloc(2 * v16);
          if ( v16 )
          {
            v40 = v16;
            v22 = v19;
            memmove(v19, v51, v40);
            a1 = v41;
            v13 = v21;
            v17 = v50;
            v20 = v42;
            v19 = v22;
            goto LABEL_23;
          }
          a1 = v41;
          v13 = v21;
          v17 = 0;
        }
        else
        {
          v39 = 2 * v16;
          v18 = v12;
          v19 = (char *)realloc(v15, v39);
          v13 = v18;
          a1 = v41;
        }
        v20 = v42;
LABEL_23:
        a1[2] = v19;
        v14 = &v19[4 * v17];
        a1[3] = v14;
        a1[4] = &v19[4 * v20];
      }
      a1[3] = v14 + 4;
      *(_DWORD *)v14 = v13;
      v10 = *a1;
    }
    while ( *a1 == a1[1] );
LABEL_15:
    ;
  }
  while ( *v10 != 69 );
  *a1 = v10 + 1;
  v49 = 4 * v48;
  v46 = &a1[2][v49];
  v43 = (char *)(a1[3] - v46);
  v23 = (unsigned int)(v43 + 15) & 0xFFFFFFF0;
  v24 = a1[1116];
  v25 = *((_DWORD *)v24 + 1);
  if ( v23 + v25 < 0xFF8 )
  {
    v30 = v24 + 4;
  }
  else
  {
    if ( v23 >= 0xFF9 )
    {
      v26 = operator new[](v23 | 8);
      *v26 = *(_DWORD *)v24;
      v26[1] = 0;
      *(_DWORD *)v24 = v26;
      v27 = (char *)(v26 + 2);
      v28 = (signed int)v43;
      v29 = v46;
      goto LABEL_36;
    }
    v31 = operator new[](0x1000u);
    *v31 = v24;
    v31[1] = 0;
    v41[1116] = (char *)v31;
    v25 = 0;
    v30 = v31 + 1;
    v24 = (char *)v31;
  }
  v29 = v46;
  *v30 = v25 + v23;
  v27 = &v24[v25 + 8];
  v28 = (signed int)v43;
LABEL_36:
  v47 = v27;
  if ( v28 )
  {
    memmove(v27, v29, v28);
    v32 = v41;
    v29 = &v41[2][v49];
  }
  else
  {
    v32 = v41;
  }
  v33 = v28 >> 2;
  v32[3] = v29;
  v34 = v32[1116];
  v35 = *((_DWORD *)v34 + 1);
  if ( (unsigned int)(v35 + 16) < 0xFF8 )
  {
    v38 = v34 + 4;
  }
  else
  {
    v44 = v33;
    v36 = v32;
    v37 = operator new[](0x1000u);
    *v37 = v34;
    v37[1] = 0;
    v36[1116] = (char *)v37;
    v33 = v44;
    v35 = 0;
    v38 = v37 + 1;
    v34 = (char *)v37;
  }
  *v38 = v35 + 16;
  *(_DWORD *)&v34[v35 + 12] = 16843036;
  *(_DWORD *)&v34[v35 + 8] = off_13A744;
  *(_DWORD *)&v34[v35 + 16] = v47;
  *(_DWORD *)&v34[v35 + 20] = v33;
  return &v34[v35 + 8];
}
// 13A744: using guessed type int (*off_13A744[3])();
