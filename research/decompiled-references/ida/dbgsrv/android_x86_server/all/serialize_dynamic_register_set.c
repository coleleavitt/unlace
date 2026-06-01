/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_dynamic_register_set
// Address: 0x000A06C0

//----- (000A06C0) --------------------------------------------------------
unsigned int __cdecl serialize_dynamic_register_set(_DWORD *a1, int *a2)
{
  int v2; // esi
  _BYTE *v3; // eax
  unsigned int v4; // eax
  _BYTE *v6; // eax
  int i; // esi
  char *v8; // edi
  size_t v9; // eax
  unsigned int v10; // edi
  _DWORD *v11; // esi
  void ***v12; // edi
  void ***v13; // esi
  void **v14; // eax
  void **v15; // eax
  _BYTE *v16; // eax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // eax
  void ***v20; // edi
  void ***v21; // esi
  void **v22; // ecx
  void **v23; // ecx
  void **v24; // eax
  unsigned int v25; // edi
  char v26; // al
  _BYTE *v27; // eax
  unsigned int j; // edi
  char *v29; // esi
  size_t v30; // eax
  _BYTE *v31; // eax
  int v32; // eax
  const char *v33; // esi
  size_t v34; // eax
  _DWORD *v35; // esi
  _BYTE *v36; // eax
  _BYTE *v37; // eax
  _BYTE *v38; // eax
  void **v39; // edx
  unsigned int v40; // edi
  unsigned int v41; // esi
  void ***v42; // eax
  bool v43; // cf
  _BYTE *v44; // eax
  int v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // eax
  _BYTE *v48; // eax
  _BYTE *v49; // eax
  char *v51; // [esp-Ch] [ebp-68h]
  unsigned int v52; // [esp+8h] [ebp-54h]
  unsigned int v53; // [esp+8h] [ebp-54h]
  void **v54; // [esp+8h] [ebp-54h]
  int v55; // [esp+8h] [ebp-54h]
  int v56; // [esp+Ch] [ebp-50h]
  unsigned int v57; // [esp+Ch] [ebp-50h]
  int v58; // [esp+Ch] [ebp-50h]
  unsigned int v59; // [esp+Ch] [ebp-50h]
  int v60; // [esp+Ch] [ebp-50h]
  int v61; // [esp+10h] [ebp-4Ch]
  unsigned int v62; // [esp+14h] [ebp-48h]
  int v63; // [esp+14h] [ebp-48h]
  unsigned int v64; // [esp+18h] [ebp-44h]
  int v65; // [esp+20h] [ebp-3Ch] BYREF
  void ***v66; // [esp+24h] [ebp-38h] BYREF
  int v67; // [esp+28h] [ebp-34h]
  int v68; // [esp+30h] [ebp-2Ch] BYREF
  void ***v69; // [esp+34h] [ebp-28h] BYREF
  int v70; // [esp+38h] [ebp-24h]
  _BYTE src[5]; // [esp+3Eh] [ebp-1Eh] BYREF
  _BYTE v72[5]; // [esp+43h] [ebp-19h] BYREF
  unsigned int v73[5]; // [esp+48h] [ebp-14h] BYREF

  v73[0] = __readgsdword(0x14u);
  v64 = a2[1];
  if ( !v64 )
    return __readgsdword(0x14u);
  v61 = *a2;
  if ( !*a2 )
    return __readgsdword(0x14u);
  v2 = a2[6];
  if ( !v2 )
    return __readgsdword(0x14u);
  v3 = pack_dd(src, (unsigned int)v72, 0xFFFFFF01);
  sub_3A950(a1, src, v3 - src);
  v4 = -1;
  while ( *(_DWORD *)(v2 + 4 * v4++ + 4) != 0 )
    ;
  v56 = v2;
  v52 = v4;
  v6 = pack_dd(src, (unsigned int)v72, v4);
  sub_3A950(a1, src, v6 - src);
  if ( v52 )
  {
    for ( i = 0; i != v52; ++i )
    {
      v8 = *(char **)(v56 + 4 * i);
      if ( !v8 )
        v8 = &byte_DCEE2;
      v9 = strlen(v8);
      sub_3A950(a1, v8, v9 + 1);
    }
  }
  v69 = nullptr;
  v70 = 0;
  v68 = (int)&v69;
  v10 = 0;
  v62 = 0;
  v11 = a1;
  do
  {
    v53 = *(_DWORD *)(v61 + 20 * v10 + 12);
    if ( !v53 )
      goto LABEL_29;
    v57 = v10;
    if ( !v69 )
    {
      v12 = (void ***)&v69;
      v13 = (void ***)&v69;
LABEL_26:
      v15 = (void **)operator new(0x18u);
      v15[4] = (void *)v53;
      v15[5] = (void *)v62;
      *v15 = nullptr;
      v15[1] = nullptr;
      v15[2] = v13;
      *v12 = v15;
      if ( *(_DWORD *)v68 )
      {
        v68 = *(_DWORD *)v68;
        v15 = *v12;
      }
      v11 = a1;
      v10 = v57;
      sub_2D500((int)v69, (int)v15);
      ++v70;
      ++v62;
      goto LABEL_29;
    }
    v13 = v69;
    v12 = (void ***)&v69;
    while ( (unsigned int)v13[4] > v53 )
    {
      v14 = *v13;
      v12 = v13;
      if ( !*v13 )
      {
        v12 = v13;
        if ( !*v13 )
          goto LABEL_26;
        goto LABEL_24;
      }
LABEL_17:
      v13 = (void ***)v14;
    }
    if ( (unsigned int)v13[4] < v53 )
    {
      v12 = v13 + 1;
      v14 = v13[1];
      if ( v14 )
        goto LABEL_17;
    }
    if ( !*v12 )
      goto LABEL_26;
LABEL_24:
    v11 = a1;
    v10 = v57;
LABEL_29:
    ++v10;
  }
  while ( v10 < v64 );
  v66 = nullptr;
  v67 = 0;
  v65 = (int)&v66;
  v16 = pack_dd(src, (unsigned int)v72, v62);
  sub_3A950(v11, src, v16 - src);
  v17 = 0;
  do
  {
    v63 = v17;
    v18 = 5 * v17;
    v19 = *(_DWORD *)(v61 + 20 * v17 + 12);
    if ( !v19 )
      goto LABEL_53;
    v20 = v66;
    v21 = (void ***)&v66;
    if ( v66 )
    {
      while ( 1 )
      {
        v22 = v20[4];
        if ( v19 >= (unsigned int)v22 )
        {
          if ( (unsigned int)v22 >= v19 || (v21 = v20 + 1, (v23 = v20[1]) == nullptr) )
          {
            if ( *v21 )
              goto LABEL_53;
            goto LABEL_41;
          }
        }
        else
        {
          v23 = *v20;
          v21 = v20;
          if ( !*v20 )
          {
            v21 = v20;
            if ( !*v20 )
              goto LABEL_41;
            goto LABEL_53;
          }
        }
        v20 = (void ***)v23;
      }
    }
    v20 = (void ***)&v66;
LABEL_41:
    v58 = v18;
    v24 = (void **)operator new(0x14u);
    v54 = (void **)(v61 + 4 * v58 + 12);
    v24[4] = *v54;
    *v24 = nullptr;
    v24[1] = nullptr;
    v24[2] = v20;
    *v21 = v24;
    if ( *(_DWORD *)v65 )
    {
      v65 = *(_DWORD *)v65;
      v24 = *v21;
    }
    sub_2D500((int)v66, (int)v24);
    ++v67;
    v25 = 1;
    if ( (*(_BYTE *)(v61 + 4 * v58 + 5) & 1) == 0 )
    {
      v26 = *(_BYTE *)(v61 + 4 * v58 + 9);
      v25 = 16;
      if ( v26 != 1 )
      {
        if ( v26 != 2 )
        {
          if ( !(_BYTE)under_debugger )
            interr(1783);
          BUG();
        }
        v25 = 32;
      }
    }
    v59 = v25;
    v27 = pack_dd(src, (unsigned int)v72, v25);
    sub_3A950(a1, src, v27 - src);
    for ( j = 0; j < v59; ++j )
    {
      v29 = &byte_DCEE2;
      if ( *((_DWORD *)*v54 + j) )
        v29 = *((char **)*v54 + j);
      v30 = strlen(v29);
      sub_3A950(a1, v29, v30 + 1);
    }
LABEL_53:
    v17 = v63 + 1;
  }
  while ( v63 + 1 < v64 );
  v31 = pack_dd(src, (unsigned int)v72, v64);
  sub_3A950(a1, src, v31 - src);
  v32 = 0;
  do
  {
    v60 = v32;
    v55 = 5 * v32;
    v33 = *(const char **)(v61 + 20 * v32);
    if ( !v33 )
      v33 = &byte_DCEE2;
    v34 = strlen(v33);
    v51 = (char *)v33;
    v35 = a1;
    sub_3A950(a1, v51, v34 + 1);
    v36 = pack_dd(src, (unsigned int)v72, *(_DWORD *)(v61 + 4 * v55 + 4));
    sub_3A950(a1, src, v36 - src);
    v37 = pack_dd(src, (unsigned int)v72, *(unsigned __int8 *)(v61 + 4 * v55 + 8));
    sub_3A950(a1, src, v37 - src);
    v38 = pack_dd(src, (unsigned int)v72, *(unsigned __int8 *)(v61 + 4 * v55 + 9));
    sub_3A950(a1, src, v38 - src);
    v39 = (void **)v69;
    v40 = 0;
    if ( v69 )
    {
      v41 = *(_DWORD *)(v61 + 4 * v55 + 12);
      v42 = (void ***)&v69;
      do
      {
        if ( (unsigned int)v39[4] >= v41 )
          v42 = (void ***)v39;
        v39 = (void **)v39[(unsigned int)v39[4] < v41];
      }
      while ( v39 );
      if ( v42 == (void ***)&v69 )
      {
        v35 = a1;
      }
      else
      {
        v43 = v41 < (unsigned int)v42[4];
        v35 = a1;
        if ( !v43 )
          v40 = (unsigned int)v42[5] + 1;
      }
    }
    v44 = pack_dd(src, (unsigned int)v72, v40);
    sub_3A950(v35, src, v44 - src);
    v45 = *(_DWORD *)(v61 + 4 * v55 + 16);
    v43 = __CFADD__(v45, 1);
    v46 = v45 + 1;
    v47 = v43;
    if ( *(_DWORD *)(v61 + 4 * v55 + 16) == -1 )
    {
      v46 = 0;
      v47 = 0;
    }
    v48 = pack_dq(src, (unsigned int)v73, v46, v47);
    sub_3A950(v35, src, v48 - src);
    v32 = v60 + 1;
  }
  while ( v60 + 1 < v64 );
  v49 = pack_dd(src, (unsigned int)v72, a2[12]);
  sub_3A950(v35, src, v49 - src);
  sub_A2490((int)&v65, (void **)v66);
  sub_A24E0((int)&v68, (void **)v69);
  return __readgsdword(0x14u);
}
// DCEE2: using guessed type char byte_DCEE2;
// 13E34C: using guessed type int under_debugger;
