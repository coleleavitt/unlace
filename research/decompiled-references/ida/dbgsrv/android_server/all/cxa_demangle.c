/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_demangle
// Address: 0x00000000000D9CDC

//----- (00000000000D9CDC) ----------------------------------------------------
char *_cxa_demangle(const char *lpmangled, char *lpout, size_t *lpoutlen, int *lpstatus)
{
  char *v6; // x20
  size_t v8; // x0
  __int64 v9; // x22
  unsigned __int8 *v10; // x13
  const char *v11; // x14
  _QWORD *v12; // x0
  _QWORD *v13; // x8
  __int64 v14; // x9
  __int64 v15; // x10
  char *v16; // x9
  char *v17; // x0
  const char *v18; // x10
  unsigned __int8 *v19; // x9
  char v20; // w10
  unsigned __int8 *v21; // x12
  unsigned __int8 *v22; // x11
  size_t v23; // x23
  size_t v24; // x8
  unsigned __int64 v25; // x9
  void *v26; // x0
  size_t v27; // x1
  int v28; // w8
  unsigned __int8 *v29; // x11
  int v30; // t1
  char *v31; // x22
  _QWORD *v32; // x8
  __int64 v33; // x9
  _QWORD *v34; // x0
  char *v35; // x22
  __int128 v36; // q0
  void **v37; // x0
  void **v38; // x8
  void *v40; // [xsp+18h] [xbp-1388h]
  const char *v41; // [xsp+20h] [xbp-1380h]
  char *v42; // [xsp+20h] [xbp-1380h]
  unsigned __int8 *v43; // [xsp+28h] [xbp-1378h]
  void *ptr; // [xsp+30h] [xbp-1370h] BYREF
  size_t v45; // [xsp+38h] [xbp-1368h]
  unsigned __int64 v46; // [xsp+40h] [xbp-1360h]
  __int64 v47; // [xsp+48h] [xbp-1358h]
  const char *v48; // [xsp+50h] [xbp-1350h] BYREF
  unsigned __int8 *v49; // [xsp+58h] [xbp-1348h]
  void *v50; // [xsp+60h] [xbp-1340h]
  _BYTE *v51; // [xsp+68h] [xbp-1338h]
  void **v52; // [xsp+70h] [xbp-1330h]
  _BYTE v53[256]; // [xsp+78h] [xbp-1328h] BYREF
  void *v54[3]; // [xsp+178h] [xbp-1228h] BYREF
  _BYTE v55[256]; // [xsp+190h] [xbp-1210h] BYREF
  void *v56[3]; // [xsp+290h] [xbp-1110h] BYREF
  _BYTE v57[64]; // [xsp+2A8h] [xbp-10F8h] BYREF
  void *v58[3]; // [xsp+2E8h] [xbp-10B8h] BYREF
  _BYTE v59[32]; // [xsp+300h] [xbp-10A0h] BYREF
  __int16 v60; // [xsp+320h] [xbp-1080h] BYREF
  char v61; // [xsp+322h] [xbp-107Eh]
  __int64 v62; // [xsp+330h] [xbp-1070h] BYREF
  __int64 v63; // [xsp+338h] [xbp-1068h]
  void *v64; // [xsp+1330h] [xbp-70h]
  __int64 v65; // [xsp+1340h] [xbp-60h]

  v65 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !lpmangled || (v6 = lpout) != nullptr && !lpoutlen )
  {
    v6 = nullptr;
    if ( lpstatus )
      *lpstatus = -3;
    return v6;
  }
  v8 = strlen(lpmangled);
  v48 = lpmangled;
  v49 = (unsigned __int8 *)&lpmangled[v8];
  v52 = v54;
  v56[2] = v58;
  v58[2] = &v60;
  v50 = v53;
  v51 = v53;
  v54[0] = v55;
  v54[1] = v55;
  v54[2] = v56;
  v56[0] = v57;
  v56[1] = v57;
  v58[0] = v59;
  v58[1] = v59;
  v60 = 1;
  v61 = 0;
  v63 = 0;
  v62 = 0;
  v64 = &v62;
  v47 = -1;
  if ( v8 < 2 || *lpmangled != 95 )
    goto LABEL_39;
  if ( lpmangled[1] == 90 )
  {
    v48 = lpmangled + 2;
    v9 = (__int64)sub_DA368((unsigned __int8 **)&v48);
    if ( !v9 )
      goto LABEL_72;
    v11 = v48;
    v10 = v49;
    if ( v49 != (unsigned __int8 *)v48 )
    {
      if ( *v48 != 46 )
        goto LABEL_72;
      v12 = v64;
      v13 = (char *)v64 + 8;
      v14 = *((_QWORD *)v64 + 1);
      if ( (unsigned __int64)(v14 + 48) >= 0xFF0 )
      {
        v40 = v64;
        v41 = v48;
        v43 = v49;
        v12 = (_QWORD *)operator new[](0x1000u);
        v11 = v41;
        v10 = v43;
        v14 = 0;
        v64 = v12;
        *v12 = v40;
        v12[1] = 0;
        v13 = v12 + 1;
      }
      v15 = v14 + 48;
      v16 = (char *)v12 + v14;
      *v13 = v15;
      *((_QWORD *)v16 + 2) = off_162E38;
      v16 += 16;
      *((_DWORD *)v16 + 2) = 16843009;
      *((_QWORD *)v16 + 2) = v9;
      *((_QWORD *)v16 + 3) = v11;
      *((_QWORD *)v16 + 4) = v10;
      v9 = (__int64)v16;
      v48 = (const char *)v49;
      if ( !v16 )
        goto LABEL_72;
LABEL_41:
      if ( v6 )
      {
        v23 = *lpoutlen;
      }
      else
      {
        v23 = 1024;
        v6 = (char *)malloc(0x400u);
        if ( !v6 )
        {
          v28 = -1;
          if ( !lpstatus )
            goto LABEL_74;
          goto LABEL_73;
        }
      }
      ptr = v6;
      v45 = 0;
      v46 = v23;
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 24LL))(v9, &ptr);
      if ( *(_BYTE *)(v9 + 9) != 1 )
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 32LL))(v9, &ptr);
      v24 = v45;
      v25 = v45 + 1;
      if ( v45 + 1 >= v46 )
      {
        if ( 2 * v46 >= v25 )
          v27 = 2 * v46;
        else
          v27 = v45 + 1;
        v46 = v27;
        v26 = realloc(ptr, v27);
        v24 = v45;
        ptr = v26;
        v25 = v45 + 1;
      }
      else
      {
        v26 = ptr;
      }
      v45 = v25;
      *((_BYTE *)v26 + v24) = 0;
      if ( lpoutlen )
        *lpoutlen = v45;
      v6 = (char *)ptr;
      v28 = 0;
      if ( !lpstatus )
        goto LABEL_74;
