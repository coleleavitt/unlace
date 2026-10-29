/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468D70
// Address: 0x0000000000468D70

//----- (0000000000468D70) ----------------------------------------------------
__int64 __fastcall sub_468D70(__int64 a1, __int64 a2)
{
  __off64_t v3; // x19
  unsigned int v4; // w22
  _BOOL4 v5; // w24
  unsigned __int64 v6; // x0
  int v8; // w20
  char *v9; // x19
  char *v10; // x0
  unsigned __int64 v11; // x19
  unsigned __int64 v12; // x2
  int v14; // w1
  __int64 v15; // x27
  unsigned int v16; // w26
  int v17; // w28
  int v18; // w1
  unsigned int v19; // w5
  __int64 v20; // x0
  __int64 v21; // x2
  __int64 v22; // x0
  int v23; // w2
  int v24; // w1
  const char *v25; // x20
  char *v26; // x0
  unsigned __int64 v27; // x3
  char *v28; // x19
  unsigned __int64 v29; // x2
  __int64 v30; // x20
  char *v31; // x4
  int v32; // w0
  unsigned int v33; // w3
  unsigned int v34; // w1
  size_t i; // x0
  unsigned __int64 v36; // x20
  void *v37; // x0
  bool v38; // zf
  __int64 v39; // x20
  unsigned int v40; // w19
  int v41; // w1
  int v42; // w0
  unsigned __int64 v43; // x0
  _QWORD *v44; // x22
  int v45; // [xsp+60h] [xbp-360h]
  char v46; // [xsp+64h] [xbp-35Ch]
  unsigned __int64 v47; // [xsp+68h] [xbp-358h]
  int v49; // [xsp+A0h] [xbp-320h]
  int v50; // [xsp+A4h] [xbp-31Ch]
  char v51; // [xsp+BFh] [xbp-301h] BYREF
  void *v52; // [xsp+C0h] [xbp-300h] BYREF
  __int64 v53; // [xsp+C8h] [xbp-2F8h]
  __int64 v54; // [xsp+D0h] [xbp-2F0h]
  void *ptr; // [xsp+D8h] [xbp-2E8h] BYREF
  unsigned __int64 v56; // [xsp+E0h] [xbp-2E0h]
  unsigned __int64 v57; // [xsp+E8h] [xbp-2D8h]
  void *v58; // [xsp+F0h] [xbp-2D0h] BYREF
  __int64 v59; // [xsp+F8h] [xbp-2C8h]
  __int64 v60; // [xsp+100h] [xbp-2C0h]
  __int64 (__fastcall **v61)(); // [xsp+108h] [xbp-2B8h]
  __int64 v62; // [xsp+110h] [xbp-2B0h]
  void **v63; // [xsp+118h] [xbp-2A8h]
  char v64; // [xsp+120h] [xbp-2A0h]
  void *v65; // [xsp+128h] [xbp-298h] BYREF
  unsigned __int64 v66; // [xsp+130h] [xbp-290h]
  __int64 v67; // [xsp+138h] [xbp-288h]
  void *v68; // [xsp+140h] [xbp-280h] BYREF
  unsigned __int64 v69; // [xsp+148h] [xbp-278h]
  unsigned __int64 v70; // [xsp+150h] [xbp-270h]
  __int64 (__fastcall **v71)(); // [xsp+158h] [xbp-268h] BYREF
  void *v72; // [xsp+160h] [xbp-260h] BYREF
  unsigned __int64 v73; // [xsp+168h] [xbp-258h]
  unsigned __int64 v74; // [xsp+170h] [xbp-250h]
  unsigned __int16 v75; // [xsp+17Eh] [xbp-242h]
  int v76; // [xsp+1A0h] [xbp-220h]
  unsigned __int16 v77; // [xsp+1A4h] [xbp-21Ch]
  unsigned __int16 v78; // [xsp+1A6h] [xbp-21Ah]
  unsigned int v79; // [xsp+1ACh] [xbp-214h]
  int v80; // [xsp+1B0h] [xbp-210h]
  unsigned __int16 v81; // [xsp+1B4h] [xbp-20Ch]
  unsigned int v82; // [xsp+1D8h] [xbp-1E8h]
  int v83; // [xsp+1DCh] [xbp-1E4h]
  unsigned int v84; // [xsp+1F0h] [xbp-1D0h]
  __int16 v85; // [xsp+1FCh] [xbp-1C4h]
  __int64 v86; // [xsp+3A8h] [xbp-18h]

  v71 = off_51ACC0;
  v72 = nullptr;
  v73 = 0;
  v74 = 0;
  v45 = sub_4637F0((__int64)&v71, a2, 1u, 1u);
  if ( !v45 )
    goto LABEL_42;
  if ( v77 == 450 )
    goto LABEL_141;
  if ( v77 <= 0x1C2u )
  {
    if ( v77 <= 0x169u )
    {
      if ( v77 < 0x168u )
      {
        if ( v77 > 0x163u )
        {
          if ( v77 != 358 )
            goto LABEL_111;
        }
        else if ( v77 < 0x162u )
        {
          if ( (unsigned int)v77 - 332 > 2 )
            goto LABEL_111;
          goto LABEL_136;
        }
      }
LABEL_147:
      v50 = 12;
      goto LABEL_11;
    }
    if ( v77 > 0x1A4u )
    {
      if ( v77 != 424 )
      {
        if ( v77 == 448 )
          goto LABEL_141;
        if ( v77 != 422 )
          goto LABEL_111;
      }
    }
    else if ( v77 < 0x1A2u )
    {
      v50 = 24;
      if ( v77 == 388 )
        goto LABEL_11;
      goto LABEL_111;
    }
    v50 = 18;
    goto LABEL_11;
  }
  if ( v77 == 870 )
    goto LABEL_147;
  if ( v77 > 0x366u )
  {
    if ( v77 != 2560 )
    {
      if ( v77 > 0xA00u )
      {
        if ( v77 != 34404 )
        {
          v50 = 37;
          if ( v77 == 36929 )
            goto LABEL_11;
          v50 = 57;
          if ( v77 == 3772 )
            goto LABEL_11;
LABEL_111:
          v50 = -1;
          goto LABEL_11;
        }
LABEL_136:
        v50 = 0;
        goto LABEL_11;
      }
      if ( v77 != 1126 )
      {
        v50 = 27;
        if ( v77 == 1312 )
          goto LABEL_11;
        goto LABEL_111;
      }
      goto LABEL_147;
    }
LABEL_141:
    v50 = 13;
    goto LABEL_11;
  }
  if ( v77 <= 0x1F2u )
  {
    v50 = 15;
    if ( v77 >= 0x1F0u )
      goto LABEL_11;
    if ( v77 != 452 )
      goto LABEL_111;
    goto LABEL_141;
  }
  if ( v77 == 614 )
    goto LABEL_147;
  v50 = 7;
  if ( v77 != 616 )
  {
    v50 = 31;
    if ( v77 != 512 )
      goto LABEL_111;
  }
LABEL_11:
  v52 = nullptr;
  v53 = 0;
  v54 = 0;
  if ( v79 )
    sub_4674D8((__int64)&v52, a2, (unsigned int)(18 * v80) + (unsigned __int64)v79, 0);
  v61 = off_51AF50;
  v62 = a2;
  v63 = &v52;
  v64 = 0;
  v65 = nullptr;
  v66 = 0;
  v67 = 0;
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  if ( v76 == 23126 )
    v3 = (int)v86 + 40;
  else
    v3 = v81 + (int)v86 + 24;
  v4 = v78;
  ptr = nullptr;
  v56 = 0;
  v5 = v83 == v82 && v82 <= 0xFFF;
  v57 = 0;
  v73 = 0;
  sub_48C428(a2, v3, 0);
  if ( v3 == -1 )
    v3 = sub_48C428(a2, 0, 1);
  v6 = sub_48C400(a2) - v3;
  if ( v3 < 0 || (v6 & 0x8000000000000000LL) != 0LL )
  {
    v4 = 0;
  }
  else
  {
    if ( 40 * (unsigned __int64)v4 <= v6 )
      goto LABEL_24;
    v4 = v6 / 0x28;
  }
  if ( (unsigned int)sub_41A9E0() != 1 )
    sub_420558(nullptr);
LABEL_24:
  if ( v4 )
  {
    v8 = 0;
    while ( 1 )
    {
      v10 = (char *)ptr;
      v11 = v56;
      v12 = v56 + 1;
      if ( v56 + 1 > v57 )
      {
        v10 = (char *)sub_491288((__int64)&ptr, ptr, v12, 0x28u);
        v11 = v56;
        ptr = v10;
        v12 = v56 + 1;
      }
      v56 = v12;
      v9 = &v10[40 * v11];
      if ( sub_48C160(a2, v9, 0x28u) != 40 )
        goto LABEL_31;
      if ( *((_DWORD *)v9 + 3) == *((_DWORD *)v9 + 5) )
      {
        ++v8;
        if ( *((_DWORD *)v9 + 2) > *((_DWORD *)v9 + 4) )
          v5 = 0;
        if ( v8 == v4 )
          break;
      }
      else
      {
        ++v8;
        v5 = 0;
        if ( v8 == v4 )
          break;
      }
    }
  }
  v14 = v83;
  if ( !v5 )
    v14 = 512;
  if ( (unsigned __int16)(v85 - 10) <= 3u )
  {
    if ( !v4 )
    {
      v16 = 0;
LABEL_130:
      if ( v76 == 23126 )
        v84 = v16;
      goto LABEL_115;
    }
    goto LABEL_128;
  }
  if ( v76 == 23126 )
  {
    if ( !v4 )
    {
      v84 = 0;
      goto LABEL_115;
    }
LABEL_128:
    v49 = -1;
    goto LABEL_59;
  }
  if ( v4 )
  {
    v49 = -v14;
LABEL_59:
    v15 = 0;
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      v26 = (char *)v72;
      v27 = v73;
      v28 = (char *)ptr + v15;
      v29 = v73 + 1;
      v30 = (unsigned int)v49 & *(_DWORD *)((_BYTE *)ptr + v15 + 20);
      if ( v73 + 1 > v74 )
      {
        v26 = (char *)sub_491288((__int64)&v72, v72, v29, 0x20u);
        v27 = v73;
        v72 = v26;
        v29 = v73 + 1;
      }
      v73 = v29;
      v31 = &v26[32 * v27];
      *(_QWORD *)v31 = *((unsigned int *)v28 + 3);
      v32 = *((_DWORD *)v28 + 2);
      v33 = *((_DWORD *)v28 + 4);
      v21 = v33;
      if ( v32 )
        break;
      if ( v82 )
      {
        v32 = *((_DWORD *)v28 + 4);
LABEL_85:
        v19 = v82 - 1;
        v18 = -v82;
        goto LABEL_62;
      }
LABEL_64:
      *((_QWORD *)v31 + 3) = v21;
      v22 = (unsigned int)(*((_DWORD *)v28 + 3) + v21);
      if ( (unsigned __int16)(v85 - 10) > 3u )
      {
        if ( v82 == 4096 || !v83 )
        {
          v24 = -512;
          v23 = 511;
        }
        else
        {
          v23 = v83 - 1;
          v24 = -v83;
        }
        v22 = ((_DWORD)v22 + v23) & (unsigned int)v24;
      }
      *((_QWORD *)v31 + 1) = v22;
      *((_QWORD *)v31 + 2) = v30;
      if ( v76 == 23126 )
        *((_QWORD *)v31 + 2) = v30 + 40 - v75;
      v58 = nullptr;
      v59 = 0;
      v60 = 0;
      sub_467088(&v58, (__int64 *)v28, v63);
      v25 = (const char *)v58;
      if ( !v59 )
        v25 = (const char *)&qword_4B2D48;
      if ( !strcmp(v25, ".debug_info") )
      {
        v64 = 1;
        goto LABEL_75;
      }
      if ( !strcmp(v25, ".note.gnu.build-id") )
      {
        v34 = *((_DWORD *)v28 + 4);
        if ( v34 <= 0xFFFF )
        {
          if ( v34 > v66 )
          {
            sub_4684E8((__int64)&v65, v34);
          }
          else if ( v34 < v66 )
          {
            v66 = v34;
          }
          sub_48C428(v62, *((int *)v28 + 5), 0);
          if ( sub_48C160(v62, v65, *((unsigned int *)v28 + 4)) != *((_DWORD *)v28 + 4) && v65 )
          {
            v66 = 0;
            j__free(v65);
            v65 = nullptr;
            v67 = 0;
          }
          goto LABEL_75;
        }
      }
      if ( strcmp(v25, ".gnu_debuglink") )
        goto LABEL_75;
      sub_48C428(v62, *((int *)v28 + 5), 0);
      for ( i = sub_48C160(v62, &v51, 1u); i == 1; i = sub_48C160(v62, &v51, 1u) )
      {
        v46 = v51;
        if ( !v51 )
          goto LABEL_75;
        if ( v69 )
        {
          v47 = v69 - 1;
          v36 = v69 + 1;
          v37 = v68;
          if ( v70 >= v69 + 1 )
            goto LABEL_97;
        }
        else
        {
          v36 = 2;
          v47 = 0;
          v37 = v68;
          if ( v70 >= 2 )
            goto LABEL_97;
        }
        v37 = sub_491288((__int64)&v68, v37, v36, 1u);
        v68 = v37;
LABEL_97:
        v69 = v36;
        *((_BYTE *)v37 + v47) = v46;
        *((_BYTE *)v68 + v47 + 1) = 0;
      }
      if ( v68 )
      {
        v69 = 0;
        j__free(v68);
        v68 = nullptr;
        v70 = 0;
      }
LABEL_75:
      if ( v58 )
      {
        v59 = 0;
        j__free(v58);
      }
      ++v17;
      v15 += 40;
      if ( v16 < *((_DWORD *)v28 + 3) + *((_DWORD *)v28 + 2) )
        v16 = *((_DWORD *)v28 + 3) + *((_DWORD *)v28 + 2);
      if ( v17 >= (int)v4 )
        goto LABEL_130;
    }
    if ( v82 )
      goto LABEL_85;
    v18 = -1;
    v19 = 0;
LABEL_62:
    v20 = (v32 + v19) & v18;
    if ( v33 >= (unsigned int)v20 )
      v21 = v20;
    goto LABEL_64;
  }
