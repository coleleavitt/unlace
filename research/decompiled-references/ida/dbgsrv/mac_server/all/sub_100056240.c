/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056240
// Address: 0x0000000100056240

//----- (0000000100056240) ----------------------------------------------------
__int64 __fastcall sub_100056240(
        __int64 (__fastcall ***a1)(_QWORD, __int128 *, __int64, char **, __int128 *, __int128 *),
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        const char *a5,
        int a6,
        char a7)
{
  __int64 v9; // r15
  size_t v10; // rax
  size_t v11; // rbx
  size_t v12; // r14
  void *v13; // rdi
  int v14; // eax
  const char *v15; // rsi
  char v16; // r14
  const char *v17; // rsi
  __int64 v18; // rbx
  char *v19; // r13
  const char *v20; // r12
  _QWORD *v21; // rbx
  size_t v22; // rax
  size_t v23; // r15
  size_t v24; // r14
  void *v25; // rdi
  __int64 (__fastcall **v26)(); // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 v30; // r14
  _QWORD *v31; // r15
  __int64 v32; // r13
  const char *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // r15
  __int64 v36; // r12
  const char *v37; // rdi
  _DWORD *v38; // rax
  unsigned __int64 v39; // rsi
  _BYTE *v40; // rax
  __int64 v41; // rcx
  void *v42; // rax
  __int64 v47; // [rsp+18h] [rbp-A18h]
  __int128 v48; // [rsp+20h] [rbp-A10h] BYREF
  unsigned __int64 v49; // [rsp+30h] [rbp-A00h]
  char *v50; // [rsp+38h] [rbp-9F8h] BYREF
  __int128 v51; // [rsp+40h] [rbp-9F0h]
  __int128 v52; // [rsp+50h] [rbp-9E0h]
  __int128 v53; // [rsp+60h] [rbp-9D0h]
  __int128 v54; // [rsp+70h] [rbp-9C0h]
  __int128 v55; // [rsp+80h] [rbp-9B0h]
  __int128 v56; // [rsp+90h] [rbp-9A0h]
  __int128 v57; // [rsp+A0h] [rbp-990h]
  __int128 v58; // [rsp+B0h] [rbp-980h]
  __int128 v59; // [rsp+C0h] [rbp-970h]
  __int128 v60; // [rsp+D0h] [rbp-960h]
  __int16 v61; // [rsp+E0h] [rbp-950h]
  __int64 v62; // [rsp+E4h] [rbp-94Ch]
  __int64 v63; // [rsp+F0h] [rbp-940h]
  __int128 v64; // [rsp+F8h] [rbp-938h]
  __int64 v65; // [rsp+108h] [rbp-928h]
  __int128 v66; // [rsp+120h] [rbp-910h]
  __int128 v67; // [rsp+130h] [rbp-900h]
  __int128 v68; // [rsp+140h] [rbp-8F0h]
  char *__s[2]; // [rsp+150h] [rbp-8E0h] BYREF
  __int64 v70; // [rsp+160h] [rbp-8D0h]
  __int128 v71; // [rsp+170h] [rbp-8C0h] BYREF
  __int64 v72; // [rsp+180h] [rbp-8B0h]
  __int128 v73; // [rsp+190h] [rbp-8A0h] BYREF
  unsigned __int64 v74; // [rsp+1A0h] [rbp-890h]
  __int128 v75; // [rsp+1B0h] [rbp-880h] BYREF
  __int64 v76; // [rsp+1C0h] [rbp-870h]
  int v77; // [rsp+1C8h] [rbp-868h]
  __int16 v78; // [rsp+1CCh] [rbp-864h]
  _DWORD v79[524]; // [rsp+1D0h] [rbp-860h] BYREF

  v9 = a2;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = -1;
  v78 = 0;
  __bzero(v79, 2084);
  if ( a5 )
  {
    v10 = strlen(a5);
    if ( v10 )
    {
      v11 = v10;
      v12 = v10 + 1;
      if ( v10 == -1 )
      {
        v13 = nullptr;
      }
      else
      {
        v13 = qvector_reserve((__int64)&v75, nullptr, v10 + 1, 1u);
        *(_QWORD *)&v75 = v13;
      }
      *((_QWORD *)&v75 + 1) = v12;
      memmove(v13, a5, v11);
      *(_BYTE *)(v75 + v11) = 0;
    }
  }
  v77 = sub_1000537F0(a5);
  LOBYTE(v78) = a7;
  if ( v77 == 25 )
  {
    v14 = 0;
    switch ( a6 )
    {
      case 0:
        v14 = 16777223;
        break;
      case 2:
        v14 = 15;
        break;
      case 7:
        v14 = 6;
        break;
      case 12:
        v14 = 8;
        break;
      case 13:
        v14 = 16777228;
        break;
      case 15:
        v14 = 16777234;
        break;
      case 23:
        v14 = 14;
        break;
      case 25:
        v14 = 11;
        break;
      default:
        break;
    }
    v79[514] = v14;
    v79[515] = 0;
  }
  else
  {
    v79[0] = a6;
  }
  if ( !sub_100053F00((__int64)&v75) )
  {
    sub_1000542C0((_BYTE *)(a2 + 192), "Couldn't retrieve file information.\n");
LABEL_74:
    v39 = *((_QWORD *)&v73 + 1);
    if ( !*((_QWORD *)&v73 + 1) )
    {
      v40 = (_BYTE *)v73;
      if ( v74 )
      {
        v41 = 0;
      }
      else
      {
        v40 = qvector_reserve((__int64)&v73, (void *)v73, 1u, 1u);
        *(_QWORD *)&v73 = v40;
        v41 = *((_QWORD *)&v73 + 1);
      }
      v40[v41] = 0;
      v39 = ++*((_QWORD *)&v73 + 1);
    }
    *a4 = v39;
    v42 = (void *)v73;
    if ( v74 > v39 && (_QWORD)v73 != 0 && v39 != 0 )
    {
      v42 = qrealloc((void *)v73, v39);
      if ( !v42 )
        v42 = (void *)v73;
    }
    v73 = 0;
    v74 = 0;
    *a3 = v42;
    LODWORD(v9) = 0;
    goto LABEL_84;
  }
  if ( *(_BYTE *)(a2 + 184) == 1 )
  {
    if ( *((_QWORD *)&v75 + 1) )
      v15 = (const char *)v75;
    else
      v15 = _s1;
    sub_100000AE0((int)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n", v15);
  }
  v71 = 0;
  v72 = 0;
  *(_OWORD *)__s = 0;
  v70 = 0;
  v16 = 1;
  if ( !sub_100053C80((__int64)&qword_1000AD0F8, (__int64)__s, (__int64)&v75, (__int64)&v71) )
    goto LABEL_69;
  if ( *(_BYTE *)(v9 + 184) == 1 )
  {
    if ( __s[1] )
      v17 = __s[0];
    else
      v17 = _s1;
    sub_100000AE0((int)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n", v17);
  }
  v47 = v9;
  v50 = nullptr;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = -1;
  v63 = -1;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  sub_100051940((__int64 *)&v50);
  v18 = v9;
  v19 = (char *)operator new(0x28u);
  if ( !__s[1] )
  {
    *((_DWORD *)v19 + 2) = 1;
    *(_QWORD *)v19 = &off_1000A96E8;
    v21 = v19 + 16;
    *((_OWORD *)v19 + 1) = 0;
    *((_QWORD *)v19 + 4) = 0;
    v20 = _s1;
    goto LABEL_37;
  }
  v20 = __s[0];
  *((_DWORD *)v19 + 2) = 1;
  *(_QWORD *)v19 = &off_1000A96E8;
  *((_OWORD *)v19 + 1) = 0;
  *((_QWORD *)v19 + 4) = 0;
  if ( v20 )
  {
    v21 = v19 + 16;
LABEL_37:
    v22 = strlen(v20);
    v23 = v22;
    v24 = v22 + 1;
    if ( v22 == -1 )
    {
      v25 = nullptr;
    }
    else
    {
      v25 = qvector_reserve((__int64)v21, nullptr, v22 + 1, 1u);
      *v21 = v25;
    }
    *((_QWORD *)v19 + 3) = v24;
    memmove(v25, v20, v23);
    *(_BYTE *)(*((_QWORD *)v19 + 2) + v23) = 0;
    v18 = v47;
    v16 = 1;
  }
  v50 = v19;
  if ( v77 == 25 )
  {
    v26 = off_1000A94E0;
  }
  else
  {
    if ( v77 != 11 )
    {
      if ( under_debugger != 1 )
        interr(0x7606u);
      BUG();
    }
    v26 = off_1000A9540;
  }
  v56 = *((_OWORD *)v26 + 5);
  v55 = *((_OWORD *)v26 + 4);
  v27 = *(_OWORD *)v26;
  v28 = *((_OWORD *)v26 + 1);
  v29 = *((_OWORD *)v26 + 2);
  v54 = *((_OWORD *)v26 + 3);
  v53 = v29;
  v52 = v28;
  v51 = v27;
  if ( ((unsigned __int8 (__fastcall *)(char **, __int128 *))v56)(&v50, &v75) )
  {
    if ( SDWORD2(v57) <= 0 )
    {
      v48 = 0;
      v49 = 0;
    }
    else
    {
      v30 = DWORD2(v57) & 0x7FFFFFFF;
      v31 = (_QWORD *)(v57 + 24);
      v32 = 0;
      do
      {
        v33 = _s1;
        if ( *v31 && (v33 = (const char *)*(v31 - 1), !strcmp(v33, ".debug_info")) )
        {
          LODWORD(v62) = v32;
        }
        else if ( !strcmp(v33, ".debug_types") )
        {
          HIDWORD(v62) = v32;
        }
        ++v32;
        v31 += 15;
      }
      while ( v30 != v32 );
      v48 = 0;
      v49 = 0;
      v34 = 24;
      v35 = 0;
      v36 = 0;
      do
      {
        v37 = _s1;
        if ( *(_QWORD *)(v57 + v34) )
          v37 = *(const char **)(v57 + v34 - 8);
        if ( !strncmp(v37, ".debug_", 7u) )
        {
          v38 = (_DWORD *)v48;
          if ( v49 < v35 + 1 )
          {
            v38 = qvector_reserve((__int64)&v48, (void *)v48, v35 + 1, 4u);
            *(_QWORD *)&v48 = v38;
            v35 = *((_QWORD *)&v48 + 1);
          }
          v38[v35] = v36;
          v35 = ++*((_QWORD *)&v48 + 1);
        }
        ++v36;
        v34 += 120;
      }
      while ( v30 != v36 );
    }
    LODWORD(v9) = (**a1)(a1, &v73, v47, &v50, &v75, &v48);
    v16 = 1;
    if ( (_QWORD)v48 )
    {
      *((_QWORD *)&v48 + 1) = 0;
      qfree((void *)v48);
    }
    if ( (_DWORD)v9 )
    {
      sub_10005E2D0((__int64)&v50);
      v16 = 0;
      goto LABEL_69;
    }
  }
  else
  {
    sub_1000542C0((_BYTE *)(v18 + 192), "Couldn't initialize DWARF loading.\n");
  }
  sub_10005E2D0((__int64)&v50);
  LODWORD(v9) = 0;
LABEL_69:
  if ( __s[0] )
  {
    __s[1] = nullptr;
    qfree(__s[0]);
  }
  if ( (_QWORD)v71 )
  {
    *((_QWORD *)&v71 + 1) = 0;
    qfree((void *)v71);
  }
  if ( v16 )
    goto LABEL_74;
LABEL_84:
  if ( (_QWORD)v75 )
  {
    *((_QWORD *)&v75 + 1) = 0;
    qfree((void *)v75);
  }
  if ( (_QWORD)v73 )
  {
    *((_QWORD *)&v73 + 1) = 0;
    qfree((void *)v73);
  }
  return (unsigned int)v9;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A94E0: using guessed type __int64 (__fastcall *off_1000A94E0[8])();
// 1000A9540: using guessed type __int64 (__fastcall *off_1000A9540[8])();
// 1000A96E8: using guessed type __int64 (__fastcall *off_1000A96E8)();
// 1000AD0F8: using guessed type __int64 qword_1000AD0F8;
// 1000AE23D: using guessed type char under_debugger;
