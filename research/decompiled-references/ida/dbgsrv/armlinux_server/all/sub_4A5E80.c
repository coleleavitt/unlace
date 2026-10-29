/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5E80
// Address: 0x00000000004A5E80

//----- (00000000004A5E80) ----------------------------------------------------
_DWORD *__fastcall sub_4A5E80(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // x25
  __int64 v3; // x26
  int v4; // w22
  unsigned __int8 *v5; // x1
  __int64 *v7; // x20
  int v8; // w21
  int v9; // w0
  _DWORD *v10; // x0
  _DWORD *v11; // x24
  int v12; // w0
  _BYTE *v13; // x0
  __int64 v14; // x3
  _BYTE *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x24
  int v19; // w0
  __int64 v20; // x0
  __int64 v21; // x0
  int v22; // w0
  int v23; // w2
  int v24; // w0
  unsigned __int8 **v25; // x2
  unsigned __int8 *v26; // x25
  __int64 v27; // x0
  int v28; // w0
  int v29; // w0
  int v30; // w0
  bool v31; // zf
  _DWORD *v32; // x25
  __int64 v33; // x26
  unsigned __int8 *v34; // x0
  int v35; // w1
  __int64 v36; // x24
  __int64 v37; // x25
  _BYTE *v38; // x0
  __int64 v39; // x3
  __int64 v40; // x0
  int v41; // w0
  bool v42; // zf
  int v43; // w26
  __int64 v44; // x0
  char *v45; // x0
  __int64 v46; // x26
  int v47; // w0
  __int64 v48; // x25
  _BYTE *v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x3
  __int64 v53; // x0
  __int64 v54; // x0
  _BYTE *v55; // x1
  char v56; // w0
  unsigned int v57; // w1
  unsigned int v58; // w0
  bool v59; // cc
  __int64 v60; // x0
  bool v61; // zf
  __int64 v62; // x24
  _DWORD *v63; // x0
  __int64 v64; // x0
  __int64 v65; // [xsp+40h] [xbp+40h]
  __int64 v66; // [xsp+40h] [xbp+40h]
  __int64 v67; // [xsp+48h] [xbp+48h]
  __int64 v68; // [xsp+58h] [xbp+58h] BYREF

  v4 = a2;
  v5 = *(unsigned __int8 **)(a1 + 24);
  v68 = 0;
  v7 = &v68;
  if ( *v5 == v4 )
  {
    *(_QWORD *)(a1 + 24) = v5 + 1;
    return (_DWORD *)sub_4A5090(a1, 46, 0, 0);
  }
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a1 + 84) = 1;
    v9 = *v5;
    switch ( v9 )
    {
      case 'L':
        v11 = (_DWORD *)sub_4A92D8(a1);
        goto LABEL_25;
      case 'T':
        v11 = (_DWORD *)sub_4A54A0(a1);
        goto LABEL_25;
      case 's':
        v19 = v5[1];
        if ( v19 == 114 )
        {
          v66 = v2;
          *(_QWORD *)(a1 + 24) = v5 + 2;
          v36 = sub_4A7538(a1);
          v37 = sub_4A8738(a1);
          v38 = *(_BYTE **)(a1 + 24);
          v39 = v37;
          if ( *v38 == 73 )
          {
            *(_QWORD *)(a1 + 24) = v38 + 1;
            v44 = sub_4A6E30(a1);
            v39 = sub_4A5090(a1, 4, v37, v44);
          }
          v2 = v66;
          v11 = (_DWORD *)sub_4A5090(a1, 1, v36, v39);
          goto LABEL_25;
        }
        if ( v19 == 112 )
        {
          *(_QWORD *)(a1 + 24) = v5 + 2;
          v20 = sub_4A66F8(a1);
          v11 = (_DWORD *)sub_4A5090(a1, 74, v20, 0);
          goto LABEL_25;
        }
LABEL_7:
        v10 = (_DWORD *)sub_4A80C8(a1);
        v11 = v10;
        if ( !v10 )
          goto LABEL_83;
        v12 = *v10;
        if ( v12 != 49 )
        {
          if ( v12 == 50 )
          {
            v22 = v11[2];
            if ( v22 != 1 )
            {
              if ( v22 )
                goto LABEL_31;
LABEL_74:
              v11 = (_DWORD *)sub_4A5090(a1, 53, (__int64)v11, 0);
              goto LABEL_25;
            }
          }
          else
          {
            if ( v12 != 51 )
              goto LABEL_31;
            v13 = *(_BYTE **)(a1 + 24);
            if ( *v13 == 95 )
            {
              *(_QWORD *)(a1 + 24) = v13 + 1;
              v14 = (__int64)sub_4A5E80(a1, 0x45u);
LABEL_82:
              v11 = (_DWORD *)sub_4A5090(a1, 54, (__int64)v11, v14);
              goto LABEL_25;
            }
          }
LABEL_114:
          v14 = sub_4A66F8(a1);
          goto LABEL_82;
        }
        v25 = *((unsigned __int8 ***)v11 + 1);
        v65 = v2;
        v67 = v3;
        v26 = *v25;
        *(_DWORD *)(a1 + 80) += *((_DWORD *)v25 + 4) - 2;
        if ( *v26 == 115 && v26[1] == 116 )
        {
          if ( !v26[2] )
          {
            v27 = sub_4A7538(a1);
LABEL_40:
            v11 = (_DWORD *)sub_4A5090(a1, 54, (__int64)v11, v27);
            v2 = v65;
            v3 = v67;
            goto LABEL_25;
          }
          v28 = *((_DWORD *)v25 + 5);
          if ( v28 == 1 )
            goto LABEL_64;
          if ( v28 <= 1 )
          {
LABEL_75:
            if ( v28 )
              goto LABEL_31;
            v2 = v65;
            goto LABEL_74;
          }
          if ( v28 == 2 )
            goto LABEL_84;
          if ( v28 != 3 || !v26 )
            goto LABEL_31;
        }
        else
        {
          v28 = *((_DWORD *)v25 + 5);
          if ( v28 == 1 )
          {
            if ( v26 )
            {
LABEL_64:
              v41 = *v26;
              v42 = v41 == 112 || v41 == 109;
              if ( v42 && v26[1] == v41 )
              {
                v55 = *(_BYTE **)(a1 + 24);
                v43 = 1;
                if ( *v55 == 95 )
                {
                  *(_QWORD *)(a1 + 24) = v55 + 1;
                  v43 = 0;
                  v41 = *v26;
                }
              }
              else
              {
                v43 = 0;
              }
              if ( v41 == 115 && v26[1] == 80 && !v26[2] )
              {
                v14 = sub_4A6E30(a1);
                if ( v43 )
                {
LABEL_73:
                  v27 = sub_4A5090(a1, 56, v14, v14);
                  goto LABEL_40;
                }
              }
              else
              {
                v14 = sub_4A66F8(a1);
                if ( v43 )
                  goto LABEL_73;
              }
              v2 = v65;
              v3 = v67;
              goto LABEL_82;
            }
            v2 = v65;
            goto LABEL_114;
          }
          if ( v28 <= 1 )
            goto LABEL_75;
          if ( v28 == 2 )
          {
LABEL_84:
            if ( !v26 )
              goto LABEL_31;
            v45 = **((char ***)v11 + 1);
            if ( v45[1] != 99
              || ((v56 = *v45, v57 = (unsigned __int8)(v56 - 99), v58 = (unsigned __int8)(v56 - 114), v57 > 1)
                ? (v59 = v58 > 1)
                : (v59 = 0),
                  v59) )
            {
              if ( *v26 == 102 )
                v46 = sub_4A80C8(a1);
              else
                v46 = sub_4A66F8(a1);
            }
            else
            {
              v46 = sub_4A7538(a1);
            }
            v47 = *v26;
            if ( v47 == 99 )
            {
              if ( v26[1] != 108 || v26[2] )
                goto LABEL_105;
              v48 = (__int64)sub_4A5E80(a1, 0x45u);
            }
            else
            {
              if ( (v47 == 100 || v47 == 112) && v26[1] == 116 && !v26[2] )
              {
                v48 = sub_4A8738(a1);
                v49 = *(_BYTE **)(a1 + 24);
                if ( *v49 == 73 )
                {
                  *(_QWORD *)(a1 + 24) = v49 + 1;
                  v60 = sub_4A6E30(a1);
                  v48 = sub_4A5090(a1, 4, v48, v60);
                }
                goto LABEL_94;
              }
LABEL_105:
              v48 = sub_4A66F8(a1);
            }
LABEL_94:
            v50 = sub_4A5090(a1, 56, v46, v48);
            v2 = v65;
            v3 = v67;
            v11 = (_DWORD *)sub_4A5090(a1, 55, (__int64)v11, v50);
            goto LABEL_25;
          }
          if ( v28 != 3 )
            goto LABEL_31;
        }
        v29 = *v26;
        if ( v29 == 113 )
        {
          if ( v26[1] != 117 || v26[2] )
            goto LABEL_57;
          v51 = sub_4A66F8(a1);
        }
        else
        {
          if ( v29 != 102 )
          {
            if ( v29 != 110 || ((v30 = v26[1], v30 != 119) ? (v31 = v30 == 97) : (v31 = 1), !v31) )
            {
LABEL_57:
              v17 = 0;
              *(_DWORD *)(a1 + 84) = v8;
              return (_DWORD *)v17;
            }
            v32 = sub_4A5E80(a1, 0x5Fu);
            v33 = sub_4A7538(a1);
            v34 = *(unsigned __int8 **)(a1 + 24);
            v35 = *v34;
            if ( v35 == 69 )
            {
              v52 = 0;
              *(_QWORD *)(a1 + 24) = v34 + 1;
            }
            else if ( v35 == 112 )
            {
              if ( v34[1] != 105 )
                goto LABEL_57;
              *(_QWORD *)(a1 + 24) = v34 + 2;
              v52 = (__int64)sub_4A5E80(a1, 0x45u);
            }
            else
            {
              if ( v35 != 105 || v34[1] != 108 )
                goto LABEL_57;
              v52 = sub_4A66F8(a1);
            }
            goto LABEL_99;
          }
          v51 = sub_4A80C8(a1);
        }
        v32 = (_DWORD *)v51;
        v33 = sub_4A66F8(a1);
        v52 = sub_4A66F8(a1);
        if ( !v52 )
          goto LABEL_57;
LABEL_99:
        v53 = sub_4A5090(a1, 59, v33, v52);
        v54 = sub_4A5090(a1, 58, (__int64)v32, v53);
        v2 = v65;
        v3 = v67;
        v11 = (_DWORD *)sub_4A5090(a1, 57, (__int64)v11, v54);
        goto LABEL_25;
      case 'f':
        if ( v5[1] == 112 )
        {
          *(_QWORD *)(a1 + 24) = v5 + 2;
          if ( v5[2] == 84 )
          {
            v23 = 0;
            *(_QWORD *)(a1 + 24) = v5 + 3;
          }
          else
          {
            v40 = sub_4A5428(a1);
            if ( (~v40 & 0x7FFFFFFF) == 0 )
              goto LABEL_31;
            v23 = v40 + 1;
          }
          v24 = *(_DWORD *)(a1 + 40);
          if ( v24 >= *(_DWORD *)(a1 + 44) )
            goto LABEL_31;
          v11 = (_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL * v24);
          v11[1] = 0;
          *(_DWORD *)(a1 + 40) = v24 + 1;
          *v11 = 6;
          *((_QWORD *)v11 + 1) = v23;
LABEL_16:
          *(_DWORD *)(a1 + 84) = v8;
          goto LABEL_17;
        }
        goto LABEL_7;
    }
    if ( (unsigned __int8)(v9 - 48) > 9u )
    {
      if ( v9 != 111 )
      {
        v61 = v9 == 105 || v9 == 116;
        if ( v61 && v5[1] == 108 )
        {
          v62 = 0;
          if ( v9 == 116 )
          {
            v64 = sub_4A7538(a1);
            v5 = *(unsigned __int8 **)(a1 + 24);
            v62 = v64;
            if ( !v5[1] )
            {
LABEL_31:
              *(_DWORD *)(a1 + 84) = v8;
              return nullptr;
            }
          }
          *(_QWORD *)(a1 + 24) = v5 + 2;
          v63 = sub_4A5E80(a1, 0x45u);
          v11 = (_DWORD *)sub_4A5090(a1, 48, v62, (__int64)v63);
          goto LABEL_25;
        }
        goto LABEL_7;
      }
      if ( v5[1] != 110 )
        goto LABEL_7;
      *(_QWORD *)(a1 + 24) = v5 + 2;
    }
    v11 = (_DWORD *)sub_4A8738(a1);
    if ( !v11 )
      break;
    v15 = *(_BYTE **)(a1 + 24);
    if ( *v15 != 73 )
      goto LABEL_16;
    *(_QWORD *)(a1 + 24) = v15 + 1;
    v21 = sub_4A6E30(a1);
    v11 = (_DWORD *)sub_4A5090(a1, 4, (__int64)v11, v21);
LABEL_25:
    *(_DWORD *)(a1 + 84) = v8;
    if ( !v11 )
      return nullptr;
LABEL_17:
    v16 = sub_4A5090(a1, 46, (__int64)v11, 0);
    *v7 = v16;
    if ( !v16 )
      return nullptr;
    v5 = *(unsigned __int8 **)(a1 + 24);
    v7 = (__int64 *)(v16 + 16);
    if ( *v5 == v4 )
    {
      v17 = v68;
      *(_QWORD *)(a1 + 24) = v5 + 1;
      return (_DWORD *)v17;
    }
  }
LABEL_83:
  *(_DWORD *)(a1 + 84) = v8;
  return v11;
}
// 4A5E80: could not find valid save-restore pair for x25
// 4A5E80: could not find valid save-restore pair for x26
// 4A6124: variable 'v2' is possibly undefined
// 4A6124: variable 'v3' is possibly undefined