LABEL_115:
  if ( v4 )
    v38 = !v5;
  else
    v38 = 0;
  if ( !v38 )
  {
    v39 = sub_48C400(a2);
    v40 = v84;
    if ( (unsigned __int16)(v85 - 10) > 3u )
    {
      if ( v82 == 4096 || !v83 )
      {
        v42 = -512;
        v41 = 511;
      }
      else
      {
        v41 = v83 - 1;
        v42 = -v83;
      }
      v40 = (v84 + v41) & v42;
    }
    v44 = v72;
    v43 = v73;
    if ( v73 + 1 > v74 )
    {
      v44 = sub_491288((__int64)&v72, v72, v73 + 1, 0x20u);
      v43 = v73;
      v72 = v44;
    }
    memmove(v44 + 4, v44, 32 * v43);
    *v44 = 0;
    v44[1] = v40;
    v44[2] = 0;
    v44[3] = v39;
    ++v73;
  }
LABEL_31:
  if ( ptr )
  {
    v56 = 0;
    j__free(ptr);
  }
  sub_464A08(a1, v50, 0, v64, (__int64)&v65, (__int64)&v68);
  if ( v64 )
  {
    LOBYTE(v45) = v64;
  }
  else if ( !v66 )
  {
    LOBYTE(v45) = v69 > 1;
  }
  v61 = off_51AF50;
  if ( v68 )
  {
    v69 = 0;
    j__free(v68);
  }
  if ( v65 )
  {
    v66 = 0;
    j__free(v65);
  }
  if ( v52 )
  {
    v53 = 0;
    j__free(v52);
  }
LABEL_42:
  v71 = off_51ACC0;
  if ( v72 )
  {
    v73 = 0;
    j__free(v72);
  }
  return (unsigned __int8)v45;
}
// 468D70: could not find valid save-restore pair for x22
// 468D70: could not find valid save-restore pair for x24
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 51ACC0: using guessed type __int64 (__fastcall *off_51ACC0[3])();
// 51AF50: using guessed type __int64 (__fastcall *off_51AF50[4])();
