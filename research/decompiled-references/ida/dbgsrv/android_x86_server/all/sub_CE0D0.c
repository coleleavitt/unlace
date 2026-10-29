/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CE0D0
// Address: 0x000CE0D0

//----- (000CE0D0) --------------------------------------------------------
char *__fastcall sub_CE0D0(int a1)
{
  int v1; // edi
  char *v2; // eax
  char *v3; // esi
  unsigned int v4; // edx
  char v5; // dl
  _DWORD *v6; // eax
  int v7; // esi
  char **v8; // ecx
  char *v9; // edi
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // ecx
  _DWORD *v13; // eax
  _DWORD *v14; // edx
  char *v15; // eax
  char *v16; // eax
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // esi
  int v20; // ecx
  _DWORD *v21; // eax
  _DWORD *v22; // edx
  bool v23; // zf
  _DWORD *v24; // esi
  int v25; // ecx
  _DWORD *v26; // eax
  _DWORD *v27; // edx
  _DWORD *v28; // esi
  int v29; // ecx
  _DWORD *v30; // eax
  _DWORD *v31; // edx
  _DWORD *v32; // eax
  char **v33; // ecx
  char *v34; // eax
  char *v35; // eax
  _DWORD *v36; // esi
  int v37; // ecx
  _DWORD *v38; // eax
  _DWORD *v39; // edx
  _DWORD *v40; // eax
  char **v41; // ecx
  int v42; // eax
  _DWORD *v43; // edi
  int v44; // ecx
  _DWORD *v45; // eax
  _DWORD *v46; // edx
  char *v47; // eax
  int v48; // esi
  _DWORD *v49; // edi
  int v50; // ecx
  _DWORD *v51; // eax
  _DWORD *v52; // edx
  char *v54; // eax
  char *v55; // eax
  char **v56; // ecx
  int v57; // eax
  int v58; // edx
  int v59; // ecx
  int v60; // esi
  _DWORD *v61; // eax
  _DWORD *v62; // edx
  int v63; // esi
  _DWORD *v64; // eax
  _DWORD *v65; // edx
  char *v66; // eax
  _DWORD *v67; // eax
  _DWORD *v68; // edx
  char v69; // [esp+8h] [ebp-24h]
  int v70; // [esp+8h] [ebp-24h]
  int v71; // [esp+8h] [ebp-24h]
  char *v72; // [esp+8h] [ebp-24h]
  int v74; // [esp+10h] [ebp-1Ch]
  int v75; // [esp+10h] [ebp-1Ch]
  int v76; // [esp+10h] [ebp-1Ch]
  int v77; // [esp+10h] [ebp-1Ch]
  char *v78; // [esp+14h] [ebp-18h]
  char *v79; // [esp+14h] [ebp-18h]
  int v80; // [esp+14h] [ebp-18h]
  int v81; // [esp+18h] [ebp-14h]
  _DWORD *v82; // [esp+18h] [ebp-14h]

  v1 = a1;
  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 4);
  v4 = (unsigned int)&v3[-*(_DWORD *)a1];
  if ( v4 < 3 )
  {
    if ( v4 != 2 )
    {
      v69 = 0;
      goto LABEL_46;
    }
    goto LABEL_13;
  }
  v5 = *v2;
  if ( *v2 != 115 )
  {
LABEL_14:
    if ( v5 == 103 && v2[1] == 115 )
    {
      v2 += 2;
      *(_DWORD *)a1 = v2;
      v69 = 1;
      if ( (unsigned int)(v3 - v2) < 2 || *v2 != 115 )
        goto LABEL_46;
    }
    else
    {
      v69 = 0;
      if ( *v2 != 115 )
        goto LABEL_46;
    }
    if ( v2[1] == 114 )
    {
      v15 = v2 + 2;
      *(_DWORD *)a1 = v15;
      if ( v3 != v15 && (unsigned int)(*v15 - 48) <= 9 )
      {
        v16 = sub_D0EF0((char **)a1);
        if ( !v16 )
          return nullptr;
        v17 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)a1 && **(_BYTE **)a1 == 73 )
          {
            v78 = v16;
            v9 = nullptr;
            v18 = sub_C6560((char **)a1, 0);
            if ( !v18 )
              return v9;
            v74 = v17;
            v19 = *(_DWORD **)(a1 + 4464);
            v20 = v19[1];
            v81 = v18;
            if ( (unsigned int)(v20 + 16) < 0xFF8 )
            {
              v22 = v19 + 1;
            }
            else
            {
              v21 = operator new[](0x1000u);
              *v21 = v19;
              v21[1] = 0;
              *(_DWORD *)(a1 + 4464) = v21;
              v20 = 0;
              v22 = v21 + 1;
              v19 = v21;
            }
            *v22 = v20 + 16;
            *(_DWORD *)((char *)v19 + v20 + 12) = 16843040;
            v23 = (_DWORD *)((char *)v19 + v20 + 8) == nullptr;
            v16 = (char *)v19 + v20 + 8;
            *(_DWORD *)v16 = off_13A6D4;
            *(_DWORD *)((char *)v19 + v20 + 16) = v78;
            *(_DWORD *)((char *)v19 + v20 + 20) = v81;
            v17 = v74;
            if ( v23 )
              return v9;
          }
          if ( v17 )
            break;
          v17 = (int)v16;
          v1 = a1;
          if ( v69 )
          {
            v28 = *(_DWORD **)(a1 + 4464);
            v29 = v28[1];
            v79 = v16;
            if ( (unsigned int)(v29 + 16) < 0xFF8 )
            {
              v31 = v28 + 1;
            }
            else
            {
              v30 = operator new[](0x1000u);
              *v30 = v28;
              v30[1] = 0;
              *(_DWORD *)(a1 + 4464) = v30;
              v29 = 0;
              v31 = v30 + 1;
              v28 = v30;
            }
            *v31 = v29 + 16;
            v32 = (_DWORD *)((char *)v28 + v29 + 8);
            *(_DWORD *)((char *)v28 + v29 + 12) = 16843041;
            *v32 = off_13A1CC;
            v33 = (char **)((char *)v28 + v29 + 16);
            goto LABEL_40;
          }
LABEL_41:
          v34 = *(char **)v1;
          if ( *(_DWORD *)v1 != *(_DWORD *)(v1 + 4) && *v34 == 69 )
          {
            *(_DWORD *)v1 = v34 + 1;
            goto LABEL_61;
          }
          v16 = sub_D0EF0((char **)v1);
          v9 = nullptr;
          if ( !v16 )
            return v9;
        }
        v79 = v16;
        v75 = v17;
        v1 = a1;
        v24 = *(_DWORD **)(a1 + 4464);
        v25 = v24[1];
        if ( (unsigned int)(v25 + 16) < 0xFF8 )
        {
          v27 = v24 + 1;
        }
        else
        {
          v26 = operator new[](0x1000u);
          *v26 = v24;
          v26[1] = 0;
          *(_DWORD *)(a1 + 4464) = v26;
          v25 = 0;
          v27 = v26 + 1;
          v24 = v26;
        }
        *v27 = v25 + 16;
        *(_DWORD *)((char *)v24 + v25 + 12) = 16843031;
        *(_DWORD *)((char *)v24 + v25 + 8) = off_13A0EC;
        *(_DWORD *)((char *)v24 + v25 + 16) = v75;
        v32 = (_DWORD *)((char *)v24 + v25 + 8);
        v33 = (char **)((char *)v24 + v25 + 20);
