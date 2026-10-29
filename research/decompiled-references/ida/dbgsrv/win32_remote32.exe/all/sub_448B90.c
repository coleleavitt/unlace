/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448B90
// Address: 0x00448B90

//----- (00448B90) --------------------------------------------------------
int __userpurge sub_448B90@<eax>(
        int (__thiscall ***a1)(_DWORD, void **, int, int **, void **, void **)@<ecx>,
        char a2@<bl>,
        __m128i a3@<xmm0>,
        int a4,
        _DWORD *a5,
        unsigned int *a6,
        const char *a7,
        __int32 a8,
        char a9)
{
  unsigned int v9; // esi
  unsigned int v10; // eax
  void *v11; // ecx
  int v12; // esi
  int *v13; // eax
  char v14; // al
  int v15; // edi
  int *v16; // eax
  int v17; // esi
  int v18; // edi
  const char *v19; // esi
  int *v20; // eax
  int *v21; // edi
  int *v22; // ecx
  unsigned int v23; // esi
  LPVOID v24; // eax
  unsigned int v25; // edx
  int *v26; // eax
  char *v27; // edi
  int v28; // esi
  const char *v29; // eax
  int v30; // eax
  int *v31; // eax
  const char *v32; // eax
  int v33; // eax
  int **v34; // ecx
  bool v35; // zf
  int v36; // esi
  int v37; // edi
  const CHAR *v38; // eax
  int v39; // eax
  void *v40; // ecx
  int v41; // edi
  unsigned int v42; // esi
  int v43; // edi
  void *v44; // eax
  unsigned int v45; // eax
  void *v46; // ecx
  void *v47; // ecx
  LPVOID v48; // eax
  unsigned int v50; // [esp-8h] [ebp-7D8h]
  unsigned int v51[3]; // [esp+Ch] [ebp-7C4h] BYREF
  _DWORD *v52; // [esp+18h] [ebp-7B8h]
  unsigned int *v53; // [esp+1Ch] [ebp-7B4h]
  int (__thiscall ***v54)(_DWORD, void **, int, int **, void **, void **); // [esp+20h] [ebp-7B0h]
  int *v55; // [esp+24h] [ebp-7ACh]
  int v56; // [esp+28h] [ebp-7A8h]
  void *v57; // [esp+2Ch] [ebp-7A4h] BYREF
  int v58; // [esp+30h] [ebp-7A0h]
  unsigned int v59; // [esp+34h] [ebp-79Ch]
  int **v60; // [esp+38h] [ebp-798h]
  LPVOID v61; // [esp+3Ch] [ebp-794h] BYREF
  int v62; // [esp+40h] [ebp-790h]
  int v63; // [esp+44h] [ebp-78Ch]
  void *v64; // [esp+48h] [ebp-788h] BYREF
  unsigned int v65; // [esp+4Ch] [ebp-784h]
  unsigned int v66; // [esp+50h] [ebp-780h]
  int *v67; // [esp+54h] [ebp-77Ch] BYREF
  bool v68; // [esp+5Bh] [ebp-775h]
  void *v69; // [esp+5Ch] [ebp-774h] BYREF
  unsigned int v70; // [esp+60h] [ebp-770h]
  unsigned int v71; // [esp+64h] [ebp-76Ch]
  int v72; // [esp+68h] [ebp-768h]
  __int16 v73; // [esp+6Ch] [ebp-764h] BYREF
  __m128i v74[80]; // [esp+70h] [ebp-760h] BYREF
  int (__stdcall **v75)(int, int); // [esp+57Ch] [ebp-254h] BYREF
  void *v76; // [esp+580h] [ebp-250h]
  int v77; // [esp+584h] [ebp-24Ch]
  int v78; // [esp+588h] [ebp-248h]
  int *v79; // [esp+718h] [ebp-B8h] BYREF
  __m128i v80[3]; // [esp+71Ch] [ebp-B4h] BYREF
  char *v81; // [esp+74Ch] [ebp-84h] BYREF
  int *v82; // [esp+750h] [ebp-80h]
  int v83; // [esp+754h] [ebp-7Ch]
  void *v84; // [esp+758h] [ebp-78h]
  int v85; // [esp+75Ch] [ebp-74h]
  int v86; // [esp+760h] [ebp-70h]
  int *v87; // [esp+77Ch] [ebp-54h]
  int **v88; // [esp+780h] [ebp-50h]
  void *v89; // [esp+790h] [ebp-40h]
  int v90; // [esp+794h] [ebp-3Ch]
  int v91; // [esp+798h] [ebp-38h]
  char *v92; // [esp+7A4h] [ebp-2Ch] BYREF
  unsigned int v93; // [esp+7A8h] [ebp-28h]
  void *v94[2]; // [esp+7B0h] [ebp-20h] BYREF
  int v95; // [esp+7B8h] [ebp-18h]
  int v96; // [esp+7CCh] [ebp-4h]

  v54 = a1;
  v56 = a4;
  v52 = a5;
  v53 = a6;
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  v96 = 0;
  v69 = nullptr;
  v70 = 0;
  v71 = 0;
  v72 = -1;
  v73 = 0;
  sub_464890(v74, 0, 0x50Cu);
  LOBYTE(v96) = 1;
  if ( a7 && (v9 = strlen(a7)) != 0 )
  {
    v10 = v9 + 1;
    if ( v9 + 1 <= v71 )
    {
      v11 = v69;
    }
    else
    {
      v11 = sub_453B00((int)&v69, v69, v9 + 1, 1u);
      v10 = v9 + 1;
      v69 = v11;
    }
    v70 = v10;
    sub_464310((unsigned int)v11, (unsigned int)a7, v9);
    *((_BYTE *)v69 + v9) = 0;
  }
  else
  {
    v70 = 0;
  }
  v12 = -1;
  v13 = sub_45C5A0(a2, (int)a7, a3, a7, 0);
  v67 = v13;
  if ( v13 )
  {
    v60 = &v67;
    v75 = &off_48A4F0;
    v76 = nullptr;
    v77 = 0;
    v78 = 0;
    LOBYTE(v96) = 3;
    v14 = sub_415880((int)&v75, a3, (int)v13, 0, 1);
    v75 = &off_48A4F0;
    v12 = 11;
    if ( !v14 )
      v12 = -1;
    LOBYTE(v96) = 4;
    if ( v76 )
    {
      v77 = 0;
      sub_453A20(v76);
      v76 = nullptr;
      v78 = 0;
    }
    LOBYTE(v96) = 5;
    sub_45C550(a2, (int)a7, v67);
    LOBYTE(v96) = 1;
  }
  v15 = (int)v69;
  LOBYTE(v73) = a9;
  v74[0].m128i_i32[0] = a8;
  v72 = v12;
  if ( v12 != 11 )
    goto LABEL_108;
  v16 = sub_45C5A0(a2, (int)v69, a3, (LPCCH)v69, 0);
  v67 = v16;
  v68 = 0;
  if ( !v16 )
    goto LABEL_102;
  v60 = &v67;
  LOBYTE(v96) = 6;
  v17 = v12 - 10;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v68 = sub_445B60(a3, &v73, (int)v16);
      v16 = v67;
    }
  }
  else
  {
    v68 = 0;
  }
  LOBYTE(v96) = 7;
  sub_45C550(a2, v15, v16);
  LOBYTE(v96) = 1;
  if ( !v68 )
  {
LABEL_102:
    v61 = nullptr;
    v62 = 0;
    v63 = 0;
    LOBYTE(v96) = 8;
    sub_448580((int)&v69, a3, &v61);
    if ( dword_4B6C08 && *(_BYTE *)(dword_4B6C08 + 104) )
      sub_402760("Couldn't find UUID/debug ID \"%s\" for file: %s\n");
    LOBYTE(v96) = 9;
    if ( v61 )
    {
      v62 = 0;
      sub_453A20(v61);
      v61 = nullptr;
      v63 = 0;
    }
    LOBYTE(v96) = 1;
LABEL_108:
    sub_441A40((_BYTE *)(v56 + 112), (int)"Couldn't retrieve file information.\n");
    goto LABEL_109;
  }
  v18 = v56;
  v19 = MultiByteStr;
  if ( *(_BYTE *)(v56 + 104) )
    sub_402760("dwarf_file_action_t::with_dwarf_file() binary file found at %s\n");
  memset(v51, 0, sizeof(v51));
  v61 = nullptr;
  v62 = 0;
  v63 = 0;
  LOBYTE(v96) = 11;
  if ( sub_441F90(&dword_4B6C7C, a3, (int)&v61, (int)&v69, v51) )
  {
    if ( *(_BYTE *)(v18 + 104) )
      sub_402760("dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n");
    sub_440450((char *)&v79);
    LOBYTE(v96) = 12;
    v20 = (int *)sub_4627C2(0x14u);
    v21 = v20;
    v67 = v20;
    if ( v20 )
    {
      if ( v62 )
        v19 = (const char *)v61;
      v60 = (int **)v19;
      v20[1] = 1;
      v22 = v20 + 2;
      *v20 = (int)&off_48DC94;
      v55 = v20 + 2;
      v20[2] = 0;
      v20[3] = 0;
      v20[4] = 0;
      LOBYTE(v96) = 15;
      if ( v19 )
      {
        v23 = strlen(v19);
        v24 = nullptr;
        v25 = v23 + 1;
        if ( v23 != -1 )
        {
          v24 = sub_453B00((int)(v21 + 2), nullptr, v23 + 1, 1u);
          v22 = v21 + 2;
          v21[2] = (int)v24;
          v25 = v23 + 1;
        }
        v50 = (unsigned int)v60;
        v22[1] = v25;
        sub_464310((unsigned int)v24, v50, v23);
        *(_BYTE *)(v23 + v21[2]) = 0;
      }
    }
    else
    {
      v21 = nullptr;
    }
    LOBYTE(v96) = 12;
    v79 = v21;
    if ( v72 != 11 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(30214);
    }
    v80[0] = *(__m128i *)&off_48DBD0;
    v80[1] = *(__m128i *)off_48DBE0;
    v80[2] = *(__m128i *)byte_48DBF0;
    if ( sub_43FA20(a2, *(__m128i *)byte_48DBF0, (int)&v79) )
    {
      v26 = v82;
      v55 = nullptr;
      v67 = v82;
      if ( (int)v82 > 0 )
      {
        v27 = v81 + 12;
        v60 = v88;
        do
        {
          v28 = *((_DWORD *)v27 + 1);
          v29 = MultiByteStr;
          if ( v28 )
            v29 = *(const char **)v27;
          v30 = strcmp(v29, ".debug_info");
          if ( v30 )
            v30 = v30 < 0 ? -1 : 1;
          if ( v30 )
          {
            v32 = MultiByteStr;
            if ( v28 )
              v32 = *(const char **)v27;
            v33 = strcmp(v32, ".debug_types");
            if ( v33 )
              v33 = v33 < 0 ? -1 : 1;
            v34 = v60;
            v35 = v33 == 0;
            v31 = v55;
            if ( v35 )
              v34 = (int **)v55;
            v60 = v34;
            v88 = v34;
          }
          else
          {
            v31 = v55;
            v87 = v55;
          }
          v27 += 104;
          v55 = (int *)((char *)v31 + 1);
        }
        while ( (int)((char *)v31 + 1) < (int)v67 );
        v26 = v67;
      }
      v57 = nullptr;
      v58 = 0;
      v59 = 0;
      v36 = 0;
      LOBYTE(v96) = 16;
      if ( (int)v26 > 0 )
      {
        v37 = 0;
        do
        {
          if ( *(_DWORD *)&v81[v37 + 16] )
            v38 = *(const CHAR **)&v81[v37 + 12];
          else
            v38 = MultiByteStr;
          if ( !sub_467F80((int)v38, ".debug_", 7u) )
          {
            v39 = v58;
            if ( v58 + 1 <= v59 )
            {
              v40 = v57;
            }
            else
            {
              v40 = sub_453B00((int)&v57, v57, v58 + 1, 4u);
              v39 = v58;
              v57 = v40;
            }
            *((_DWORD *)v40 + v39) = v36;
            ++v58;
          }
          ++v36;
          v37 += 104;
        }
        while ( v36 < (int)v67 );
      }
      v41 = (**v54)(v54, &v64, v56, &v79, &v69, &v57);
      v54 = (int (__thiscall ***)(_DWORD, void **, int, int **, void **, void **))v41;
      if ( v41 )
      {
        LOBYTE(v96) = 17;
        if ( v57 )
        {
          v58 = 0;
          sub_453A20(v57);
          v57 = nullptr;
          v59 = 0;
        }
        LOBYTE(v96) = 18;
        if ( v79 )
        {
          (*(void (__thiscall **)(int *, int))*v79)(v79, 1);
          v79 = nullptr;
        }
        sub_464890(v80, 0, 0x30u);
        if ( v81 )
        {
          sub_447000(&v81, 0);
          sub_453A20(v81);
          v81 = nullptr;
          v83 = 0;
        }
        v42 = 0;
        if ( v93 )
        {
          v43 = 0;
          do
          {
            sub_453A20(*(void **)&v92[v43 + 28]);
            ++v42;
            v43 += 40;
          }
          while ( v42 < v93 );
          v41 = (int)v54;
        }
        if ( v84 )
        {
          v85 = 0;
          sub_453A20(v84);
          v84 = nullptr;
          v86 = 0;
        }
        if ( v94[0] )
        {
          sub_415F90(v94, 0);
          sub_453A20(v94[0]);
          v94[0] = nullptr;
          v95 = 0;
        }
        LOBYTE(v96) = 19;
        sub_440A70((void **)&v92);
        LOBYTE(v96) = 20;
        if ( v89 )
        {
          v90 = 0;
          sub_453A20(v89);
          v89 = nullptr;
          v91 = 0;
        }
        LOBYTE(v96) = 21;
        if ( v84 )
        {
          v85 = 0;
          sub_453A20(v84);
          v84 = nullptr;
          v86 = 0;
        }
        LOBYTE(v96) = 22;
        if ( v81 )
        {
          sub_447000(&v81, 0);
          sub_453A20(v81);
          v81 = nullptr;
          v83 = 0;
        }
        LOBYTE(v96) = 23;
        if ( v61 )
        {
          v62 = 0;
          sub_453A20(v61);
        }
        v44 = v64;
        goto LABEL_120;
      }
      LOBYTE(v96) = 27;
      if ( v57 )
      {
        v58 = 0;
        sub_453A20(v57);
      }
    }
    else
    {
      sub_441A40((_BYTE *)(v56 + 112), (int)"Couldn't initialize DWARF loading.\n");
    }
    LOBYTE(v96) = 28;
    sub_441930((char *)&v79);
    LOBYTE(v96) = 29;
    if ( v94[0] )
    {
      sub_415F90(v94, 0);
      sub_453A20(v94[0]);
      v94[0] = nullptr;
      v95 = 0;
    }
    sub_440A70((void **)&v92);
    LOBYTE(v96) = 30;
    if ( v89 )
    {
      v90 = 0;
      sub_453A20(v89);
      v89 = nullptr;
      v91 = 0;
    }
    LOBYTE(v96) = 31;
    if ( v84 )
    {
      v85 = 0;
      sub_453A20(v84);
      v84 = nullptr;
      v86 = 0;
    }
    LOBYTE(v96) = 32;
    if ( v81 )
    {
      sub_447000(&v81, 0);
      sub_453A20(v81);
    }
  }
  LOBYTE(v96) = 33;
  if ( v61 )
  {
    v62 = 0;
    sub_453A20(v61);
  }
  LOBYTE(v96) = 1;
