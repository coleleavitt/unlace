/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_command_line
// Address: 0x0009DC70

//----- (0009DC70) --------------------------------------------------------
int __cdecl parse_command_line(int a1, char **a2, char *a3, char a4)
{
  char *v4; // edi
  int v5; // edx
  int v6; // esi
  int v7; // ecx
  int v8; // edi
  bool v9; // zf
  char *v10; // eax
  char *v11; // esi
  char v12; // al
  char v13; // bl
  char v14; // bh
  char *v15; // edi
  _BYTE *v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // ecx
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // edi
  char *v24; // ebx
  int v25; // eax
  int v26; // ecx
  char *v27; // edi
  int v28; // eax
  char v29; // al
  int v30; // eax
  unsigned int v31; // ecx
  char *v32; // edi
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // edx
  char v36; // si
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  _DWORD *v40; // eax
  _BYTE *v41; // eax
  unsigned int v42; // esi
  int v43; // eax
  int v44; // edx
  int v45; // ecx
  _BYTE *v46; // eax
  unsigned int v47; // esi
  unsigned int v48; // esi
  char v49; // al
  int v50; // ecx
  int v51; // ebx
  unsigned int v52; // esi
  unsigned int v53; // edi
  void *v54; // ecx
  int *v55; // eax
  int v56; // ecx
  _DWORD *v57; // eax
  int v58; // edx
  unsigned int v59; // esi
  unsigned int v60; // edi
  int v62; // [esp+14h] [ebp-78h]
  char *v63; // [esp+18h] [ebp-74h]
  char *v64; // [esp+18h] [ebp-74h]
  char *v65; // [esp+18h] [ebp-74h]
  char v66; // [esp+1Ch] [ebp-70h]
  char *v67; // [esp+1Ch] [ebp-70h]
  char v68; // [esp+1Ch] [ebp-70h]
  char v69; // [esp+1Ch] [ebp-70h]
  char v70; // [esp+1Ch] [ebp-70h]
  int v71; // [esp+24h] [ebp-68h]
  int v72; // [esp+28h] [ebp-64h]
  bool v73; // [esp+2Ch] [ebp-60h]
  unsigned int v74; // [esp+30h] [ebp-5Ch]
  int v75; // [esp+38h] [ebp-54h] BYREF
  unsigned int v76; // [esp+3Ch] [ebp-50h]
  unsigned int v77; // [esp+40h] [ebp-4Ch]
  int v78; // [esp+48h] [ebp-44h] BYREF
  unsigned int v79; // [esp+4Ch] [ebp-40h]
  int v80; // [esp+50h] [ebp-3Ch]
  int v81; // [esp+58h] [ebp-34h] BYREF
  unsigned int v82; // [esp+5Ch] [ebp-30h]
  unsigned int v83; // [esp+60h] [ebp-2Ch]
  int v84; // [esp+68h] [ebp-24h]
  unsigned int v85; // [esp+6Ch] [ebp-20h]
  unsigned int v86; // [esp+70h] [ebp-1Ch]
  unsigned int v87; // [esp+78h] [ebp-14h]

  v87 = __readgsdword(0x14u);
  if ( !a3 )
    return 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v4 = skip_spaces(a3);
  LOBYTE(v5) = *v4;
  if ( !*v4 )
    goto LABEL_101;
  v73 = (a4 & 4) != 0;
  v62 = 0;
  do
  {
    v24 = v4 + 1;
    if ( (_BYTE)v5 == 39 || (_BYTE)v5 == 34 )
    {
      if ( (_BYTE)v62 == (_BYTE)v5 && (_BYTE)v62 )
      {
        v63 = v4 + 1;
        if ( *v24 >= 0 )
        {
          v36 = *v24;
          v37 = isspace((unsigned __int8)*v24);
          if ( !v36 || v37 )
          {
            v38 = a1;
            v39 = *(_DWORD *)(a1 + 4);
            if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v39 + 1) )
            {
              v40 = *(_DWORD **)a1;
            }
            else
            {
              v40 = qvector_reserve(a1, *(void **)a1, v39 + 1, 0xCu);
              v38 = a1;
              *(_DWORD *)a1 = v40;
              v39 = *(_DWORD *)(a1 + 4);
            }
            v50 = 3 * v39;
            v40[v50] = 0;
            v40[v50 + 1] = 0;
            v40[v50 + 2] = 0;
            ++*(_DWORD *)(v38 + 4);
            v51 = v40[v50];
            v52 = v40[v50 + 1];
            v53 = v40[v50 + 2];
            v40[v50] = v75;
            v40[v50 + 1] = v76;
            v40[v50 + 2] = v77;
            v75 = v51;
            v76 = v52;
            v77 = v53;
            v73 = 0;
          }
        }
        v24 = skip_spaces(v63);
LABEL_99:
        v62 = 0;
        goto LABEL_100;
      }
      if ( !(_BYTE)v62 )
      {
        v62 = v5;
        goto LABEL_100;
      }
      goto LABEL_79;
    }
    if ( (_BYTE)v62 )
      goto LABEL_65;
    if ( (v5 & 0x80u) == 0 )
    {
      v64 = v4 + 1;
      v69 = v5;
      v43 = isspace((unsigned __int8)v5);
      LOBYTE(v5) = v69;
      v24 = v4 + 1;
      if ( v43 )
      {
        v44 = a1;
        v45 = *(_DWORD *)(a1 + 4);
        if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v45 + 1) )
        {
          v19 = *(_DWORD **)a1;
        }
        else
        {
          v19 = qvector_reserve(a1, *(void **)a1, v45 + 1, 0xCu);
          v44 = a1;
          *(_DWORD *)a1 = v19;
          v45 = *(_DWORD *)(a1 + 4);
        }
        v20 = 3 * v45;
        v19[v20] = 0;
        v19[v20 + 1] = 0;
        v19[v20 + 2] = 0;
        ++*(_DWORD *)(v44 + 4);
        v21 = v19[v20];
        v22 = v19[v20 + 1];
        v23 = v19[v20 + 2];
        v19[v20] = v75;
        v19[v20 + 1] = v76;
        v19[v20 + 2] = v77;
        v75 = v21;
        v76 = v22;
        v77 = v23;
        v24 = skip_spaces(v64);
        v62 = 0;
        v73 = 0;
        goto LABEL_100;
      }
