/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036F8C
// Address: 0x0000000100036F8C

//----- (0000000100036F8C) ----------------------------------------------------
__int64 __fastcall sub_100036F8C(
        _QWORD *a1,
        char *a2,
        unsigned int a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        char **a7)
{
  __int64 v10; // x25
  _QWORD *v14; // x0
  _QWORD *v15; // x1
  __int64 v16; // x8
  __int64 v17; // x21
  __int64 v18; // x23
  char *v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  char *v26; // x9
  int v27; // w8
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  char *v34; // x8
  char *v35; // x1
  char *v36; // x8
  bool v37; // cf
  char *v38; // x8
  char *v39; // x25
  char *v40; // x23
  char *v41; // x1
  char *v42; // x8
  char *v43; // x8
  char *v44; // x24
  char *v45; // x8
  size_t v46; // x0
  size_t v47; // x24
  char *v48; // x1
  char *v49; // x8
  char *v50; // x8
  char *v51; // x26
  size_t v52; // x27
  unsigned __int64 v53; // x25
  unsigned __int8 v55[8]; // [xsp+18h] [xbp-D8h] BYREF
  void *v56; // [xsp+20h] [xbp-D0h]
  __int64 v57; // [xsp+28h] [xbp-C8h]
  __int64 v58; // [xsp+30h] [xbp-C0h]
  unsigned __int8 v59[8]; // [xsp+38h] [xbp-B8h] BYREF
  char *__s; // [xsp+40h] [xbp-B0h]
  unsigned __int64 v61; // [xsp+48h] [xbp-A8h]
  __int64 v62; // [xsp+50h] [xbp-A0h]
  unsigned __int8 v63[8]; // [xsp+58h] [xbp-98h] BYREF
  void *v64; // [xsp+60h] [xbp-90h]
  __int64 v65; // [xsp+68h] [xbp-88h]
  __int64 v66; // [xsp+70h] [xbp-80h]
  unsigned __int8 v67[8]; // [xsp+78h] [xbp-78h] BYREF
  void *v68; // [xsp+80h] [xbp-70h]
  __int64 v69; // [xsp+88h] [xbp-68h]
  __int64 v70; // [xsp+90h] [xbp-60h]

  LODWORD(v10) = a4;
  v15 = (_QWORD *)a1[9];
  v16 = a1[10];
  v14 = a1 + 9;
  if ( v14[2] < (unsigned __int64)(v16 + 1) )
  {
    v15 = qvector_reserve(v14, v15, v16 + 1, 4u);
    a1[9] = v15;
    v16 = a1[10];
  }
  *((_DWORD *)v15 + v16) = 0;
  ++a1[10];
  if ( (int)v10 >= 1 )
  {
    v10 = (unsigned int)v10;
    do
    {
      sub_10002B5D4(a1 + 3, a5);
      a5 += 32;
      --v10;
    }
    while ( v10 );
  }
  v17 = sub_100037FE0(a1, a6, a2, a3);
  if ( (v17 & 1) == 0 )
  {
    if ( !a7 )
    {
LABEL_72:
      if ( a6 )
        sub_10003AF14(a1 + 3, a6);
      goto LABEL_74;
    }
    v18 = a1[3] + 32LL * a1[4] - 32;
    v19 = *a7;
    if ( (unsigned __int64)a7[2] <= 0xD )
    {
      v19 = (char *)qvector_reserve(a7, v19, 0xEu, 1u);
      *a7 = v19;
    }
    a7[1] = (char *)14;
    qmemcpy(v19, "Runtime error", 13);
    (*a7)[13] = 0;
    v67[0] = 2;
    v69 = 0;
    v70 = 0;
    v68 = nullptr;
    v63[0] = 2;
    v65 = 0;
    v66 = 0;
    v64 = nullptr;
    get_idcv_attr(v63, v18, "line", 0);
    get_idcv_attr(v67, v18, "file", 0);
    if ( v63[0] == 2 && (__int64)v64 >= 1 && v67[0] == 7 )
    {
      if ( v69 )
        v26 = (char *)v68;
      else
        v26 = &byte_10007AE40;
      if ( !*v26 )
        v26 = "<unknown>";
      sub_10002B248(a7, " on %s:%d", v20, v21, v22, v23, v24, v25, (char)v26);
      goto LABEL_35;
    }
    v59[0] = 2;
    v61 = 0;
    v62 = 0;
    __s = nullptr;
    get_idcv_attr(v59, v18, "func", 0);
    v27 = v59[0];
    if ( v59[0] == 7 )
    {
      if ( v61 < 2 )
      {
LABEL_32:
        if ( __s )
        {
          v61 = 0;
          qfree(__s);
        }
LABEL_35:
        v35 = *a7;
        v36 = a7[1];
        v37 = v36 != nullptr;
        v38 = v36 - 1;
        if ( v37 )
          v39 = v38;
        else
          v39 = nullptr;
        if ( a7[2] < v39 + 3 )
        {
          v35 = (char *)qvector_reserve(a7, v35, (unsigned __int64)(v39 + 3), 1u);
          *a7 = v35;
        }
        a7[1] = v39 + 3;
        v39[(_QWORD)v35 + 2] = 0;
        *(_WORD *)&v39[(_QWORD)*a7] = 8250;
        v59[0] = 2;
        v61 = 0;
        v62 = 0;
        __s = nullptr;
        get_idcv_attr(v59, v18, "description", 0);
        if ( v59[0] != 7 )
        {
          v41 = *a7;
          v42 = a7[1];
          v37 = v42 != nullptr;
          v43 = v42 - 1;
          if ( v37 )
            v44 = v43;
          else
            v44 = nullptr;
          if ( a7[2] < v44 + 20 )
          {
            v41 = (char *)qvector_reserve(a7, v41, (unsigned __int64)(v44 + 20), 1u);
            *a7 = v41;
          }
          a7[1] = v44 + 20;
          v44[(_QWORD)v41 + 19] = 0;
          v45 = &v44[(_QWORD)*a7];
          *(_OWORD *)v45 = *(_OWORD *)"Unhandled exception";
          *(_DWORD *)(v45 + 15) = 1852795252;
          goto LABEL_57;
        }
        if ( v61 )
        {
          v40 = __s;
          if ( !__s )
          {
LABEL_57:
            if ( v59[0] == 5 )
            {
              sub_10003307C((__int64)__s, v59);
            }
            else if ( v59[0] == 7 && __s )
            {
              v61 = 0;
              qfree(__s);
            }
            if ( v63[0] == 5 )
            {
              sub_10003307C((__int64)v64, v63);
            }
            else if ( v63[0] == 7 && v64 )
            {
              v65 = 0;
              qfree(v64);
            }
            if ( v67[0] == 5 )
            {
              sub_10003307C((__int64)v68, v67);
            }
            else if ( v67[0] == 7 && v68 )
            {
              v69 = 0;
              qfree(v68);
            }
            goto LABEL_72;
          }
        }
        else
        {
          v40 = &byte_10007AE40;
        }
        v46 = strlen(v40);
        v47 = v46;
        v48 = *a7;
        v49 = a7[1];
        v37 = v49 != nullptr;
        v50 = v49 - 1;
        if ( v37 )
          v51 = v50;
        else
          v51 = nullptr;
        v52 = (size_t)&v51[v46];
        v53 = (unsigned __int64)&v51[v46 + 1];
        if ( (unsigned __int64)a7[2] < v53 )
        {
          v48 = (char *)qvector_reserve(a7, v48, v53, 1u);
          *a7 = v48;
        }
        a7[1] = (char *)v53;
        v48[v52] = 0;
        memmove(&v51[(_QWORD)*a7], v40, v47);
        goto LABEL_57;
      }
      v55[0] = 2;
      v57 = 0;
      v58 = 0;
      v56 = nullptr;
      get_idcv_attr(v55, v18, "pc", 0);
      if ( v61 )
        LOBYTE(v34) = (_BYTE)__s;
      else
        v34 = &byte_10007AE40;
      sub_10002B248(a7, " at %s+0x%a", v28, v29, v30, v31, v32, v33, (char)v34);
      if ( v55[0] == 5 )
      {
        sub_10003307C((__int64)v56, v55);
      }
      else if ( v55[0] == 7 && v56 )
      {
        v57 = 0;
        qfree(v56);
      }
      v27 = v59[0];
    }
    if ( v27 == 5 )
    {
      sub_10003307C((__int64)__s, v59);
      goto LABEL_35;
    }
    if ( v27 != 7 )
      goto LABEL_35;
    goto LABEL_32;
  }
LABEL_74:
  if ( *(_BYTE *)(a1[1] + 124LL) == 1 )
  {
    callui(24);
    *(_BYTE *)(a1[1] + 124LL) = 0;
  }
  return v17;
}
// 10003715C: variable 'v20' is possibly undefined
// 10003715C: variable 'v21' is possibly undefined
// 10003715C: variable 'v22' is possibly undefined
// 10003715C: variable 'v23' is possibly undefined
// 10003715C: variable 'v24' is possibly undefined
// 10003715C: variable 'v25' is possibly undefined
// 1000371F4: variable 'v28' is possibly undefined
// 1000371F4: variable 'v29' is possibly undefined
// 1000371F4: variable 'v30' is possibly undefined
// 1000371F4: variable 'v31' is possibly undefined
// 1000371F4: variable 'v32' is possibly undefined
// 1000371F4: variable 'v33' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A5680: using guessed type __int64 (__fastcall *callui)(_QWORD);
