/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E530
// Address: 0x0045E530

//----- (0045E530) --------------------------------------------------------
int __stdcall sub_45E530(char **a1, int a2)
{
  int v2; // esi
  int v3; // edi
  char *v4; // ebx
  int v6; // ebx
  unsigned __int8 *v7; // ebp
  int v8; // ebx
  char v9; // al
  char *j; // esi
  char *v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  unsigned __int8 v15; // al
  unsigned __int8 *v16; // ecx
  int v17; // ecx
  int i; // edi
  int v19; // eax
  int v20; // ebx
  int v21; // eax
  int v22; // ebx
  int v23; // ebx
  int *v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  __int16 v29; // cx
  int v30; // ebx
  int v31; // ebx
  __int16 v32; // ax
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v35; // cx
  int v36; // [esp+0h] [ebp-110h]
  int *v37; // [esp+0h] [ebp-110h]
  int v38; // [esp+4h] [ebp-10Ch]
  int v39; // [esp+4h] [ebp-10Ch]
  int v40; // [esp+8h] [ebp-108h]
  char v41; // [esp+Ch] [ebp-104h]
  int v42; // [esp+Ch] [ebp-104h]
  int v43; // [esp+10h] [ebp-100h]
  int v44; // [esp+14h] [ebp-FCh]
  int v45; // [esp+14h] [ebp-FCh]
  int v46; // [esp+18h] [ebp-F8h]
  int v47; // [esp+1Ch] [ebp-F4h]
  char v48; // [esp+20h] [ebp-F0h]
  __int128 v49; // [esp+2Ch] [ebp-E4h] BYREF
  __int128 v50; // [esp+40h] [ebp-D0h] BYREF
  int v51; // [esp+50h] [ebp-C0h]
  __int16 v52; // [esp+54h] [ebp-BCh]
  __int128 v53; // [esp+58h] [ebp-B8h] BYREF
  int v54; // [esp+68h] [ebp-A8h]
  __int16 v55; // [esp+6Ch] [ebp-A4h]
  _WORD v56[12]; // [esp+70h] [ebp-A0h] BYREF
  __int16 v57; // [esp+88h] [ebp-88h] BYREF
  unsigned __int16 v58; // [esp+8Ah] [ebp-86h]
  __int16 v59; // [esp+A0h] [ebp-70h] BYREF
  unsigned __int16 v60; // [esp+A2h] [ebp-6Eh]
  _BYTE v61[84]; // [esp+B8h] [ebp-58h] BYREF

  v2 = 0;
  v3 = 0;
  v46 = 0;
  *(_OWORD *)a2 = 0;
  v4 = *a1;
  v36 = 0;
  v40 = 0;
  v38 = 0;
  v43 = 0;
  v44 = 0;
  v48 = 0;
  v41 = 0;
  v47 = 3;
  while ( *v4 >= 0 && sub_46B7F0((int)v4, (unsigned __int8)*v4) )
    ++v4;
  if ( !*v4 )
    return 3;
  *a1 = v4;
  sub_45ACB0((unsigned int)v61, v4, 80);
  v6 = v61[0];
  v7 = v61;
  v51 = 0;
  v52 = 0;
  v50 = 0;
  if ( !v61[0] )
  {
LABEL_66:
    for ( i = v3 - v38; i > 0; v50 = v53 )
    {
      if ( WORD2(v50) )
        break;
      v54 = v51;
      v55 = 0;
      v53 = v50;
      sub_45E2E0(&v53);
      sub_45E2E0(&v53);
      sub_45D960(&v50, &v53);
      sub_45E2E0(&v53);
      if ( WORD2(v53) )
        break;
      --i;
      v51 = v54;
      v52 = 0;
    }
    v19 = sub_45DE10(&v50);
    if ( v19 <= 112 )
    {
      v47 = 2;
      if ( !sub_45F2B0((int)&v50, v41, 0, 16494 - v19, 112) )
        goto LABEL_96;
      v20 = WORD1(v50);
      v39 = WORD1(v50);
      if ( i )
      {
        v42 = 1;
        if ( i < 0 )
        {
          i = -i;
          v42 = -1;
          if ( i > 4096 )
          {
            sub_45F620(dword_4A29D8, &v57);
            v22 = v20 - v58;
            sub_45DA20(&v57, (int)&v50);
            v39 = v22 + 0x3FFF;
            i -= 4096;
          }
        }
        v37 = dword_4A2A98;
        v23 = 1;
        v24 = dword_4A2A98;
        v49 = xmmword_4A29A0;
        do
        {
          if ( (v23 & i) != 0 )
          {
            v25 = HIWORD(v49) & 0x7FFF;
            v56[1] = HIWORD(v49) & 0x7FFF;
            v56[0] = -((HIWORD(v49) & 0x8000) != 0);
            v56[2] = 0;
            v56[3] = WORD6(v49);
            v56[4] = WORD5(v49);
            v56[5] = WORD4(v49);
            v56[6] = WORD3(v49);
            v56[7] = WORD2(v49);
            v56[8] = WORD1(v49);
            v56[9] = v49;
            v56[10] = 0;
            sub_45F620(v37, &v59);
            v26 = v25;
            v27 = v60;
            v45 = v26;
            v49 = 0;
            if ( v26 )
            {
              if ( v60 )
              {
                v28 = sub_45DD00(v56, (int)&v59);
                if ( sub_45F2B0((int)&v59, v28 != 0, 0, v27 + v45 - 16382, 112) )
                {
                  v29 = -1;
                  if ( v56[0] == v59 )
                    v29 = 0;
                  v59 = v29;
                  sub_45F690(&v59, &v49);
                }
              }
            }
            v24 = v37;
          }
          v24 -= 4;
          v23 *= 2;
          v37 = v24;
        }
        while ( v23 <= 4096 );
        sub_45F620(&v49, &v57);
        if ( v42 >= 0 )
        {
          v31 = v58 + v39;
          v21 = sub_45DD00(&v57, (int)&v50);
          v20 = v31 - 16382;
        }
        else
        {
          v30 = v39 - v58;
          v21 = sub_45DA20(&v57, (int)&v50);
          v20 = v30 + 0x3FFF;
        }
      }
      else
      {
        v21 = 0;
      }
      if ( !sub_45F2B0((int)&v50, v21 != 0, 0, v20, 112) )
        goto LABEL_96;
    }
    else
    {
      v51 = 0;
      v50 = 0;
      v52 = 0;
    }
    v47 = 1;
    if ( (_WORD)v46 )
      v32 = WORD1(v50) | 0x8000;
    else
      v32 = WORD1(v50);
    *(_WORD *)(a2 + 14) = v32;
    v33 = v51;
    *(_WORD *)(a2 + 12) = WORD3(v50);
    *(_WORD *)(a2 + 10) = WORD4(v50);
    *(_WORD *)(a2 + 8) = WORD5(v50);
    *(_WORD *)(a2 + 6) = WORD6(v50);
    v34 = HIWORD(v50);
    *(_WORD *)(a2 + 2) = v33;
    v35 = HIWORD(v51);
    *(_WORD *)(a2 + 4) = v34;
    *(_WORD *)a2 = v35;
    goto LABEL_96;
  }
  while ( 1 )
  {
    if ( (v6 & 0x80u) == 0 && sub_46B760(v6, (unsigned __int8)v6) )
    {
      if ( !v2 )
        v2 = 1;
      v40 = v2;
      v8 = v6 - 48;
      if ( v8 || v43 || v36 )
      {
        if ( WORD2(v50) )
        {
          v9 = v48;
          if ( v8 )
            v9 = 1;
          ++v43;
          v48 = v9;
          v41 = v9;
        }
        else
        {
          if ( v36 )
            ++v38;
          sub_45E2E0(&v50);
          v54 = v51;
          v55 = 0;
          v53 = v50;
          sub_45E2E0(&v53);
          sub_45E2E0(&v53);
          sub_45D960(&v53, &v50);
          LOWORD(v54) = 0;
          v55 = 0;
          HIWORD(v54) = v8;
          v53 = 0;
          sub_45D960(&v53, &v50);
          ++v43;
        }
      }
      goto LABEL_49;
    }
    if ( v6 != 46 )
      break;
    if ( v36 )
      goto LABEL_96;
    v36 = 1;
    for ( j = (char *)v7; *j >= 0 && sub_46B760(46, (unsigned __int8)*j); ++j )
      ;
    if ( sub_4692B4((unsigned __int8)*j) == 101 )
    {
      if ( !v40 && j == (char *)v7 )
        goto LABEL_96;
    }
    else
    {
      *j = 0;
    }
    if ( j > v61 )
    {
      v11 = j - 1;
      if ( *v11 == 48 )
      {
        v44 = 1;
        do
        {
          *v11 = 122;
          if ( v11 <= v61 )
            break;
          --v11;
        }
        while ( *v11 == 48 );
      }
    }
    v2 = v40;
    if ( !v40 )
    {
      v2 = 1;
LABEL_48:
      v40 = v2;
    }
LABEL_49:
    v6 = (char)*++v7;
    if ( !v6 )
      goto LABEL_66;
  }
  if ( v6 == 122 )
  {
    if ( !v44 )
      goto LABEL_96;
    goto LABEL_49;
  }
  if ( v6 == 45 || v6 == 43 )
  {
    if ( v2 )
      goto LABEL_66;
    v12 = v46;
    v2 = -1;
    if ( v6 == 45 )
      v12 = 0xFFFF;
    v46 = v12;
    goto LABEL_48;
  }
  v13 = sub_4692B4((unsigned __int8)v6);
  if ( !v2 )
    goto LABEL_96;
  if ( v13 != 101 )
  {
    if ( v2 < 0 && !v43 )
      goto LABEL_96;
    goto LABEL_66;
  }
  v14 = 1;
  v3 = 0;
  v15 = v7[1];
  v16 = v7 + 1;
  v7 += 2;
  if ( v15 == 45 )
  {
    v14 = -1;
  }
  else if ( v15 != 43 )
  {
    v7 = v16;
  }
  if ( sub_422E10(v6, *v7) )
  {
    while ( 1 )
    {
      v17 = (char)*v7++;
      v3 = v17 + 2 * (5 * v3 - 24);
      if ( (v3 & 0x8000) != 0 )
        break;
      if ( (*v7 & 0x80u) != 0 || !sub_46B760(v6, *v7) )
      {
        if ( v14 >= 0 )
          goto LABEL_66;
        if ( v3 )
        {
          v3 = -v3;
          goto LABEL_66;
        }
        break;
      }
    }
  }
LABEL_96:
  *a1 += v7 - v61;
  return v47;
}
// 4A29A0: using guessed type __int128 xmmword_4A29A0;
// 4A29D8: using guessed type int dword_4A29D8[29];
// 4A2A98: using guessed type int dword_4A2A98[3];
