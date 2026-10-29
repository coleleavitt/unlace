/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_406200
// Address: 0x00406200

//----- (00406200) --------------------------------------------------------
int __thiscall sub_406200(_DWORD *this, int *a2)
{
  int v3; // eax
  _BYTE *v5; // eax
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  BSTR v12; // ecx
  unsigned int v13; // eax
  LPVOID v14; // eax
  _BYTE *v15; // eax
  BSTR v16; // ecx
  unsigned int v17; // eax
  LPVOID v18; // eax
  _BYTE *v19; // eax
  void **v20; // ecx
  unsigned int v21; // eax
  LPVOID v22; // eax
  _BYTE *v23; // eax
  void **v24; // ecx
  unsigned int v25; // eax
  LPVOID v26; // eax
  _BYTE *v27; // eax
  void **v28; // ecx
  unsigned int v29; // eax
  LPVOID v30; // eax
  _BYTE *v31; // eax
  void **v32; // ecx
  unsigned int v33; // eax
  LPVOID v34; // eax
  _BYTE *v35; // eax
  void **v36; // ecx
  unsigned int v37; // eax
  LPVOID v38; // eax
  _BYTE *v39; // eax
  void **v40; // ecx
  unsigned int v41; // eax
  LPVOID v42; // eax
  _BYTE *v43; // eax
  _DWORD *v44; // esi
  _BYTE *v45; // eax
  _DWORD *v46; // esi
  _BYTE *v47; // eax
  _DWORD *v48; // esi
  _BYTE *v49; // eax
  _DWORD *v50; // esi
  _BYTE *v51; // eax
  _DWORD *v52; // esi
  _BYTE *v53; // eax
  _DWORD *v54; // esi
  _BYTE *v55; // eax
  _DWORD *v56; // esi
  _BYTE *v57; // eax
  _DWORD *v58; // esi
  _BYTE *v59; // eax
  _DWORD *v60; // esi
  _BYTE *v61; // eax
  _DWORD *v62; // esi
  _BYTE *v63; // eax
  _DWORD *v64; // esi
  _BYTE *v65; // eax
  _DWORD *v66; // esi
  _BYTE *v67; // eax
  _DWORD *v68; // esi
  _BYTE *v69; // eax
  _DWORD *v70; // esi
  _BYTE *v71; // eax
  _DWORD *v72; // esi
  _BYTE *v73; // eax
  _DWORD *v74; // esi
  _BYTE *v75; // eax
  _DWORD *v76; // esi
  _BYTE *v77; // eax
  int v78; // eax
  void **v79; // edx
  const char *v80; // ecx
  unsigned int v81; // ecx
  unsigned int v82; // eax
  unsigned int v83; // ecx
  unsigned int v84; // eax
  LPVOID v85; // eax
  int v86; // eax
  _DWORD *v87; // esi
  _BYTE *v88; // eax
  _DWORD *v89; // esi
  _BYTE *v90; // eax
  _BYTE *v91; // eax
  LONG lVal; // edi
  unsigned int v93; // esi
  _BYTE *v94; // eax
  _DWORD *v95; // edi
  unsigned int v96; // esi
  _BYTE *v97; // eax
  _BYTE *v98; // eax
  char v99[4]; // [esp+10h] [ebp-68h] BYREF
  unsigned int v100; // [esp+14h] [ebp-64h] BYREF
  VARIANTARG pvarg; // [esp+18h] [ebp-60h] BYREF
  char *v102; // [esp+28h] [ebp-50h] BYREF
  unsigned int v103; // [esp+2Ch] [ebp-4Ch]
  int v104; // [esp+30h] [ebp-48h]
  BSTR bstrString; // [esp+34h] [ebp-44h] BYREF
  _DWORD *v106; // [esp+38h] [ebp-40h]
  const char *v107; // [esp+3Ch] [ebp-3Ch] BYREF
  unsigned int v108; // [esp+40h] [ebp-38h]
  char v109; // [esp+47h] [ebp-31h]
  char v110[4]; // [esp+48h] [ebp-30h] BYREF
  unsigned int v111; // [esp+4Ch] [ebp-2Ch] BYREF
  char v112; // [esp+51h] [ebp-27h] BYREF
  _BYTE v113[2]; // [esp+52h] [ebp-26h] BYREF
  void **v114; // [esp+54h] [ebp-24h] BYREF
  char v115[3]; // [esp+59h] [ebp-1Fh] BYREF
  __int64 v116; // [esp+5Ch] [ebp-1Ch] BYREF
  char v117; // [esp+65h] [ebp-13h] BYREF
  char v118[2]; // [esp+66h] [ebp-12h] BYREF
  int v119; // [esp+74h] [ebp-4h]

  v106 = this;
  *(this + 52) = 0;
  v3 = *a2;
  v100 = 0;
  if ( (*(int (__stdcall **)(int *, unsigned int *))(v3 + 12))(a2, &v100) )
    return -2147467259;
  v5 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, v100);
  sub_401600((int)(this + 47), (unsigned int)&v116 + 4, v5 - ((char *)&v116 + 4));
  (*(void (__stdcall **)(int *, char *))(*a2 + 16))(a2, v99);
  v6 = *a2;
  v7 = (int)(this + 51);
  v116 = 0;
  bstrString = (BSTR)v7;
  if ( (*(int (__stdcall **)(int *, const char **))(v6 + 80))(a2, &v107) )
  {
    v10 = HIDWORD(v116);
    bstrString = (BSTR)v7;
    v9 = v116;
  }
  else
  {
    v109 = (char)v107;
    v8 = *(_DWORD *)(v7 + 4) + 1;
    if ( v8 > *(_DWORD *)(v7 + 8) )
      *(_DWORD *)v7 = sub_453B00(v7, *(void **)v7, v8, 1u);
    *(_BYTE *)(*(_DWORD *)v7 + (*(_DWORD *)(v7 + 4))++) = v109;
    v9 = 1;
    v10 = 0;
  }
  v11 = *a2;
  v108 = v10;
  if ( !(*(int (__stdcall **)(int *, const char **))(v11 + 436))(a2, &v107) )
  {
    v12 = bstrString;
    v109 = (char)v107;
    v13 = *((_DWORD *)bstrString + 1) + 1;
    if ( v13 > *((_DWORD *)bstrString + 2) )
    {
      v14 = sub_453B00((int)bstrString, *(void **)bstrString, v13, 1u);
      v12 = bstrString;
      *(_DWORD *)bstrString = v14;
    }
    v15 = (_BYTE *)(*((_DWORD *)v12 + 1) + *(_DWORD *)v12);
    v108 = v10;
    *v15 = v109;
    ++*((_DWORD *)v12 + 1);
    v9 |= 2u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 152))(a2, &v107) )
  {
    v16 = bstrString;
    v109 = (char)v107;
    v17 = *((_DWORD *)bstrString + 1) + 1;
    if ( v17 > *((_DWORD *)bstrString + 2) )
    {
      v18 = sub_453B00((int)bstrString, *(void **)bstrString, v17, 1u);
      v16 = bstrString;
      *(_DWORD *)bstrString = v18;
    }
    v19 = (_BYTE *)(*((_DWORD *)v16 + 1) + *(_DWORD *)v16);
    v108 = v10;
    *v19 = v109;
    ++*((_DWORD *)v16 + 1);
    v9 |= 4u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 76))(a2, &v107) )
  {
    v20 = (void **)(v106 + 51);
    v109 = (char)v107;
    v114 = (void **)(v106 + 51);
    v21 = v106[52] + 1;
    if ( v21 > v106[53] )
    {
      v22 = sub_453B00((int)(v106 + 51), *v20, v21, 1u);
      v20 = v114;
      *v114 = v22;
    }
    v23 = (char *)*v20 + (_DWORD)v20[1];
    v108 = v10;
    *v23 = v109;
    v20[1] = (char *)v20[1] + 1;
    v9 |= 8u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 276))(a2, &v107) )
  {
    v24 = (void **)(v106 + 51);
    v109 = (char)v107;
    v114 = (void **)(v106 + 51);
    v25 = v106[52] + 1;
    if ( v25 > v106[53] )
    {
      v26 = sub_453B00((int)(v106 + 51), *v24, v25, 1u);
      v24 = v114;
      *v114 = v26;
    }
    v27 = (char *)v24[1] + (_DWORD)*v24;
    v108 = v10;
    *v27 = v109;
    v24[1] = (char *)v24[1] + 1;
    v9 |= 0x10u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 228))(a2, &v107) )
  {
    v28 = (void **)(v106 + 51);
    v109 = (char)v107;
    v114 = (void **)(v106 + 51);
    v29 = v106[52] + 1;
    if ( v29 > v106[53] )
    {
      v30 = sub_453B00((int)(v106 + 51), *v28, v29, 1u);
      v28 = v114;
      *v114 = v30;
    }
    v31 = (char *)v28[1] + (_DWORD)*v28;
    v108 = v10;
    *v31 = v109;
    v28[1] = (char *)v28[1] + 1;
    v9 |= 0x20u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 232))(a2, &v107) )
  {
    v32 = (void **)(v106 + 51);
    v109 = (char)v107;
    v114 = (void **)(v106 + 51);
    v33 = v106[52] + 1;
    if ( v33 > v106[53] )
    {
      v34 = sub_453B00((int)(v106 + 51), *v32, v33, 1u);
      v32 = v114;
      *v114 = v34;
    }
    v35 = (char *)*v32 + (_DWORD)v32[1];
    v108 = v10;
    *v35 = v109;
    v32[1] = (char *)v32[1] + 1;
    v9 |= 0x40u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 280))(a2, &v107) )
  {
    v36 = (void **)(v106 + 51);
    v109 = (char)v107;
    v114 = (void **)(v106 + 51);
    v37 = v106[52] + 1;
    if ( v37 > v106[53] )
    {
      v38 = sub_453B00((int)(v106 + 51), *v36, v37, 1u);
      v36 = v114;
      *v114 = v38;
    }
    v39 = (char *)*v36 + (_DWORD)v36[1];
    v108 = v10;
    *v39 = v109;
    v36[1] = (char *)v36[1] + 1;
    v9 |= 0x80u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 212))(a2, &v107) )
  {
    v40 = (void **)(v106 + 51);
    v109 = (char)v107;
    v114 = (void **)(v106 + 51);
    v41 = v106[52] + 1;
    if ( v41 > v106[53] )
    {
      v42 = sub_453B00((int)(v106 + 51), *v40, v41, 1u);
      v40 = v114;
      *v114 = v42;
    }
    v43 = (char *)*v40 + (_DWORD)v40[1];
    v108 = v10;
    *v43 = v109;
    v40[1] = (char *)v40[1] + 1;
    v9 |= 0x100u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 120))(a2, &v107) )
  {
    v44 = v106;
    v45 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v44 + 51), (unsigned int)&v116 + 4, v45 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x400u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 172))(a2, &v107) )
  {
    v46 = v106;
    v47 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v46 + 51), (unsigned int)&v116 + 4, v47 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x800u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 200))(a2, &v107) )
  {
    v48 = v106;
    v49 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v48 + 51), (unsigned int)&v116 + 4, v49 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x1000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 164))(a2, &v107) )
  {
    v50 = v106;
    v51 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v50 + 51), (unsigned int)&v116 + 4, v51 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x2000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 196))(a2, &v107) )
  {
    v52 = v106;
    v53 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v52 + 51), (unsigned int)&v116 + 4, v53 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x4000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 36))(a2, &v107) )
  {
    v54 = v106;
    v55 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v54 + 51), (unsigned int)&v116 + 4, v55 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x8000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 40))(a2, &v107) )
  {
    v56 = v106;
    v57 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v56 + 51), (unsigned int)&v116 + 4, v57 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x10000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 60))(a2, &v107) )
  {
    v58 = v106;
    v59 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v58 + 51), (unsigned int)&v116 + 4, v59 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x20000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 52))(a2, &v107) )
  {
    v60 = v106;
    v61 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v60 + 51), (unsigned int)&v116 + 4, v61 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x40000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 12))(a2, &v107) )
  {
    v62 = v106;
    v63 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v62 + 51), (unsigned int)&v116 + 4, v63 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x80000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 16))(a2, &v107) )
  {
    v64 = v106;
    v65 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v64 + 51), (unsigned int)&v116 + 4, v65 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x100000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 400))(a2, &v107) )
  {
    v66 = v106;
    v67 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v66 + 51), (unsigned int)&v116 + 4, v67 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x200000u;
  }
  if ( !(*(int (__stdcall **)(int *, const char **))(*a2 + 148))(a2, &v107) )
  {
    v68 = v106;
    v69 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
    sub_401600((int)(v68 + 51), (unsigned int)&v116 + 4, v69 - ((char *)&v116 + 4));
    v10 = v108;
    v9 |= 0x400000u;
  }
  if ( !(*(int (__stdcall **)(int *, BSTR *))(*a2 + 28))(a2, &bstrString) )
  {
    if ( !(*(int (__stdcall **)(BSTR, const char **))(*(_DWORD *)bstrString + 12))(bstrString, &v107) )
    {
      v70 = v106;
      v71 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
      sub_401600((int)(v70 + 51), (unsigned int)&v116 + 4, v71 - ((char *)&v116 + 4));
      v10 = v108;
      v9 |= 0x1000000u;
    }
    (*(void (__stdcall **)(BSTR))(*(_DWORD *)bstrString + 8))(bstrString);
  }
  if ( !(*(int (__stdcall **)(int *, BSTR *))(*a2 + 32))(a2, &bstrString) )
  {
    if ( !(*(int (__stdcall **)(BSTR, const char **))(*(_DWORD *)bstrString + 12))(bstrString, &v107) )
    {
      v72 = v106;
      v73 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
      sub_401600((int)(v72 + 51), (unsigned int)&v116 + 4, v73 - ((char *)&v116 + 4));
      v10 = v108;
      v9 |= 0x2000000u;
    }
    (*(void (__stdcall **)(BSTR))(*(_DWORD *)bstrString + 8))(bstrString);
  }
  if ( !(*(int (__stdcall **)(int *, BSTR *))(*a2 + 24))(a2, &bstrString) )
  {
    if ( !(*(int (__stdcall **)(BSTR, const char **))(*(_DWORD *)bstrString + 12))(bstrString, &v107) )
    {
      v74 = v106;
      v75 = sub_4540B0((_BYTE *)&v116 + 4, (unsigned int)&v117, (unsigned int)v107);
      sub_401600((int)(v74 + 51), (unsigned int)&v116 + 4, v75 - ((char *)&v116 + 4));
      v10 = v108;
      v9 |= 0x4000000u;
    }
    (*(void (__stdcall **)(BSTR))(*(_DWORD *)bstrString + 8))(bstrString);
  }
  if ( !(*(int (__stdcall **)(int *, __int64 *))(*a2 + 68))(a2, &v116) )
  {
    v76 = v106;
    v77 = sub_454140(v110, (unsigned int)v113, v116, HIDWORD(v116));
    sub_401600((int)(v76 + 51), (unsigned int)v110, v77 - v110);
    v10 = v108;
    v9 |= 0x8000000u;
  }
  v102 = nullptr;
  v103 = 0;
  v104 = 0;
  v78 = *a2;
  v119 = 0;
  if ( !(*(int (__stdcall **)(int *, BSTR *))(v78 + 20))(a2, &bstrString) )
  {
    sub_45A700((int)&v102, bstrString, -1);
    SysFreeString(bstrString);
    v79 = (void **)(v106 + 51);
    v114 = (void **)(v106 + 51);
    if ( v103 )
    {
      v80 = pNodeName;
      if ( v102 )
        v80 = v102;
    }
    else
    {
      v80 = MultiByteStr;
    }
    v107 = v80;
    v108 = (unsigned int)(v80 + 1);
    v81 = strlen(v80);
    v82 = v81 + 1;
    HIDWORD(v116) = v81 + 1;
    if ( v81 == -1 )
      goto LABEL_96;
    v83 = v106[52];
    v84 = v83 + v82;
    v108 = 0x7FFFFFFF;
    v111 = v83;
    if ( v84 < v83 )
      v84 = v108;
    v108 = v84;
    if ( v84 <= v83 )
    {
      if ( v84 == v83 )
        goto LABEL_95;
      v109 = 0;
      if ( v84 >= v83 )
        goto LABEL_95;
    }
    else
    {
      if ( v84 > v106[53] )
      {
        v85 = sub_453B00((int)(v106 + 51), *v79, v84, 1u);
        v79 = v114;
        *v114 = v85;
        v84 = v108;
      }
      sub_464890((__m128i *)((char *)*v79 + (_DWORD)v79[1]), 0, v84 - (_DWORD)v79[1]);
      v84 = v108;
      v79 = v114;
      v83 = v111;
      v109 = 0;
    }
    v79[1] = (void *)v84;
LABEL_95:
    sub_464310((unsigned int)*v79 + v83, (unsigned int)v107, HIDWORD(v116));
LABEL_96:
    v9 |= 0x10000000u;
    v108 = v10;
  }
  v119 = 1;
  if ( v102 )
  {
    v103 = 0;
    sub_453A20(v102);
  }
  v86 = *a2;
  v119 = -1;
  if ( !(*(int (__stdcall **)(int *, char *))(v86 + 64))(a2, (char *)&v116 + 4) )
  {
    v87 = v106;
    v88 = sub_4540B0(&v111, (unsigned int)&v112, HIDWORD(v116));
    sub_401600((int)(v87 + 51), (unsigned int)&v111, v88 - (_BYTE *)&v111);
    v10 = v108;
    v9 |= 0x20000000u;
  }
  if ( !(*(int (__stdcall **)(int *, __int64 *))(*a2 + 56))(a2, &v116) )
  {
    v89 = v106;
    v90 = sub_454140(v110, (unsigned int)v113, v116, (int)v116 >> 31);
    sub_401600((int)(v89 + 51), (unsigned int)v110, v90 - v110);
    v10 = v108;
    v9 |= 0x40000000u;
  }
  VariantInit(&pvarg);
  if ( !(*(int (__stdcall **)(int *, VARIANTARG *))(*a2 + 168))(a2, &pvarg) )
  {
    v102 = nullptr;
    v103 = 0;
    v104 = 0;
    v119 = 2;
    v91 = sub_454170(&bstrString, (unsigned int)&bstrString + 3, pvarg.vt);
    sub_401600((int)&v102, (unsigned int)&bstrString, v91 - (_BYTE *)&bstrString);
    if ( (pvarg.vt & 0x6000) == 0 )
    {
      HIDWORD(v116) = v103;
      switch ( pvarg.vt )
      {
        case 2u:
        case 0x12u:
          sub_4060B0(&v102, pvarg.lVal);
          break;
        case 3u:
        case 4u:
        case 0x13u:
        case 0x16u:
        case 0x17u:
        case 0x19u:
          sub_402780(&v102, pvarg.cyVal.Lo);
          break;
        case 5u:
        case 0x14u:
        case 0x15u:
          sub_4027D0(&v102, pvarg.cyVal.Lo, pvarg.decVal.Mid32);
          break;
        case 8u:
          lVal = pvarg.lVal;
          v93 = *(_DWORD *)(pvarg.lVal - 4);
          v94 = sub_4540B0(&v111, (unsigned int)&v112, v93);
          sub_401600((int)&v102, (unsigned int)&v111, v94 - (_BYTE *)&v111);
          sub_401600((int)&v102, lVal, v93);
          v10 = v108;
          break;
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0xDu:
        case 0xEu:
        case 0x10u:
        case 0x11u:
          sub_406080((int)&v102, pvarg.cVal);
          break;
        default:
          break;
      }
      if ( v103 > HIDWORD(v116) )
      {
        sub_401600((int)(v106 + 51), (unsigned int)v102, v103);
        v9 |= 0x80000000;
        v108 = v10;
      }
    }
    v119 = 3;
    if ( v102 )
    {
      v103 = 0;
      sub_453A20(v102);
    }
    v119 = -1;
  }
  v95 = v106;
  v96 = v106[52];
  v97 = sub_454140(&v116, (unsigned int)v118, v9, v108);
  sub_401600((int)(v95 + 47), (unsigned int)&v116, v97 - (_BYTE *)&v116);
  v98 = sub_4540B0(&v114, (unsigned int)v115, v96);
  sub_401600((int)(v95 + 47), (unsigned int)&v114, v98 - (_BYTE *)&v114);
  sub_401600((int)(v95 + 47), v95[51], v96);
  return 0;
}