LABEL_65:
      if ( (_BYTE)v62 != 39 && (_BYTE)v5 == 92 )
      {
        LOBYTE(v5) = v4[1];
        v24 = v4 + 2;
        if ( (_BYTE)v5 != 34 && (_BYTE)v5 != 92 )
        {
          v41 = (_BYTE *)v75;
          v42 = v76 - 1;
          if ( !v76 )
            v42 = 0;
          if ( v77 < v42 + 2 )
          {
            v68 = v4[1];
            v41 = qvector_reserve((int)&v75, (void *)v75, v42 + 2, 1u);
            v75 = (int)v41;
            LOBYTE(v5) = v68;
          }
          v76 = v42 + 2;
          v41[v42] = 92;
          *(_BYTE *)(v75 + v42 + 1) = 0;
          if ( !(_BYTE)v5 )
            break;
        }
      }
    }
LABEL_79:
    v46 = (_BYTE *)v75;
    v47 = v76 - 1;
    if ( !v76 )
      v47 = 0;
    if ( v77 < v47 + 2 )
    {
      v70 = v5;
      v46 = qvector_reserve((int)&v75, (void *)v75, v47 + 2, 1u);
      v75 = (int)v46;
      LOBYTE(v5) = v70;
    }
    v76 = v47 + 2;
    v46[v47] = v5;
    *(_BYTE *)(v75 + v47 + 1) = 0;
    if ( (unsigned __int8)v62 | v73 || ((unsigned __int8)v5 | 2) != 0x3E )
      goto LABEL_100;
    v48 = v76 - 1;
    if ( !v76 )
      v48 = 0;
    if ( !a2 || v48 > 2 || v76 < 2 )
      goto LABEL_99;
    v65 = v24;
    v49 = *(_BYTE *)(v75 + v76 - 2);
    if ( v49 == 62 )
    {
      if ( v48 == 2 )
      {
        v25 = *(unsigned __int8 *)v75;
        if ( (v25 & 0x80u) != 0 )
          goto LABEL_29;
        if ( (unsigned int)(v25 - 48) >= 0xA )
          goto LABEL_99;
        v8 = v62;
        v5 = (char)v25 - 48;
        v10 = v24 + 1;
        v26 = 0;
        if ( *v24 != 62 )
          v10 = v24;
        if ( v5 == -1 )
        {
LABEL_29:
          v62 = 0;
          goto LABEL_100;
        }
        LOBYTE(v26) = *v24 == 62;
        v71 = 4 * v26 + 2;
        v7 = v5;
      }
      else
      {
        if ( v48 != 1 )
          goto LABEL_29;
        v8 = v62;
        v10 = v24 + 1;
        v71 = 4 * (*v24 == 62) + 2;
        if ( *v24 != 62 )
          v10 = v24;
        v7 = 1;
      }
    }
    else
    {
      v7 = 0;
      if ( v48 != 1 )
        goto LABEL_29;
      v8 = v62;
      v71 = 1;
      v9 = v49 == 60;
      v10 = v24;
      if ( !v9 )
        goto LABEL_29;
    }
    v72 = v7;
    v74 = v48;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v11 = skip_spaces(v10);
    v12 = *v11;
    v62 = v8;
    if ( !*v11 )
      goto LABEL_44;
    v13 = *v11;
    if ( v12 != 34 && v12 != 39 )
    {
      v27 = v11;
      while ( 1 )
      {
        if ( v13 < 0 )
        {
          if ( ((unsigned __int8)v13 | 2) == 0x3E )
            goto LABEL_39;
        }
        else
        {
          v28 = isspace((unsigned __int8)v13);
          if ( ((unsigned __int8)v13 | 2) == 0x3E || v28 )
          {
LABEL_39:
            if ( v27 > v11 )
            {
              sub_2DCA0(&v78, v11, v27 - v11);
              v30 = v78;
              v31 = v79;
              v84 = v78;
              v78 = 0;
              v85 = v79;
              v79 = 0;
              v5 = v80;
              v86 = v80;
              v80 = 0;
              if ( v81 )
              {
                v82 = 0;
                qfree((void *)v81);
                v5 = v85;
                v81 = v84;
                v82 = v85;
                v83 = v86;
                if ( v78 )
                {
                  v79 = 0;
                  qfree((void *)v78);
                  v78 = 0;
                  v80 = 0;
                }
              }
              else
              {
                v81 = v30;
                v82 = v31;
                v83 = v5;
              }
            }
            goto LABEL_45;
          }
        }
        v29 = *++v27;
        v13 = v29;
        if ( !v29 )
          goto LABEL_39;
      }
    }
    v66 = *v11;
    while ( 1 )
    {
      v14 = v11[1];
      if ( v14 != 92 )
        break;
      v14 = v11[2];
      v11 += 2;
      v15 = v11;
      if ( !v14 )
        goto LABEL_31;
LABEL_17:
      v16 = (_BYTE *)v81;
      v17 = v82 - 1;
      if ( !v82 )
        v17 = 0;
      v18 = v17 + 2;
      if ( v83 < v17 + 2 )
      {
        v16 = qvector_reserve((int)&v81, (void *)v81, v17 + 2, 1u);
        v81 = (int)v16;
        v13 = v66;
        v18 = v17 + 2;
      }
      v82 = v18;
      v16[v17] = v14;
      *(_BYTE *)(v81 + v17 + 1) = 0;
      v11 = v15;
    }
    v15 = v11 + 1;
    if ( v14 )
    {
      if ( v14 == v13 )
      {
        v11 += 2;
        goto LABEL_43;
      }
      goto LABEL_17;
    }
    ++v11;
