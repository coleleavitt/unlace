/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417098
// Address: 0x0000000000417098

//----- (0000000000417098) ----------------------------------------------------
__int64 __fastcall sub_417098(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x27
  int v6; // w25
  __int64 v7; // x23
  signed int v8; // w19
  unsigned int v9; // w24
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x3
  __int64 v12; // x3
  __int64 v14; // x0
  __int64 v15; // x26
  __int64 v16; // x0
  int v17; // w3
  __int64 v18; // x2
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x5
  int v22; // w2
  int v23; // w27
  char *v24; // x0
  double v25; // d0
  bool v26; // w0
  int v27; // w4
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x27
  __int64 v31; // x0
  const char *v32; // x2
  const char *v33; // x3
  double v34; // d0
  __int64 v35; // x5
  unsigned __int64 v36; // x26
  __int64 v37; // x0
  bool v38; // zf
  __int64 v39; // x0
  bool v40; // zf
  __int64 v41; // x0
  bool v42; // zf
  _QWORD *v43; // x0
  _QWORD *v44; // x1
  __int64 v45; // x2
  _QWORD *v46; // x0
  _QWORD *v47; // x1
  _QWORD *v48; // x0
  _QWORD *v49; // x1
  _QWORD *v50; // x3
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x0
  __int64 v55; // x4
  __int64 v56; // x24
  unsigned __int64 v57; // x1
  __int64 v58; // x24
  __int64 v59; // x0
  __int64 v60; // x5
  __int64 v61; // x1
  __int64 v62; // [xsp+40h] [xbp-170h]
  int v63; // [xsp+60h] [xbp-150h]
  __int64 v64; // [xsp+60h] [xbp-150h]
  __int64 v65; // [xsp+60h] [xbp-150h]
  char v66; // [xsp+77h] [xbp-139h] BYREF
  __int64 v67; // [xsp+78h] [xbp-138h] BYREF
  int v68; // [xsp+80h] [xbp-130h]
  _QWORD v69[2]; // [xsp+88h] [xbp-128h] BYREF
  _BYTE v70[16]; // [xsp+98h] [xbp-118h] BYREF
  __int64 v71; // [xsp+A8h] [xbp-108h]
  __int64 v72; // [xsp+198h] [xbp-18h]

  v66 = 0;
  v67 = 0;
  v68 = a3;
  v6 = (unsigned __int8)sub_411208(a1, (int *)&v67, &v66);
  if ( !v6 )
    return 0;
  v7 = a1 + 1920;
  v8 = v67;
  LOWORD(v9) = WORD2(v67);
  v10 = *(_QWORD *)(a1 + 1928);
  if ( !v10 )
    goto LABEL_8;
  v11 = a1 + 1920;
  do
  {
    while ( (int)v67 <= *(_DWORD *)(v10 + 32) )
    {
      v11 = v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
        goto LABEL_6;
    }
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v10 );
LABEL_6:
  if ( v7 == v11 || (int)v67 < *(_DWORD *)(v11 + 32) || v11 == -40 )
  {
LABEL_8:
    sub_45CDF8(a1, (__int64)"EVENT FOR UNKNOWN THREAD %d, IGNORED...\n", v67);
    v12 = BYTE1(v9);
    if ( (unsigned __int8)v9 != 127 )
      v12 = 0;
    ptrace(PTRACE_CONT, (unsigned int)v8, 0, v12);
    return 0;
  }
  if ( *(_DWORD *)(v11 + 60) != 1 || *(_BYTE *)(a1 + 2053) )
    goto LABEL_19;
  v62 = v3;
  if ( (v67 & 0x7F00000000LL) == 0 || ((BYTE4(v67) & 0x7F) + 1) << 24 >> 25 > 0 )
    goto LABEL_18;
  if ( !under_debugger )
    sub_492270(30057);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        __break(0x3E8u);
LABEL_18:
        v3 = v62;
LABEL_19:
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)(v11 + 60) = 1;
        sub_411A98(a1, 0, 1u);
        *(_BYTE *)(a1 + 2116) = 0;
        if ( v66 )
          goto LABEL_28;
        v14 = *(_QWORD *)(a1 + 1928);
        if ( !v14 )
          goto LABEL_27;
        v15 = a1 + 1920;
        do
        {
          if ( v8 > *(_DWORD *)(v14 + 32) )
          {
            v14 = *(_QWORD *)(v14 + 24);
          }
          else
          {
            v15 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
        }
        while ( v14 );
        if ( v7 == v15 || v8 < *(_DWORD *)(v15 + 32) || (v21 = v15 + 40, v15 == -40) )
        {
LABEL_27:
          sub_45CDF8(a1, (__int64)"thread %d disappeared after freezing?!...\n", v8);
          goto LABEL_28;
        }
        v62 = v3;
        v22 = *(_DWORD *)(a1 + 2044);
        *(_DWORD *)a2 = v22;
        *(_DWORD *)(a2 + 4) = v8;
        if ( !*(_BYTE *)(a1 + 2053) )
          break;
        *(_QWORD *)(a2 + 8) = -1;
        *(_BYTE *)(a2 + 16) = 0;
        if ( (unsigned __int8)v9 == 127 )
          goto LABEL_67;
        v23 = v9 & 0x7F;
        if ( (v23 + 1) << 24 >> 25 <= 0 )
          goto LABEL_57;
LABEL_51:
        v63 = v22;
        v24 = strsignal(v23);
        sub_45CDF8(a1, (__int64)"SIGNALED pid=%d tid=%d signal='%s'(%d) pc=%a\n", v63, v8, v24, v23, v25);
LABEL_52:
        if ( *(_QWORD *)(a1 + 1952) > 1u && *(_DWORD *)(v15 + 40) != *(_DWORD *)(a1 + 2044) )
        {
          sub_482ED0(a2);
          sub_4118D0(a1, *(_DWORD *)(a2 + 4), 3);
          goto LABEL_28;
        }
        sub_482FB0(a2, 2u);
        if ( (((*(_DWORD *)(a2 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
        {
          *(_DWORD *)(a2 + 24) = v23;
          *(_BYTE *)(a1 + 2053) = 1;
          goto LABEL_28;
        }
        if ( !under_debugger )
          sub_492270(3296);
      }
      v23 = v9 & 0x7F;
      if ( (v23 + 1) << 24 >> 25 <= 0 )
      {
        v69[0] = v70;
        v69[1] = 272;
        v26 = sub_408438(v8);
        v27 = (unsigned __int8)v9;
        v21 = v15 + 40;
        if ( v26 )
        {
          v29 = ptrace(PTRACE_GETREGSET, (unsigned int)v8, 1, v69);
          v27 = (unsigned __int8)v9;
          v21 = v15 + 40;
          if ( v29 )
            v28 = -1;
          else
            v28 = v72;
        }
        else
        {
          v28 = -1;
        }
        *(_QWORD *)(a2 + 8) = v28;
        *(_BYTE *)(a2 + 16) = 0;
        if ( v27 != 127 )
        {
LABEL_57:
          v23 = BYTE1(v9);
          goto LABEL_52;
        }
      }
      else
      {
        ptrace(PTRACE_GETSIGINFO, (unsigned int)v8, 0, v70);
        *(_BYTE *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 8) = v71;
        v21 = v15 + 40;
        if ( (unsigned __int8)v9 != 127 )
        {
          v22 = *(_DWORD *)a2;
          v8 = *(_DWORD *)(a2 + 4);
          goto LABEL_51;
        }
      }
LABEL_67:
      v64 = v21;
      sub_482FB0(a2, 7u);
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
      {
        v9 = BYTE1(v9);
        *(_DWORD *)(a2 + 24) = v9;
        *(_BYTE *)(a2 + 28) = 1;
        *(_QWORD *)(a2 + 32) = -1;
        if ( v9 == 19 && *(_BYTE *)(v15 + 64) )
        {
          *(_BYTE *)(v15 + 64) = 0;
          goto LABEL_133;
        }
        v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v9);
        v31 = a2 + 40;
        if ( v30 )
        {
          if ( *(_QWORD *)(v30 + 16) )
            v32 = *(const char **)(v30 + 8);
          else
            v32 = (const char *)&qword_4B2D48;
          if ( *(_QWORD *)(v30 + 40) )
            v33 = *(const char **)(v30 + 32);
          else
            v33 = (const char *)&qword_4B2D48;
          sub_40CD68(v31, "got %s signal (%s)", v32, v33);
          v6 = (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, a2, v30);
          v35 = v64;
          if ( !v6 && (*(_DWORD *)(v30 + 4) & 2LL) != 0 )
            v9 = 0;
        }
        else
        {
          sub_40CD68(v31, "got unknown signal #%d", v9);
          v35 = v64;
        }
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
          break;
      }
LABEL_68:
      if ( !under_debugger )
        sub_492270(3299);
    }
    if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 4) > 1 )
      goto LABEL_122;
    v36 = *(_QWORD *)(a2 + 8);
    if ( v36 == -1 )
      goto LABEL_122;
    v37 = *(_QWORD *)(a1 + 1696);
    if ( v37 )
      v38 = v37 == v36;
    else
      v38 = 0;
    if ( v38 )
    {
      if ( sub_40BA18(a1, v8) )
      {
        if ( !sub_416EF8((_QWORD *)a1) )
          goto LABEL_133;
LABEL_149:
        v9 = 0;
        sub_482FB0(a2, 0);
        goto LABEL_122;
      }
      sub_40A690((int)"%a: could not return from the shlib breakpoint!\n", v36);
      return 1;
    }
    v39 = *(_QWORD *)(a1 + 1664);
    if ( v39 )
      v40 = v39 == v36;
    else
      v40 = 0;
    if ( v40 || ((v41 = *(_QWORD *)(a1 + 1680)) != 0 ? (v42 = v41 == v36) : (v42 = 0), v42) )
    {
      v53 = a1 + 168;
      v54 = (__int64)(*(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 176)) >> 3;
      v55 = *(_QWORD *)(a1 + 1656);
      v56 = ((__int64)(*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 160)) >> 3) - 1;
      v57 = 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)(a1 + 152) - *(_QWORD *)(a1 + 136)) >> 3);
      *(_DWORD *)(a1 + 2048) = v8;
      v58 = v57 - 0x71C71C71C71C71C7LL * v54 + 7 * v56;
      if ( v55 )
      {
        sub_4136B0(a1);
        v53 = a1 + 168;
      }
      v65 = v53;
      if ( sub_40BA18(a1, v8) )
      {
        if ( v58 == 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)(a1 + 152) - *(_QWORD *)(a1 + 136)) >> 3)
                  - 0x71C71C71C71C71C7LL * ((__int64)(*(_QWORD *)(a1 + 168) - *(_QWORD *)(v65 + 8)) >> 3)
                  + 7 * (((__int64)(*(_QWORD *)(v65 + 24) - *(_QWORD *)(a1 + 160)) >> 3) - 1) )
          goto LABEL_133;
        goto LABEL_149;
      }
      sub_40A690((int)"%a: could not return from the thread breakpoint!\n", v36);
      return 1;
    }
    if ( *(_QWORD *)(a1 + 2128) > 1u )
    {
      v43 = *(_QWORD **)(a1 + 528);
      v44 = (_QWORD *)(a1 + 520);
      if ( !v43 )
        goto LABEL_117;
LABEL_99:
      v45 = (__int64)v44;
      goto LABEL_100;
    }
    sub_416EF8((_QWORD *)a1);
    v59 = *(_QWORD *)(a1 + 1928);
    v60 = a1 + 1920;
    while ( v59 )
    {
      if ( v8 > *(_DWORD *)(v59 + 32) )
      {
        v61 = *(_QWORD *)(v59 + 24);
        v59 = v60;
      }
      else
      {
        v61 = *(_QWORD *)(v59 + 16);
      }
      v60 = v59;
      v59 = v61;
    }
    if ( v7 != v60 && v8 >= *(_DWORD *)(v60 + 32) )
    {
      v43 = *(_QWORD **)(a1 + 528);
      v35 = v60 + 40;
      v44 = (_QWORD *)(a1 + 520);
      if ( !v43 )
        goto LABEL_116;
      goto LABEL_99;
    }
    v43 = *(_QWORD **)(a1 + 528);
    v44 = (_QWORD *)(a1 + 520);
    if ( !v43 )
      goto LABEL_118;
    v45 = a1 + 520;
    v35 = 0;
    do
    {
LABEL_100:
      v11 = v43[4];
      if ( v11 < v36 )
      {
        v43 = (_QWORD *)v43[3];
      }
      else
      {
        v44 = v43;
        v43 = (_QWORD *)v43[2];
      }
    }
    while ( v43 );
    if ( v44 == (_QWORD *)v45 || v44[4] > v36 )
    {
LABEL_116:
      if ( v35 )
      {
LABEL_117:
        if ( *(_BYTE *)(v35 + 16) )
        {
          v9 = 0;
          sub_482FB0(a2, 6u);
          goto LABEL_122;
        }
      }
LABEL_118:
      if ( v30 && (*(_DWORD *)(v30 + 4) & 2) != 0 )
      {
        v9 = 0;
        goto LABEL_122;
      }
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
      {
        v9 = *(_DWORD *)(a2 + 24);
        goto LABEL_122;
      }
      goto LABEL_68;
    }
    v46 = *(_QWORD **)(a1 + 432);
    v47 = &v46[*(_QWORD *)(a1 + 440)];
    if ( v46 != v47 )
    {
      if ( v36 == *v46 )
        goto LABEL_116;
      while ( v47 != ++v46 )
      {
        if ( *v46 == v36 )
          goto LABEL_116;
      }
    }
    v48 = *(_QWORD **)(a1 + 2072);
    v49 = (_QWORD *)(a1 + 2064);
    while ( v48 )
    {
      if ( v48[4] < v36 )
      {
        v50 = (_QWORD *)v48[3];
        v48 = v49;
      }
      else
      {
        v50 = (_QWORD *)v48[2];
      }
      v49 = v48;
      v48 = v50;
    }
    if ( (_QWORD *)(a1 + 2064) != v49 && v49[4] <= v36 )
      goto LABEL_133;
    sub_482FB0(a2, 5u);
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
      break;
    if ( !under_debugger )
      sub_492270(3298);
  }
  v9 = 0;
  *(_QWORD *)(a2 + 8) = v36;
  *(_QWORD *)(a2 + 24) = -1;
  *(_QWORD *)(a2 + 32) = -1;
