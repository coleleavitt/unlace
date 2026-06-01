/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_dynamic_register_set
// Address: 0x00073A48

//----- (00073A48) --------------------------------------------------------
int __fastcall serialize_dynamic_register_set(int a1, int *a2)
{
  const char **v2; // r4
  _BYTE *v3; // r0
  unsigned int v4; // r5
  const char **v5; // r0
  int v6; // r1
  _BYTE *v7; // r0
  int i; // r7
  const char *v9; // r0
  const char *v10; // r6
  size_t v11; // r0
  unsigned int v12; // r4
  unsigned int v13; // r7
  int **v14; // r6
  int **v15; // r5
  int *v16; // r0
  int *v17; // r0
  int *v18; // r1
  _BYTE *v19; // r0
  int v20; // r1
  int v21; // r1
  unsigned int v22; // r0
  int **v23; // r6
  int **v24; // r5
  int *v25; // r1
  int *v26; // r1
  int *v27; // r1
  unsigned int v28; // r5
  int v29; // r0
  _BYTE *v30; // r0
  int v31; // r4
  unsigned int j; // r7
  const char *v33; // r6
  size_t v34; // r0
  _BYTE *v35; // r0
  unsigned int k; // r5
  int v37; // r7
  const char *v38; // r6
  size_t v39; // r0
  int v40; // r4
  _BYTE *v41; // r0
  _BYTE *v42; // r0
  _BYTE *v43; // r0
  unsigned int v44; // r2
  int *v45; // r3
  unsigned int v46; // r1
  int **v47; // r0
  unsigned int v48; // r6
  int *v49; // r7
  _BYTE *v50; // r0
  __int64 v51; // kr00_8
  bool v52; // zf
  int v53; // r4
  __int64 v54; // r2
  _BYTE *v55; // r0
  _BYTE *v56; // r0
  int v59; // [sp+10h] [bp-44h]
  unsigned int v60; // [sp+18h] [bp-3Ch]
  int v61; // [sp+20h] [bp-34h]
  char *s; // [sp+24h] [bp-30h]
  char *sa; // [sp+24h] [bp-30h]
  int **v65; // [sp+2Ch] [bp-28h] BYREF
  int **v66; // [sp+30h] [bp-24h] BYREF
  int v67; // [sp+34h] [bp-20h]
  int **v68; // [sp+38h] [bp-1Ch] BYREF
  int **v69; // [sp+3Ch] [bp-18h] BYREF
  int v70; // [sp+40h] [bp-14h]
  _BYTE v71[5]; // [sp+44h] [bp-10h] BYREF
  _BYTE v72[5]; // [sp+49h] [bp-Bh] BYREF
  _BYTE v73[6]; // [sp+4Eh] [bp-6h] BYREF

  v60 = a2[1];
  if ( !v60 )
    return _stack_chk_guard - *(_DWORD *)&v73[2];
  v61 = *a2;
  if ( !*a2 )
    return _stack_chk_guard - *(_DWORD *)&v73[2];
  v2 = (const char **)a2[6];
  if ( !v2 )
    return _stack_chk_guard - *(_DWORD *)&v73[2];
  v3 = pack_dd(v71, (unsigned int)v72, 0xFFFFFF01);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v3 - v71);
  v4 = -1;
  v5 = v2;
  do
  {
    v6 = (int)*v5++;
    ++v4;
  }
  while ( v6 );
  v7 = pack_dd(v71, (unsigned int)v72, v4);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v7 - v71);
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v9 = *v2++;
      v10 = &byte_A0742;
      if ( v9 )
        v10 = v9;
      v11 = strlen(v10);
      ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v10, v11 + 1);
    }
  }
  v12 = 0;
  v70 = 0;
  v69 = nullptr;
  v68 = (int **)&v69;
  s = nullptr;
  do
  {
    v13 = *(_DWORD *)(v61 + 20 * v12 + 12);
    if ( !v13 )
      goto LABEL_27;
    if ( !v69 )
    {
      v15 = (int **)&v69;
      v14 = (int **)&v69;
      goto LABEL_23;
    }
    v14 = v69;
    v15 = (int **)&v69;
    while ( 1 )
    {
      v16 = v14[4];
      if ( (unsigned int)v16 > v13 )
        break;
      if ( (unsigned int)v16 >= v13 )
        goto LABEL_23;
      v17 = v14[1];
      v15 = v14 + 1;
      if ( !v17 )
        goto LABEL_23;
      ++v14;
LABEL_15:
      v15 = v14;
      v14 = (int **)v17;
    }
    v17 = *v14;
    if ( *v14 )
      goto LABEL_15;
    v15 = v14;
LABEL_23:
    if ( !*v15 )
    {
      v18 = (int *)operator new(0x18u);
      v18[4] = v13;
      v18[5] = (int)s;
      *v18 = 0;
      v18[1] = 0;
      v18[2] = (int)v14;
      *v15 = v18;
      if ( *v68 )
      {
        v68 = (int **)*v68;
        v18 = *v15;
      }
      sub_261FA((int *)v69, v18);
      ++v70;
      ++s;
    }
LABEL_27:
    ++v12;
  }
  while ( v12 < v60 );
  v67 = 0;
  v66 = nullptr;
  v65 = (int **)&v66;
  v19 = pack_dd(v71, (unsigned int)v72, (unsigned int)s);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v19 - v71);
  v20 = 0;
  while ( 2 )
  {
    v59 = v20;
    v21 = v61 + 20 * v20;
    v22 = *(_DWORD *)(v21 + 12);
    sa = (char *)(v21 + 12);
    if ( !v22 )
      goto LABEL_51;
    v23 = v66;
    if ( !v66 )
    {
      v24 = (int **)&v66;
      v23 = (int **)&v66;
      goto LABEL_40;
    }
    v24 = (int **)&v66;
    while ( 2 )
    {
      v25 = v23[4];
      if ( v22 >= (unsigned int)v25 )
      {
        if ( (unsigned int)v25 >= v22 )
          goto LABEL_40;
        v26 = v23[1];
        v24 = v23 + 1;
        if ( !v26 )
          goto LABEL_40;
        ++v23;
        goto LABEL_32;
      }
      v26 = *v23;
      if ( *v23 )
      {
LABEL_32:
        v24 = v23;
        v23 = (int **)v26;
        continue;
      }
      break;
    }
    v24 = v23;
LABEL_40:
    if ( !*v24 )
    {
      v27 = (int *)operator new(0x14u);
      v27[4] = *(_DWORD *)sa;
      *v27 = 0;
      v27[1] = 0;
      v27[2] = (int)v23;
      *v24 = v27;
      if ( *v65 )
      {
        v65 = (int **)*v65;
        v27 = *v24;
      }
      sub_261FA((int *)v66, v27);
      ++v67;
      v28 = 1;
      if ( !(*(unsigned __int8 *)(v61 + 20 * v59 + 5) << 31) )
      {
        v29 = *(unsigned __int8 *)(v61 + 20 * v59 + 9);
        v28 = 16;
        if ( v29 != 1 )
        {
          if ( v29 != 2 )
          {
            if ( !under_debugger )
              interr(1783);
            __debugbreak();
          }
          v28 = 32;
        }
      }
      v30 = pack_dd(v71, (unsigned int)v72, v28);
      ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v30 - v71);
      v31 = 0;
      for ( j = 0; j < v28; ++j )
      {
        v33 = *(const char **)(*(_DWORD *)sa + v31);
        if ( !v33 )
          v33 = &byte_A0742;
        v34 = strlen(v33);
        ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v33, v34 + 1);
        v31 += 4;
      }
    }
