/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004CCC0
// Address: 0x000000010004CCC0

//----- (000000010004CCC0) ----------------------------------------------------
__int64 __fastcall sub_10004CCC0(
        __int64 (__fastcall ***a1)(_QWORD, void **, __int64, __int64 *, void **, void **),
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        const char *a5,
        int a6,
        char a7)
{
  size_t v14; // x0
  size_t v15; // x26
  unsigned __int64 v16; // x27
  void *v17; // x0
  int v18; // w8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  char *v25; // x8
  char *v26; // x8
  char *v27; // x0
  __int64 v28; // x23
  char *v29; // x24
  _QWORD *v30; // x25
  char v31; // w22
  char *v32; // x0
  size_t v33; // x26
  unsigned __int64 v34; // x27
  void *v35; // x0
  __int64 (__fastcall **v36)(); // x8
  __int128 v37; // q0
  __int128 v38; // q2
  __int128 v39; // q1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  __int64 v46; // x27
  __int64 v47; // x26
  _QWORD *v48; // x28
  const char *v49; // x25
  __int64 v50; // x24
  __int64 v51; // x28
  __int64 v52; // x25
  const char *v53; // x0
  void *v54; // x1
  unsigned __int64 v55; // x1
  void *v56; // x1
  unsigned __int64 v57; // x8
  void *v58; // x0
  char v60; // [xsp+0h] [xbp-A30h]
  __int64 (__fastcall ***v61)(_QWORD, void **, __int64, __int64 *, void **, void **); // [xsp+8h] [xbp-A28h]
  void *__ptr; // [xsp+10h] [xbp-A20h] BYREF
  __int64 v63; // [xsp+18h] [xbp-A18h]
  unsigned __int64 v64; // [xsp+20h] [xbp-A10h]
  __int64 v65; // [xsp+28h] [xbp-A08h] BYREF
  __int128 v66; // [xsp+30h] [xbp-A00h]
  __int128 v67; // [xsp+40h] [xbp-9F0h]
  __int128 v68; // [xsp+50h] [xbp-9E0h]
  __int128 v69; // [xsp+60h] [xbp-9D0h]
  __int128 v70; // [xsp+70h] [xbp-9C0h]
  __int128 v71; // [xsp+80h] [xbp-9B0h]
  __int128 v72; // [xsp+90h] [xbp-9A0h]
  __int128 v73; // [xsp+A0h] [xbp-990h]
  __int128 v74; // [xsp+B0h] [xbp-980h]
  __int128 v75; // [xsp+C0h] [xbp-970h]
  __int16 v76; // [xsp+D0h] [xbp-960h]
  __int64 v77; // [xsp+D4h] [xbp-95Ch]
  __int64 v78; // [xsp+E0h] [xbp-950h]
  __int64 v79; // [xsp+E8h] [xbp-948h]
  __int64 v80; // [xsp+F0h] [xbp-940h]
  __int64 v81; // [xsp+F8h] [xbp-938h]
  __int128 v82; // [xsp+110h] [xbp-920h]
  __int128 v83; // [xsp+120h] [xbp-910h]
  __int128 v84; // [xsp+130h] [xbp-900h]
  char *__s; // [xsp+140h] [xbp-8F0h] BYREF
  __int64 v86; // [xsp+148h] [xbp-8E8h]
  __int64 v87; // [xsp+150h] [xbp-8E0h]
  void *v88; // [xsp+158h] [xbp-8D8h] BYREF
  __int64 v89; // [xsp+160h] [xbp-8D0h]
  __int64 v90; // [xsp+168h] [xbp-8C8h]
  void *v91; // [xsp+170h] [xbp-8C0h] BYREF
  unsigned __int64 v92; // [xsp+178h] [xbp-8B8h]
  unsigned __int64 v93; // [xsp+180h] [xbp-8B0h]
  void *v94; // [xsp+188h] [xbp-8A8h] BYREF
  unsigned __int64 v95; // [xsp+190h] [xbp-8A0h]
  __int64 v96; // [xsp+198h] [xbp-898h]
  int v97; // [xsp+1A0h] [xbp-890h]
  __int16 v98; // [xsp+1A4h] [xbp-88Ch]
  _DWORD v99[522]; // [xsp+1A8h] [xbp-888h] BYREF

  v91 = nullptr;
  v92 = 0;
  v93 = 0;
  v94 = nullptr;
  v95 = 0;
  v96 = 0;
  v97 = -1;
  v98 = 0;
  bzero(v99, 0x824u);
  if ( a5 )
  {
    v14 = strlen(a5);
    if ( v14 )
    {
      v15 = v14;
      v16 = v14 + 1;
      if ( v14 == -1 )
      {
        v17 = nullptr;
      }
      else
      {
        v17 = qvector_reserve(&v94, nullptr, v16, 1u);
        v94 = v17;
      }
      v95 = v16;
      memmove(v17, a5, v15);
      *((_BYTE *)v94 + v15) = 0;
    }
  }
  v97 = sub_10004A5A0(a5);
  LOBYTE(v98) = a7;
  if ( v97 == 25 )
  {
    v18 = 0;
    if ( a6 > 12 )
    {
      if ( a6 > 22 )
      {
        if ( a6 == 23 )
        {
          v18 = 14;
        }
        else if ( a6 == 25 )
        {
          v18 = 11;
        }
      }
      else if ( a6 == 13 )
      {
        v18 = 16777228;
      }
      else if ( a6 == 15 )
      {
        v18 = 16777234;
      }
    }
    else if ( a6 > 6 )
    {
      if ( a6 == 7 )
      {
        v18 = 6;
      }
      else if ( a6 == 12 )
      {
        v18 = 8;
      }
    }
    else if ( a6 )
    {
      if ( a6 == 2 )
        v18 = 15;
    }
    else
    {
      v18 = 16777223;
    }
    v99[514] = v18;
    v99[515] = 0;
  }
  else
  {
    v99[0] = a6;
  }
  if ( !(unsigned int)sub_10004AC2C((__int64)&v94) )
  {
    sub_10004B050((_BYTE *)(a2 + 192), "Couldn't retrieve file information.\n", v19, v20, v21, v22, v23, v24, v60);
    goto LABEL_87;
  }
  if ( *(_BYTE *)(a2 + 184) == 1 )
  {
    if ( v95 )
      LOBYTE(v25) = (_BYTE)v94;
    else
      v25 = &byte_100075A30;
    v60 = (char)v25;
    sub_100000AA0();
  }
  v88 = nullptr;
  v89 = 0;
  v90 = 0;
  __s = nullptr;
  v86 = 0;
  v87 = 0;
  if ( !sub_10004A974((__int64)&qword_10009D7C8, &__s, (__int64)&v94, (__int64)&v88, v21, v22, v23, v24) )
  {
    v31 = 1;
    v32 = __s;
    if ( !__s )
      goto LABEL_84;
LABEL_83:
    v86 = 0;
    qfree(v32);
    goto LABEL_84;
  }
  if ( *(_BYTE *)(a2 + 184) == 1 )
  {
    if ( v86 )
      LOBYTE(v26) = (_BYTE)__s;
    else
      v26 = &byte_100075A30;
    v60 = (char)v26;
    sub_100000AA0();
  }
  v65 = 0;
  v72 = 0u;
  v73 = 0u;
  v74 = 0u;
  v75 = 0u;
  v76 = 0;
  v77 = -1;
  v78 = -1;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v84 = 0u;
  v82 = 0u;
  v83 = 0u;
  sub_100048D70(&v65);
  v27 = (char *)operator new(0x28u);
  v28 = (__int64)v27;
  if ( !v86 )
  {
    *((_DWORD *)v27 + 2) = 1;
    *(_QWORD *)v27 = off_10009ADE0;
    *((_QWORD *)v27 + 2) = 0;
    v30 = v27 + 16;
    v29 = &byte_100075A30;
    *((_QWORD *)v27 + 3) = 0;
    *((_QWORD *)v27 + 4) = 0;
    goto LABEL_48;
  }
  v29 = __s;
  *((_DWORD *)v27 + 2) = 1;
  *(_QWORD *)v27 = off_10009ADE0;
  *((_QWORD *)v27 + 2) = 0;
  v30 = v27 + 16;
  *((_QWORD *)v27 + 3) = 0;
  *((_QWORD *)v27 + 4) = 0;
  if ( v29 )
  {
LABEL_48:
    v33 = strlen(v29);
    v34 = v33 + 1;
    if ( v33 == -1 )
    {
      v35 = nullptr;
    }
    else
    {
      v35 = qvector_reserve(v30, nullptr, v34, 1u);
      *v30 = v35;
    }
    *(_QWORD *)(v28 + 24) = v34;
    memmove(v35, v29, v33);
    *(_BYTE *)(*(_QWORD *)(v28 + 16) + v33) = 0;
  }
  v65 = v28;
  if ( v97 == 25 )
  {
    v36 = off_10009AC00;
  }
  else
  {
    if ( v97 != 11 )
    {
      if ( under_debugger != 1 )
        goto LABEL_105;
      while ( 1 )
      {
        __break(1u);
LABEL_105:
        interr(30214);
      }
    }
    v36 = off_10009AC60;
  }
  v37 = *((_OWORD *)v36 + 5);
  v70 = *((_OWORD *)v36 + 4);
  v71 = v37;
  v38 = *((_OWORD *)v36 + 3);
  v68 = *((_OWORD *)v36 + 2);
  v69 = v38;
  v39 = *((_OWORD *)v36 + 1);
  v66 = *(_OWORD *)v36;
  v67 = v39;
  if ( !((unsigned int (__fastcall *)(__int64 *, void **))v37)(&v65, &v94) )
  {
    sub_10004B050((_BYTE *)(a2 + 192), "Couldn't initialize DWARF loading.\n", v40, v41, v42, v43, v44, v45, v60);
    goto LABEL_82;
  }
  v61 = a1;
  if ( *(__int64 *)((char *)&v72 + 4) <= 0 )
  {
    __ptr = nullptr;
    v63 = 0;
    v64 = 0;
    goto LABEL_77;
  }
  v46 = 0;
  v47 = DWORD2(v72) & 0x7FFFFFFF;
  v48 = (_QWORD *)(v72 + 24);
  do
  {
    if ( *v48 )
    {
      v49 = (const char *)*(v48 - 1);
      if ( !strcmp(v49, ".debug_info") )
      {
        LODWORD(v77) = v46;
        goto LABEL_59;
      }
    }
    else
    {
      v49 = &byte_100075A30;
    }
    if ( !strcmp(v49, ".debug_types") )
      HIDWORD(v77) = v46;
LABEL_59:
    ++v46;
    v48 += 15;
  }
  while ( v47 != v46 );
  v50 = 0;
  v51 = 0;
  v52 = 0;
  __ptr = nullptr;
  v63 = 0;
  v64 = 0;
  do
  {
    if ( *(_QWORD *)(v72 + v50 + 24) )
      v53 = *(const char **)(v72 + v50 + 16);
    else
      v53 = &byte_100075A30;
    if ( !strncmp(v53, ".debug_", 7u) )
    {
      v54 = __ptr;
      if ( v64 < v51 + 1 )
      {
        v54 = qvector_reserve(&__ptr, __ptr, v51 + 1, 4u);
        __ptr = v54;
        v51 = v63;
      }
      *((_DWORD *)v54 + v51) = v52;
      v51 = ++v63;
    }
    ++v52;
    v50 += 120;
  }
  while ( v47 != v52 );
LABEL_77:
  a2 = (**v61)(v61, &v91, a2, &v65, &v94, &__ptr);
  if ( __ptr )
  {
    v63 = 0;
    qfree(__ptr);
  }
  if ( !(_DWORD)a2 )
  {
LABEL_82:
    sub_100053A00((__int64)&v65);
    a2 = 0;
    v31 = 1;
    v32 = __s;
    if ( !__s )
      goto LABEL_84;
    goto LABEL_83;
  }
  sub_100053A00((__int64)&v65);
  v31 = 0;
  v32 = __s;
  if ( __s )
    goto LABEL_83;
LABEL_84:
  if ( v88 )
  {
    v89 = 0;
    qfree(v88);
  }
  if ( (v31 & 1) != 0 )
  {
LABEL_87:
    v55 = v92;
    if ( !v92 )
    {
      v56 = v91;
      if ( v93 )
      {
        v57 = 0;
      }
      else
      {
        v56 = qvector_reserve(&v91, v91, 1u, 1u);
        v91 = v56;
        v57 = v92;
      }
      *((_BYTE *)v56 + v57) = 0;
      v55 = ++v92;
    }
    *a4 = v55;
    v58 = v91;
    if ( v93 > v55 )
    {
      if ( v55 )
      {
        if ( v91 )
        {
          v58 = qrealloc(v91, v55);
          if ( !v58 )
            v58 = v91;
        }
      }
    }
    a2 = 0;
    v91 = nullptr;
    v92 = 0;
    v93 = 0;
    *a3 = v58;
  }
  if ( v94 )
  {
    v95 = 0;
    qfree(v94);
  }
  if ( v91 )
  {
    v92 = 0;
    qfree(v91);
  }
  return a2;
}
// 10004CEB8: variable 'v21' is possibly undefined
// 10004CEB8: variable 'v22' is possibly undefined
// 10004CEB8: variable 'v23' is possibly undefined
// 10004CEB8: variable 'v24' is possibly undefined
// 10004CF8C: variable 'v19' is possibly undefined
// 10004CF8C: variable 'v20' is possibly undefined
// 10004CF8C: variable 'v60' is possibly undefined
// 10004D100: variable 'v40' is possibly undefined
// 10004D100: variable 'v41' is possibly undefined
// 10004D100: variable 'v42' is possibly undefined
// 10004D100: variable 'v43' is possibly undefined
// 10004D100: variable 'v44' is possibly undefined
// 10004D100: variable 'v45' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009AC00: using guessed type __int64 (__fastcall *off_10009AC00[8])();
// 10009AC60: using guessed type __int64 (__fastcall *off_10009AC60[8])();
// 10009ADE0: using guessed type __int64 (__fastcall *off_10009ADE0[4])();
// 10009D7C8: using guessed type __int64 qword_10009D7C8;
// 10009D90D: using guessed type char under_debugger;