LABEL_40:
        *v33 = v79;
        v17 = (int)v32;
        goto LABEL_41;
      }
      v40 = sub_D0B40((char **)a1);
      if ( !v40 )
        return nullptr;
      v17 = (int)v40;
      if ( *(_DWORD *)(v1 + 4) != *(_DWORD *)v1 && **(_BYTE **)v1 == 73 )
      {
        v41 = (char **)v1;
        v9 = nullptr;
        v42 = sub_C6560(v41, 0);
        if ( !v42 )
          return v9;
        v43 = *(_DWORD **)(a1 + 4464);
        v44 = v43[1];
        v71 = v42;
        if ( (unsigned int)(v44 + 16) < 0xFF8 )
        {
          v46 = v43 + 1;
        }
        else
        {
          v45 = operator new[](0x1000u);
          *v45 = v43;
          v45[1] = 0;
          *(_DWORD *)(a1 + 4464) = v45;
          v44 = 0;
          v46 = v45 + 1;
          v43 = v45;
        }
        *v46 = v44 + 16;
        *(_DWORD *)((char *)v43 + v44 + 12) = 16843040;
        *(_DWORD *)((char *)v43 + v44 + 8) = off_13A6D4;
        *(_DWORD *)((char *)v43 + v44 + 16) = v17;
        *(_DWORD *)((char *)v43 + v44 + 20) = v71;
        v17 = (int)v43 + v44 + 8;
        v1 = a1;
      }
