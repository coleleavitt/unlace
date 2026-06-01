/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C368
// Address: 0x000000000045C368

//----- (000000000045C368) ----------------------------------------------------
__int64 __fastcall sub_45C368(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 *a4,
        _BYTE *a5,
        char a6,
        char *s,
        unsigned int a8,
        _QWORD *a9)
{
  _BYTE *v9; // x20
  char *v15; // x24
  int v16; // w21
  size_t v17; // x0
  size_t v18; // x4
  unsigned int v19; // w24
  bool v20; // zf
  int v21; // w0
  int v22; // w1
  __int64 v23; // x19
  __int64 v24; // x21
  _BYTE *v25; // x28
  unsigned __int64 v26; // x25
  __int64 v27; // x20
  size_t v28; // x20
  size_t v29; // x26
  unsigned __int64 v30; // x25
  unsigned __int64 v31; // x20
  unsigned __int64 v32; // x25
  void *v33; // x0
  const char *v35; // x2
  unsigned __int64 v36; // x5
  void *v37; // x0
  __int64 v38; // x1
  const char *v39; // x2
  int *v40; // x0
  const char *v41; // x0
  __int64 v43; // [xsp+68h] [xbp-1228h]
  unsigned __int64 v44; // [xsp+68h] [xbp-1228h]
  size_t v45; // [xsp+68h] [xbp-1228h]
  unsigned __int64 v46; // [xsp+70h] [xbp-1220h]
  size_t v47; // [xsp+78h] [xbp-1218h]
  void *v48; // [xsp+80h] [xbp-1210h] BYREF
  unsigned __int64 v49; // [xsp+88h] [xbp-1208h]
  unsigned __int64 v50; // [xsp+90h] [xbp-1200h]
  void *ptr; // [xsp+98h] [xbp-11F8h] BYREF
  __int64 v52; // [xsp+A0h] [xbp-11F0h]
  __int64 v53; // [xsp+A8h] [xbp-11E8h]
  __int64 v54; // [xsp+B0h] [xbp-11E0h] BYREF
  __int64 v55; // [xsp+B8h] [xbp-11D8h]
  const char *v56; // [xsp+C0h] [xbp-11D0h]
  __int64 v57; // [xsp+C8h] [xbp-11C8h]
  __int64 v58; // [xsp+D0h] [xbp-11C0h]
  __int64 v59; // [xsp+D8h] [xbp-11B8h]
  __int64 v60; // [xsp+E0h] [xbp-11B0h]
  _BYTE *v61; // [xsp+E8h] [xbp-11A8h]
  _BYTE *v62; // [xsp+F0h] [xbp-11A0h]
  __int64 v63; // [xsp+F8h] [xbp-1198h]
  struct utsname v64; // [xsp+100h] [xbp-1190h] BYREF
  char v65[4096]; // [xsp+288h] [xbp-1008h] BYREF

  v9 = a5;
  v15 = s;
  v16 = a6 & 1;
  if ( !*a5 || sub_48F628((unsigned __int8 *)s) )
  {
    if ( !v16 && *v15 && !(unsigned __int8)sub_490268(v15) )
    {
LABEL_55:
      v35 = v15;
      v19 = -3;
      sub_40AB98(a1, (__int64)"AUTOHIDE NONE\nInput file is missing: %s", v35);
      return v19;
    }
    if ( !v15 )
      goto LABEL_7;
    goto LABEL_5;
  }
  sub_48F988((unsigned __int64)v65, 4096, (unsigned __int8 *)v15);
  if ( !v16 )
  {
    v15 = v65;
    if ( v65[0] && !(unsigned __int8)sub_490268(v65) )
      goto LABEL_55;
LABEL_5:
    v43 = a1 + 584;
    goto LABEL_6;
  }
  v15 = v65;
  v43 = a1 + 584;
LABEL_6:
  v17 = strlen(v15);
  v18 = v17;
  if ( !v17 )
  {
LABEL_7:
    *(_QWORD *)(a1 + 592) = 0;
    goto LABEL_8;
  }
  v36 = v17 + 1;
  v37 = *(void **)(a1 + 584);
  if ( v36 > *(_QWORD *)(v43 + 16) )
  {
    v46 = v36;
    v47 = v18;
    v37 = sub_491288(v43, *(void **)(a1 + 584), v36, 1u);
    *(_QWORD *)(a1 + 584) = v37;
    v36 = v46;
    v18 = v47;
  }
  v38 = v43;
  v45 = v18;
  *(_QWORD *)(v38 + 8) = v36;
  memmove(v37, v15, v18);
  *(_BYTE *)(*(_QWORD *)(a1 + 584) + v45) = 0;
LABEL_8:
  *(_BYTE *)(a1 + 861) = v16;
  if ( !(unsigned __int8)sub_490268(a2) )
  {
    v40 = __errno_location();
    v19 = -2;
    v41 = (const char *)sub_492F00(*v40);
    sub_40AAF0(a1, (__int64)"%s: %s\n", a2, v41);
    return v19;
  }
  v19 = ((*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, a8) == 0) + 1;
  v20 = *v9 == 0;
  v56 = a2;
  v57 = a3;
  v54 = 80;
  v55 = 0;
  if ( v20 )
    v9 = nullptr;
  v63 = 0;
  LODWORD(v55) = 128;
  v58 = -1;
  v59 = -1;
  v60 = -1;
  v61 = nullptr;
  v62 = v9;
  if ( uname(&v64) )
  {
    v22 = v55;
  }
  else
  {
    v21 = strcasecmp(v64.sysname, "VMkernel");
    v22 = v55;
    if ( !v21 )
      v22 = v55 & 0xFFFFFF7F;
  }
  if ( (a6 & 0x10) == 0 )
    v22 |= 2u;
  if ( (a6 & 0x20) != 0 )
    v22 |= 0x100u;
  if ( (a6 & 0x40) != 0 )
    v22 |= 0x200u;
  if ( a6 < 0 )
    v22 |= 0x40u;
  if ( (a6 & 8) != 0 )
  {
    LODWORD(v55) = v22 | 0x20;
    goto LABEL_25;
  }
  if ( (a6 & 4) == 0 )
  {
    LODWORD(v55) = v22 | 0x20;
    sub_40AAF0(a1, (__int64)"Launching as %sbit process\n", "64");
LABEL_25:
    v48 = nullptr;
    v49 = 0;
    v50 = 0;
    if ( a4 )
      goto LABEL_26;
LABEL_63:
    v25 = nullptr;
    goto LABEL_44;
  }
  v48 = nullptr;
  v49 = 0;
  v50 = 0;
  LODWORD(v55) = v22 | 0x10;
  if ( !a4 )
    goto LABEL_63;
LABEL_26:
  if ( !*((_BYTE *)a4 + 24) )
    LODWORD(v55) = v55 | 0x800;
  v23 = *a4;
  v24 = *a4 + 24 * a4[1];
  if ( *a4 == v24 )
    goto LABEL_63;
  v25 = nullptr;
  v26 = 0;
  do
  {
    if ( !strchr(*(const char **)v23, 61) )
      goto LABEL_39;
    v27 = *(_QWORD *)(v23 + 8);
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v26 )
        {
          v44 = v26 - 1;
          v29 = v28 + v26 - 1;
          v30 = v28 + v26;
          if ( v30 <= v50 )
          {
LABEL_35:
            v49 = v30;
            v25[v29] = 0;
            memcpy((char *)v48 + v44, *(const void **)v23, v28);
            v25 = v48;
            v26 = v49;
            goto LABEL_36;
          }
        }
        else
        {
          v29 = v28;
          v44 = 0;
          v30 = v28 + 1;
          if ( v28 + 1 <= v50 )
            goto LABEL_35;
        }
        v25 = sub_491288((__int64)&v48, v25, v30, 1u);
        v48 = v25;
        goto LABEL_35;
      }
    }
