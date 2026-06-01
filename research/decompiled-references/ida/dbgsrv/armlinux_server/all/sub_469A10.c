/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469A10
// Address: 0x0000000000469A10

//----- (0000000000469A10) ----------------------------------------------------
__int64 __fastcall sub_469A10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // x1
  int v7; // w26
  int v8; // w0
  int v9; // w27
  bool v10; // cc
  unsigned int v11; // w21
  char *v12; // x0
  unsigned __int64 v13; // x22
  __int64 v14; // x20
  __int64 v15; // x19
  char *v16; // x1
  void *v17; // x0
  int v19; // w21
  char *v20; // x22
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x28
  char *v23; // x21
  size_t v24; // x22
  void *v25; // x0
  char *v26; // x0
  char *v27; // x21
  __int64 v28; // x25
  char *v29; // x28
  __int64 v30; // x25
  unsigned __int8 *v31; // x2
  void *v32; // x0
  unsigned __int8 *v34; // x3
  int v35; // w22
  unsigned __int64 v36; // x0
  void *v37; // x2
  char *v38; // x19
  __int64 v39; // x0
  unsigned int v40; // w0
  char *v41; // x19
  char *v42; // x22
  __int64 v43; // x0
  const char *v44; // x4
  char *v45; // x19
  __int64 v46; // x2
  __int64 v47; // x3
  _BYTE *v48; // x0
  __int64 v49; // x3
  char v50; // w25
  char *i; // x22
  __int64 v52; // x0
  const char *v53; // x2
  _BYTE *v54; // x0
  __int64 v55; // x3
  char v56; // w27
  char *v57; // x1
  unsigned __int64 v58; // x1
  unsigned __int8 *v59; // x3
  unsigned __int64 v60; // x2
  char v61; // w25
  _BYTE *v62; // x0
  size_t v63; // x2
  __int64 v64; // x1
  __int64 v65; // x21
  char *v66; // x22
  void *v67; // x0
  unsigned __int64 v68; // x25
  __int64 v69; // x22
  char *v70; // x21
  char *v71; // x2
  void *v72; // x0
  __int64 v73; // [xsp+60h] [xbp-C0h]
  __int64 v74; // [xsp+60h] [xbp-C0h]
  __int64 v75; // [xsp+60h] [xbp-C0h]
  size_t v76; // [xsp+60h] [xbp-C0h]
  __int64 v77; // [xsp+68h] [xbp-B8h]
  __int64 v78; // [xsp+68h] [xbp-B8h]
  char *v79; // [xsp+68h] [xbp-B8h]
  unsigned int v80; // [xsp+74h] [xbp-ACh] BYREF
  void *ptr; // [xsp+78h] [xbp-A8h] BYREF
  unsigned __int64 v82; // [xsp+80h] [xbp-A0h]
  unsigned __int64 v83; // [xsp+88h] [xbp-98h]
  void *v84; // [xsp+90h] [xbp-90h] BYREF
  __int64 v85; // [xsp+98h] [xbp-88h]
  __int64 v86; // [xsp+A0h] [xbp-80h]
  __int64 v87; // [xsp+A8h] [xbp-78h] BYREF
  void *src; // [xsp+B0h] [xbp-70h] BYREF
  size_t v89; // [xsp+B8h] [xbp-68h]
  __int64 v90; // [xsp+C0h] [xbp-60h]
  int v91; // [xsp+C8h] [xbp-58h]
  int v92; // [xsp+CCh] [xbp-54h]
  char v93; // [xsp+D0h] [xbp-50h]
  int v94; // [xsp+D4h] [xbp-4Ch]
  int v95; // [xsp+D8h] [xbp-48h]
  __int64 v96; // [xsp+E0h] [xbp-40h]
  void *v97; // [xsp+E8h] [xbp-38h] BYREF
  size_t v98; // [xsp+F0h] [xbp-30h]
  __int64 v99; // [xsp+F8h] [xbp-28h]
  int v100; // [xsp+100h] [xbp-20h]
  int v101; // [xsp+104h] [xbp-1Ch]
  char v102; // [xsp+108h] [xbp-18h]
  int v103; // [xsp+10Ch] [xbp-14h]
  int v104; // [xsp+110h] [xbp-10h]

  v6 = *(_QWORD *)(a3 + 8);
  ptr = nullptr;
  v82 = 0;
  v83 = 0;
  v7 = sub_48E5A8((unsigned __int8 **)a3, v6);
  v8 = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
  v9 = v8;
  v10 = v7 < 0 || v8 < 0;
  if ( v10 || 0x7FFFFFFF - v8 < v7 )
  {
    sub_4631C0(a2, 0);
    if ( *(_BYTE *)(a1 + 184) )
      sub_40A690((int)"update_bpts(nadd=%d, ndel=%d) => 0 (incorrect values)\n", (unsigned int)v7, (unsigned int)v9);
    v11 = 0;
    goto LABEL_9;
  }
  v19 = v7 + v8;
  v20 = (char *)ptr;
  v21 = v82;
  v22 = v7 + v8;
  if ( v22 != v82 )
  {
    v87 = -1;
    src = nullptr;
    v89 = 0;
    v90 = 0;
    v91 = 4;
    v92 = 0;
    v93 = 0;
    v94 = -1;
    v95 = 0;
    if ( v19 >= v82 )
    {
      if ( v19 <= v82 )
        goto LABEL_34;
      if ( ptr <= &v87 && &v87 < (__int64 *)((char *)ptr + 56 * v83) )
      {
        v96 = -1;
        v97 = nullptr;
        v98 = 0;
        v99 = 0;
        sub_4699C0(&v97, (__int64)&src);
        v100 = v91;
        v101 = v92;
        v102 = v93;
        v103 = v94;
        v104 = v95;
        if ( v19 > v83 )
          ptr = sub_491288((__int64)&ptr, ptr, v19, 0x38u);
        v68 = v82;
        if ( v19 > v82 )
        {
          v69 = 56 * v82;
          do
          {
            v70 = (char *)ptr + v69;
            v71 = (char *)ptr + v69 + 8;
            *(_QWORD *)v70 = v96;
            *((_QWORD *)v70 + 1) = 0;
            *((_QWORD *)v71 + 1) = 0;
            *((_QWORD *)v71 + 2) = 0;
            v76 = v98;
            v79 = v71;
            if ( v98 )
            {
              v72 = sub_491248(v98);
              *((_QWORD *)v70 + 1) = v72;
              *((_QWORD *)v79 + 2) = v76;
              memcpy(v72, v97, v76);
              *((_QWORD *)v70 + 2) = v76;
            }
            ++v68;
            *((_DWORD *)v70 + 8) = v100;
            v69 += 56;
            *((_DWORD *)v70 + 9) = v101;
            v70[40] = v102;
            *((_DWORD *)v70 + 11) = v103;
            *((_DWORD *)v70 + 12) = v104;
          }
          while ( v22 != v68 );
        }
        v82 = v22;
        if ( v97 )
        {
          v98 = 0;
          j__free(v97);
        }
        goto LABEL_31;
      }
      if ( v19 <= v83
        || (v26 = (char *)sub_491288((__int64)&ptr, ptr, v19, 0x38u), v21 = v82, v20 = v26, ptr = v26, v19 > v82) )
      {
        v73 = 56 * v21;
        while ( 1 )
        {
          v23 = &v20[v73];
          *(_QWORD *)v23 = v87;
          v77 = (__int64)&v20[v73 + 8];
          *((_QWORD *)v23 + 1) = 0;
          *(_QWORD *)(v77 + 8) = 0;
          *(_QWORD *)(v77 + 16) = 0;
          v24 = v89;
          if ( v89 )
          {
            v25 = sub_491248(v89);
            *((_QWORD *)v23 + 1) = v25;
            *(_QWORD *)(v77 + 16) = v24;
            memcpy(v25, src, v24);
            *((_QWORD *)v23 + 2) = v24;
          }
          ++v21;
          *((_DWORD *)v23 + 8) = v91;
          v73 += 56;
          *((_DWORD *)v23 + 9) = v92;
          v23[40] = v93;
          *((_DWORD *)v23 + 11) = v94;
          *((_DWORD *)v23 + 12) = v95;
          if ( v22 <= v21 )
            break;
          v20 = (char *)ptr;
        }
      }
    }
    else
    {
      v64 = v19;
      v65 = 56LL * v19;
      while ( 1 )
      {
        v66 = &v20[v65];
        v67 = *((void **)v66 + 1);
        if ( v67 )
        {
          *((_QWORD *)v66 + 2) = 0;
          v75 = v64;
          j__free(v67);
          v64 = v75;
        }
        ++v64;
        v65 += 56;
        if ( v21 == v64 )
          break;
        v20 = (char *)ptr;
      }
    }
    v82 = v22;
LABEL_31:
    if ( src )
    {
      v89 = 0;
      j__free(src);
    }
    v20 = (char *)ptr;
  }