LABEL_73:
      *lpstatus = v28;
      goto LABEL_74;
    }
LABEL_40:
    if ( !v9 )
      goto LABEL_72;
    goto LABEL_41;
  }
  if ( v8 < 4 || lpmangled[1] != 95 || lpmangled[2] != 95 || lpmangled[3] != 90 )
  {
LABEL_39:
    v9 = sub_DB210((__int64)&v48);
    if ( v49 != (unsigned __int8 *)v48 )
      goto LABEL_72;
    goto LABEL_40;
  }
  v48 = lpmangled + 4;
  v17 = sub_DA368((unsigned __int8 **)&v48);
  if ( !v17 )
    goto LABEL_72;
  v18 = v48;
  if ( (unsigned __int64)(v49 - (unsigned __int8 *)v48) < 0xD )
    goto LABEL_72;
  if ( *v48 != 95 )
    goto LABEL_72;
  if ( v48[1] != 98 )
    goto LABEL_72;
  if ( v48[2] != 108 )
    goto LABEL_72;
  v42 = v17;
  if ( v48[3] != 111 )
    goto LABEL_72;
  if ( v48[4] != 99
    || v48[5] != 107
    || v48[6] != 95
    || v48[7] != 105
    || v48[8] != 110
    || v48[9] != 118
    || v48[10] != 111
    || v48[11] != 107
    || v48[12] != 101 )
  {
LABEL_90:
    v28 = -2;
    if ( !lpstatus )
      goto LABEL_74;
    goto LABEL_73;
  }
  v19 = (unsigned __int8 *)(v48 + 13);
  v48 += 13;
  if ( v18 + 13 == (const char *)v49 )
    goto LABEL_69;
  if ( *v19 == 95 )
  {
    v19 = (unsigned __int8 *)(v18 + 14);
    v20 = 1;
    v48 = (const char *)v19;
    if ( v49 == v19 )
    {
LABEL_38:
      v21 = nullptr;
      v19 = nullptr;
      v22 = v49;
      goto LABEL_67;
    }
  }
  else
  {
    v20 = 0;
    if ( v49 == v19 )
      goto LABEL_38;
  }
  if ( (unsigned int)*v19 - 48 > 9 )
  {
    v21 = nullptr;
    v22 = v19;
    v19 = nullptr;
  }
  else
  {
    v29 = v19 + 1;
    while ( 1 )
    {
      v48 = (const char *)v29;
      if ( v49 == v29 )
        break;
      v30 = *v29++;
      if ( (unsigned int)(v30 - 48) >= 0xA )
      {
        v22 = v29 - 1;
        v21 = v22;
        goto LABEL_67;
      }
    }
    v22 = v49;
    v21 = v49;
  }
