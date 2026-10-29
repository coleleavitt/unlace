/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_command_line
// Address: 0x000721C4

//----- (000721C4) --------------------------------------------------------
int __fastcall parse_command_line(int a1, _DWORD *a2, char *a3, char a4)
{
  int v5; // r5
  char *v6; // r5
  int v7; // r7
  int v8; // r3
  unsigned int v9; // r5
  char *v10; // r0
  char *v11; // r0
  unsigned __int8 *v12; // r5
  int v13; // r7
  int v14; // r6
  unsigned __int8 *v15; // r2
  unsigned int v16; // r5
  void *v17; // r1
  unsigned __int8 *v18; // r7
  char *v19; // r0
  char *v20; // r5
  int v21; // r2
  char *v22; // r1
  void *v23; // r3
  unsigned int v24; // r0
  unsigned int v25; // r2
  int v26; // r1
  int v27; // r3
  unsigned int v28; // r5
  int v29; // r0
  char *v30; // r6
  void *v31; // r1
  unsigned int v32; // r2
  unsigned int v33; // r3
  char *v34; // r7
  _DWORD *v35; // r4
  void *v36; // r0
  unsigned int v37; // r1
  unsigned int v38; // r2
  char *v39; // r6
  int v40; // r0
  int v41; // r4
  int v42; // r5
  int v43; // r0
  int v44; // r1
  unsigned int v45; // r5
  void *v46; // r1
  int v47; // r0
  int v48; // r6
  int v49; // r1
  unsigned int v50; // r5
  void *v51; // r1
  int v52; // r6
  unsigned int v53; // r1
  unsigned __int8 *v54; // r7
  int v55; // r2
  int v56; // r1
  int v57; // r2
  char *v58; // r0
  int v59; // r2
  char *v60; // r1
  void *v61; // r3
  unsigned int v62; // r0
  unsigned int v63; // r2
  int *v64; // r4
  void *v65; // r1
  int v66; // r1
  char *v67; // r0
  int v68; // r2
  char *v69; // r3
  unsigned int v70; // r0
  unsigned int v71; // r2
  unsigned __int8 *v73; // [sp+58h] [bp-70h]
  int v74; // [sp+60h] [bp-68h]
  int v75; // [sp+6Ch] [bp-5Ch]
  int v76; // [sp+70h] [bp-58h]
  char *v79; // [sp+7Ch] [bp-4Ch]
  char *v80; // [sp+7Ch] [bp-4Ch]
  char *v81; // [sp+7Ch] [bp-4Ch]
  int v83; // [sp+88h] [bp-40h]
  int v84; // [sp+88h] [bp-40h]
  int v85; // [sp+88h] [bp-40h]
  int v86; // [sp+8Ch] [bp-3Ch]
  unsigned int v87; // [sp+8Ch] [bp-3Ch]
  void *v88; // [sp+94h] [bp-34h] BYREF
  unsigned int v89; // [sp+98h] [bp-30h]
  unsigned int v90; // [sp+9Ch] [bp-2Ch]
  void *v91; // [sp+A0h] [bp-28h] BYREF
  unsigned int v92; // [sp+A4h] [bp-24h]
  unsigned int v93; // [sp+A8h] [bp-20h]
  void *ptr; // [sp+ACh] [bp-1Ch] BYREF
  unsigned int v95; // [sp+B0h] [bp-18h]
  unsigned int v96; // [sp+B4h] [bp-14h]
  void *v97; // [sp+B8h] [bp-10h]
  unsigned int v98; // [sp+BCh] [bp-Ch]
  unsigned int v99; // [sp+C0h] [bp-8h]

  v5 = 0;
  if ( !a3 )
    return v5;
  v89 = 0;
  v88 = nullptr;
  v90 = 0;
  v6 = skip_spaces(a3);
  v7 = (unsigned __int8)*v6;
  if ( !*v6 )
    goto LABEL_109;
  v86 = (unsigned __int8)(a4 & 4) >> 2;
  v8 = 0;
  do
  {
    if ( (unsigned __int8)v7 == 39 || (unsigned __int8)v7 == 34 )
    {
      if ( (unsigned __int8)v8 == (unsigned __int8)v7 && v8 << 24 )
      {
        v39 = v6 + 1;
        v40 = (unsigned __int8)v6[1];
        v41 = (char)v40;
        v42 = a1;
        if ( (char)v40 > -1 )
        {
          v43 = isspace(v40);
          if ( !v41 || v43 )
          {
            v44 = *(_DWORD *)(a1 + 4);
            if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v44 + 1) )
            {
              v58 = (char *)qvector_reserve(a1, *(void **)a1, v44 + 1, 0xCu);
              v42 = a1;
              *(_DWORD *)a1 = v58;
              v44 = *(_DWORD *)(a1 + 4);
            }
            else
            {
              v58 = *(char **)a1;
            }
            v59 = 12 * v44;
            *(_DWORD *)&v58[v59] = 0;
            v60 = &v58[12 * v44];
            *((_DWORD *)v60 + 1) = 0;
            v86 = 0;
            *((_DWORD *)v60 + 2) = 0;
            ++*(_DWORD *)(v42 + 4);
            v61 = *(void **)&v58[v59];
            *(_DWORD *)&v58[v59] = v88;
            v62 = *((_DWORD *)v60 + 1);
            *((_DWORD *)v60 + 1) = v89;
            v63 = *((_DWORD *)v60 + 2);
            *((_DWORD *)v60 + 2) = v90;
            v89 = v62;
            v88 = v61;
            v90 = v63;
          }
        }
        v6 = skip_spaces(v39);
        v8 = 0;
        goto LABEL_108;
      }
      v30 = v6 + 1;
      if ( !(v8 << 24) )
      {
        v8 = v7;
        ++v6;
        goto LABEL_108;
      }
      goto LABEL_85;
    }
    if ( v8 << 24 )
      goto LABEL_69;
    if ( (char)v7 > -1 )
    {
      v84 = v8;
      v47 = isspace((unsigned __int8)v7);
      v8 = v84;
      if ( v47 )
      {
        v48 = a1;
        v49 = *(_DWORD *)(a1 + 4);
        if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v49 + 1) )
        {
          v19 = (char *)qvector_reserve(a1, *(void **)a1, v49 + 1, 0xCu);
          v20 = v6 + 1;
          v48 = a1;
          *(_DWORD *)a1 = v19;
          v49 = *(_DWORD *)(a1 + 4);
        }
        else
        {
          v19 = *(char **)a1;
          v20 = v6 + 1;
        }
        v21 = 12 * v49;
        *(_DWORD *)&v19[v21] = 0;
        v22 = &v19[12 * v49];
        *((_DWORD *)v22 + 1) = 0;
        *((_DWORD *)v22 + 2) = 0;
        ++*(_DWORD *)(v48 + 4);
        v23 = *(void **)&v19[v21];
        *(_DWORD *)&v19[v21] = v88;
        v24 = *((_DWORD *)v22 + 1);
        *((_DWORD *)v22 + 1) = v89;
        v25 = *((_DWORD *)v22 + 2);
        *((_DWORD *)v22 + 2) = v90;
        v89 = v24;
        v88 = v23;
        v90 = v25;
        v6 = skip_spaces(v20);
        v8 = 0;
        v86 = 0;
        goto LABEL_108;
      }
