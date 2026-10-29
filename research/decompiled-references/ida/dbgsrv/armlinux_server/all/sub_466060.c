/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466060
// Address: 0x0000000000466060

//----- (0000000000466060) ----------------------------------------------------
__int64 __fastcall sub_466060(__int64 a1, __int64 *a2, char **a3, int a4)
{
  __int64 v4; // x21
  _BYTE *v5; // x22
  __int64 v6; // x24
  __int64 v7; // x25
  __int64 v8; // x26
  char **v9; // x27
  __int64 v10; // x28
  signed int v12; // w24
  char *v13; // x21
  __int64 v14; // x2
  unsigned __int64 v15; // x19
  _BYTE *v16; // x0
  size_t v17; // x26
  unsigned int v18; // w2
  _BYTE *v19; // x19
  _BYTE *v20; // x0
  size_t v21; // x20
  char *v22; // x19
  int v23; // w0
  signed int v24; // w2
  char *v25; // x20
  _BYTE *v26; // x0
  size_t v27; // x26
  unsigned __int64 v28; // x21
  size_t v29; // x28
  unsigned __int64 v30; // x26
  bool v31; // cc
  _BYTE *v33; // x0
  void *v34; // x0
  unsigned int v35; // w19
  unsigned __int64 v36; // x28
  size_t v37; // x3
  char *v38; // x0
  size_t v39; // x19
  unsigned __int64 v40; // x26
  size_t v41; // x20
  unsigned __int64 v42; // x28
  size_t v43; // x3
  char *v44; // x0
  size_t v45; // x3
  char *v46; // x0
  size_t v47; // x3
  char *v48; // x0
  __int64 result; // x0
  __int64 v50; // [xsp+10h] [xbp-F0h]
  _BYTE *v51; // [xsp+18h] [xbp-E8h]
  __int64 v52; // [xsp+28h] [xbp-D8h]
  __int64 v53; // [xsp+30h] [xbp-D0h]
  __int64 v54; // [xsp+38h] [xbp-C8h]
  char **v55; // [xsp+40h] [xbp-C0h]
  __int64 v56; // [xsp+48h] [xbp-B8h]
  __int64 v57; // [xsp+68h] [xbp-98h]
  int v58; // [xsp+74h] [xbp-8Ch]
  void *src; // [xsp+78h] [xbp-88h]
  char *v60; // [xsp+80h] [xbp-80h]
  _BYTE *v61; // [xsp+88h] [xbp-78h]
  void **v62; // [xsp+90h] [xbp-70h]
  __int64 v63; // [xsp+98h] [xbp-68h]
  void *v64; // [xsp+A0h] [xbp-60h] BYREF
  size_t v65; // [xsp+A8h] [xbp-58h]
  unsigned __int64 v66; // [xsp+B0h] [xbp-50h]
  void *ptr; // [xsp+B8h] [xbp-48h] BYREF
  __int64 v68; // [xsp+C0h] [xbp-40h]
  char v69; // [xsp+D0h] [xbp-30h] BYREF
  char v70; // [xsp+D5h] [xbp-2Bh] BYREF
  _BYTE v71[5]; // [xsp+D8h] [xbp-28h] BYREF
  _BYTE v72[3]; // [xsp+DDh] [xbp-23h] BYREF
  _BYTE v73[5]; // [xsp+E0h] [xbp-20h] BYREF
  _BYTE v74[3]; // [xsp+E5h] [xbp-1Bh] BYREF
  _BYTE v75[10]; // [xsp+E8h] [xbp-18h] BYREF
  _BYTE v76[14]; // [xsp+F2h] [xbp-Eh] BYREF

  v63 = a1;
  v58 = a4;
  if ( !a4 || (v64 = nullptr, v65 = 0, v66 = 0, a4 <= 0) )
  {
    v35 = 0;
    goto LABEL_73;
  }
  v50 = v4;
  v52 = v6;
  v5 = v75;
  v54 = v8;
  src = &v69;
  v9 = a3;
  v56 = v10;
  v60 = &v70;
  v61 = v72;
  while ( 2 )
  {
    v12 = 0;
    v13 = &byte_4B31F0;
    v57 = 0;
    v62 = &v64;
    v65 = 0;
    do
    {
      v14 = *a2 - v57;
      v15 = (unsigned __int64)v14 >> 63;
      if ( v14 < 0 )
        v14 = v57 - *a2;
      v16 = sub_48E4D8(v75, (unsigned __int64)v76, v14 + 1);
      v17 = v16 - v75;
      if ( v16 != v75 )
      {
        v41 = v65;
        v42 = v17 + v65;
        if ( v65 <= v17 + v65 )
        {
          if ( v65 >= v17 + v65 )
          {
LABEL_54:
            memcpy((char *)v64 + v41, v75, v17);
            goto LABEL_8;
          }
          v45 = v65;
          v46 = (char *)v64;
          if ( v42 <= v66 )
          {
LABEL_60:
            memset(&v46[v45], 0, v42 - v45);
            v65 = v42;
            goto LABEL_54;
          }
        }
        else
        {
          if ( v65 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v65 & 0x8000000000000000LL) != 0 )
              v65 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_54;
          }
          v42 = 0x7FFFFFFFFFFFFFFFLL;
          v45 = v65;
          v46 = (char *)v64;
          if ( v66 >= 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_60;
        }
        v46 = (char *)sub_491288((__int64)v62, v46, v42, 1u);
        v45 = v65;
        v64 = v46;
        goto LABEL_60;
      }
LABEL_8:
      v18 = (unsigned __int8)v15;
      v19 = src;
      v20 = sub_48E2D8(src, (unsigned __int64)v60, v18);
      v21 = v20 - v19;
      if ( v20 == v19 )
      {
        v22 = *v9;
        v57 = *a2;
        v23 = (unsigned __int8)**v9;
        if ( !**v9 )
          goto LABEL_49;
        goto LABEL_10;
      }
      v39 = v65;
      v40 = v21 + v65;
      if ( v65 <= v21 + v65 )
      {
        if ( v65 >= v21 + v65 )
          goto LABEL_48;
        v47 = v65;
        v48 = (char *)v64;
        if ( v40 <= v66 )
          goto LABEL_63;
        goto LABEL_69;
      }
      if ( v65 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v40 = 0x7FFFFFFFFFFFFFFFLL;
        v47 = v65;
        v48 = (char *)v64;
        if ( v66 >= 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_63:
          memset(&v48[v47], 0, v40 - v47);
          v65 = v40;
          goto LABEL_48;
        }
LABEL_69:
        v48 = (char *)sub_491288((__int64)v62, v48, v40, 1u);
        v47 = v65;
        v64 = v48;
        goto LABEL_63;
      }
      if ( (v65 & 0x8000000000000000LL) != 0 )
        v65 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_48:
      memcpy((char *)v64 + v39, src, v21);
      v22 = *v9;
      v57 = *a2;
      v23 = (unsigned __int8)**v9;
      if ( !**v9 )
      {
LABEL_49:
        v25 = v22;
        v24 = 0;
        goto LABEL_14;
      }
LABEL_10:
      if ( (unsigned __int8)*v13 != v23 )
        goto LABEL_49;
      v24 = 0;
      do
        v25 = &v22[++v24];
      while ( *v25 && v13[v24] == v22[v24] );
LABEL_14:
      v26 = sub_48E2D8(v71, (unsigned __int64)v61, v24);
      v27 = v26 - v71;
      v28 = v65;
      if ( v26 == v71 )
      {
        if ( v25 )
          goto LABEL_16;
        goto LABEL_39;
      }
      v36 = v27 + v65;
      if ( v27 + v65 >= v65 )
      {
        if ( v27 + v65 <= v65 )
          goto LABEL_38;
        v43 = v65;
        v44 = (char *)v64;
        if ( v36 <= v66 )
          goto LABEL_57;
        goto LABEL_67;
      }
      if ( v65 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v36 = 0x7FFFFFFFFFFFFFFFLL;
        v43 = v65;
        v44 = (char *)v64;
        if ( v66 >= 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_57:
          memset(&v44[v43], 0, v36 - v43);
          v65 = v36;
          goto LABEL_38;
        }
LABEL_67:
        v44 = (char *)sub_491288((__int64)v62, v44, v36, 1u);
        v43 = v65;
        v64 = v44;
        goto LABEL_57;
      }
      if ( (v65 & 0x8000000000000000LL) != 0 )
        v65 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_38:
      memcpy((char *)v64 + v28, v71, v27);
      v28 = v65;
      if ( v25 )
      {
LABEL_16:
        v29 = strlen(v25) + 1;
        v30 = v29 + v28;
        v31 = v29 + v28 > v28;
        if ( v29 + v28 >= v28 )
          goto LABEL_40;
        goto LABEL_17;
      }
LABEL_39:
      v29 = 1;
      v30 = v28 + 1;
      v31 = v28 + 1 >= v28;
      v25 = &byte_4B31F0;
      if ( v28 + 1 >= v28 )
      {
LABEL_40:
        if ( !v31 )
          goto LABEL_20;
        v37 = v28;
        v38 = (char *)v64;
        if ( v30 > v66 )
          goto LABEL_65;
        goto LABEL_43;
      }
LABEL_17:
      if ( v28 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v30 = 0x7FFFFFFFFFFFFFFFLL;
        v37 = v28;
        v38 = (char *)v64;
        if ( v66 < 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_65:
          v38 = (char *)sub_491288((__int64)v62, v38, v30, 1u);
          v37 = v65;
          v64 = v38;
        }
LABEL_43:
        memset(&v38[v37], 0, v30 - v37);
        v65 = v30;
        goto LABEL_20;
      }
      if ( (v28 & 0x8000000000000000LL) != 0 )
        v65 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_20:
      ++v12;
      memcpy((char *)v64 + v28, v25, v29);
      ++a2;
      ++v9;
      v13 = v22;
    }
    while ( v65 <= 0x100000 && v12 < v58 );
    v58 -= v12;
    sub_479010(50, (__int64 *)&ptr);
    v33 = sub_48E2D8(v73, (unsigned __int64)v74, v12);
    if ( v33 != v73 )
      sub_4630F0((__int64)&ptr, v73, v33 - v73);
    if ( v65 )
      sub_4630F0((__int64)&ptr, v64, v65);
    if ( v12 == (unsigned int)sub_46F3C8(v63 + 192, (__int64 *)&ptr, -1, 0) )
    {
      if ( ptr )
      {
        v68 = 0;
        j__free(ptr);
      }
      if ( v58 <= 0 )
      {
        v34 = v64;
        v35 = 0;
        if ( v64 )
          goto LABEL_33;
LABEL_78:
        v4 = v50;
        v6 = v52;
        v8 = v54;
        v10 = v56;
        goto LABEL_73;
      }
      continue;
    }
    break;
  }
  if ( ptr )
  {
    v68 = 0;
    j__free(ptr);
  }
  v34 = v64;
  v35 = 1;
  if ( !v64 )
    goto LABEL_78;
LABEL_33:
  v65 = 0;
  j__free(v34);
  v4 = v50;
  v6 = v52;
  v8 = v54;
  v10 = v56;
LABEL_73:
  result = v35;
  if ( *(_QWORD *)&v76[6] != _stack_chk_guard )
  {
    v50 = v4;
    v51 = v5;
    v52 = v6;
    v53 = v7;
    v54 = v8;
    v55 = v9;
    v56 = v10;
  }
  return result;
}
// 466060: could not find valid save-restore pair for x21
// 466060: could not find valid save-restore pair for x24
// 466060: could not find valid save-restore pair for x26
// 466060: could not find valid save-restore pair for x28
// 4660A4: variable 'v4' is possibly undefined
// 4660A8: variable 'v6' is possibly undefined
// 4660B0: variable 'v8' is possibly undefined
// 4660C4: variable 'v10' is possibly undefined
// 4665C4: variable 'v5' is possibly undefined
// 4665C8: variable 'v7' is possibly undefined
// 4665CC: variable 'v9' is possibly undefined
// 4B31F0: using guessed type char byte_4B31F0;