LABEL_34:
  v74 = 56LL * v7;
  v27 = &v20[v74];
  if ( &v20[v74] != v20 )
  {
    v28 = 0;
    do
    {
      v20[40] = 0;
      v28 += sub_48E6E8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8)) - 1;
      *(_QWORD *)v20 = v28;
      *((_DWORD *)v20 + 9) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      *((_DWORD *)v20 + 8) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      *((_DWORD *)v20 + 11) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      *((_DWORD *)v20 + 12) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      v20 += 56;
    }
    while ( v27 != v20 );
    v78 = 56LL * v9;
    v29 = &v27[v78];
    if ( v27 == &v27[v78] )
    {
LABEL_51:
      v37 = ptr;
      v38 = (char *)ptr + v74;
      if ( (char *)ptr + v74 != v27 )
      {
        do
        {
          if ( *(_BYTE *)(a1 + 184) )
            sub_40A690((int)"del_bpt(ea=%a, type=%d orgbytes.size=%zu size=%d)\n", *(_QWORD *)v38);
          v38 += 56;
        }
        while ( v38 != v27 );
        v37 = ptr;
      }
      goto LABEL_56;
    }
LABEL_38:
    v30 = 0;
    do
    {
      v30 += sub_48E6E8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8)) - 1;
      *(_QWORD *)v27 = v30;
      v34 = *(unsigned __int8 **)a3;
      v58 = *(_QWORD *)(a3 + 8);
      if ( v58 > *(_QWORD *)a3 )
      {
        v35 = *v34;
        v59 = v34 + 1;
        *(_QWORD *)a3 = v59;
        if ( v35 )
        {
          v36 = *((_QWORD *)v27 + 2);
          if ( (unsigned __int8)v35 <= v36 )
          {
            if ( (unsigned __int8)v35 < v36 )
            {
              *((_QWORD *)v27 + 2) = (unsigned __int8)v35;
              v59 = *(unsigned __int8 **)a3;
              v58 = *(_QWORD *)(a3 + 8);
            }
          }
          else
          {
            sub_4684E8((__int64)(v27 + 8), (unsigned __int8)v35);
            v59 = *(unsigned __int8 **)a3;
            v58 = *(_QWORD *)(a3 + 8);
          }
          v31 = &v59[(unsigned __int8)v35];
          v32 = *((void **)v27 + 1);
          if ( v31 >= v59 && (unsigned __int64)v31 <= v58 )
          {
            *(_QWORD *)a3 = v31;
            memcpy(v32, v59, (unsigned __int8)v35);
            v58 = *(_QWORD *)(a3 + 8);
          }
        }
      }
      *((_DWORD *)v27 + 8) = sub_48E5A8((unsigned __int8 **)a3, v58);
      *((_DWORD *)v27 + 11) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      *((_DWORD *)v27 + 12) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      v27 += 56;
    }
    while ( v29 != v27 );
    goto LABEL_51;
  }
  v78 = 56LL * v9;
  v29 = &v20[v78];
  if ( v20 != &v20[v78] )
    goto LABEL_38;
  v37 = v20;