LABEL_69:
      if ( (unsigned __int8)v8 != 39 )
      {
        v30 = v6 + 1;
        if ( (unsigned __int8)v7 == 92 )
        {
          v7 = (unsigned __int8)v6[1];
          v30 = v6 + 2;
          if ( v7 != 34 && v7 != 92 )
          {
            v45 = v89 - 1;
            if ( !v89 )
              v45 = 0;
            v46 = v88;
            if ( v90 < v45 + 2 )
            {
              v83 = v8;
              v46 = qvector_reserve((int)&v88, v88, v45 + 2, 1u);
              v88 = v46;
              v8 = v83;
            }
            v89 = v45 + 2;
            *((_BYTE *)v46 + v45) = 92;
            *((_BYTE *)v88 + v45 + 1) = 0;
            if ( !v7 )
              break;
          }
        }
        goto LABEL_85;
      }
    }
    v30 = v6 + 1;
LABEL_85:
    v50 = v89 - 1;
    if ( !v89 )
      v50 = 0;
    v51 = v88;
    if ( v90 < v50 + 2 )
    {
      v81 = v30;
      v52 = v8;
      v51 = qvector_reserve((int)&v88, v88, v50 + 2, 1u);
      v88 = v51;
      v8 = v52;
      v30 = v81;
    }
    v89 = v50 + 2;
    *((_BYTE *)v51 + v50) = v7;
    *((_BYTE *)v88 + v50 + 1) = 0;
    if ( (((((unsigned __int8)v7 | 2) ^ 0x3E | (unsigned __int8)v8) != 0) | v86) << 31 )
    {
      v6 = v30;
      goto LABEL_108;
    }
    v85 = v8;
    v53 = v89 - 1;
    if ( !v89 )
      v53 = 0;
    if ( !a2 || v53 > 2 || (v54 = (unsigned __int8 *)&v30[-v53], v89 < 2) )
    {
LABEL_96:
      v86 = 0;
      goto LABEL_97;
    }
    v74 = &v30[-v53] - a3;
    v75 = 1;
    v55 = (unsigned __int8)*((char *)v88 + v89 - 2);
    if ( v55 == 62 )
    {
      if ( v53 == 2 )
      {
        if ( *(char *)v88 <= -1 )
          goto LABEL_96;
        v9 = *(unsigned __int8 *)v88 - 48;
        if ( v9 >= 0xA )
          goto LABEL_55;
        v26 = (unsigned __int8)*v30;
        v10 = v30 + 1;
        if ( v26 != 62 )
          v10 = v30;
        v27 = 6;
        if ( v26 != 62 )
          v27 = 2;
        v75 = v27;
      }
      else
      {
        if ( v53 != 1 )
          goto LABEL_55;
        v56 = (unsigned __int8)*v30;
        v10 = v30 + 1;
        if ( v56 != 62 )
          v10 = v30;
        v57 = 6;
        if ( v56 != 62 )
          v57 = 2;
        v75 = v57;
        v9 = 1;
      }
    }
    else
    {
      v9 = 0;
      if ( v53 != 1 || (v10 = v30, v55 != 60) )
      {
        v86 = 0;
LABEL_97:
        v6 = v30;
        goto LABEL_108;
      }
    }
    v73 = v54;
    v87 = v9;
    v95 = 0;
    ptr = nullptr;
    v96 = 0;
    v11 = skip_spaces(v10);
    v12 = (unsigned __int8 *)v11;
    v13 = (unsigned __int8)*v11;
    if ( !*v11 )
    {
      v15 = (unsigned __int8 *)v11;
      v8 = v85;
      v28 = v87;
      goto LABEL_48;
    }
    v8 = v85;
    if ( v13 == 34 || v13 == 39 )
    {
      v79 = v30;
      v76 = (unsigned __int8)*v11;
      while ( 1 )
      {
        v14 = v12[1];
        v15 = v12 + 1;
        if ( v14 == 92 )
        {
          LOBYTE(v14) = v12[2];
          v15 = v12 + 2;
          if ( !(_BYTE)v14 )
          {
LABEL_22:
            v95 = 0;
LABEL_39:
            v30 = v79;
            v28 = v87;
            v75 += 8;
            goto LABEL_48;
          }
        }
        else
        {
          if ( !v12[1] )
            goto LABEL_22;
          if ( v14 == v13 )
          {
            v15 = v12 + 2;
            goto LABEL_39;
          }
        }
        v16 = v95 - 1;
        if ( !v95 )
          v16 = 0;
        v17 = ptr;
        if ( v96 < v16 + 2 )
        {
          v18 = v15;
          v17 = qvector_reserve((int)&ptr, ptr, v16 + 2, 1u);
          ptr = v17;
          v8 = v85;
          v15 = v18;
          v13 = v76;
        }
        v95 = v16 + 2;
        *((_BYTE *)v17 + v16) = v14;
        *((_BYTE *)ptr + v16 + 1) = 0;
        v12 = v15;
      }
    }
    v80 = v11;
    while ( 1 )
    {
      if ( (char)v13 <= -1 )
      {
        if ( ((unsigned __int8)v13 | 2) == 0x3E )
          goto LABEL_41;
        goto LABEL_37;
      }
      v29 = isspace((unsigned __int8)v13);
      if ( ((unsigned __int8)v13 | 2) == 0x3E )
        break;
      v8 = v85;
      if ( v29 )
        goto LABEL_41;
LABEL_37:
      v13 = (unsigned __int8)*++v80;
      if ( !v13 )
        goto LABEL_41;
    }
    v8 = v85;
