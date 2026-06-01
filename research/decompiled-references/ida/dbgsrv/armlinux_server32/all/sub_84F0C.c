/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84F0C
// Address: 0x00084F0C

//----- (00084F0C) --------------------------------------------------------
int *__fastcall sub_84F0C(int a1)
{
  unsigned __int8 *v1; // r1
  int v2; // r3
  int v4; // r0
  __int64 v5; // kr00_8
  _DWORD *v6; // r5
  int v7; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int v10; // r3
  _BYTE *v11; // r3
  __int64 v12; // r2
  int v13; // r0
  int v14; // r1
  _BYTE *v15; // r3
  _DWORD *v16; // r0
  _DWORD *v17; // r5
  unsigned __int8 **v18; // r1
  unsigned __int8 *v19; // r6
  int v20; // r0
  _DWORD *v22; // r5
  _DWORD *v23; // r0
  _BYTE *v24; // r3
  _DWORD *v25; // r6
  int v26; // r0
  int v27; // r0
  int v28; // r3
  bool v29; // zf
  int v30; // r7
  unsigned __int8 *v31; // r3
  _DWORD *v32; // r7
  int v33; // r3
  int *v34; // r0
  _BYTE *v35; // r3
  int *v36; // r6
  int v37; // r0
  int v38; // r3
  int *v39; // r0
  int *v40; // r7
  int *v41; // r8
  __int64 v42; // r2
  int v43; // r0
  int v44; // r0
  int *v45; // r0
  int v46; // r3
  bool v47; // zf
  _BOOL4 v48; // r6
  int *v49; // r0
  int v50; // r1
  _BYTE *v51; // r2
  unsigned int v52; // r3
  unsigned int v53; // r2
  bool v54; // cc
  int v55; // r0
  int *v56; // r0

  v1 = *(unsigned __int8 **)(a1 + 12);
  v2 = *v1;
  if ( v2 == 76 )
    return sub_86B8C(a1);
  if ( v2 == 84 )
    return sub_84484(a1);
  if ( v2 != 115 )
  {
    if ( v2 == 102 )
    {
      if ( v1[1] == 112 )
      {
        *(_DWORD *)(a1 + 12) = v1 + 2;
        if ( v1[2] == 84 )
        {
          v4 = 0;
          *(_DWORD *)(a1 + 12) = v1 + 3;
          goto LABEL_8;
        }
        v27 = sub_84450(a1);
        if ( (~v27 & 0x7FFFFFFF) != 0 )
        {
          v4 = v27 + 1;
LABEL_8:
          v5 = *(_QWORD *)(a1 + 20);
          if ( (int)v5 < SHIDWORD(v5) )
          {
            v6 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * v5);
            v6[1] = 0;
            *(_DWORD *)(a1 + 20) = v5 + 1;
            *v6 = 6;
            v6[2] = v4;
            return v6;
          }
        }
        return nullptr;
      }
      goto LABEL_12;
    }
    if ( (unsigned int)(v2 - 48) <= 9 )
      goto LABEL_21;
    if ( v2 == 111 )
    {
      if ( v1[1] == 110 )
      {
        *(_DWORD *)(a1 + 12) = v1 + 2;
LABEL_21:
        v6 = sub_86320(a1);
        if ( !v6 )
          return nullptr;
        v15 = *(_BYTE **)(a1 + 12);
        if ( *v15 != 73 )
          return v6;
        *(_DWORD *)(a1 + 12) = v15 + 1;
        v20 = sub_85378((_DWORD *)a1);
        return (int *)sub_841E0(a1, 4, __SPAIR64__(v20, (unsigned int)v6));
      }
    }
    else if ( (v2 == 105 || v2 == 116) && v1[1] == 108 )
    {
      if ( v2 == 116 )
      {
        v16 = sub_857B4(a1);
        v1 = *(unsigned __int8 **)(a1 + 12);
        v17 = v16;
        if ( !v1[1] )
          return nullptr;
      }
      else
      {
        v17 = nullptr;
      }
      *(_DWORD *)(a1 + 12) = v1 + 2;
      v56 = sub_849F0(a1, 69);
      return (int *)sub_841E0(a1, 48, __SPAIR64__((unsigned int)v56, (unsigned int)v17));
    }
LABEL_12:
    v8 = sub_85FA4(a1);
    v9 = v8;
    if ( !v8 )
      return nullptr;
    v10 = *v8;
    if ( *v8 != 49 )
    {
      if ( v10 == 50 )
      {
        switch ( v8[2] )
        {
          case 0:
            return (int *)sub_841E0(a1, 53, (unsigned int)v8);
          case 1:
            goto LABEL_75;
          default:
            return nullptr;
        }
      }
      if ( v10 != 51 )
        return nullptr;
      v11 = *(_BYTE **)(a1 + 12);
      if ( *v11 == 95 )
      {
        *(_DWORD *)(a1 + 12) = v11 + 1;
        HIDWORD(v12) = sub_849F0(a1, 69);
      }
      else
      {
LABEL_75:
        HIDWORD(v12) = sub_84F0C(a1);
      }
      goto LABEL_18;
    }
    v18 = (unsigned __int8 **)v8[2];
    v19 = *v18;
    *(_DWORD *)(a1 + 48) += v18[2] - 2;
    if ( *v19 == 115 && v19[1] == 116 )
    {
      if ( v19[2] )
      {
        switch ( (unsigned int)v18[3] )
        {
          case 0u:
            return (int *)sub_841E0(a1, 53, (unsigned int)v8);
          case 1u:
            goto LABEL_45;
          case 2u:
            goto LABEL_56;
          case 3u:
            if ( v19 )
              goto LABEL_68;
            return nullptr;
          default:
            return nullptr;
        }
      }
      HIDWORD(v12) = sub_857B4(a1);
LABEL_18:
      LODWORD(v12) = v9;
      v13 = a1;
      v14 = 54;
      return (int *)sub_841E0(v13, v14, v12);
    }
    switch ( (unsigned int)v18[3] )
    {
      case 0u:
        return (int *)sub_841E0(a1, 53, (unsigned int)v8);
      case 1u:
        if ( !v19 )
          goto LABEL_75;
LABEL_45:
        v28 = *v19;
        v29 = v28 == 109;
        if ( v28 != 109 )
          v29 = v28 == 112;
        if ( v29 && v19[1] == v28 )
        {
          v51 = *(_BYTE **)(a1 + 12);
          if ( *v51 == 95 )
          {
            v30 = 0;
            *(_DWORD *)(a1 + 12) = v51 + 1;
            v28 = *v19;
          }
          else
          {
            v30 = 1;
          }
        }
        else
        {
          v30 = 0;
        }
        if ( v28 == 115 && v19[1] == 80 && !v19[2] )
          HIDWORD(v12) = sub_85378((_DWORD *)a1);
        else
          HIDWORD(v12) = sub_84F0C(a1);
        if ( v30 )
        {
          LODWORD(v12) = HIDWORD(v12);
          HIDWORD(v12) = sub_841E0(a1, 56, v12);
        }
        goto LABEL_18;
      case 2u:
LABEL_56:
        if ( !v19 )
          return nullptr;
        v31 = *(unsigned __int8 **)v8[2];
        if ( v31[1] != 99 )
          goto LABEL_58;
        v52 = *v31;
        v53 = v52 - 99;
        v52 -= 114;
        v54 = v52 > 1;
        if ( v52 > 1 )
          v54 = v53 > 1;
        if ( v54 )
        {
LABEL_58:
          if ( *v19 == 102 )
            v32 = sub_85FA4(a1);
          else
            v32 = sub_84F0C(a1);
        }
        else
        {
          v32 = sub_857B4(a1);
        }
        v33 = *v19;
        if ( v33 == 99 )
        {
          if ( v19[1] == 108 && !v19[2] )
          {
            v36 = sub_849F0(a1, 69);
LABEL_66:
            v37 = sub_841E0(a1, 56, __SPAIR64__((unsigned int)v36, (unsigned int)v32));
            return (int *)sub_841E0(a1, 55, __SPAIR64__(v37, (unsigned int)v9));
          }
        }
        else if ( (v33 == 100 || v33 == 112) && v19[1] == 116 && !v19[2] )
        {
          v34 = sub_86320(a1);
          v35 = *(_BYTE **)(a1 + 12);
          v36 = v34;
          if ( *v35 == 73 )
          {
            *(_DWORD *)(a1 + 12) = v35 + 1;
            v55 = sub_85378((_DWORD *)a1);
            v36 = (int *)sub_841E0(a1, 4, __SPAIR64__(v55, (unsigned int)v36));
          }
          goto LABEL_66;
        }
        v36 = sub_84F0C(a1);
        goto LABEL_66;
      case 3u:
LABEL_68:
        v38 = *v19;
        switch ( v38 )
        {
          case 'q':
            if ( v19[1] != 117 || v19[2] )
              return nullptr;
            v39 = sub_84F0C(a1);
            break;
          case 'f':
            v39 = sub_85FA4(a1);
            break;
          case 'n':
            v46 = v19[1];
            v47 = v46 == 119;
            if ( v46 != 119 )
              v47 = v46 == 97;
            v48 = !v47;
            if ( !v47 )
              return nullptr;
            v40 = sub_849F0(a1, 95);
            v49 = sub_857B4(a1);
            HIDWORD(v42) = *(_DWORD *)(a1 + 12);
            v41 = v49;
            LODWORD(v42) = (unsigned __int8)*(_BYTE *)HIDWORD(v42);
            if ( (_DWORD)v42 == 69 )
            {
              v50 = HIDWORD(v42) + 1;
              HIDWORD(v42) = v48;
              *(_DWORD *)(a1 + 12) = v50;
            }
            else if ( (_DWORD)v42 == 112 )
            {
              if ( *(_BYTE *)(HIDWORD(v42) + 1) != 105 )
                return nullptr;
              *(_DWORD *)(a1 + 12) = HIDWORD(v42) + 2;
              HIDWORD(v42) = sub_849F0(a1, 69);
            }
            else
            {
              if ( (_DWORD)v42 != 105 || *(_BYTE *)(HIDWORD(v42) + 1) != 108 )
                return nullptr;
              HIDWORD(v42) = sub_84F0C(a1);
            }
LABEL_73:
            LODWORD(v42) = v41;
            v43 = sub_841E0(a1, 59, v42);
            v44 = sub_841E0(a1, 58, __SPAIR64__(v43, (unsigned int)v40));
            return (int *)sub_841E0(a1, 57, __SPAIR64__(v44, (unsigned int)v9));
          default:
            return nullptr;
        }
        v40 = v39;
        v41 = sub_84F0C(a1);
        HIDWORD(v42) = sub_84F0C(a1);
        if ( !HIDWORD(v42) )
          return nullptr;
        goto LABEL_73;
      default:
        return nullptr;
    }
  }
  v7 = v1[1];
  if ( v7 == 114 )
  {
    *(_DWORD *)(a1 + 12) = v1 + 2;
    v22 = sub_857B4(a1);
    v23 = sub_86320(a1);
    v24 = *(_BYTE **)(a1 + 12);
    v25 = v23;
    if ( *v24 == 73 )
    {
      *(_DWORD *)(a1 + 12) = v24 + 1;
      v26 = sub_85378((_DWORD *)a1);
      HIDWORD(v12) = sub_841E0(a1, 4, __SPAIR64__(v26, (unsigned int)v25));
    }
    else
    {
      HIDWORD(v12) = v23;
    }
    LODWORD(v12) = v22;
    v13 = a1;
    v14 = 1;
    return (int *)sub_841E0(v13, v14, v12);
  }
  if ( v7 != 112 )
    goto LABEL_12;
  *(_DWORD *)(a1 + 12) = v1 + 2;
  v45 = sub_84F0C(a1);
  return (int *)sub_841E0(a1, 74, (unsigned int)v45);
}