LABEL_61:
      v47 = sub_D0C60(v1);
      if ( !v47 )
        return nullptr;
      v76 = v17;
      v48 = v1;
      v49 = *(_DWORD **)(v1 + 4464);
      v50 = v49[1];
      v72 = v47;
      if ( (unsigned int)(v50 + 16) < 0xFF8 )
      {
        v52 = v49 + 1;
      }
      else
      {
        v51 = operator new[](0x1000u);
        *v51 = v49;
        v51[1] = 0;
        *(_DWORD *)(v48 + 4464) = v51;
        v50 = 0;
        v52 = v51 + 1;
        v49 = v51;
      }
      *v52 = v50 + 16;
      *(_DWORD *)((char *)v49 + v50 + 12) = 16843031;
      *(_DWORD *)((char *)v49 + v50 + 8) = off_13A0EC;
      *(_DWORD *)((char *)v49 + v50 + 16) = v76;
LABEL_66:
      *(_DWORD *)((char *)v49 + v50 + 20) = v72;
      return (char *)v49 + v50 + 8;
    }
LABEL_46:
    v35 = sub_D0C60(a1);
    if ( v35 )
    {
      v9 = v35;
      if ( v69 )
      {
        v36 = *(_DWORD **)(a1 + 4464);
        v37 = v36[1];
        if ( (unsigned int)(v37 + 16) < 0xFF8 )
        {
          v39 = v36 + 1;
        }
        else
        {
          v38 = operator new[](0x1000u);
          *v38 = v36;
          v38[1] = 0;
          *(_DWORD *)(a1 + 4464) = v38;
          v37 = 0;
          v39 = v38 + 1;
          v36 = v38;
        }
        *v39 = v37 + 16;
        *(_DWORD *)((char *)v36 + v37 + 12) = 16843041;
        *(_DWORD *)((char *)v36 + v37 + 8) = off_13A1CC;
        *(_DWORD *)((char *)v36 + v37 + 16) = v9;
        return (char *)v36 + v37 + 8;
      }
      return v9;
    }
    return nullptr;
  }
  if ( v2[1] != 114 || v2[2] != 78 )
  {
LABEL_13:
    v5 = *v2;
    goto LABEL_14;
  }
  *(_DWORD *)a1 = v2 + 3;
  v6 = sub_D0B40((char **)a1);
  if ( !v6 )
    return nullptr;
  v7 = (int)v6;
  if ( *(_DWORD *)(v1 + 4) == *(_DWORD *)v1 || **(_BYTE **)v1 != 73 )
    goto LABEL_71;
  v8 = (char **)v1;
  v9 = nullptr;
  v10 = sub_C6560(v8, 0);
  if ( v10 )
  {
    v11 = *(_DWORD **)(a1 + 4464);
    v12 = v11[1];
    v70 = v10;
    if ( (unsigned int)(v12 + 16) < 0xFF8 )
    {
      v14 = v11 + 1;
    }
    else
    {
      v13 = operator new[](0x1000u);
      *v13 = v11;
      v13[1] = 0;
      *(_DWORD *)(a1 + 4464) = v13;
      v12 = 0;
      v14 = v13 + 1;
      v11 = v13;
    }
    *v14 = v12 + 16;
    *(_DWORD *)((char *)v11 + v12 + 12) = 16843040;
    *(_DWORD *)((char *)v11 + v12 + 8) = off_13A6D4;
    for ( *(_DWORD *)((char *)v11 + v12 + 16) = v7; ; *(_DWORD *)((char *)v11 + v12 + 16) = v80 )
    {
      *(_DWORD *)((char *)v11 + v12 + 20) = v70;
      v7 = (int)v11 + v12 + 8;
      v1 = a1;
LABEL_71:
      v54 = *(char **)v1;
      v80 = v7;
      if ( *(_DWORD *)v1 != *(_DWORD *)(v1 + 4) && *v54 == 69 )
        break;
      v55 = sub_D0EF0((char **)v1);
      if ( !v55 )
        return nullptr;
      v70 = (int)v55;
      if ( *(_DWORD *)(v1 + 4) != *(_DWORD *)v1 && **(_BYTE **)v1 == 73 )
      {
        v56 = (char **)v1;
        v9 = nullptr;
        v57 = sub_C6560(v56, 0);
        if ( !v57 )
          return v9;
        v77 = v57;
        v58 = *(_DWORD *)(a1 + 4464);
        v59 = *(_DWORD *)(v58 + 4);
        if ( (unsigned int)(v59 + 16) < 0xFF8 )
        {
          v82 = *(_DWORD **)(a1 + 4464);
          v62 = (_DWORD *)(v58 + 4);
        }
        else
        {
          v60 = *(_DWORD *)(a1 + 4464);
          v61 = operator new[](0x1000u);
          *v61 = v60;
          v61[1] = 0;
          *(_DWORD *)(a1 + 4464) = v61;
          v59 = 0;
          v62 = v61 + 1;
          v82 = v61;
        }
        *v62 = v59 + 16;
        *(_DWORD *)((char *)v82 + v59 + 12) = 16843040;
        *(_DWORD *)((char *)v82 + v59 + 8) = off_13A6D4;
        *(_DWORD *)((char *)v82 + v59 + 16) = v70;
        *(_DWORD *)((char *)v82 + v59 + 20) = v77;
        if ( (_DWORD *)((char *)v82 + v59) == (_DWORD *)-8 )
          return v9;
        v70 = (int)v82 + v59 + 8;
        v1 = a1;
      }
      v63 = v1;
      v11 = *(_DWORD **)(v1 + 4464);
      v12 = v11[1];
      if ( (unsigned int)(v12 + 16) < 0xFF8 )
      {
        v65 = v11 + 1;
      }
      else
      {
        v64 = operator new[](0x1000u);
        *v64 = v11;
        v64[1] = 0;
        *(_DWORD *)(v63 + 4464) = v64;
        v12 = 0;
        v65 = v64 + 1;
        v11 = v64;
      }
      *v65 = v12 + 16;
      *(_DWORD *)((char *)v11 + v12 + 12) = 16843031;
      *(_DWORD *)((char *)v11 + v12 + 8) = off_13A0EC;
    }
    *(_DWORD *)v1 = v54 + 1;
    v66 = sub_D0C60(v1);
    v9 = nullptr;
    if ( v66 )
    {
      v72 = v66;
      v49 = *(_DWORD **)(a1 + 4464);
      v50 = v49[1];
      if ( (unsigned int)(v50 + 16) < 0xFF8 )
      {
        v68 = v49 + 1;
      }
      else
      {
        v67 = operator new[](0x1000u);
        *v67 = v49;
        v67[1] = 0;
        *(_DWORD *)(a1 + 4464) = v67;
        v50 = 0;
        v68 = v67 + 1;
        v49 = v67;
      }
      *v68 = v50 + 16;
      *(_DWORD *)((char *)v49 + v50 + 12) = 16843031;
      *(_DWORD *)((char *)v49 + v50 + 8) = off_13A0EC;
      *(_DWORD *)((char *)v49 + v50 + 16) = v7;
      goto LABEL_66;
    }
  }
  return v9;
}
// 13A0EC: using guessed type int (*off_13A0EC[3])();
// 13A1CC: using guessed type int (*off_13A1CC[3])();
// 13A6D4: using guessed type int (*off_13A6D4[3])();