LABEL_41:
    v15 = (unsigned __int8 *)v80;
    if ( v80 <= (char *)v12 )
    {
      v28 = v87;
    }
    else
    {
      sub_266B8(&v91, v12, v80 - (char *)v12);
      v28 = v87;
      v31 = v91;
      v97 = v91;
      v91 = nullptr;
      v32 = v92;
      v92 = 0;
      v98 = v32;
      v33 = v93;
      v93 = 0;
      v99 = v33;
      if ( ptr )
      {
        v95 = 0;
        qfree(ptr);
        ptr = v97;
        v95 = v98;
        v96 = v99;
        v8 = v85;
        v15 = (unsigned __int8 *)v80;
        if ( !v91 )
          goto LABEL_48;
        v92 = 0;
        qfree(v91);
        v93 = 0;
        v91 = nullptr;
      }
      else
      {
        ptr = v31;
        v95 = v32;
        v96 = v33;
      }
      v8 = v85;
      v15 = (unsigned __int8 *)v80;
    }
LABEL_48:
    if ( v95 >= 2 )
    {
      v34 = (char *)v15;
      v35 = sub_739A8(a2);
      v36 = (void *)v35[1];
      v35[1] = ptr;
      v37 = v35[2];
      v35[2] = v95;
      v38 = v35[3];
      v35[3] = v96;
      ptr = v36;
      v95 = v37;
      v96 = v38;
      *v35 = v28;
      v35[4] = v75;
      v6 = skip_spaces(v34);
      v35[5] = v74;
      v35[6] = v6 - (char *)v73;
      v8 = v85;
    }
    else
    {
      v6 = nullptr;
    }
    if ( ptr )
    {
      v95 = 0;
      qfree(ptr);
      v96 = 0;
      ptr = nullptr;
      v8 = v85;
    }
    if ( v6 )
    {
      v86 = 0;
      v89 = 0;
      goto LABEL_108;
    }