LABEL_67:
  if ( ((unsigned __int8)v20 & (v19 == v21)) != 0 || v49 != v22 )
    goto LABEL_90;
LABEL_69:
  v31 = (char *)v64;
  v32 = (char *)v64 + 8;
  v33 = *((_QWORD *)v64 + 1);
  if ( (unsigned __int64)(v33 + 48) >= 0xFF0 )
  {
    v34 = (_QWORD *)operator new[](0x1000u);
    v33 = 0;
    *v34 = v31;
    v34[1] = 0;
    v32 = v34 + 1;
    v31 = (char *)v34;
    v64 = v34;
  }
  v35 = &v31[v33];
  *v32 = v33 + 48;
  *(_QWORD *)&v36 = "invocation function for block in ";
  *((_QWORD *)v35 + 2) = off_161748;
  v9 = (__int64)(v35 + 16);
  *((_QWORD *)&v36 + 1) = "";
  *(_DWORD *)(v9 + 8) = 16843029;
  *(_OWORD *)(v9 + 16) = v36;
  *(_QWORD *)(v9 + 32) = v42;
  if ( v9 )
    goto LABEL_41;
LABEL_72:
  v28 = -2;
  if ( lpstatus )
    goto LABEL_73;
LABEL_74:
  v37 = (void **)v64;
  if ( v28 )
    v6 = nullptr;
  if ( v64 )
  {
    do
    {
      while ( 1 )
      {
        v38 = (void **)*v37;
        v64 = *v37;
        if ( &v62 == (__int64 *)v37 )
          break;
        operator delete[](v37);
        v37 = (void **)v64;
        if ( !v64 )
          goto LABEL_81;
      }
      v37 = v38;
    }
    while ( v38 );
  }
LABEL_81:
  v62 = 0;
  v63 = 0;
  v64 = &v62;
  if ( v58[0] != v59 )
    free(v58[0]);
  if ( v56[0] != v57 )
    free(v56[0]);
  if ( v54[0] != v55 )
    free(v54[0]);
  if ( v50 != v53 )
    free(v50);
  return v6;
}
// D9E98: conditional instruction was optimized away because w8.4==5F
// 161748: using guessed type __int64 (__fastcall *off_161748[7])();
// 162E38: using guessed type __int64 (__fastcall *off_162E38[7])();
