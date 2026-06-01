/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94890
// Address: 0x0000000000094890

//----- (0000000000094890) ----------------------------------------------------
__int64 __fastcall sub_94890(
        __int64 (__fastcall ***a1)(_QWORD, void **, __int64, _DWORD **, void **, void **),
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        const void *a5,
        int a6,
        char a7)
{
  size_t v11; // rax
  size_t v12; // r14
  void *v13; // r15
  void *v14; // rax
  unsigned int v15; // ebx
  const char *v16; // rsi
  const char *v17; // rsi
  int v18; // ebp
  _DWORD *v19; // rax
  _DWORD *v20; // rbp
  const char *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 i; // r14
  __int64 v25; // r15
  const char *v26; // rdi
  const char *v27; // rdi
  __int64 v28; // rbx
  void *v29; // r14
  __int64 v30; // rbp
  __int64 j; // r12
  const char *v32; // rdi
  void *v33; // rax
  void *v34; // rbx
  void *v35; // rax
  _BYTE *v36; // rcx
  void *v37; // rax
  void *v38; // rax
  _QWORD *v41; // [rsp+20h] [rbp-1608h]
  void *ptr[2]; // [rsp+30h] [rbp-15F8h] BYREF
  unsigned __int64 v44; // [rsp+40h] [rbp-15E8h]
  _DWORD *v45; // [rsp+48h] [rbp-15E0h] BYREF
  __int128 v46; // [rsp+50h] [rbp-15D8h]
  __int128 v47; // [rsp+60h] [rbp-15C8h]
  __int128 v48; // [rsp+70h] [rbp-15B8h]
  __int128 v49; // [rsp+80h] [rbp-15A8h]
  __int128 v50; // [rsp+90h] [rbp-1598h]
  __int128 v51; // [rsp+A0h] [rbp-1588h]
  __int64 v52; // [rsp+B0h] [rbp-1578h]
  __int64 v53; // [rsp+B8h] [rbp-1570h]
  int v54; // [rsp+F4h] [rbp-1534h]
  int v55; // [rsp+F8h] [rbp-1530h]
  void *v56[2]; // [rsp+160h] [rbp-14C8h] BYREF
  __int64 v57; // [rsp+170h] [rbp-14B8h]
  void *v58[2]; // [rsp+180h] [rbp-14A8h] BYREF
  __int64 v59; // [rsp+190h] [rbp-1498h]
  void *v60[4]; // [rsp+1A0h] [rbp-1488h] BYREF
  void *dest[2]; // [rsp+1C0h] [rbp-1468h] BYREF
  unsigned __int64 v62; // [rsp+1D0h] [rbp-1458h]
  int v63; // [rsp+1D8h] [rbp-1450h]
  __int16 v64; // [rsp+1DCh] [rbp-144Ch]
  int s[1284]; // [rsp+1E0h] [rbp-1448h] BYREF
  unsigned __int64 v66; // [rsp+15F0h] [rbp-38h]

  v66 = __readfsqword(0x28u);
  memset(v60, 0, 24);
  *(_OWORD *)dest = 0;
  v62 = 0;
  v63 = -1;
  v64 = 0;
  memset(s, 0, 0x1408u);
  if ( a5 && (v11 = strlen((const char *)a5)) != 0 )
  {
    v12 = v11;
    v13 = (void *)(v11 + 1);
    v14 = dest[0];
    if ( v62 < (unsigned __int64)v13 )
    {
      v14 = qvector_reserve((__int64)dest, (char *)dest[0], (unsigned __int64)v13, 1u);
      dest[0] = v14;
    }
    dest[1] = v13;
    memmove(v14, a5, v12);
    *((_BYTE *)dest[0] + v12) = 0;
  }
  else
  {
    dest[1] = nullptr;
  }
  v63 = sub_918B0((const char *)a5);
  LOBYTE(v64) = a7;
  if ( v63 != 25 )
    s[0] = a6;
  v15 = a2;
  if ( !sub_921A0((__int64)dest) )
  {
    sub_926F0((_BYTE *)(a2 + 192), "Couldn't retrieve file information.\n");
LABEL_62:
    v34 = v60[1];
    if ( !v60[1] )
    {
      v35 = v60[0];
      if ( v60[2] )
      {
        v36 = nullptr;
      }
      else
      {
        v35 = qvector_reserve((__int64)v60, (char *)v60[0], 1u, 1u);
        v60[0] = v35;
        v36 = v60[1];
      }
      v36[(_QWORD)v35] = 0;
      v34 = ++v60[1];
    }
    *a4 = v34;
    if ( v60[2] > v34 )
    {
      if ( v34 )
      {
        if ( v60[0] )
        {
          v37 = qrealloc(v60[0], (signed __int64)v34);
          if ( v37 )
          {
            v60[0] = v37;
            v60[2] = v34;
          }
        }
      }
    }
    v38 = v60[0];
    memset(v60, 0, 24);
    *a3 = v38;
    v15 = 0;
    goto LABEL_73;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    if ( dest[1] )
      v16 = (const char *)dest[0];
    else
      v16 = s1;
    sub_390A0((int)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n", v16);
  }
  *(_OWORD *)v58 = 0;
  v59 = 0;
  *(_OWORD *)v56 = 0;
  v57 = 0;
  if ( !(unsigned __int8)sub_91E90((__int64)&qword_155910, (__int64)v56, (__int64)dest, (__int64)v58) )
  {
    v18 = 0;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    if ( v56[1] )
      v17 = (const char *)v56[0];
    else
      v17 = s1;
    sub_390A0((int)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n", v17);
  }
  sub_9C9D0((__int64)&v45);
  v19 = operator new(0x28u);
  v20 = v19;
  if ( v56[1] )
    v21 = (const char *)v56[0];
  else
    v21 = s1;
  v19[2] = 1;
  *(_QWORD *)v19 = &off_14E690;
  sub_37F60((__int64)(v19 + 4), v21);
  v45 = v20;
  if ( v63 != 11 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30214);
    BUG();
  }
  v51 = *(_OWORD *)off_14E560;
  v50 = xmmword_14E550;
  v49 = *(_OWORD *)off_14E540;
  v48 = *(_OWORD *)off_14E530;
  v47 = *(_OWORD *)off_14E520;
  v46 = *(_OWORD *)&off_14E510;
  if ( (unsigned __int8)sub_9B340(&v45) )
  {
    v41 = a4;
    if ( (int)v53 <= 0 )
    {
      *(_OWORD *)ptr = 0;
      v44 = 0;
    }
    else
    {
      v22 = (unsigned int)v53;
      v23 = v52 + 16;
      for ( i = 0; i != v22; ++i )
      {
        v25 = *(_QWORD *)(v23 + 8);
        v26 = s1;
        if ( v25 )
          v26 = *(const char **)v23;
        if ( !strcmp(v26, ".debug_info") )
        {
          v54 = i;
        }
        else
        {
          v27 = s1;
          if ( v25 )
            v27 = *(const char **)v23;
          if ( !strcmp(v27, ".debug_types") )
            v55 = i;
        }
        v23 += 120;
      }
      *(_OWORD *)ptr = 0;
      v44 = 0;
      v28 = (int)v22;
      v29 = nullptr;
      v30 = 24;
      for ( j = 0; j < v28; ++j )
      {
        v32 = s1;
        if ( *(_QWORD *)(v52 + v30) )
          v32 = *(const char **)(v52 + v30 - 8);
        if ( !strncmp(v32, ".debug_", 7u) )
        {
          if ( v44 >= (unsigned __int64)v29 + 1 )
          {
            v33 = ptr[0];
          }
          else
          {
            v33 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)v29 + 1, 4u);
            ptr[0] = v33;
            v29 = ptr[1];
          }
          *((_DWORD *)v33 + (_QWORD)v29) = j;
          v29 = ++ptr[1];
        }
        v30 += 120;
      }
    }
    v15 = (**a1)(a1, v60, a2, &v45, dest, ptr);
    a4 = v41;
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v44 = 0;
    }
    if ( v15 )
    {
      sub_9CB30((__int64)&v45);
      v18 = 1;
      goto LABEL_57;
    }
  }
  else
  {
    sub_926F0((_BYTE *)(a2 + 192), "Couldn't initialize DWARF loading.\n");
  }
  sub_9CB30((__int64)&v45);
  v15 = 0;
  v18 = 0;