LABEL_56:
  v39 = *(_QWORD *)(a1 + 440);
  v84 = nullptr;
  v85 = 0;
  v86 = 0;
  v40 = (*(__int64 (__fastcall **)(__int64, unsigned int *, void *, _QWORD, _QWORD, void **))(*(_QWORD *)v39 + 328LL))(
          v39,
          &v80,
          v37,
          (unsigned int)v7,
          (unsigned int)v9,
          &v84);
  v41 = (char *)ptr;
  v11 = v40;
  v42 = (char *)ptr + v74;
  if ( (char *)ptr + v74 != ptr )
  {
    do
    {
      if ( *(_BYTE *)(a1 + 184) )
      {
        v43 = (unsigned __int8)v41[40];
        v44 = "?";
        if ( (unsigned int)v43 <= 0xA )
          v44 = off_51AF70[v43];
        sub_40A690(
          (int)"add_bpt(ea=%a type=%d len=%d) => %s\n",
          *(_QWORD *)v41,
          *((unsigned int *)v41 + 8),
          *((unsigned int *)v41 + 9),
          v44);
      }
      v41 += 56;
    }
    while ( v42 != v41 );
  }
  sub_4631C0(a2, v11);
  sub_4631C0(a2, v80);
  v45 = (char *)ptr;
  if ( v42 != ptr )
  {
    do
    {
      v48 = *(_BYTE **)a2;
      v49 = *(_QWORD *)(a2 + 8);
      v50 = v45[40];
      if ( (unsigned __int64)(v49 + 1) > *(_QWORD *)(a2 + 16) )
      {
        v48 = sub_491288(a2, *(void **)a2, v49 + 1, 1u);
        v49 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v48;
      }
      v48[v49] = v50;
      v46 = *(_QWORD *)(a2 + 8);
      v47 = v46 + 1;
      *(_QWORD *)(a2 + 8) = v46 + 1;
      if ( !v45[40] && *((_DWORD *)v45 + 8) == 4 )
      {
        v60 = v46 + 2;
        v61 = v45[16];
        v62 = *(_BYTE **)a2;
        if ( v60 > *(_QWORD *)(a2 + 16) )
        {
          v62 = sub_491288(a2, *(void **)a2, v60, 1u);
          v47 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v62;
        }
        v62[v47] = v61;
        ++*(_QWORD *)(a2 + 8);
        v63 = *((_QWORD *)v45 + 2);
        if ( v63 )
          sub_4630F0(a2, *((const void **)v45 + 1), v63);
      }
      v45 += 56;
    }
    while ( v42 != v45 );
    v45 = v42;
  }
  for ( i = &v42[v78]; i != v45; v45 += 56 )
  {
    v54 = *(_BYTE **)a2;
    v55 = *(_QWORD *)(a2 + 8);
    v56 = v45[40];
    if ( (unsigned __int64)(v55 + 1) > *(_QWORD *)(a2 + 16) )
    {
      v54 = sub_491288(a2, *(void **)a2, v55 + 1, 1u);
      v55 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v54;
    }
    v54[v55] = v56;
    ++*(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(a1 + 184) )
    {
      v52 = (unsigned __int8)v45[40];
      v53 = "?";
      if ( (unsigned int)v52 <= 0xA )
        v53 = off_51AF70[v52];
      sub_40A690((int)"del_bpt(ea=%a) => %s\n", *(_QWORD *)v45, v53);
    }
  }
  if ( v11 != 1 )
  {
    v57 = (char *)&qword_4B2D48;
    if ( v85 )
      v57 = (char *)v84;
    sub_4632A0(a2, v57);
  }
  if ( v84 )
  {
    v85 = 0;
    j__free(v84);
  }
LABEL_9:
  v12 = (char *)ptr;
  if ( ptr )
  {
    v13 = v82;
    if ( v82 )
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = &v12[v14];
        v17 = *(void **)&v12[v14 + 8];
        if ( v17 )
        {
          *((_QWORD *)v16 + 2) = 0;
          j__free(v17);
        }
        ++v15;
        v14 += 56;
        v12 = (char *)ptr;
      }
      while ( v13 != v15 );
    }
    v82 = 0;
    j__free(v12);
  }
  return v11;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 51AF70: using guessed type char *off_51AF70[17];
