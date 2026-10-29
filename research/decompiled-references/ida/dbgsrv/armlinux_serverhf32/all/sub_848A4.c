/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_848A4
// Address: 0x000848A4

//----- (000848A4) --------------------------------------------------------
int *__fastcall sub_848A4(int a1, int a2)
{
  unsigned __int8 *v2; // r5
  int *v5; // r7
  int v6; // r6
  int v7; // r3
  int *v8; // r0
  int *v9; // r5
  int v10; // r3
  _BYTE *v11; // r3
  __int64 v12; // r2
  _BYTE *v13; // r3
  int v14; // r0
  unsigned __int8 *v15; // r3
  int v16; // r5
  int v18; // r3
  int *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r11
  int v22; // r0
  __int64 v23; // kr00_8
  unsigned __int8 **v24; // r0
  unsigned __int8 *v25; // r3
  int v26; // r0
  _DWORD *v27; // r5
  _DWORD *v28; // r0
  _BYTE *v29; // r3
  _DWORD *v30; // r11
  __int64 v31; // r2
  int v32; // r0
  int v33; // r2
  bool v34; // zf
  int v35; // r11
  int v36; // r0
  unsigned __int8 *v37; // r2
  _DWORD *v38; // r0
  unsigned __int8 *v39; // r3
  _DWORD *v40; // r11
  int v41; // r2
  _DWORD *v42; // r0
  _BYTE *v43; // r3
  _DWORD *v44; // r2
  int v45; // r0
  int v46; // r2
  int v47; // r3
  bool v48; // zf
  _BOOL4 v49; // r3
  _DWORD *v50; // r11
  _DWORD *v51; // r0
  __int64 v52; // r2
  int v53; // r1
  int *v54; // r0
  int *v55; // r0
  int v56; // r0
  int v57; // r0
  _BYTE *v58; // r1
  unsigned int v59; // r2
  unsigned int v60; // r1
  bool v61; // cc
  _DWORD *v62; // r0
  int v63; // r1
  int v64; // r0
  _DWORD *v65; // r0
  unsigned __int8 *v66; // [sp+4h] [bp-10h]
  _BOOL4 v67; // [sp+4h] [bp-10h]
  int *v68; // [sp+4h] [bp-10h]
  unsigned __int8 *v69; // [sp+4h] [bp-10h]
  _DWORD *v70; // [sp+4h] [bp-10h]
  int v71; // [sp+Ch] [bp-8h] BYREF

  v2 = *(unsigned __int8 **)(a1 + 12);
  v71 = 0;
  if ( *v2 == a2 )
  {
    *(_DWORD *)(a1 + 12) = v2 + 1;
    return (int *)sub_84094(a1, 46, 0);
  }
  v5 = &v71;
  while ( 1 )
  {
    v6 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = 1;
    v7 = *v2;
    if ( v7 == 76 )
    {
      v9 = sub_86A40(a1);
      goto LABEL_26;
    }
    if ( v7 == 84 )
    {
      v9 = sub_84338(a1);
      goto LABEL_26;
    }
    if ( v7 == 115 )
      break;
    if ( v7 == 102 )
    {
      if ( v2[1] == 112 )
      {
        *(_DWORD *)(a1 + 12) = v2 + 2;
        if ( v2[2] == 84 )
        {
          v22 = 0;
          *(_DWORD *)(a1 + 12) = v2 + 3;
        }
        else
        {
          v32 = sub_84304(a1);
          if ( (~v32 & 0x7FFFFFFF) == 0 )
            goto LABEL_31;
          v22 = v32 + 1;
        }
        v23 = *(_QWORD *)(a1 + 20);
        if ( (int)v23 >= SHIDWORD(v23) )
          goto LABEL_31;
        v9 = (int *)(*(_DWORD *)(a1 + 16) + 16 * v23);
        v9[1] = 0;
        *(_DWORD *)(a1 + 20) = v23 + 1;
        *v9 = 6;
        v9[2] = v22;
LABEL_17:
        *(_DWORD *)(a1 + 52) = v6;
        goto LABEL_18;
      }
      goto LABEL_8;
    }
    if ( (unsigned int)(v7 - 48) <= 9 )
      goto LABEL_15;
    if ( v7 == 111 )
    {
      if ( v2[1] != 110 )
        goto LABEL_8;
      *(_DWORD *)(a1 + 12) = v2 + 2;
LABEL_15:
      v9 = sub_861D4(a1);
      if ( !v9 )
      {
LABEL_93:
        *(_DWORD *)(a1 + 52) = v6;
        return v9;
      }
      v13 = *(_BYTE **)(a1 + 12);
      if ( *v13 != 73 )
        goto LABEL_17;
      *(_DWORD *)(a1 + 12) = v13 + 1;
      v26 = sub_8522C((_DWORD *)a1);
      v9 = (int *)sub_84094(a1, 4, __SPAIR64__(v26, (unsigned int)v9));
      goto LABEL_26;
    }
    if ( v7 != 105 && v7 != 116 || v2[1] != 108 )
      goto LABEL_8;
    if ( v7 == 116 )
    {
      v20 = sub_85668(a1);
      v2 = *(unsigned __int8 **)(a1 + 12);
      v21 = v20;
      if ( !v2[1] )
        goto LABEL_31;
    }
    else
    {
      v21 = nullptr;
    }
    *(_DWORD *)(a1 + 12) = v2 + 2;
    v65 = sub_848A4(a1, 69);
    v9 = (int *)sub_84094(a1, 48, __SPAIR64__((unsigned int)v65, (unsigned int)v21));
LABEL_26:
    *(_DWORD *)(a1 + 52) = v6;
    if ( !v9 )
      return nullptr;
LABEL_18:
    v14 = sub_84094(a1, 46, (unsigned int)v9);
    *v5 = v14;
    if ( !v14 )
      return nullptr;
    v2 = *(unsigned __int8 **)(a1 + 12);
    v5 = (int *)(v14 + 12);
    if ( *v2 == a2 )
    {
      v15 = v2 + 1;
      v16 = v71;
      *(_DWORD *)(a1 + 12) = v15;
      return (int *)v16;
    }
  }
  v18 = v2[1];
  if ( v18 == 114 )
  {
    *(_DWORD *)(a1 + 12) = v2 + 2;
    v27 = sub_85668(a1);
    v28 = sub_861D4(a1);
    v29 = *(_BYTE **)(a1 + 12);
    v30 = v28;
    if ( *v29 == 73 )
    {
      *(_DWORD *)(a1 + 12) = v29 + 1;
      v36 = sub_8522C((_DWORD *)a1);
      HIDWORD(v31) = sub_84094(a1, 4, __SPAIR64__(v36, (unsigned int)v30));
    }
    else
    {
      HIDWORD(v31) = v28;
    }
    LODWORD(v31) = v27;
    v9 = (int *)sub_84094(a1, 1, v31);
    goto LABEL_26;
  }
  if ( v18 == 112 )
  {
    *(_DWORD *)(a1 + 12) = v2 + 2;
    v19 = sub_84DC0(a1);
    v9 = (int *)sub_84094(a1, 74, (unsigned int)v19);
    goto LABEL_26;
  }
LABEL_8:
  v8 = sub_85E58(a1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_93;
  v10 = *v8;
  if ( *v8 != 49 )
  {
    if ( v10 == 50 )
    {
      switch ( v8[2] )
      {
        case 0:
          goto LABEL_60;
        case 1:
          goto LABEL_100;
        default:
          goto LABEL_31;
      }
    }
    if ( v10 != 51 )
      goto LABEL_31;
    v11 = *(_BYTE **)(a1 + 12);
    if ( *v11 == 95 )
    {
      *(_DWORD *)(a1 + 12) = v11 + 1;
      HIDWORD(v12) = sub_848A4(a1, 69);
    }
    else
    {
LABEL_100:
      HIDWORD(v12) = sub_84DC0(a1);
    }
    goto LABEL_40;
  }
  v24 = (unsigned __int8 **)v8[2];
  v25 = *v24;
  *(_DWORD *)(a1 + 48) += v24[2] - 2;
  if ( *v25 == 115 && v25[1] == 116 )
  {
    if ( v25[2] )
    {
      switch ( (unsigned int)v24[3] )
      {
        case 0u:
          goto LABEL_60;
        case 1u:
          goto LABEL_50;
        case 2u:
          goto LABEL_61;
        case 3u:
          if ( v25 )
            goto LABEL_74;
          goto LABEL_31;
        default:
          goto LABEL_31;
      }
    }
    HIDWORD(v12) = sub_85668(a1);
LABEL_40:
    LODWORD(v12) = v9;
    v9 = (int *)sub_84094(a1, 54, v12);
    goto LABEL_26;
  }
  switch ( (unsigned int)v24[3] )
  {
    case 0u:
LABEL_60:
      v9 = (int *)sub_84094(a1, 53, (unsigned int)v9);
      goto LABEL_26;
    case 1u:
      if ( !v25 )
        goto LABEL_100;
LABEL_50:
      v33 = *v25;
      v34 = v33 == 109;
      if ( v33 != 109 )
        v34 = v33 == 112;
      if ( v34 && v25[1] == v33 )
      {
        v58 = *(_BYTE **)(a1 + 12);
        if ( *v58 == 95 )
        {
          v35 = 0;
          *(_DWORD *)(a1 + 12) = v58 + 1;
          v33 = *v25;
        }
        else
        {
          v35 = 1;
        }
      }
      else
      {
        v35 = 0;
      }
      if ( v33 == 115 && v25[1] == 80 && !v25[2] )
        HIDWORD(v12) = sub_8522C((_DWORD *)a1);
      else
        HIDWORD(v12) = sub_84DC0(a1);
      if ( v35 )
      {
        LODWORD(v12) = HIDWORD(v12);
        HIDWORD(v12) = sub_84094(a1, 56, v12);
      }
      goto LABEL_40;
    case 2u:
LABEL_61:
      if ( !v25 )
        goto LABEL_31;
      v37 = *(unsigned __int8 **)v9[2];
      if ( v37[1] != 99 )
        goto LABEL_63;
      v59 = *v37;
      v60 = v59 - 99;
      v59 -= 114;
      v61 = v59 > 1;
      if ( v59 > 1 )
        v61 = v60 > 1;
      if ( v61 )
      {
LABEL_63:
        v66 = v25;
        if ( *v25 == 102 )
          v38 = sub_85E58(a1);
        else
          v38 = sub_84DC0(a1);
        v39 = v66;
        v40 = v38;
      }
      else
      {
        v69 = v25;
        v62 = sub_85668(a1);
        v39 = v69;
        v40 = v62;
      }
      v41 = *v39;
      if ( v41 == 99 )
      {
        if ( v39[1] != 108 || v39[2] )
          goto LABEL_102;
        v44 = sub_848A4(a1, 69);
      }
      else
      {
        if ( v41 != 100 && v41 != 112 || v39[1] != 116 || v39[2] )
        {
LABEL_102:
          v44 = sub_84DC0(a1);
          goto LABEL_72;
        }
        v42 = sub_861D4(a1);
        v43 = *(_BYTE **)(a1 + 12);
        v44 = v42;
        if ( *v43 == 73 )
        {
          v70 = v42;
          *(_DWORD *)(a1 + 12) = v43 + 1;
          v64 = sub_8522C((_DWORD *)a1);
          v44 = (_DWORD *)sub_84094(a1, 4, __SPAIR64__(v64, (unsigned int)v70));
        }
      }
LABEL_72:
      v45 = sub_84094(a1, 56, __SPAIR64__((unsigned int)v44, (unsigned int)v40));
      v9 = (int *)sub_84094(a1, 55, __SPAIR64__(v45, (unsigned int)v9));
      goto LABEL_26;
    case 3u:
LABEL_74:
      v46 = *v25;
      switch ( v46 )
      {
        case 'q':
          if ( v25[1] != 117 || v25[2] )
            goto LABEL_31;
          v54 = sub_84DC0(a1);
          break;
        case 'f':
          v54 = sub_85E58(a1);
          break;
        case 'n':
          v47 = v25[1];
          v48 = v47 == 119;
          if ( v47 != 119 )
            v48 = v47 == 97;
          v49 = !v48;
          v67 = v49;
          if ( !v48 )
          {
LABEL_31:
            *(_DWORD *)(a1 + 52) = v6;
            return nullptr;
          }
          v50 = sub_848A4(a1, 95);
          v51 = sub_85668(a1);
          HIDWORD(v52) = *(_DWORD *)(a1 + 12);
          LODWORD(v52) = v51;
          v53 = (unsigned __int8)*(_BYTE *)HIDWORD(v52);
          switch ( v53 )
          {
            case 'E':
              v63 = HIDWORD(v52) + 1;
              HIDWORD(v52) = v67;
              *(_DWORD *)(a1 + 12) = v63;
              break;
            case 'p':
              if ( *(_BYTE *)(HIDWORD(v52) + 1) != 105 )
                goto LABEL_31;
              *(_DWORD *)(a1 + 12) = HIDWORD(v52) + 2;
              v52 = __PAIR64__((unsigned int)sub_848A4(a1, 69), (unsigned int)v51);
              break;
            case 'i':
              if ( *(_BYTE *)(HIDWORD(v52) + 1) != 108 )
              {
                *(_DWORD *)(a1 + 52) = v6;
                return (int *)v67;
              }
              v52 = __PAIR64__((unsigned int)sub_84DC0(a1), (unsigned int)v51);
              break;
            default:
              goto LABEL_31;
          }
          goto LABEL_98;
        default:
          goto LABEL_31;
      }
      v50 = v54;
      v68 = sub_84DC0(a1);
      v55 = sub_84DC0(a1);
      v52 = __PAIR64__((unsigned int)v55, (unsigned int)v68);
      if ( v55 )
      {
LABEL_98:
        v56 = sub_84094(a1, 59, v52);
        v57 = sub_84094(a1, 58, __SPAIR64__(v56, (unsigned int)v50));
        v9 = (int *)sub_84094(a1, 57, __SPAIR64__(v57, (unsigned int)v9));
        goto LABEL_26;
      }
      *(_DWORD *)(a1 + 52) = v6;
      return nullptr;
    default:
      goto LABEL_31;
  }
}
