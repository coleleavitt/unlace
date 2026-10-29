/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8058670
// Address: 0x08058670

//----- (08058670) --------------------------------------------------------
unsigned int __cdecl sub_8058670(char **a1, const char *a2, int a3, char a4, char a5, int a6, int a7)
{
  char *v7; // eax
  char *v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // ecx
  char *v11; // eax
  char *v12; // eax
  char *v13; // edx
  int **v14; // esi
  size_t v15; // eax
  size_t v16; // edx
  char *v17; // eax
  char *v18; // ecx
  unsigned int v19; // edx
  int *v20; // edx
  char *v21; // eax
  unsigned int result; // eax
  unsigned int v23; // edi
  int *v24; // eax
  char *v25; // eax
  char *v26; // eax
  char *v27; // edi
  unsigned int v28; // eax
  int v29; // esi
  int **v30; // edi
  size_t v31; // eax
  const char *v32; // ecx
  size_t v33; // edx
  int *v34; // eax
  char *v35; // eax
  char *v36; // edx
  char *v37; // eax
  char *v38; // edx
  int v39; // eax
  int v40; // eax
  char *v41; // eax
  char *v42; // eax
  int v43; // [esp-Ch] [ebp-68h]
  int v44; // [esp-8h] [ebp-64h]
  int v45; // [esp-4h] [ebp-60h]
  int v46; // [esp+0h] [ebp-5Ch]
  size_t v47; // [esp+4h] [ebp-58h]
  int v48; // [esp+4h] [ebp-58h]
  size_t v49; // [esp+4h] [ebp-58h]
  char *v50; // [esp+8h] [ebp-54h]
  const char *srcb; // [esp+Ch] [ebp-50h]
  int *src; // [esp+Ch] [ebp-50h]
  _BYTE *srcc; // [esp+Ch] [ebp-50h]
  unsigned int srca; // [esp+Ch] [ebp-50h]
  int *dest; // [esp+14h] [ebp-48h]
  const char *v56; // [esp+28h] [ebp-34h]
  size_t v57; // [esp+2Ch] [ebp-30h]
  int v58; // [esp+38h] [ebp-24h] BYREF
  unsigned int v59; // [esp+3Ch] [ebp-20h]

  v46 = a6;
  v59 = __readgsdword(0x14u);
  if ( a6 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v9 = 1;
    }
    else
    {
      switch ( a4 )
      {
        case 2:
          v9 = 32;
          break;
        case 7:
          v9 = 64;
          break;
        case 1:
          v7 = a1[10];
          v8 = a1[9];
          v9 = 16;
          v10 = (unsigned int)(v7 + 1);
          if ( a1[11] >= v7 + 1 )
          {
LABEL_24:
            v58 = 0;
            v27 = &v8[12 * (_DWORD)v7];
            *((_DWORD *)v27 + 1) = 0;
            *(_DWORD *)v27 = 0;
            *((_DWORD *)v27 + 2) = 0;
            ++a1[10];
            v28 = *((_DWORD *)v27 + 1);
            if ( v9 >= v28 )
            {
              v48 = 4 * v9;
              if ( v28 < v9 )
              {
                v38 = *(char **)v27;
                srca = *((_DWORD *)v27 + 2);
                if ( (unsigned int)&v58 < *(_DWORD *)v27 || &v58 >= (int *)&v38[4 * srca] )
                {
                  if ( srca >= v9
                    || (v41 = (char *)sub_80CF920((int)v27, v38, v9, 4u),
                        *(_DWORD *)v27 = v41,
                        v38 = v41,
                        v28 = *((_DWORD *)v27 + 1),
                        v28 < v9) )
                  {
                    v39 = 4 * v28;
                    v48 = 4 * v9;
                    while ( 1 )
                    {
                      *(_DWORD *)&v38[v39] = 0;
                      v39 += 4;
                      if ( 4 * v9 == v39 )
                        break;
                      v38 = *(char **)v27;
                    }
                  }
                  else
                  {
                    v48 = 4 * v9;
                  }
                }
                else if ( srca >= v9
                       || (v42 = (char *)sub_80CF920((int)v27, v38, v9, 4u),
                           *(_DWORD *)v27 = v42,
                           v38 = v42,
                           v28 = *((_DWORD *)v27 + 1),
                           v28 < v9) )
                {
                  v40 = 4 * v28;
                  v48 = 4 * v9;
                  while ( 1 )
                  {
                    *(_DWORD *)&v38[v40] = 0;
                    v40 += 4;
                    if ( v40 == 4 * v9 )
                      break;
                    v38 = *(char **)v27;
                  }
                }
                *((_DWORD *)v27 + 1) = v9;
              }
            }
            else
            {
              *((_DWORD *)v27 + 1) = v9;
              v48 = 4 * v9;
            }
            v50 = v27;
            v29 = 0;
            while ( 1 )
            {
              if ( !*(_DWORD *)(a6 + v29) )
                goto LABEL_32;
              v35 = a1[4];
              v36 = a1[3];
              if ( a1[5] < v35 + 1 )
              {
                v37 = (char *)sub_80CF920((int)(a1 + 3), v36, (unsigned int)(v35 + 1), 0xCu);
                a1[3] = v37;
                v36 = v37;
                v35 = a1[4];
              }
              v30 = (int **)&v36[12 * (_DWORD)v35];
              *v30 = nullptr;
              v30[1] = nullptr;
              v30[2] = nullptr;
              ++a1[4];
              if ( *(_DWORD *)(a6 + v29)
                && (srcb = *(const char **)(a6 + v29), v31 = strlen(srcb), v32 = srcb, (v33 = v31) != 0) )
              {
                src = (int *)(v31 + 1);
                dest = *v30;
                if ( (unsigned int)v30[2] < v31 + 1 )
                {
                  v57 = v31;
                  v56 = v32;
                  dest = (int *)sub_80CF920((int)v30, dest, v31 + 1, 1u);
                  v33 = v57;
                  *v30 = dest;
                  v32 = v56;
                }
                v30[1] = src;
                srcc = (_BYTE *)v33;
                memmove(dest, v32, v33);
                srcc[(_DWORD)*v30] = 0;
                if ( v30[1] )
                {
                  v34 = *v30;
                  goto LABEL_31;
                }
              }
              else
              {
                v30[1] = nullptr;
              }
              v34 = &dword_80DDFD8;
LABEL_31:
              *(_DWORD *)(*(_DWORD *)v50 + v29) = v34;
LABEL_32:
              v29 += 4;
              if ( v48 == v29 )
              {
                v46 = *(_DWORD *)v50;
                goto LABEL_9;
              }
            }
          }
LABEL_7:
          v11 = (char *)sub_80CF920((int)(a1 + 9), v8, v10, 0xCu);
          a1[9] = v11;
          v8 = v11;
          v7 = a1[10];
          goto LABEL_24;
        default:
          if ( byte_811F8A1 )
            BUG();
          if ( v59 == __readgsdword(0x14u) )
            sub_80CFF40(1795, v43, v44, v45);
LABEL_59:
          sub_80D7AB0();
      }
    }
    v7 = a1[10];
    v8 = a1[9];
    v10 = (unsigned int)(v7 + 1);
    if ( a1[11] >= v7 + 1 )
      goto LABEL_24;
    goto LABEL_7;
  }