LABEL_122:
  v16 = *(_QWORD *)(a1 + 1928);
  if ( !v16 )
    goto LABEL_36;
  v51 = a1 + 1920;
  v52 = *(_QWORD *)(a1 + 1928);
  do
  {
    if ( v8 > *(_DWORD *)(v52 + 32) )
    {
      v52 = *(_QWORD *)(v52 + 24);
    }
    else
    {
      v51 = v52;
      v52 = *(_QWORD *)(v52 + 16);
    }
  }
  while ( v52 );
  if ( v7 == v51 )
  {
    v17 = *(_DWORD *)(a2 + 4);
    goto LABEL_29;
  }
  if ( v8 < *(_DWORD *)(v51 + 32) || (v20 = v51 + 40) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 1928);
    v17 = *(_DWORD *)(a2 + 4);
    goto LABEL_29;
  }
  *(_DWORD *)(v20 + 12) = v9;
  if ( !*(_BYTE *)(a1 + 2117) && sub_45E3A0(a1, a2, 0, v34) )
    return 0;
  if ( v6 || (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
  {
LABEL_28:
    v16 = *(_QWORD *)(a1 + 1928);
    v17 = *(_DWORD *)(a2 + 4);
    if ( v16 )
    {
LABEL_29:
      v18 = a1 + 1920;
      do
      {
        while ( *(_DWORD *)(v16 + 32) >= v17 )
        {
          v18 = v16;
          v16 = *(_QWORD *)(v16 + 16);
          if ( !v16 )
            goto LABEL_32;
        }
        v16 = *(_QWORD *)(v16 + 24);
      }
      while ( v16 );
LABEL_32:
      if ( v7 != v18 && *(_DWORD *)(v18 + 32) <= v17 )
      {
        v19 = v18 + 40;
        if ( v19 )
          *(_BYTE *)(v19 + 16) = 0;
      }
    }
LABEL_36:
    sub_483128(a1 + 200, a2);
    return 1;
  }
  sub_45E698(a1, a2, v30);
LABEL_133:
  if ( *(_BYTE *)(a1 + 2117) || *(_BYTE *)(a1 + 2118) )
  {
    sub_482FB0(a2, 0xDu);
    return 1;
  }
  else
  {
    sub_4133A8(a1, 0);
    return 0;
  }
}
// 417098: could not find valid save-restore pair for x24
// 417098: could not find valid save-restore pair for x27
// 4171AC: variable 'v3' is possibly undefined
// 4171F0: variable 'v11' is possibly undefined
// 417308: variable 'v34' is possibly undefined
// 4173D0: variable 'v25' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
