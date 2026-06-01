/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E638
// Address: 0x000000000049E638

//----- (000000000049E638) ----------------------------------------------------
__int64 __fastcall sub_49E638(int a1, int a2, __int64 a3, _QWORD *a4, struct _Unwind_Context *a5)
{
  __int64 result; // x0
  unsigned __int64 v6; // x19
  _BOOL4 v7; // w25
  char v10; // w22
  _BOOL4 v11; // w24
  __int64 v12; // x26
  __int64 v13; // x27
  _Unwind_Word v14; // w23
  char *v15; // x2
  __int64 v16; // x0
  __int64 IPInfo; // x0
  char *v18; // x2
  unsigned __int64 v19; // x23
  char v20; // w4
  char *v21; // x1
  __int64 v22; // x0
  char *v23; // x2
  char v24; // w4
  char *v25; // x1
  __int64 v26; // x0
  char *v27; // x2
  char v28; // w4
  char *v29; // x1
  __int64 v30; // x0
  __int64 v31; // x4
  int v32; // w1
  char v33; // t1
  unsigned __int64 v34; // x0
  char *v35; // x23
  _QWORD *v36; // x1
  __int64 **v37; // x7
  char *v38; // x28
  unsigned int v39; // w1
  char v40; // w2
  char v41; // t1
  unsigned __int64 v42; // x0
  char *v43; // x3
  __int64 v44; // x8
  unsigned int v45; // w1
  char v46; // w2
  char v47; // t1
  unsigned __int64 v48; // x0
  bool v49; // zf
  __int64 v51; // x9
  int v52; // w1
  char *v53; // x3
  char v54; // t1
  unsigned __int64 v55; // x0
  unsigned __int64 v56; // x0
  char v57; // w0
  char v58; // w0
  _QWORD *v59; // x0
  unsigned __int8 *LanguageSpecificData; // [xsp+78h] [xbp+78h]
  char *v61; // [xsp+80h] [xbp+80h]
  char *v62; // [xsp+80h] [xbp+80h]
  char *v63; // [xsp+80h] [xbp+80h]
  __int64 v64; // [xsp+80h] [xbp+80h]
  __int64 v65; // [xsp+80h] [xbp+80h]
  char *v66; // [xsp+88h] [xbp+88h]
  unsigned __int8 v67; // [xsp+88h] [xbp+88h]
  unsigned __int8 v68; // [xsp+88h] [xbp+88h]
  unsigned __int8 v69; // [xsp+88h] [xbp+88h]
  char *v70; // [xsp+88h] [xbp+88h]
  __int64 v71; // [xsp+88h] [xbp+88h]
  __int64 **v72; // [xsp+88h] [xbp+88h]
  int v73; // [xsp+9Ch] [xbp+9Ch] BYREF
  _QWORD *v74; // [xsp+A0h] [xbp+A0h] BYREF
  unsigned __int64 v75; // [xsp+A8h] [xbp+A8h] BYREF
  unsigned __int64 v76; // [xsp+B0h] [xbp+B0h] BYREF
  unsigned __int64 v77; // [xsp+B8h] [xbp+B8h] BYREF
  _QWORD v78[2]; // [xsp+C0h] [xbp+C0h] BYREF
  __int64 v79; // [xsp+D0h] [xbp+D0h]
  __int64 v80; // [xsp+D8h] [xbp+D8h]
  unsigned __int64 v81; // [xsp+E0h] [xbp+E0h]
  unsigned __int8 v82; // [xsp+E8h] [xbp+E8h]
  unsigned __int8 v83; // [xsp+E9h] [xbp+E9h]

  v73 = 0;
  v74 = nullptr;
  if ( a1 != 1 )
    return 3;
  v6 = a3 - 0x474E5543432B2B00LL;
  v7 = (unsigned __int64)(a3 - 0x474E5543432B2B00LL) <= 1;
  v10 = a2;
  v11 = a2 == 6 && (unsigned __int64)(a3 - 0x474E5543432B2B00LL) <= 1;
  if ( v11 )
  {
    v12 = *(a4 - 2);
    if ( v12 )
    {
      LODWORD(v13) = *((_DWORD *)a4 - 9);
      LanguageSpecificData = (unsigned __int8 *)*(a4 - 3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  LanguageSpecificData = (unsigned __int8 *)_Unwind_GetLanguageSpecificData(a5);
  if ( !LanguageSpecificData )
    return 8;
  v15 = sub_49E530(a5, LanguageSpecificData, (__int64)v78);
  v16 = 0;
  if ( v82 != 255 )
  {
    v70 = v15;
    v16 = sub_49E4D0(v82, a5);
    v15 = v70;
  }
  v66 = v15;
  v79 = v16;
  IPInfo = _Unwind_GetIPInfo(a5, &v73);
  v18 = v66;
  v19 = IPInfo - (v73 == 0);
  if ( (unsigned __int64)v66 >= v81 )
  {
LABEL_28:
    if ( (v10 & 1) != 0 )
    {
      LODWORD(v13) = 0;
      v12 = 0;
      v35 = nullptr;
LABEL_30:
      result = 6;
      if ( v6 <= 1 )
      {
        v36 = v74;
        *((_DWORD *)a4 - 9) = v13;
        *(a4 - 4) = v35;
        *(a4 - 3) = LanguageSpecificData;
        *(a4 - 2) = v12;
        *(a4 - 1) = v36;
      }
      return result;
    }
    if ( (v10 & 8) != 0 )
      sub_49DBB0();
    if ( v6 > 1 )
      sub_49DBB0();
LABEL_8:
    sub_4AEE38(a4);
  }
  while ( 1 )
  {
    v20 = v83;
    v21 = nullptr;
    if ( v83 != 255 )
    {
      v61 = v18;
      v67 = v83;
      v22 = sub_49E4D0(v83, nullptr);
      v20 = v67;
      v21 = (char *)v22;
      v18 = v61;
    }
    v23 = sub_49E220(v20, v21, v18, &v75);
    v24 = v83;
    v25 = nullptr;
    if ( v83 != 255 )
    {
      v62 = v23;
      v68 = v83;
      v26 = sub_49E4D0(v83, nullptr);
      v24 = v68;
      v25 = (char *)v26;
      v23 = v62;
    }
    v27 = sub_49E220(v24, v25, v23, &v76);
    v28 = v83;
    v29 = nullptr;
    if ( v83 != 255 )
    {
      v63 = v27;
      v69 = v83;
      v30 = sub_49E4D0(v83, nullptr);
      v28 = v69;
      v29 = (char *)v30;
      v27 = v63;
    }
    v18 = sub_49E220(v28, v29, v27, &v77);
    v31 = 0;
    v32 = 0;
    do
    {
      v33 = *v18++;
      v34 = (unsigned __int64)(v33 & 0x7F) << v32;
      v32 += 7;
      v31 |= v34;
    }
    while ( v33 < 0 );
    if ( v78[0] + v75 > v19 )
      goto LABEL_28;
    if ( v78[0] + v75 + v76 > v19 )
      break;
    if ( v81 <= (unsigned __int64)v18 )
      goto LABEL_28;
  }
  if ( !v77 )
    return 8;
  v12 = v77 + v78[1];
  if ( !v31 )
  {
    if ( v12 )
    {
LABEL_77:
      if ( (v10 & 1) == 0 )
      {
        v14 = 0;
        if ( (v10 & 8) == 0 )
        {
          LODWORD(v13) = 0;
          if ( v6 > 1 )
LABEL_80:
            v14 = v13;
        }
        goto LABEL_11;
      }
    }
    return 8;
  }
  v35 = (char *)(v81 + v31 - 1);
  if ( !v12 )
    return 8;
  if ( !v35 )
    goto LABEL_77;
  if ( (v10 & 8) != 0 )
  {
    v37 = &`typeinfo for'__cxxabiv1::__forced_unwind;
  }
  else
  {
    v37 = &`typeinfo for'__cxxabiv1::__foreign_exception;
    if ( v6 <= 1 )
    {
      v59 = a4 + 4;
      if ( (*a4 & 1) != 0 )
        v59 = (_QWORD *)*(a4 - 10);
      v37 = (__int64 **)*(v59 - 14);
      v74 = v59;
    }
  }
  while ( 1 )
  {
    v38 = v35;
    v13 = 0;
    v39 = 0;
    do
    {
      v41 = *v38++;
      v40 = v41;
      v42 = (unsigned __int64)(v41 & 0x7F) << v39;
      v39 += 7;
      v13 |= v42;
    }
    while ( v41 < 0 );
    if ( v39 <= 0x3F && (v40 & 0x40) != 0 )
      v13 |= -(1LL << v39);
    v43 = v38;
    v44 = 0;
    v45 = 0;
    do
    {
      v47 = *v43++;
      v46 = v47;
      v48 = (unsigned __int64)(v47 & 0x7F) << v45;
      v45 += 7;
      v44 |= v48;
    }
    while ( v47 < 0 );
    if ( v45 <= 0x3F && (v46 & 0x40) != 0 )
      v44 |= -(1LL << v45);
    if ( !v13 )
    {
      v11 = 1;
      goto LABEL_67;
    }
    if ( v13 > 0 )
    {
      v64 = v44;
      v71 = (__int64)v37;
      v56 = sub_49E368((__int64)v78, v13);
      if ( !v56 )
        goto LABEL_72;
      v44 = v64;
      v37 = (__int64 **)v71;
      if ( v71 )
      {
        v57 = sub_49E198(v56, v71, &v74);
        v44 = v64;
        v37 = (__int64 **)v71;
        if ( v57 )
          goto LABEL_72;
      }
      goto LABEL_67;
    }
    v49 = (v10 & 8) != 0 || !v7;
    if ( v49 || v37 == nullptr )
      break;
    v65 = v44;
    v72 = v37;
    v58 = sub_49E438((__int64)v78, (__int64)v37, v74, v13);
    v44 = v65;
    v37 = v72;
    if ( v58 != 1 )
      goto LABEL_72;
LABEL_67:
    if ( !v44 )
    {
      if ( v11 )
        goto LABEL_77;
      return 8;
    }
    v35 = &v38[v44];
  }
  v51 = 0;
  v52 = 0;
  v53 = (char *)(v80 + ~v13);
  do
  {
    v54 = *v53++;
    v55 = (unsigned __int64)(v54 & 0x7F) << v52;
    v52 += 7;
    v51 |= v55;
  }
  while ( v54 < 0 );
  if ( v51 )
    goto LABEL_67;
LABEL_72:
  if ( (v10 & 1) != 0 )
    goto LABEL_30;
  if ( (v10 & 8) != 0 || v6 > 1 )
  {
    if ( (v13 & 0x80000000) != 0 )
      sub_49DC00();
    goto LABEL_80;
  }
LABEL_10:
  v14 = v13;
  if ( (v13 & 0x80000000) != 0 )
  {
    sub_49E530(a5, LanguageSpecificData, (__int64)v78);
    if ( v82 == 255 )
    {
      v79 = 0;
      *(a4 - 2) = 0;
    }
    else
    {
      v79 = sub_49E4D0(v82, a5);
      if ( v82 == 255 )
        *(a4 - 2) = 0;
      else
        *(a4 - 2) = sub_49E4D0(v82, a5);
    }
  }
LABEL_11:
  _Unwind_SetGR(a5, 0, (_Unwind_Word)a4);
  _Unwind_SetGR(a5, 1, v14);
  _Unwind_SetIP(a5, v12);
  return 7;
}
// 51E5D8: using guessed type __int64 *`typeinfo for'__cxxabiv1::__forced_unwind;
// 51E5E8: using guessed type __int64 *`typeinfo for'__cxxabiv1::__foreign_exception;