LABEL_36:
    if ( v26 )
    {
      v31 = v26 - 1;
      v32 = v26 + 1;
      if ( v50 < v32 )
        goto LABEL_60;
    }
    else
    {
      v32 = 2;
      v31 = 0;
      if ( v50 < 2 )
      {
LABEL_60:
        v25 = sub_491288((__int64)&v48, v25, v32, 1u);
        v48 = v25;
      }
    }
    v49 = v32;
    v25[v31] = 0;
    *((_BYTE *)v48 + v31 + 1) = 0;
    v25 = v48;
    v26 = v49;
LABEL_39:
    v23 += 24;
  }
  while ( v24 != v23 );
  if ( v26 > 1 )
  {
    if ( v26 + 1 > v50 )
    {
      v25 = sub_491288((__int64)&v48, v25, v26 + 1, 1u);
      v48 = v25;
    }
    v49 = v26 + 1;
    v25[v26 - 1] = 0;
    *((_BYTE *)v48 + v26) = 0;
    v25 = v48;
  }
LABEL_44:
  ptr = nullptr;
  v52 = 0;
  v53 = 0;
  v61 = v25;
  v33 = sub_4951E0((__int64)&v54, (rlim_t *)&ptr);
  *a9 = v33;
  if ( !v33 )
  {
    v39 = (const char *)ptr;
    if ( !v52 )
      v39 = (const char *)&qword_4B2D48;
    sub_40AAF0(a1, (__int64)"launch_process: %s", v39);
    v19 = -2;
  }
  if ( ptr )
  {
    v52 = 0;
    j__free(ptr);
  }
  if ( v48 )
  {
    v49 = 0;
    j__free(v48);
  }
  return v19;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