LABEL_31:
    v82 = 0;
LABEL_43:
    v71 += 8;
LABEL_44:
    v27 = v11;
LABEL_45:
    v24 = nullptr;
    if ( v82 >= 2 )
    {
      v67 = v27;
      v32 = sub_A0570(a2);
      v33 = *((_DWORD *)v32 + 1);
      v34 = *((_DWORD *)v32 + 2);
      v35 = *((_DWORD *)v32 + 3);
      *((_DWORD *)v32 + 1) = v81;
      *((_DWORD *)v32 + 2) = v82;
      *((_DWORD *)v32 + 3) = v83;
      v81 = v33;
      v82 = v34;
      v83 = v35;
      *((_DWORD *)v32 + 4) = v71;
      *(_DWORD *)v32 = v72;
      v24 = skip_spaces(v67);
      *((_DWORD *)v32 + 5) = &v65[-v74] - a3;
      *((_DWORD *)v32 + 6) = v24 - &v65[-v74];
    }
    if ( v81 )
    {
      v82 = 0;
      qfree((void *)v81);
      v81 = 0;
      v83 = 0;
    }
    if ( v24 )
      v76 = 0;
    else
      v24 = v65;
LABEL_100:
    LOBYTE(v5) = *v24;
    v4 = v24;
  }
  while ( *v24 );
LABEL_101:
  if ( v76 >= 2 )
  {
    v56 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v56 + 1) )
    {
      v57 = *(_DWORD **)a1;
    }
    else
    {
      v57 = qvector_reserve(a1, *(void **)a1, v56 + 1, 0xCu);
      *(_DWORD *)a1 = v57;
      v56 = *(_DWORD *)(a1 + 4);
    }
    v58 = 3 * v56;
    v57[v58] = 0;
    v57[v58 + 1] = 0;
    v57[v58 + 2] = 0;
    ++*(_DWORD *)(a1 + 4);
    v54 = (void *)v57[3 * v56];
    v59 = v57[v58 + 1];
    v60 = v57[v58 + 2];
    v57[v58] = v75;
    v57[v58 + 1] = v76;
    v57[v58 + 2] = v77;
    v75 = (int)v54;
    v76 = v59;
    v77 = v60;
    v55 = (int *)(a1 + 4);
  }
  else
  {
    v54 = (void *)v75;
    v55 = (int *)(a1 + 4);
  }
  v6 = *v55;
  if ( v54 )
  {
    v76 = 0;
    qfree(v54);
    v75 = 0;
    v77 = 0;
  }
  return v6;
}
// 9DED8: conditional instruction was optimized away because bl.1!=0
// 9E16D: variable 'v5' is possibly undefined
