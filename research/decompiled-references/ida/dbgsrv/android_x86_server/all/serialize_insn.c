/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_insn
// Address: 0x000A1EC0

//----- (000A1EC0) --------------------------------------------------------
unsigned int __cdecl serialize_insn(void **a1, int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  void **v4; // edi
  _BYTE *v5; // eax
  int v6; // edx
  bool v7; // cf
  unsigned int v8; // edx
  unsigned int v9; // eax
  _BYTE *v10; // eax
  int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  char v18; // dl
  _BYTE *v19; // ecx
  void *v20; // eax
  char *v21; // eax
  void *v22; // ecx
  unsigned int v23; // eax
  char v24; // dl
  _BYTE *v25; // eax
  _BYTE *v26; // eax
  int v27; // ecx
  int v28; // esi
  void *v29; // eax
  void *v30; // eax
  char *v31; // edx
  _BYTE *v32; // ebx
  unsigned int v33; // edx
  void *v34; // eax
  char *v35; // edx
  _BYTE *v36; // ecx
  char v37; // bl
  unsigned int v38; // edx
  void *v39; // eax
  char *v40; // edx
  _BYTE *v41; // ecx
  char v42; // bl
  unsigned int v43; // edx
  void *v44; // eax
  char *v45; // edx
  _BYTE *v46; // ecx
  unsigned int v47; // edx
  _BYTE *v48; // eax
  int v49; // edx
  unsigned int v50; // edx
  unsigned int v51; // eax
  _BYTE *v52; // eax
  int v53; // edx
  unsigned int v54; // edx
  unsigned int v55; // eax
  _BYTE *v56; // eax
  int v57; // edx
  unsigned int v58; // edx
  unsigned int v59; // eax
  _BYTE *v60; // eax
  void *v61; // eax
  _BYTE *v62; // ecx
  void *v63; // eax
  char *v64; // edx
  _BYTE *v65; // ecx
  char v66; // bl
  unsigned int v67; // edx
  void *v68; // eax
  char *v69; // edx
  _BYTE *v70; // ecx
  char v71; // bl
  unsigned int v72; // edx
  void *v73; // eax
  char *v74; // edx
  _BYTE *v75; // ecx
  char v76; // bl
  unsigned int v77; // edx
  char v79; // [esp+Fh] [ebp-2Dh]
  char v80; // [esp+Fh] [ebp-2Dh]
  char v81; // [esp+Fh] [ebp-2Dh]
  char v82; // [esp+Fh] [ebp-2Dh]
  char v83; // [esp+10h] [ebp-2Ch]
  char v84; // [esp+10h] [ebp-2Ch]
  int v85; // [esp+10h] [ebp-2Ch]
  _BYTE src[3]; // [esp+1Eh] [ebp-1Eh] BYREF
  _BYTE v87[2]; // [esp+21h] [ebp-1Bh] BYREF
  char v88; // [esp+23h] [ebp-19h] BYREF
  _DWORD v89[5]; // [esp+28h] [ebp-14h] BYREF

  v89[0] = __readgsdword(0x14u);
  v2 = *(_DWORD *)a2 + 1;
  v3 = __CFADD__(*(_DWORD *)a2, 1);
  if ( *(_DWORD *)a2 == -1 )
  {
    v3 = 0;
    v2 = 0;
  }
  v4 = a1;
  v5 = pack_dq(src, (unsigned int)v89, v2, v3);
  sub_3A950(a1, src, v5 - src);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = __CFADD__(v6, 1);
  v8 = v6 + 1;
  v9 = v7;
  if ( *(_DWORD *)(a2 + 4) == -1 )
  {
    v9 = 0;
    v8 = 0;
  }
  v10 = pack_dq(src, (unsigned int)v89, v8, v9);
  sub_3A950(a1, src, v10 - src);
  v11 = *(_DWORD *)(a2 + 8);
  v7 = __CFADD__(v11, 1);
  v12 = v11 + 1;
  v13 = v7;
  if ( *(_DWORD *)(a2 + 8) == -1 )
  {
    v13 = 0;
    v12 = 0;
  }
  v14 = pack_dq(src, (unsigned int)v89, v12, v13);
  sub_3A950(a1, src, v14 - src);
  v15 = pack_dw(src, (unsigned int)v87, *(_WORD *)(a2 + 12));
  sub_3A950(a1, src, v15 - src);
  v16 = pack_dw(src, (unsigned int)v87, *(_WORD *)(a2 + 14));
  sub_3A950(a1, src, v16 - src);
  v17 = pack_dd(src, (unsigned int)&v88, *(_DWORD *)(a2 + 16));
  sub_3A950(a1, src, v17 - src);
  v18 = *(_BYTE *)(a2 + 20);
  v19 = a1[1];
  if ( a1[2] >= v19 + 1 )
  {
    v20 = *a1;
  }
  else
  {
    v83 = *(_BYTE *)(a2 + 20);
    v20 = qvector_reserve((int)a1, *a1, (unsigned int)(v19 + 1), 1u);
    v18 = v83;
    *a1 = v20;
    v19 = a1[1];
  }
  v19[(_DWORD)v20] = v18;
  v21 = (char *)a1[1];
  v22 = v21 + 1;
  v23 = (unsigned int)(v21 + 2);
  v7 = (unsigned int)a1[2] < v23;
  a1[1] = v22;
  v24 = *(_BYTE *)(a2 + 21);
  if ( v7 )
  {
    v84 = *(_BYTE *)(a2 + 21);
    v25 = qvector_reserve((int)a1, *a1, v23, 1u);
    v24 = v84;
    *a1 = v25;
    v22 = a1[1];
  }
  else
  {
    v25 = *a1;
  }
  *((_BYTE *)v22 + (_DWORD)v25) = v24;
  a1[1] = (char *)a1[1] + 1;
  v26 = pack_dw(src, (unsigned int)v87, *(_WORD *)(a2 + 22));
  sub_3A950(a1, src, v26 - src);
  v27 = (int)a1[1];
  v28 = -192;
  do
  {
    v85 = v28;
    v79 = *(_BYTE *)(a2 + v28 + 217);
    v29 = *v4;
    if ( (unsigned int)v4[2] < v27 + 1 )
    {
      v29 = qvector_reserve((int)v4, v29, v27 + 1, 1u);
      *v4 = v29;
      v27 = (int)v4[1];
    }
    *((_BYTE *)v29 + v27) = v79;
    v30 = *v4;
    v31 = (char *)v4[1];
    v32 = v31 + 1;
    v4[1] = v31 + 1;
    v80 = *(_BYTE *)(a2 + v28 + 218);
    v33 = (unsigned int)(v31 + 2);
    if ( (unsigned int)a1[2] < v33 )
    {
      v30 = qvector_reserve((int)a1, v30, v33, 1u);
      *a1 = v30;
      v32 = a1[1];
    }
    v32[(_DWORD)v30] = v80;
    v34 = *a1;
    v35 = (char *)a1[1];
    v36 = v35 + 1;
    a1[1] = v35 + 1;
    v37 = *(_BYTE *)(a2 + v28 + 219);
    v38 = (unsigned int)(v35 + 2);
    if ( (unsigned int)a1[2] < v38 )
    {
      v34 = qvector_reserve((int)a1, v34, v38, 1u);
      *a1 = v34;
      v36 = a1[1];
    }
    v36[(_DWORD)v34] = v37;
    v39 = *a1;
    v40 = (char *)a1[1];
    v41 = v40 + 1;
    a1[1] = v40 + 1;
    v42 = *(_BYTE *)(a2 + v28 + 220);
    v43 = (unsigned int)(v40 + 2);
    if ( (unsigned int)a1[2] < v43 )
    {
      v39 = qvector_reserve((int)a1, v39, v43, 1u);
      *a1 = v39;
      v41 = a1[1];
    }
    v41[(_DWORD)v39] = v42;
    v44 = *a1;
    v45 = (char *)a1[1];
    v46 = v45 + 1;
    a1[1] = v45 + 1;
    v81 = *(_BYTE *)(a2 + v28 + 221);
    v47 = (unsigned int)(v45 + 2);
    if ( (unsigned int)a1[2] < v47 )
    {
      v44 = qvector_reserve((int)a1, v44, v47, 1u);
      *a1 = v44;
      v46 = a1[1];
    }
    v46[(_DWORD)v44] = v81;
    a1[1] = (char *)a1[1] + 1;
    v48 = pack_dw(src, (unsigned int)v87, *(_WORD *)(a2 + v28 + 222));
    sub_3A950(a1, src, v48 - src);
    v49 = *(_DWORD *)(a2 + v28 + 224);
    v7 = __CFADD__(v49, 1);
    v50 = v49 + 1;
    v51 = v7;
    if ( *(_DWORD *)(a2 + v28 + 224) == -1 )
    {
      v51 = 0;
      v50 = 0;
    }
    v52 = pack_dq(src, (unsigned int)v89, v50, v51);
    sub_3A950(a1, src, v52 - src);
    v53 = *(_DWORD *)(a2 + v28 + 228);
    v7 = __CFADD__(v53, 1);
    v54 = v53 + 1;
    v55 = v7;
    if ( *(_DWORD *)(a2 + v28 + 228) == -1 )
    {
      v55 = 0;
      v54 = 0;
    }
    v56 = pack_dq(src, (unsigned int)v89, v54, v55);
    sub_3A950(a1, src, v56 - src);
    v57 = *(_DWORD *)(a2 + v28 + 232);
    v7 = __CFADD__(v57, 1);
    v58 = v57 + 1;
    v59 = v7;
    if ( *(_DWORD *)(a2 + v28 + 232) == -1 )
    {
      v59 = 0;
      v58 = 0;
    }
    v60 = pack_dq(src, (unsigned int)v89, v58, v59);
    sub_3A950(a1, src, v60 - src);
    v82 = *(_BYTE *)(a2 + v28 + 236);
    v61 = *a1;
    v62 = a1[1];
    if ( a1[2] < v62 + 1 )
    {
      v61 = qvector_reserve((int)a1, v61, (unsigned int)(v62 + 1), 1u);
      *a1 = v61;
      v62 = a1[1];
    }
    v62[(_DWORD)v61] = v82;
    v63 = *a1;
    v64 = (char *)a1[1];
    v65 = v64 + 1;
    a1[1] = v64 + 1;
    v66 = *(_BYTE *)(a2 + v28 + 237);
    v67 = (unsigned int)(v64 + 2);
    if ( (unsigned int)a1[2] < v67 )
    {
      v63 = qvector_reserve((int)a1, v63, v67, 1u);
      *a1 = v63;
      v65 = a1[1];
    }
    v65[(_DWORD)v63] = v66;
    v68 = *a1;
    v69 = (char *)a1[1];
    v70 = v69 + 1;
    a1[1] = v69 + 1;
    v71 = *(_BYTE *)(a2 + v28 + 238);
    v72 = (unsigned int)(v69 + 2);
    if ( (unsigned int)a1[2] < v72 )
    {
      v68 = qvector_reserve((int)a1, v68, v72, 1u);
      *a1 = v68;
      v70 = a1[1];
    }
    v70[(_DWORD)v68] = v71;
    v73 = *a1;
    v74 = (char *)a1[1];
    v75 = v74 + 1;
    a1[1] = v74 + 1;
    v76 = *(_BYTE *)(a2 + v28 + 239);
    v4 = a1;
    v77 = (unsigned int)(v74 + 2);
    if ( (unsigned int)a1[2] < v77 )
    {
      v73 = qvector_reserve((int)a1, v73, v77, 1u);
      *a1 = v73;
      v75 = a1[1];
    }
    v75[(_DWORD)v73] = v76;
    v27 = (int)a1[1] + 1;
    a1[1] = (void *)v27;
    v28 += 24;
  }
  while ( v85 != -24 );
  return __readgsdword(0x14u);
}