LABEL_51:
    v20 = v59 + 1;
    if ( v59 + 1 < v60 )
      continue;
    break;
  }
  v35 = pack_dd(v71, (unsigned int)v72, v60);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v35 - v71);
  for ( k = 0; k < v60; ++k )
  {
    v37 = 20 * k;
    v38 = &byte_A0742;
    if ( *(_DWORD *)(v61 + 20 * k) )
      v38 = *(const char **)(v61 + 20 * k);
    v39 = strlen(v38);
    ((void (__fastcall *)(int, const char *, size_t))loc_30B84)(a1, v38, v39 + 1);
    v40 = v61 + v37;
    v41 = pack_dd(v71, (unsigned int)v72, *(_DWORD *)(v61 + v37 + 4));
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v41 - v71);
    v42 = pack_dd(v71, (unsigned int)v72, *(unsigned __int8 *)(v61 + v37 + 8));
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v42 - v71);
    v43 = pack_dd(v71, (unsigned int)v72, *(unsigned __int8 *)(v61 + v37 + 9));
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v43 - v71);
    v44 = 0;
    v45 = (int *)v69;
    if ( v69 )
    {
      v46 = *(_DWORD *)(v61 + v37 + 12);
      v47 = (int **)&v69;
      do
      {
        v48 = v45[4];
        if ( v48 >= v46 )
          v47 = (int **)v45;
        v49 = v45 + 1;
        if ( v48 >= v46 )
          v49 = v45;
        v45 = (int *)*v49;
      }
      while ( *v49 );
      if ( v47 != (int **)&v69 && v46 >= (unsigned int)v47[4] )
        v44 = (unsigned int)v47[5] + 1;
    }
    v50 = pack_dd(v71, (unsigned int)v72, v44);
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v50 - v71);
    v54 = *(unsigned int *)(v40 + 16);
    v51 = v54 + 1;
    v53 = v54 + 1;
    v52 = (_DWORD)v54 == -1;
    LODWORD(v54) = HIDWORD(v54);
    if ( !v52 )
      LODWORD(v54) = v51;
    if ( v53 )
      HIDWORD(v54) = HIDWORD(v51);
    v55 = pack_dq(v71, (unsigned int)v73, v54, HIDWORD(v54));
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v55 - v71);
  }
  v56 = pack_dd(v71, (unsigned int)v72, a2[12]);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v71, v56 - v71);
  sub_74D00((int)&v65, v66);
  sub_74D20((int)&v68, v69);
  return _stack_chk_guard - *(_DWORD *)&v73[2];
}
// A0742: using guessed type char byte_A0742;
// E0550: using guessed type char under_debugger;
