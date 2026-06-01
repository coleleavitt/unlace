/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426720
// Address: 0x00426720

//----- (00426720) --------------------------------------------------------
char *__thiscall sub_426720(_DWORD *this, const char *a2, const char **a3)
{
  LPVOID *v3; // esi
  unsigned int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edi
  unsigned int v8; // esi
  char *result; // eax
  _DWORD *v10; // ecx
  int *v11; // ebx
  unsigned int v12; // eax
  const char ***v13; // ecx
  const char **v14; // edx
  const char **v15; // edi
  const char **v16; // esi
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  _DWORD *v20; // esi
  int v21; // edi
  _DWORD *v22; // ecx
  int i; // edx
  _DWORD *v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // esi
  unsigned int v28; // eax
  char *v29; // eax
  int v30; // ecx
  _DWORD *v31; // esi
  int v32; // ebx
  _DWORD *v33; // edi
  int v34; // eax
  int v35; // eax
  void *v36; // eax
  unsigned int v37; // esi
  unsigned int v38; // eax
  char *v39; // eax
  int v40; // ecx
  _DWORD *v41; // esi
  int v42; // ebx
  _DWORD *v43; // edi
  int v44; // eax
  int v45; // eax
  void *v46; // eax
  __int8 *v47; // [esp+10h] [ebp-30h] BYREF
  int v48; // [esp+1Ch] [ebp-24h]
  const char **v49; // [esp+20h] [ebp-20h]
  const char ***v50; // [esp+24h] [ebp-1Ch]
  const char ***v51; // [esp+28h] [ebp-18h]
  unsigned int v52; // [esp+2Ch] [ebp-14h]
  _DWORD *v53; // [esp+30h] [ebp-10h]
  int v54; // [esp+3Ch] [ebp-4h]
  const char *v55; // [esp+48h] [ebp+8h]

  v53 = this;
  v3 = (LPVOID *)(this + 2);
  v4 = *(this + 3) + 1;
  if ( v4 > *(this + 4) )
    *v3 = sub_453B00((int)(this + 2), *v3, v4, 0xCu);
  v5 = 3 * (_DWORD)v3[1];
  v6 = *v3;
  v6[v5] = 0;
  v6[v5 + 1] = 0;
  v6[v5 + 2] = 0;
  v3[1] = (char *)v3[1] + 1;
  v7 = (int)&v6[v5];
  if ( a2 && (v8 = strlen(a2)) != 0 )
  {
    if ( v8 + 1 > *(_DWORD *)(v7 + 8) )
      *(_DWORD *)v7 = sub_453B00(v7, *(void **)v7, v8 + 1, 1u);
    *(_DWORD *)(v7 + 4) = v8 + 1;
    sub_464310(*(_DWORD *)v7, (unsigned int)a2, v8);
    *(_BYTE *)(v8 + *(_DWORD *)v7) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 4) = 0;
  }
  result = sub_45ADE0(*(__int8 **)v7, &dword_48BE90, &v47);
  v55 = result;
  if ( result )
  {
    v10 = v53;
    v11 = v53 + 5;
    do
    {
      v12 = 0;
      v52 = 0;
      if ( v10[6] )
      {
        v13 = (const char ***)*v11;
        v50 = v13;
        v51 = v13;
        while ( 1 )
        {
          v14 = *v13;
          v48 = 4 * (_DWORD)v13[1];
          v49 = v14;
          v15 = (const char **)((char *)v14 + v48);
          v16 = v14;
          if ( v14 != (const char **)((char *)v14 + v48) )
            break;
LABEL_19:
          ++v12;
          v13 += 4;
          v52 = v12;
          v51 = v13;
          if ( v12 >= v53[6] )
          {
            v10 = v53;
            goto LABEL_21;
          }
        }
        while ( 1 )
        {
          v17 = strcmp(*v16, v55);
          if ( v17 )
            v17 = v17 < 0 ? -1 : 1;
          if ( !v17 )
            break;
          if ( ++v16 == v15 )
          {
            v12 = v52;
            v13 = v51;
            goto LABEL_19;
          }
        }
        v21 = 4 * v52;
        if ( v50[4 * v52 + 3] == a3 )
          goto LABEL_54;
        v22 = v16 + 1;
        for ( i = ((v48 + (char *)v49 - (char *)v16) >> 2) - 2; i >= 0; ++v22 )
        {
          --i;
          *(v22 - 1) = *v22;
        }
        v24 = v53;
        v50[v21 + 1] = (const char **)((char *)v50[v21 + 1] - 1);
        v25 = 0;
        v26 = v24[6];
        if ( !v26 )
          goto LABEL_35;
        v20 = (_DWORD *)*v11;
        while ( (const char **)v20[3] != a3 )
        {
          ++v25;
          v20 += 4;
          if ( v25 >= v26 )
            goto LABEL_35;
        }
        if ( !v20 )
        {
LABEL_35:
          v27 = v11[2];
          v28 = v11[1] + 1;
          if ( v28 > v27 )
          {
            v29 = (char *)sub_453B00((int)v11, nullptr, v28, 0x10u);
            v49 = (const char **)v11[2];
            v30 = v11[1];
            v11[2] = v27;
            v31 = (_DWORD *)*v11;
            v48 = (int)v29;
            v32 = v30 - 1;
            if ( v30 - 1 >= 0 )
            {
              v33 = v29 + 8;
              do
              {
                *(v33 - 2) = *v31;
                v34 = v31[1];
                *v31 = 0;
                *(v33 - 1) = v34;
                v35 = v31[2];
                v31[1] = 0;
                *v33 = v35;
                v31[2] = 0;
                v33[1] = v31[3];
                v36 = (void *)*v31;
                v54 = 1;
                if ( v36 )
                {
                  v31[1] = 0;
                  sub_453A20(v36);
                  *v31 = 0;
                  v31[2] = 0;
                }
                v31 += 4;
                v54 = -1;
                v33 += 4;
                --v32;
              }
              while ( v32 >= 0 );
            }
            v11 = v53 + 5;
            sub_453A20((void *)v53[5]);
            *v11 = v48;
            v11[2] = (int)v49;
          }
          v20 = (_DWORD *)(*v11 + 16 * v11[1]);
          *v20 = 0;
          v20[1] = 0;
          v20[2] = 0;
          ++v11[1];
          v20[3] = a3;
        }
      }
      else
      {
LABEL_21:
        v18 = v10[6];
        v19 = 0;
        if ( !v18 )
          goto LABEL_45;
        v20 = (_DWORD *)*v11;
        while ( (const char **)v20[3] != a3 )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= v18 )
            goto LABEL_45;
        }
        if ( !v20 )
        {
LABEL_45:
          v37 = v11[2];
          v38 = v11[1] + 1;
          if ( v38 > v37 )
          {
            v39 = (char *)sub_453B00((int)v11, nullptr, v38, 0x10u);
            v49 = (const char **)v11[2];
            v40 = v11[1];
            v11[2] = v37;
            v41 = (_DWORD *)*v11;
            v48 = (int)v39;
            v42 = v40 - 1;
            if ( v40 - 1 >= 0 )
            {
              v43 = v39 + 8;
              do
              {
                *(v43 - 2) = *v41;
                v44 = v41[1];
                *v41 = 0;
                *(v43 - 1) = v44;
                v45 = v41[2];
                v41[1] = 0;
                *v43 = v45;
                v41[2] = 0;
                v43[1] = v41[3];
                v46 = (void *)*v41;
                v54 = 2;
                if ( v46 )
                {
                  v41[1] = 0;
                  sub_453A20(v46);
                  *v41 = 0;
                  v41[2] = 0;
                }
                v41 += 4;
                v54 = -1;
                v43 += 4;
                --v42;
              }
              while ( v42 >= 0 );
            }
            v11 = v53 + 5;
            sub_453A20((void *)v53[5]);
            *v11 = v48;
            v11[2] = (int)v49;
          }
          v20 = (_DWORD *)(*v11 + 16 * v11[1]);
          *v20 = 0;
          v20[1] = 0;
          v20[2] = 0;
          ++v11[1];
          v20[3] = a3;
        }
      }
      sub_428930((int)v20, v20[1] + 1);
      *(_DWORD *)(*v20 + 4 * v20[1]++) = v55;
LABEL_54:
      result = sub_45ADE0(nullptr, &dword_48BE90, &v47);
      v55 = result;
      v10 = v53;
    }
    while ( result );
  }
  return result;
}
// 48BE90: using guessed type int dword_48BE90;