LABEL_55:
    v86 = 0;
    v6 = v30;
LABEL_108:
    v7 = (unsigned __int8)*v6;
  }
  while ( *v6 );
LABEL_109:
  if ( v89 >= 2 )
  {
    v64 = (int *)(a1 + 4);
    v66 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v66 + 1) )
    {
      v67 = *(char **)a1;
    }
    else
    {
      v67 = (char *)qvector_reserve(a1, *(void **)a1, v66 + 1, 0xCu);
      *(_DWORD *)a1 = v67;
      v66 = *(_DWORD *)(a1 + 4);
    }
    v68 = 12 * v66;
    *(_DWORD *)&v67[v68] = 0;
    v69 = &v67[12 * v66];
    *((_DWORD *)v69 + 1) = 0;
    *((_DWORD *)v69 + 2) = 0;
    ++*v64;
    v65 = *(void **)v69;
    *(_DWORD *)&v67[v68] = v88;
    v70 = *(_DWORD *)&v67[v68 + 4];
    *((_DWORD *)v69 + 1) = v89;
    v71 = *((_DWORD *)v69 + 2);
    *((_DWORD *)v69 + 2) = v90;
    v89 = v70;
    v88 = v65;
    v90 = v71;
  }
  else
  {
    v64 = (int *)(a1 + 4);
    v65 = v88;
  }
  v5 = *v64;
  if ( v65 )
  {
    v89 = 0;
    qfree(v65);
    v90 = 0;
    v88 = nullptr;
  }
  return v5;
}
// 722E6: conditional instruction was optimized away because r7.4 is in (==22|==27)
