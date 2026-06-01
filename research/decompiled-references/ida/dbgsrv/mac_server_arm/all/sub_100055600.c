/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055600
// Address: 0x0000000100055600

//----- (0000000100055600) ----------------------------------------------------
__int64 __fastcall sub_100055600(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        unsigned int a6,
        char *__s,
        __int64 a8,
        __int64 *a9)
{
  char *v10; // x26
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  _QWORD *v22; // x27
  size_t v23; // x0
  size_t v24; // x28
  unsigned __int64 v25; // x25
  _QWORD *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  __int64 v33; // x23
  _BYTE *v34; // x8
  int v35; // w9
  unsigned int v36; // w8
  int v37; // w21
  int *v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  void *v45; // x8
  __int64 v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  void *v53; // x0
  char *v54; // x8
  void *v57; // [xsp+20h] [xbp-4E0h] BYREF
  __int64 v58; // [xsp+28h] [xbp-4D8h]
  __int64 v59; // [xsp+30h] [xbp-4D0h]
  void *v60; // [xsp+38h] [xbp-4C8h] BYREF
  __int64 v61; // [xsp+40h] [xbp-4C0h]
  __int64 v62; // [xsp+48h] [xbp-4B8h]
  __int64 v63; // [xsp+50h] [xbp-4B0h] BYREF
  int v64; // [xsp+58h] [xbp-4A8h]
  const char *v65; // [xsp+60h] [xbp-4A0h]
  __int64 v66; // [xsp+68h] [xbp-498h]
  __int64 v67; // [xsp+70h] [xbp-490h]
  __int64 v68; // [xsp+78h] [xbp-488h]
  __int64 v69; // [xsp+80h] [xbp-480h]
  void *v70; // [xsp+88h] [xbp-478h]
  _BYTE *v71; // [xsp+90h] [xbp-470h]
  __int64 v72; // [xsp+98h] [xbp-468h]
  _BYTE v73[1024]; // [xsp+A0h] [xbp-460h] BYREF

  v10 = __s;
  if ( *a5 && !qisabspath((unsigned __int8 *)__s) )
  {
    qmake_full_path((unsigned __int64)v73, 1024, v10);
    v10 = v73;
  }
  if ( (a6 & 1) != 0 )
  {
    v22 = (_QWORD *)(a1 + 480);
    if ( !v10 )
    {
LABEL_13:
      v22[1] = 0;
      goto LABEL_14;
    }
  }
  else
  {
    if ( *v10 && !qfileexist(v10) )
    {
      sub_100006388(a1, "AUTOHIDE NONE\nInput file is missing: %s", v16, v17, v18, v19, v20, v21, (char)v10);
      return 4294967293LL;
    }
    v22 = (_QWORD *)(a1 + 480);
  }
  v23 = strlen(v10);
  if ( !v23 )
    goto LABEL_13;
  v24 = v23;
  v25 = v23 + 1;
  v26 = *(_QWORD **)(a1 + 480);
  if ( *(_QWORD *)(a1 + 496) < v23 + 1 )
  {
    v26 = qvector_reserve(v22, v26, v25, 1u);
    *v22 = v26;
  }
  *(_QWORD *)(a1 + 488) = v25;
  memmove(v26, v10, v24);
  *(_BYTE *)(*(_QWORD *)(a1 + 480) + v24) = 0;
LABEL_14:
  *(_BYTE *)(a1 + 733) = a6 & 1;
  if ( !qfileexist(a2) )
  {
    v38 = __error();
    winerr(*v38);
    sub_100004854(a1, "%s: %s\n", v39, v40, v41, v42, v43, v44, (char)a2);
    return 4294967294LL;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, a8) )
    v33 = 1;
  else
    v33 = 2;
  v68 = -1;
  v69 = -1;
  v63 = 80;
  v67 = -1;
  v65 = a2;
  v66 = a3;
  if ( *a5 )
    v34 = a5;
  else
    v34 = nullptr;
  v70 = nullptr;
  v71 = v34;
  v72 = 0;
  if ( (a6 & 0x10) != 0 )
    v35 = 128;
  else
    v35 = 130;
  v36 = v35 & 0xFFFFFCFF | (((a6 >> 5) & 3) << 8) | (a6 >> 1) & 0x40;
  if ( (a6 & 8) != 0 )
  {
    v37 = v36 | 0x20;
  }
  else
  {
    if ( (a6 & 4) == 0 )
    {
      v37 = v36 | 0x20;
      v64 = v36 | 0x20;
      sub_100004854(a1, "Launching as %sbit process\n", v27, v28, v29, v30, v31, v32, (char)"64");
      goto LABEL_32;
    }
    v37 = v36 | 0x10;
  }
  v64 = v37;
LABEL_32:
  v60 = nullptr;
  v61 = 0;
  v62 = 0;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a4 + 24) & 1) == 0 )
      v64 = v37 | 0x800;
    sub_100055940(&v60, (__int64 *)a4);
    v45 = v60;
  }
  else
  {
    v45 = nullptr;
  }
  v70 = v45;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  v46 = launch_process((__int64)&v63, (__int64)&v57);
  *a9 = v46;
  if ( !v46 )
  {
    if ( v58 )
      LOBYTE(v54) = (_BYTE)v57;
    else
      v54 = &byte_100075A30;
    sub_100004854(a1, "launch_process: %s", v47, v48, v49, v50, v51, v52, (char)v54);
    v33 = 4294967294LL;
    v53 = v57;
    if ( !v57 )
      goto LABEL_45;
    goto LABEL_44;
  }
  v53 = v57;
  if ( v57 )
  {
LABEL_44:
    v58 = 0;
    qfree(v53);
  }
LABEL_45:
  if ( v60 )
  {
    v61 = 0;
    qfree(v60);
  }
  return v33;
}
// 1000557B0: variable 'v27' is possibly undefined
// 1000557B0: variable 'v28' is possibly undefined
// 1000557B0: variable 'v29' is possibly undefined
// 1000557B0: variable 'v30' is possibly undefined
// 1000557B0: variable 'v31' is possibly undefined
// 1000557B0: variable 'v32' is possibly undefined
// 1000557D4: variable 'v39' is possibly undefined
// 1000557D4: variable 'v40' is possibly undefined
// 1000557D4: variable 'v41' is possibly undefined
// 1000557D4: variable 'v42' is possibly undefined
// 1000557D4: variable 'v43' is possibly undefined
// 1000557D4: variable 'v44' is possibly undefined
// 1000557F8: variable 'v16' is possibly undefined
// 1000557F8: variable 'v17' is possibly undefined
// 1000557F8: variable 'v18' is possibly undefined
// 1000557F8: variable 'v19' is possibly undefined
// 1000557F8: variable 'v20' is possibly undefined
// 1000557F8: variable 'v21' is possibly undefined
// 100055894: variable 'v47' is possibly undefined
// 100055894: variable 'v48' is possibly undefined
// 100055894: variable 'v49' is possibly undefined
// 100055894: variable 'v50' is possibly undefined
// 100055894: variable 'v51' is possibly undefined
// 100055894: variable 'v52' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
