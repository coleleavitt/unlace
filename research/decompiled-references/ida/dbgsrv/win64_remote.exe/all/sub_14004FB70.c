/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004FB70
// Address: 0x000000014004FB70

//----- (000000014004FB70) ----------------------------------------------------
__int64 __fastcall sub_14004FB70(
        __int64 (__fastcall ***a1)(_QWORD, void **, __int64, __int64 (__fastcall ***)(), void **, char **),
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        struct _exception *Src,
        int a6,
        char a7)
{
  unsigned __int64 *v7; // r15
  _QWORD *v8; // r13
  int v10; // ebx
  size_t v11; // rax
  size_t v12; // rdi
  size_t v13; // r14
  void *v14; // rax
  _QWORD *v15; // rax
  char v16; // al
  int v17; // ecx
  char v18; // si
  const char *v19; // r14
  _QWORD *v20; // rcx
  bool v21; // di
  int v22; // ebx
  const char *v23; // rdx
  const char *v24; // rdx
  char *v25; // r13
  char *v26; // rdi
  char *v27; // rbx
  __int64 v28; // r15
  char *v29; // rsi
  char *v30; // r14
  const char *v31; // rdx
  const char *v32; // rcx
  unsigned int v33; // eax
  char *v34; // rcx
  const char *v35; // rdx
  const char *v36; // rcx
  __int64 v37; // rax
  size_t v38; // r8
  void *v39; // rcx
  size_t v40; // r8
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  char *v43; // rdx
  char *v44; // rax
  __int64 (__fastcall **v45)(); // rbx
  char *v46; // rsi
  size_t v47; // rax
  int v48; // edi
  __int64 v49; // r12
  char *v50; // r15
  char *v51; // rbx
  __int64 v52; // r13
  int v53; // r14d
  __int64 v54; // rsi
  const char *v55; // rcx
  const char *v56; // rcx
  int v57; // ebx
  __int64 v58; // rdi
  const char *v59; // rcx
  __int64 v60; // rax
  char *v61; // rcx
  unsigned int v62; // esi
  int v63; // ebx
  __int64 v64; // rdi
  void *v65; // rax
  unsigned __int64 v66; // rdx
  void *v67; // rax
  void *v68; // rcx
  void *v69; // rax
  char *Str2; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v72; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v73; // [rsp+40h] [rbp-C0h]
  void *v74; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v75; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v76; // [rsp+58h] [rbp-A8h]
  char *Str; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  void *v80; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+88h] [rbp-78h]
  void *v83; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v84; // [rsp+98h] [rbp-68h] BYREF
  void *v85; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  __int64 v87; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall ***v88)(_QWORD, void **, __int64, __int64 (__fastcall ***)(), void **, char **); // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v90; // [rsp+C8h] [rbp-38h]
  _QWORD *v91; // [rsp+D0h] [rbp-30h]
  void **v92; // [rsp+D8h] [rbp-28h]
  _QWORD *v93; // [rsp+E0h] [rbp-20h]
  __int128 v94; // [rsp+E8h] [rbp-18h]
  __int64 v95; // [rsp+F8h] [rbp-8h]
  void *v96; // [rsp+100h] [rbp+0h] BYREF
  size_t v97; // [rsp+108h] [rbp+8h]
  unsigned __int64 v98; // [rsp+110h] [rbp+10h]
  int v99; // [rsp+118h] [rbp+18h]
  _DWORD v100[325]; // [rsp+11Ch] [rbp+1Ch] BYREF
  __int64 (__fastcall **v101)(); // [rsp+630h] [rbp+530h] BYREF
  __m256i Block; // [rsp+638h] [rbp+538h] BYREF
  __int128 v103; // [rsp+658h] [rbp+558h]
  __int128 v104; // [rsp+668h] [rbp+568h]
  __int128 v105; // [rsp+678h] [rbp+578h]
  __int128 v106; // [rsp+688h] [rbp+588h]
  void *v107; // [rsp+698h] [rbp+598h] BYREF
  int v108; // [rsp+6A0h] [rbp+5A0h]
  __int64 v109; // [rsp+6A8h] [rbp+5A8h]
  void *v110; // [rsp+6B0h] [rbp+5B0h]
  __int64 v111; // [rsp+6B8h] [rbp+5B8h]
  __int64 v112; // [rsp+6C0h] [rbp+5C0h]
  int v113; // [rsp+6DCh] [rbp+5DCh]
  int v114; // [rsp+6E0h] [rbp+5E0h]
  void *v115; // [rsp+6F0h] [rbp+5F0h]
  __int64 v116; // [rsp+6F8h] [rbp+5F8h]
  __int64 v117; // [rsp+700h] [rbp+600h]
  char *v118; // [rsp+718h] [rbp+618h] BYREF
  unsigned __int64 v119; // [rsp+720h] [rbp+620h]
  void *v120[2]; // [rsp+730h] [rbp+630h] BYREF
  __int64 v121; // [rsp+740h] [rbp+640h]

  v7 = a4;
  v90 = a4;
  v8 = a3;
  v91 = a3;
  v89 = a2;
  v88 = a1;
  v74 = nullptr;
  v75 = 0;
  v76 = 0;
  v96 = nullptr;
  v97 = 0;
  v98 = 0;
  v10 = -1;
  v99 = -1;
  LOWORD(v100[0]) = 0;
  memset(&v100[1], 0, 0x50Cu);
  if ( Src && (v11 = strlen((const char *)Src), (v12 = v11) != 0) )
  {
    v13 = v11 + 1;
    if ( v11 + 1 <= v98 )
    {
      v14 = v96;
    }
    else
    {
      v14 = sub_14005ABE0((__int64)&v96, v96, v11 + 1, 1u);
      v96 = v14;
    }
    v97 = v13;
    memcpy(v14, Src, v12);
    *((_BYTE *)v96 + v12) = 0;
  }
  else
  {
    v97 = 0;
  }
  v15 = sub_1400639D0(Src, 0);
  v83 = v15;
  if ( v15 )
  {
    v92 = &v83;
    v101 = &off_140092F30;
    memset(&Block, 0, 24);
    v16 = sub_140019860((__int64)&v101, (__int64)v15, 0, 1);
    v17 = 11;
    if ( !v16 )
      v17 = -1;
    v10 = v17;
    v101 = &off_140092F30;
    if ( Block.m256i_i64[0] )
    {
      Block.m256i_i64[1] = 0;
      j_free((void *)Block.m256i_i64[0]);
      Block.m256i_i64[0] = 0;
      Block.m256i_i64[2] = 0;
    }
    sub_140063970(v83);
  }
  v99 = v10;
  LOBYTE(v100[0]) = a7;
  v100[1] = a6;
  v18 = 0;
  v19 = (const char *)v96;
  if ( v10 == 11 )
  {
    v20 = sub_1400639D0((struct _exception *)v96, 0);
    v84 = v20;
    v21 = 0;
    if ( !v20 )
      goto LABEL_22;
    v93 = &v84;
    v22 = v10 - 10;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        v21 = sub_14004C5A0((__int64)v100, (__int64)v20);
        v20 = v84;
      }
    }
    else
    {
      v21 = 0;
    }
    sub_140063970(v20);
    if ( v21 )
    {
      v18 = 1;
    }
    else
    {
LABEL_22:
      v80 = nullptr;
      v81 = 0;
      v82 = 0;
      sub_14004F570((__int64)&v96, (__int64)&v80);
      if ( qword_1400CB068 && *(_BYTE *)(qword_1400CB068 + 184) )
      {
        v23 = Str1;
        if ( v81 )
          v23 = (const char *)v80;
        sub_140002CE0((struct __crt_locale_pointers *)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", v23, v19);
      }
      if ( v80 )
      {
        v81 = 0;
        j_free(v80);
        v80 = nullptr;
        v82 = 0;
      }
    }
    if ( v18 )
    {
      if ( *(_BYTE *)(a2 + 184) )
      {
        v24 = Str1;
        if ( v97 )
          v24 = (const char *)v96;
        sub_140002CE0(
          (struct __crt_locale_pointers *)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n",
          v24);
      }
      v94 = 0;
      v95 = 0;
      Str = nullptr;
      v78 = 0;
      v79 = 0;
      Str2 = nullptr;
      v72 = 0;
      v73 = 0;
      sub_14004F570((__int64)&v96, (__int64)&Str2);
      v25 = (char *)qword_1400CB128;
      v26 = *((char **)qword_1400CB128 + 1);
      v27 = (char *)qword_1400CB128;
      v28 = v72;
      v29 = Str2;
      if ( !v26[25] )
      {
        do
        {
          v30 = v27;
          v31 = Str1;
          if ( v28 )
            v31 = v29;
          v32 = Str1;
          if ( *((_QWORD *)v26 + 5) )
            v32 = *((const char **)v26 + 4);
          v33 = (unsigned int)strcmp(v32, v31) >> 31;
          v27 = v26;
          if ( (_BYTE)v33 )
            v27 = v30;
          v34 = v26 + 16;
          if ( !(_BYTE)v33 )
            v34 = v26;
          v26 = *(char **)v34;
        }
        while ( !*(_BYTE *)(*(_QWORD *)v34 + 25LL) );
      }
      if ( v27[25] )
        goto LABEL_50;
      v35 = Str1;
      if ( *((_QWORD *)v27 + 5) )
        v35 = *((const char **)v27 + 4);
      v36 = Str1;
      if ( v28 )
        v36 = v29;
      if ( strcmp(v36, v35) < 0 )
LABEL_50:
        v27 = v25;
      if ( v27 == v25 )
      {
        if ( v29 )
        {
          v72 = 0;
          j_free(v29);
          Str2 = nullptr;
          v73 = 0;
        }
        v39 = nullptr;
        v85 = nullptr;
        v87 = 0;
        v86 = 0;
        if ( BYTE1(v100[0]) )
        {
          v40 = v97 - 1;
          if ( !v97 )
            v40 = 0;
          if ( v40 )
          {
            sub_140001810((__int64)&Str, v96, v40);
            v39 = v85;
          }
          else
          {
            v78 = 0;
          }
          v41 = 0;
        }
        else
        {
          if ( ((v99 - 10) & 0xFFFFFFF6) != 0 || v99 == 19 )
          {
            if ( byte_1400CB61C )
              __debugbreak();
            sub_14005A480(30222);
          }
          v41 = sub_140048C50((__int64)&Str, (__int64)&v96, (__int64)&v85);
          v39 = v85;
        }
        v42 = v41 >> 31;
        if ( v39 )
        {
          v86 = 0;
          j_free(v39);
        }
        if ( (_BYTE)v42 )
        {
LABEL_147:
          if ( Str )
          {
            v78 = 0;
            j_free(Str);
          }
          v7 = v90;
          v8 = v91;
          goto LABEL_151;
        }
      }
      else
      {
        if ( &Str != (char **)(v27 + 56) )
        {
          v37 = *((_QWORD *)v27 + 8);
          v38 = v37 - 1;
          if ( !v37 )
            v38 = 0;
          if ( v38 )
          {
            sub_140001810((__int64)&Str, *((const void **)v27 + 7), v38);
            v29 = Str2;
          }
          else
          {
            v78 = 0;
          }
        }
        if ( v29 )
        {
          v72 = 0;
          j_free(v29);
          Str2 = nullptr;
          v73 = 0;
        }
      }
      if ( *(_BYTE *)(a2 + 184) )
      {
        v43 = (char *)Str1;
        if ( v78 )
          v43 = Str;
        sub_140002CE0(
          (struct __crt_locale_pointers *)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n",
          v43);
      }
      sub_1400471C0((__int64)&v101);
      v44 = (char *)operator new(0x28u);
      v45 = (__int64 (__fastcall **)())v44;
      v93 = v44;
      if ( v44 )
      {
        v46 = (char *)Str1;
        if ( v78 )
          v46 = Str;
        *((_DWORD *)v44 + 2) = 1;
        *(_QWORD *)v44 = &off_1400972A8;
        v92 = (void **)(v44 + 16);
        *((_QWORD *)v44 + 2) = 0;
        *((_QWORD *)v44 + 3) = 0;
        *((_QWORD *)v44 + 4) = 0;
        if ( v46 )
        {
          v47 = strlen(v46);
          sub_140001810((__int64)(v45 + 2), v46, v47);
        }
      }
      else
      {
        v45 = nullptr;
      }
      v101 = v45;
      if ( v99 != 11 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(30214);
      }
      Block = off_140097130;
      v103 = *(_OWORD *)off_140097150;
      v104 = *(_OWORD *)off_140097160;
      v105 = xmmword_140097170;
      v106 = *(_OWORD *)off_140097180;
      if ( sub_140046660((__int64 *)&v101) )
      {
        v48 = 0;
        v49 = v108;
        v50 = (char *)v107;
        if ( v108 > 0 )
        {
          v51 = (char *)v107 + 16;
          v52 = v108;
          v53 = v114;
          do
          {
            v54 = *((_QWORD *)v51 + 1);
            v55 = Str1;
            if ( v54 )
              v55 = *(const char **)v51;
            if ( !strcmp(v55, ".debug_info") )
            {
              v113 = v48;
            }
            else
            {
              v56 = Str1;
              if ( v54 )
                v56 = *(const char **)v51;
              if ( !strcmp(v56, ".debug_types") )
                v53 = v48;
              v114 = v53;
            }
            ++v48;
            v51 += 120;
            --v52;
          }
          while ( v52 );
        }
        Str2 = nullptr;
        v72 = 0;
        v73 = 0;
        v57 = 0;
        if ( v49 > 0 )
        {
          v58 = 0;
          while ( 1 )
          {
            v59 = Str1;
            if ( *(_QWORD *)&v50[v58 + 24] )
              v59 = *(const char **)&v50[v58 + 16];
            if ( !strncmp(v59, ".debug_", 7u) )
            {
              v60 = v72;
              if ( v72 + 1 <= v73 )
              {
                v61 = Str2;
              }
              else
              {
                v61 = (char *)sub_14005ABE0((__int64)&Str2, Str2, v72 + 1, 4u);
                Str2 = v61;
                v60 = v72;
              }
              *(_DWORD *)&v61[4 * v60] = v57;
              ++v72;
            }
            ++v57;
            v58 += 120;
            if ( !--v49 )
              break;
            v50 = (char *)v107;
          }
        }
        v62 = (**v88)(v88, &v74, v89, &v101, &v96, &Str2);
        if ( v62 )
        {
          if ( Str2 )
          {
            v72 = 0;
            j_free(Str2);
            Str2 = nullptr;
            v73 = 0;
          }
          if ( v101 )
          {
            (*(void (__fastcall **)(__int64 (__fastcall **)(), __int64))*v101)(v101, 1);
            v101 = nullptr;
          }
          memset(&Block, 0, sizeof(Block));
          v103 = 0;
          v104 = 0;
          v105 = 0;
          v106 = 0;
          if ( v107 )
          {
            sub_14004DFD0(&v107, 0);
            j_free(v107);
            v107 = nullptr;
            v109 = 0;
          }
          v63 = 0;
          if ( v119 )
          {
            v64 = 0;
            do
            {
              j_free(*(void **)&v118[v64 + 56]);
              ++v63;
              v64 += 72;
            }
            while ( v63 < v119 );
          }
          if ( v110 )
          {
            v111 = 0;
            j_free(v110);
            v110 = nullptr;
            v112 = 0;
          }
          if ( v120[0] )
          {
            sub_14001A6C0(v120, 0);
            j_free(v120[0]);
            v120[0] = nullptr;
            v121 = 0;
          }
          sub_140047660((void **)&v118);
          if ( v115 )
          {
            v116 = 0;
            j_free(v115);
            v115 = nullptr;
            v117 = 0;
          }
          if ( v110 )
          {
            v111 = 0;
            j_free(v110);
            v110 = nullptr;
            v112 = 0;
          }
          if ( v107 )
          {
            sub_14004DFD0(&v107, 0);
            j_free(v107);
            v107 = nullptr;
            v109 = 0;
          }
          if ( Str )
          {
            v78 = 0;
            j_free(Str);
          }
          v65 = v74;
          goto LABEL_162;
        }
        if ( Str2 )
        {
          v72 = 0;
          j_free(Str2);
        }
      }
      else
      {
        sub_140048740((_BYTE *)(a2 + 192), (struct __crt_locale_pointers *)"Couldn't initialize DWARF loading.\n");
      }
      sub_1400485F0((__int64)&v101);
      if ( v120[0] )
      {
        sub_14001A6C0(v120, 0);
        j_free(v120[0]);
        v120[0] = nullptr;
        v121 = 0;
      }
      sub_140047660((void **)&v118);
      if ( v115 )
      {
        v116 = 0;
        j_free(v115);
        v115 = nullptr;
        v117 = 0;
      }
      if ( v110 )
      {
        v111 = 0;
        j_free(v110);
        v110 = nullptr;
        v112 = 0;
      }
      if ( v107 )
      {
        sub_14004DFD0(&v107, 0);
        j_free(v107);
      }
      goto LABEL_147;
    }
  }
  sub_140048740((_BYTE *)(a2 + 192), (struct __crt_locale_pointers *)"Couldn't retrieve file information.\n");
