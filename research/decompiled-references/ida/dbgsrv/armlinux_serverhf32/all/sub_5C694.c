/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C694
// Address: 0x0005C694

//----- (0005C694) --------------------------------------------------------
unsigned int __fastcall sub_5C694(int a1, int a2, int a3)
{
  unsigned int v6; // r1
  unsigned int v7; // r6
  unsigned int v8; // r0
  unsigned int v9; // r10
  unsigned int v10; // r8
  void *v11; // r0
  unsigned int v12; // r7
  int v13; // r4
  char *v14; // r3
  int v15; // r5
  char *v16; // r3
  void *v17; // r0
  unsigned int v19; // r8
  _DWORD *v20; // r6
  int v21; // r9
  char *v22; // r7
  size_t v23; // r6
  void *v24; // r0
  _DWORD *v25; // r0
  _DWORD *v26; // r7
  int v27; // r8
  _DWORD *v28; // r9
  int v29; // r8
  unsigned __int8 *v30; // r12
  void *v31; // r0
  int v32; // r2
  unsigned int v33; // r1
  unsigned __int8 *v34; // r3
  size_t v35; // r6
  unsigned __int8 *v36; // r3
  size_t v37; // r2
  void *v38; // r2
  _DWORD *v39; // r5
  double v40; // r2
  int v41; // r0
  int v42; // r5
  int v43; // r0
  double *v44; // r5
  char *v45; // r6
  unsigned int v46; // r0
  char *v47; // r0
  char *v48; // r5
  int v49; // r2
  int v50; // r3
  int v51; // r3
  char v52; // r7
  void *v53; // r1
  char *i; // r6
  unsigned int v55; // r3
  char *v56; // r2
  int v57; // r3
  char v58; // r7
  void *v59; // r1
  char *v60; // r1
  unsigned int v61; // r2
  char v62; // r7
  void *v63; // r1
  size_t v64; // r2
  unsigned int v65; // r7
  char *v66; // r3
  int v67; // r9
  char *v68; // r3
  void *v69; // r0
  unsigned int v70; // r9
  int v71; // r8
  char *v72; // r6
  size_t v73; // r7
  void *v74; // r0
  int v75; // [sp+4h] [bp-88h]
  int v76; // [sp+4h] [bp-88h]
  const char *v77; // [sp+8h] [bp-84h]
  unsigned int v78; // [sp+10h] [bp-7Ch]
  unsigned int v79; // [sp+18h] [bp-74h]
  int v80; // [sp+18h] [bp-74h]
  int v81; // [sp+1Ch] [bp-70h]
  unsigned int v82; // [sp+20h] [bp-6Ch] BYREF
  void *ptr; // [sp+24h] [bp-68h] BYREF
  unsigned int v84; // [sp+28h] [bp-64h]
  unsigned int v85; // [sp+2Ch] [bp-60h]
  char *s; // [sp+30h] [bp-5Ch] BYREF
  int v87; // [sp+34h] [bp-58h]
  int v88; // [sp+38h] [bp-54h]
  int v89; // [sp+3Ch] [bp-50h] BYREF
  void *src; // [sp+40h] [bp-4Ch] BYREF
  size_t v91; // [sp+44h] [bp-48h]
  int v92; // [sp+48h] [bp-44h]
  int v93; // [sp+4Ch] [bp-40h]
  int v94; // [sp+50h] [bp-3Ch]
  int v95; // [sp+54h] [bp-38h]
  int v96; // [sp+58h] [bp-34h]
  int v97; // [sp+5Ch] [bp-30h]
  int v98; // [sp+60h] [bp-2Ch]
  void *v99; // [sp+64h] [bp-28h] BYREF
  size_t v100; // [sp+68h] [bp-24h]
  int v101; // [sp+6Ch] [bp-20h]
  int v102; // [sp+70h] [bp-1Ch]
  int v103; // [sp+74h] [bp-18h]
  char v104; // [sp+78h] [bp-14h]
  int v105; // [sp+7Ch] [bp-10h]
  int v106; // [sp+80h] [bp-Ch]

  v6 = *(_DWORD *)(a3 + 4);
  ptr = nullptr;
  v84 = 0;
  v85 = 0;
  v7 = sub_7617C((unsigned __int8 **)a3, v6);
  v78 = v7;
  v8 = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
  v9 = v8;
  if ( (v8 >> 31) | (v7 >> 31) || (int)(0x7FFFFFFF - v8) < (int)v7 )
  {
    sub_57FBC(a2, 0);
    if ( *(_BYTE *)(a1 + 96) )
      sub_1700C((int)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n", v7, v9);
    v10 = 0;
    goto LABEL_6;
  }
  v19 = v84;
  v20 = ptr;
  v79 = v78 + v8;
  if ( v78 + v8 != v84 )
  {
    v94 = 0;
    src = nullptr;
    v91 = 0;
    v92 = 0;
    v95 = 0;
    v97 = 0;
    v89 = -1;
    v96 = -1;
    v93 = 4;
    if ( v78 + v8 >= v84 )
    {
      if ( v78 + v8 <= v84 )
        goto LABEL_33;
      if ( ptr <= &v89 && &v89 < (int *)((char *)ptr + 36 * v85) )
      {
        v98 = -1;
        v99 = nullptr;
        v100 = 0;
        v101 = 0;
        sub_5C670(&v99, (int)&src);
        v102 = v93;
        v103 = v94;
        v104 = v95;
        v105 = v96;
        v106 = v97;
        if ( v79 > v85 )
          ptr = sub_77EB0((int)&ptr, ptr, v79, 0x24u);
        v70 = v84;
        if ( v79 > v84 )
        {
          v71 = 36 * v84;
          do
          {
            v72 = (char *)ptr + v71;
            *(_DWORD *)v72 = v98;
            *((_DWORD *)v72 + 1) = 0;
            *((_DWORD *)v72 + 2) = 0;
            v73 = v100;
            *((_DWORD *)v72 + 3) = 0;
            if ( v73 )
            {
              v74 = sub_77E84(v73);
              *((_DWORD *)v72 + 1) = v74;
              *((_DWORD *)v72 + 3) = v73;
              memcpy(v74, v99, v73);
              *((_DWORD *)v72 + 2) = v73;
            }
            ++v70;
            v71 += 36;
            *((_DWORD *)v72 + 4) = v102;
            *((_DWORD *)v72 + 5) = v103;
            v72[24] = v104;
            *((_DWORD *)v72 + 7) = v105;
            *((_DWORD *)v72 + 8) = v106;
          }
          while ( v79 != v70 );
        }
        v84 = v79;
        if ( v99 )
        {
          v100 = 0;
          sub_77E08(v99);
        }
        goto LABEL_30;
      }
      if ( v79 <= v85 || (v25 = sub_77EB0((int)&ptr, ptr, v79, 0x24u), v19 = v84, v20 = v25, ptr = v25, v79 > v84) )
      {
        v21 = 9 * v19;
        while ( 1 )
        {
          v22 = (char *)&v20[v21];
          v20[v21] = v89;
          *((_DWORD *)v22 + 1) = 0;
          *((_DWORD *)v22 + 2) = 0;
          v23 = v91;
          *((_DWORD *)v22 + 3) = 0;
          if ( v23 )
          {
            v24 = sub_77E84(v23);
            *((_DWORD *)v22 + 1) = v24;
            *((_DWORD *)v22 + 3) = v23;
            memcpy(v24, src, v23);
            *((_DWORD *)v22 + 2) = v23;
          }
          ++v19;
          v21 += 9;
          *((_DWORD *)v22 + 4) = v93;
          *((_DWORD *)v22 + 5) = v94;
          v22[24] = v95;
          *((_DWORD *)v22 + 7) = v96;
          *((_DWORD *)v22 + 8) = v97;
          if ( v79 <= v19 )
            break;
          v20 = ptr;
        }
      }
    }
    else
    {
      v65 = v78 + v8;
      v66 = (char *)ptr;
      v67 = 36 * v79;
      while ( 1 )
      {
        v68 = &v66[v67];
        v69 = *((void **)v68 + 1);
        if ( v69 )
        {
          *((_DWORD *)v68 + 2) = 0;
          sub_77E08(v69);
        }
        ++v65;
        v67 += 36;
        if ( v19 == v65 )
          break;
        v66 = (char *)ptr;
      }
    }
    v84 = v79;
LABEL_30:
    if ( src )
    {
      v91 = 0;
      sub_77E08(src);
    }
    v20 = ptr;
  }
LABEL_33:
  v26 = &v20[9 * v78];
  v80 = 36 * v78;
  if ( v26 == v20 )
  {
    v28 = &v20[9 * v9];
    v81 = 36 * v9;
    if ( v20 != v28 )
    {
LABEL_37:
      v29 = 0;
      while ( 1 )
      {
        v29 += sub_76244((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4)) - 1;
        *v26 = v29;
        v33 = *(_DWORD *)(a3 + 4);
        v34 = *(unsigned __int8 **)a3;
        if ( v33 > *(_DWORD *)a3 )
        {
          v35 = *v34;
          v36 = v34 + 1;
          *(_DWORD *)a3 = v36;
          if ( v35 )
            break;
        }
LABEL_47:
        v26[4] = sub_7617C((unsigned __int8 **)a3, v33);
        v26[7] = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v26[8] = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
        v26 += 9;
        if ( v28 == v26 )
          goto LABEL_53;
      }
      v37 = v26[2];
      if ( v35 <= v37 )
      {
        if ( v35 >= v37 )
        {
LABEL_40:
          v30 = &v36[v35];
          v31 = (void *)v26[1];
          v32 = __CFADD__(v36, v35);
          if ( (unsigned int)v30 > v33 )
            v32 |= 1u;
          if ( !v32 )
          {
            *(_DWORD *)a3 = v30;
            memcpy(v31, v36, v35);
            v33 = *(_DWORD *)(a3 + 4);
          }
          goto LABEL_47;
        }
        v26[2] = v35;
      }
      else
      {
        sub_5B7EC((int)(v26 + 1), v35);
      }
      v33 = *(_DWORD *)(a3 + 4);
      v36 = *(unsigned __int8 **)a3;
      goto LABEL_40;
    }
    v38 = v20;
  }
  else
  {
    v27 = 0;
    do
    {
      *((_BYTE *)v20 + 24) = 0;
      v27 += sub_76244((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4)) - 1;
      *v20 = v27;
      v20[5] = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
      v20[4] = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
      v20[7] = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
      v20[8] = sub_7617C((unsigned __int8 **)a3, *(_DWORD *)(a3 + 4));
      v20 += 9;
    }
    while ( v26 != v20 );
    v28 = &v26[9 * v9];
    v81 = 36 * v9;
    if ( v26 != v28 )
      goto LABEL_37;
LABEL_53:
    v38 = ptr;
    v39 = (char *)ptr + v80;
    if ( v26 != (_DWORD *)((char *)ptr + v80) )
    {
      do
      {
        if ( *(_BYTE *)(a1 + 96) )
        {
          LODWORD(v40) = v39[4];
          if ( LODWORD(v40) == 4 )
            v41 = 0;
          else
            v41 = v39[5];
          HIDWORD(v40) = v39[2];
          sub_1700C((int)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n", v40, v41, v75, v77);
        }
        v39 += 9;
      }
      while ( v26 != v39 );
      v38 = ptr;
    }
  }
  v42 = *(_DWORD *)(a1 + 244);
  s = nullptr;
  v87 = 0;
  v88 = 0;
  v43 = (*(int (__fastcall **)(int, unsigned int *, void *, unsigned int, unsigned int, char **))(*(_DWORD *)v42 + 164))(
          v42,
          &v82,
          v38,
          v78,
          v9,
          &s);
  v44 = (double *)ptr;
  v10 = v43;
  v45 = (char *)ptr + v80;
  if ( (char *)ptr + v80 != ptr )
  {
    do
    {
      if ( *(_BYTE *)(a1 + 96) )
      {
        v46 = *((unsigned __int8 *)v44 + 24);
        if ( v46 > 0xA )
          v47 = "?";
        else
          v47 = off_CFFB8[v46];
        sub_1700C((int)"add_bpt(ea=%a type=%d len=%d) => %s\n", v44[2], v47, v76, v77);
      }
      v44 = (double *)((char *)v44 + 36);
    }
    while ( v45 != (char *)v44 );
  }
  sub_57FBC(a2, v10);
  sub_57FBC(a2, v82);
  v48 = (char *)ptr;
  if ( v45 != ptr )
  {
    do
    {
      v51 = *(_DWORD *)(a2 + 4);
      v52 = v48[24];
      v53 = *(void **)a2;
      if ( (unsigned int)(v51 + 1) > *(_DWORD *)(a2 + 8) )
      {
        v53 = sub_77EB0(a2, v53, v51 + 1, 1u);
        v51 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)a2 = v53;
      }
      *((_BYTE *)v53 + v51) = v52;
      v49 = *(_DWORD *)(a2 + 4);
      v50 = v49 + 1;
      *(_DWORD *)(a2 + 4) = v49 + 1;
      if ( !v48[24] && *((_DWORD *)v48 + 4) == 4 )
      {
        v61 = v49 + 2;
        v62 = v48[8];
        v63 = *(void **)a2;
        if ( v61 > *(_DWORD *)(a2 + 8) )
        {
          v63 = sub_77EB0(a2, v63, v61, 1u);
          v50 = *(_DWORD *)(a2 + 4);
          *(_DWORD *)a2 = v63;
        }
        *((_BYTE *)v63 + v50) = v62;
        ++*(_DWORD *)(a2 + 4);
        v64 = *((_DWORD *)v48 + 2);
        if ( v64 )
          sub_57F50(a2, *((const void **)v48 + 1), v64);
      }
      v48 += 36;
    }
    while ( v45 != v48 );
    v48 = v45;
  }
  for ( i = &v45[v81]; i != v48; v48 += 36 )
  {
    v57 = *(_DWORD *)(a2 + 4);
    v58 = v48[24];
    v59 = *(void **)a2;
    if ( (unsigned int)(v57 + 1) > *(_DWORD *)(a2 + 8) )
    {
      v59 = sub_77EB0(a2, v59, v57 + 1, 1u);
      v57 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)a2 = v59;
    }
    *((_BYTE *)v59 + v57) = v58;
    ++*(_DWORD *)(a2 + 4);
    if ( *(_BYTE *)(a1 + 96) )
    {
      v55 = (unsigned __int8)v48[24];
      if ( v55 > 0xA )
        v56 = "?";
      else
        v56 = (char *)off_CFFB8;
      if ( v55 <= 0xA )
        v56 = *(char **)&v56[4 * v55];
      sub_1700C((int)"del_bpt(ea=%a) => %s\n", *(_DWORD *)v48, v56);
    }
  }
  if ( v10 != 1 )
  {
    if ( v87 )
      v60 = s;
    else
      v60 = (char *)&dword_8DA5C;
    sub_58044((void **)a2, v60);
  }
  if ( s )
  {
    v87 = 0;
    sub_77E08(s);
  }
LABEL_6:
  v11 = ptr;
  if ( ptr )
  {
    v12 = v84;
    if ( v84 )
    {
      v13 = 0;
      v14 = (char *)ptr;
      v15 = 0;
      while ( 1 )
      {
        v16 = &v14[v13];
        v17 = *((void **)v16 + 1);
        if ( v17 )
        {
          *((_DWORD *)v16 + 2) = 0;
          sub_77E08(v17);
        }
        ++v15;
        v13 += 36;
        if ( v12 == v15 )
          break;
        v14 = (char *)ptr;
      }
      v11 = ptr;
    }
    v84 = 0;
    sub_77E08(v11);
  }
  return v10;
}
// 5C93E: variable 'v75' is possibly undefined
// 5C93E: variable 'v77' is possibly undefined
// 5C9A6: variable 'v76' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
// CFFB8: using guessed type char *off_CFFB8[17];