LABEL_9:
  v12 = a1[4];
  v13 = a1[3];
  if ( a1[5] < v12 + 1 )
  {
    v26 = (char *)sub_80CF920((int)(a1 + 3), v13, (unsigned int)(v12 + 1), 0xCu);
    a1[3] = v26;
    v13 = v26;
    v12 = a1[4];
  }
  v14 = (int **)&v13[12 * (_DWORD)v12];
  *v14 = nullptr;
  v14[1] = nullptr;
  v14[2] = nullptr;
  ++a1[4];
  if ( !a2 || (v15 = strlen(a2), (v16 = v15) == 0) )
  {
    v14[1] = nullptr;
    v17 = a1[1];
    v18 = *a1;
    v19 = (unsigned int)(v17 + 1);
    if ( a1[2] >= v17 + 1 )
      goto LABEL_14;
    goto LABEL_21;
  }
  v23 = v15 + 1;
  v24 = *v14;
  if ( (unsigned int)v14[2] < v23 )
  {
    v49 = v16;
    v24 = (int *)sub_80CF920((int)v14, v24, v23, 1u);
    v16 = v49;
    *v14 = v24;
  }
  v14[1] = (int *)v23;
  v47 = v16;
  memmove(v24, a2, v16);
  *((_BYTE *)*v14 + v47) = 0;
  v17 = a1[1];
  v18 = *a1;
  v19 = (unsigned int)(v17 + 1);
  if ( a1[2] < v17 + 1 )
  {
LABEL_21:
    v25 = (char *)sub_80CF920((int)a1, v18, v19, 0x14u);
    *a1 = v25;
    v18 = v25;
    v17 = a1[1];
    v19 = (unsigned int)(v17 + 1);
  }
LABEL_14:
  a1[1] = (char *)v19;
  v20 = &dword_80DDFD8;
  v21 = &v18[20 * (_DWORD)v17];
  if ( v14[1] )
    v20 = *v14;
  *(_DWORD *)v21 = v20;
  *((_DWORD *)v21 + 1) = a3;
  *((_DWORD *)v21 + 4) = a7;
  v21[9] = a4;
  v21[8] = a5;
  *((_DWORD *)v21 + 3) = v46;
  result = v59 - __readgsdword(0x14u);
  if ( result )
    goto LABEL_59;
  return result;
}
// 8058B66: variable 'v43' is possibly undefined
// 8058B66: variable 'v44' is possibly undefined
// 8058B66: variable 'v45' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