LABEL_151:
  v66 = v75;
  if ( !v75 )
  {
    if ( v76 )
    {
      v67 = v74;
    }
    else
    {
      v67 = sub_14005ABE0((__int64)&v74, v74, 1u, 1u);
      v74 = v67;
      v66 = v75;
    }
    *((_BYTE *)v67 + v66) = 0;
    v66 = ++v75;
  }
  *v7 = v66;
  v68 = v74;
  if ( v76 > v66 )
  {
    if ( v74 )
    {
      if ( v66 )
      {
        v69 = sub_14005AAF0(v74, v66);
        v68 = v74;
        if ( v69 )
          v68 = v69;
      }
    }
  }
  v76 = 0;
  v75 = 0;
  v65 = nullptr;
  v74 = nullptr;
  *v8 = v68;
  v62 = 0;
LABEL_162:
  if ( v96 )
  {
    v97 = 0;
    j_free(v96);
    v96 = nullptr;
    v98 = 0;
    v65 = v74;
  }
  if ( v65 )
  {
    v75 = 0;
    j_free(v65);
  }
  return v62;
}
// 14004FD16: conditional instruction was optimized away because ebx.4 is in (==B|==FFFFFFFF)
// 14004FD20: conditional instruction was optimized away because ebx.4==FFFFFFFF
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
// 140097150: using guessed type __int64 (__fastcall *off_140097150[4])();
// 140097160: using guessed type __int64 (__fastcall *off_140097160[2])();
// 140097170: using guessed type __int128 xmmword_140097170;
// 140097180: using guessed type __int64 (__fastcall *off_140097180[2])();
// 1400972A8: using guessed type __int64 (__fastcall *off_1400972A8)(void *Block);
// 1400CB068: using guessed type __int64 qword_1400CB068;
// 1400CB61C: using guessed type char byte_1400CB61C;