LABEL_109:
  v45 = v65;
  if ( !v65 )
  {
    if ( v66 )
    {
      v46 = v64;
    }
    else
    {
      v46 = sub_453B00((int)&v64, v64, 1u, 1u);
      v45 = v65;
      v64 = v46;
    }
    *((_BYTE *)v46 + v45) = 0;
    v45 = ++v65;
  }
  *v53 = v45;
  v47 = v64;
  if ( v66 > v45 )
  {
    if ( v64 )
    {
      if ( v45 )
      {
        v48 = sub_453A30(v64, v45);
        v47 = v64;
        if ( v48 )
          v47 = v48;
      }
    }
  }
  v44 = nullptr;
  v66 = 0;
  v41 = 0;
  v65 = 0;
  v64 = nullptr;
  *v52 = v47;
LABEL_120:
  LOBYTE(v96) = 35;
  if ( v69 )
  {
    v70 = 0;
    sub_453A20(v69);
    v44 = v64;
    v69 = nullptr;
    v71 = 0;
  }
  v96 = 36;
  if ( v44 )
  {
    v65 = 0;
    sub_453A20(v44);
  }
  return v41;
}
// 448DA5: conditional instruction was optimized away because esi.4 is in (==B|==FFFFFFFF)
// 448DAF: conditional instruction was optimized away because esi.4==FFFFFFFF
// 48A4F0: using guessed type int (__stdcall *off_48A4F0)(int, int);
// 48DBD0: using guessed type int (__cdecl *off_48DBD0)(int, __int64, int);
// 48DBE0: using guessed type int (__cdecl *off_48DBE0[2])(int);
// 48DC94: using guessed type int (__stdcall *off_48DC94)(char);
// 4B6C08: using guessed type int dword_4B6C08;
// 4B6C7C: using guessed type int dword_4B6C7C;
// 4B70F0: using guessed type char byte_4B70F0;