LABEL_57:
  if ( v56[0] )
  {
    v56[1] = nullptr;
    qfree(v56[0]);
    v56[0] = nullptr;
    v57 = 0;
  }
  if ( v58[0] )
  {
    v58[1] = nullptr;
    qfree(v58[0]);
    v58[0] = nullptr;
    v59 = 0;
  }
  if ( !v18 )
    goto LABEL_62;
LABEL_73:
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    v62 = 0;
  }
  if ( v60[0] )
  {
    v60[1] = nullptr;
    qfree(v60[0]);
    v60[0] = nullptr;
    v60[2] = nullptr;
  }
  return v15;
}
// 94C40: conditional instruction was optimized away because %var_1618.4>=1
// 14E510: using guessed type _UNKNOWN *off_14E510;
// 14E520: using guessed type __int64 (__fastcall *off_14E520[6])();
// 14E530: using guessed type __int64 (__fastcall *off_14E530[4])();
// 14E540: using guessed type __int64 (__fastcall *off_14E540[2])();
// 14E550: using guessed type __int128 xmmword_14E550;
// 14E560: using guessed type __int64 (__fastcall *off_14E560[2])();
// 14E690: using guessed type __int64 (__fastcall *off_14E690)();
// 155910: using guessed type __int64 qword_155910;
// 158B40: using guessed type __int64 under_debugger;
