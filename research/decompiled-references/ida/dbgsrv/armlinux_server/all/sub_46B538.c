/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B538
// Address: 0x000000000046B538

//----- (000000000046B538) ----------------------------------------------------
__int64 __fastcall sub_46B538(
        __int64 (__fastcall ***a1)(_QWORD, void **, __int64, __int64 *, void **, void **),
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        char *a5,
        int a6,
        char a7)
{
  __int64 *v14; // x1
  __int64 *v15; // x1
  char *v16; // x21
  _DWORD *v17; // x0
  __int64 v18; // x22
  void *v19; // x0
  unsigned __int64 v20; // x1
  unsigned __int64 v21; // x2
  unsigned int v22; // w19
  unsigned __int64 v24; // x2
  bool v25; // zf
  int v26; // w27
  __int64 v27; // x22
  int v28; // w21
  const char *v29; // x0
  void *v30; // x0
  __int64 v31; // x3
  unsigned int v32; // w0
  void *v33; // [xsp+88h] [xbp-15A8h] BYREF
  unsigned __int64 v34; // [xsp+90h] [xbp-15A0h]
  unsigned __int64 v35; // [xsp+98h] [xbp-1598h]
  void *v36; // [xsp+A0h] [xbp-1590h] BYREF
  __int64 v37; // [xsp+A8h] [xbp-1588h]
  __int64 v38; // [xsp+B0h] [xbp-1580h]
  void *ptr; // [xsp+B8h] [xbp-1578h] BYREF
  __int64 v40; // [xsp+C0h] [xbp-1570h]
  __int64 v41; // [xsp+C8h] [xbp-1568h]
  void *v42; // [xsp+D0h] [xbp-1560h] BYREF
  __int64 v43; // [xsp+D8h] [xbp-1558h]
  unsigned __int64 v44; // [xsp+E0h] [xbp-1550h]
  __int64 v45[13]; // [xsp+E8h] [xbp-1548h] BYREF
  __int64 v46; // [xsp+150h] [xbp-14E0h]
  __int64 v47; // [xsp+158h] [xbp-14D8h]
  __int64 v48; // [xsp+160h] [xbp-14D0h]
  __int64 v49; // [xsp+168h] [xbp-14C8h]
  __int64 v50; // [xsp+170h] [xbp-14C0h]
  __int64 v51; // [xsp+178h] [xbp-14B8h]
  __int64 v52; // [xsp+180h] [xbp-14B0h]
  __int64 v53; // [xsp+188h] [xbp-14A8h]
  char v54; // [xsp+190h] [xbp-14A0h]
  char v55; // [xsp+191h] [xbp-149Fh]
  __int64 v56; // [xsp+194h] [xbp-149Ch]
  __int64 v57; // [xsp+1A0h] [xbp-1490h]
  __int64 v58; // [xsp+1A8h] [xbp-1488h]
  __int64 v59; // [xsp+1B0h] [xbp-1480h]
  __int64 v60; // [xsp+1B8h] [xbp-1478h]
  __int64 v61; // [xsp+1D0h] [xbp-1460h]
  __int64 v62; // [xsp+1D8h] [xbp-1458h]
  __int64 v63; // [xsp+1E0h] [xbp-1450h]
  __int64 v64; // [xsp+1E8h] [xbp-1448h]
  __int64 v65; // [xsp+1F0h] [xbp-1440h]
  __int64 v66; // [xsp+1F8h] [xbp-1438h]
  void *v67; // [xsp+200h] [xbp-1430h] BYREF
  __int64 v68; // [xsp+208h] [xbp-1428h]
  __int64 v69; // [xsp+210h] [xbp-1420h]
  int v70; // [xsp+218h] [xbp-1418h]
  char v71; // [xsp+21Ch] [xbp-1414h]
  char v72; // [xsp+21Dh] [xbp-1413h]
  int v73[1282]; // [xsp+220h] [xbp-1410h] BYREF

  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v67 = nullptr;
  v68 = 0;
  v69 = 0;
  v70 = -1;
  v71 = 0;
  v72 = 0;
  memset(v73, 0, sizeof(v73));
  sub_466FE8((__int64)&v67, a5);
  v70 = sub_465288(a5);
  v71 = a7;
  if ( v70 != 25 )
    v73[0] = a6;
  if ( !(unsigned __int8)sub_46B128((__int64)&v67) )
  {
    sub_463598(a2 + 192, (__int64)"Couldn't retrieve file information.\n");
    v19 = v33;
    v20 = v34;
    v21 = v35;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    v14 = &qword_4B2D48;
    if ( v68 )
      v14 = (__int64 *)v67;
    sub_40A690((int)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n", v14);
  }
  v36 = nullptr;
  v37 = 0;
  v38 = 0;
  ptr = nullptr;
  v40 = 0;
  v41 = 0;
  if ( !sub_46B408((__int64)&qword_522390, (__int64)&ptr, (__int64)&v67, (__int64)&v36) )
  {
LABEL_19:
    if ( ptr )
    {
      v40 = 0;
      j__free(ptr);
    }
    if ( v36 )
    {
      v37 = 0;
      j__free(v36);
    }
    v19 = v33;
    v20 = v34;
    v21 = v35;
    if ( v34 )
    {
      *a4 = v34;
      if ( v20 >= v21 )
      {
LABEL_25:
        v22 = 0;
        *a3 = v19;
        v33 = nullptr;
        v34 = 0;
        v35 = 0;
        goto LABEL_26;
      }
LABEL_35:
      if ( v19 )
        v25 = v20 == 0;
      else
        v25 = 1;
      if ( !v25 )
      {
        v19 = sub_491148(v19, v20);
        if ( !v19 )
          v19 = v33;
      }
      goto LABEL_25;
    }
LABEL_32:
    if ( v21 )
    {
      *((_BYTE *)v19 + v20) = 0;
    }
    else
    {
      v33 = sub_491288((__int64)&v33, v19, 1u, 1u);
      *((_BYTE *)v33 + v34) = 0;
    }
    v19 = v33;
    v24 = v35;
    v20 = ++v34;
    *a4 = v34;
    if ( v20 >= v24 )
      goto LABEL_25;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(a2 + 184) )
  {
    v15 = &qword_4B2D48;
    if ( v40 )
      v15 = (__int64 *)ptr;
    sub_40A690((int)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n", v15);
  }
  v45[0] = 0;
  v46 = 0;
  v47 = 0;
  v56 = -1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v57 = -1;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  sub_4642F0(v45);
  v16 = (char *)&qword_4B2D48;
  if ( v40 )
    v16 = (char *)ptr;
  v17 = sub_49E050(0x28u);
  v17[2] = 1;
  v18 = (__int64)v17;
  *(_QWORD *)v17 = off_51ACE8;
  sub_4672E0((_QWORD *)v17 + 2, v16);
  v45[0] = v18;
  if ( v70 != 11 )
    sub_4628F8();
  v45[3] = (__int64)sub_462668;
  v45[4] = (__int64)sub_462BC0;
  v45[1] = (__int64)sub_462918;
  v45[2] = (__int64)sub_462650;
  v45[5] = (__int64)sub_462680;
  v45[6] = (__int64)sub_462688;
  v45[7] = (__int64)sub_467CA0;
  v45[8] = (__int64)sub_462BD8;
  v45[9] = qword_51AE38;
  v45[10] = qword_51AE40;
  v45[11] = (__int64)sub_467620;
  v45[12] = (__int64)sub_462648;
  if ( !(unsigned __int8)sub_467620(v45) )
  {
    sub_463598(a2 + 192, (__int64)"Couldn't initialize DWARF loading.\n");
LABEL_18:
    sub_464448(v45);
    goto LABEL_19;
  }
  sub_4629C8((__int64)v45);
  v42 = nullptr;
  v43 = 0;
  v44 = 0;
  v26 = v47;
  if ( (int)v47 <= 0 )
  {
    v32 = (**a1)(a1, &v33, a2, v45, &v67, &v42);
  }
  else
  {
    v27 = 0;
    v28 = 0;
    do
    {
      while ( 1 )
      {
        v29 = (const char *)&qword_4B2D48;
        if ( *(_QWORD *)(v46 + v27 + 24) )
          v29 = *(const char **)(v46 + v27 + 16);
        if ( !strncmp(v29, ".debug_", 7u) )
          break;
        ++v28;
        v27 += 120;
        if ( v28 == v26 )
          goto LABEL_52;
      }
      v30 = v42;
      v31 = v43;
      if ( v43 + 1 > v44 )
      {
        v30 = sub_491288((__int64)&v42, v42, v43 + 1, 4u);
        v31 = v43;
        v42 = v30;
      }
      *((_DWORD *)v30 + v31) = v28++;
      v27 += 120;
      ++v43;
    }
    while ( v28 != v26 );
LABEL_52:
    v32 = (**a1)(a1, &v33, a2, v45, &v67, &v42);
  }
  v22 = v32;
  if ( !v32 )
  {
    if ( v42 )
    {
      v43 = 0;
      j__free(v42);
    }
    goto LABEL_18;
  }
  if ( v42 )
  {
    v43 = 0;
    j__free(v42);
  }
  sub_464448(v45);
  if ( ptr )
  {
    v40 = 0;
    j__free(ptr);
  }
  if ( v36 )
  {
    v37 = 0;
    j__free(v36);
  }
LABEL_26:
  if ( v67 )
  {
    v68 = 0;
    j__free(v67);
  }
  if ( v33 )
  {
    v34 = 0;
    j__free(v33);
  }
  return v22;
}
// 46B538: could not find valid save-restore pair for x27
// 46B828: conditional instruction was optimized away because %var_15A0.8==0
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 51ACE8: using guessed type __int64 (__fastcall *off_51ACE8[4])();
// 51AE38: using guessed type __int64 qword_51AE38;
// 51AE40: using guessed type __int64 qword_51AE40;
// 522390: using guessed type __int64 qword_522390;
