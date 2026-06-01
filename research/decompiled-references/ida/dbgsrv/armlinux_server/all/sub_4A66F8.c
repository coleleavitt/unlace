/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A66F8
// Address: 0x00000000004A66F8

//----- (00000000004A66F8) ----------------------------------------------------
__int64 __fastcall sub_4A66F8(__int64 a1)
{
  unsigned __int8 *v1; // x3
  int v2; // w1
  int v4; // w1
  int v5; // w0
  __int64 v6; // x20
  int v7; // w1
  int *v8; // x0
  __int64 v9; // x20
  int v10; // w0
  _BYTE *v11; // x0
  __int64 v12; // x3
  __int64 v13; // x2
  __int64 v14; // x0
  int v15; // w1
  _BYTE *v16; // x0
  int v17; // w0
  unsigned __int8 **v18; // x2
  unsigned __int8 *v19; // x21
  int v20; // w0
  __int64 v21; // x0
  _DWORD *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x3
  __int64 v25; // x0
  __int64 v27; // x3
  __int64 v28; // x20
  __int64 v29; // x21
  _BYTE *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  int v34; // w0
  int v35; // w0
  bool v36; // zf
  int v37; // w22
  __int64 v38; // x0
  _BYTE *v39; // x1
  char *v40; // x0
  __int64 v41; // x22
  int v42; // w0
  __int64 v43; // x21
  _BYTE *v44; // x0
  __int64 v45; // x2
  int v46; // w0
  unsigned __int8 *v48; // x0
  int v49; // w1
  char v50; // w0
  unsigned int v51; // w1
  unsigned int v52; // w0
  bool v53; // cc
  __int64 v54; // x0
  bool v55; // zf
  __int64 v56; // x20
  _DWORD *v57; // x3

  v1 = *(unsigned __int8 **)(a1 + 24);
  v2 = *v1;
  switch ( v2 )
  {
    case 'L':
      return sub_4A92D8(a1);
    case 'T':
      return sub_4A54A0(a1);
    case 's':
      v7 = v1[1];
      if ( v7 == 114 )
      {
        *(_QWORD *)(a1 + 24) = v1 + 2;
        v28 = sub_4A7538(a1);
        v29 = sub_4A8738(a1);
        v30 = *(_BYTE **)(a1 + 24);
        v12 = v29;
        if ( *v30 == 73 )
        {
          *(_QWORD *)(a1 + 24) = v30 + 1;
          v31 = sub_4A6E30(a1);
          v12 = sub_4A5090(a1, 4, v29, v31);
        }
        v13 = v28;
        v14 = a1;
        v15 = 1;
        return sub_4A5090(v14, v15, v13, v12);
      }
      if ( v7 != 112 )
      {
LABEL_12:
        v8 = (int *)sub_4A80C8(a1);
        v9 = (__int64)v8;
        if ( !v8 )
          return 0;
        v10 = *v8;
        if ( v10 != 49 )
        {
          if ( v10 != 50 )
          {
            if ( v10 != 51 )
              return 0;
            v11 = *(_BYTE **)(a1 + 24);
            if ( *v11 == 95 )
            {
              *(_QWORD *)(a1 + 24) = v11 + 1;
              v12 = (__int64)sub_4A5E80(a1, 0x45u);
LABEL_18:
              v13 = v9;
              v14 = a1;
              v15 = 54;
              return sub_4A5090(v14, v15, v13, v12);
            }
LABEL_113:
            v12 = sub_4A66F8(a1);
            goto LABEL_18;
          }
          v34 = *(_DWORD *)(v9 + 8);
          if ( v34 == 1 )
            goto LABEL_113;
          if ( v34 )
            return 0;
          return sub_4A5090(a1, 53, v9, 0);
        }
        v18 = *(unsigned __int8 ***)(v9 + 8);
        v19 = *v18;
        *(_DWORD *)(a1 + 80) += *((_DWORD *)v18 + 4) - 2;
        if ( *v19 == 115 && v19[1] == 116 )
        {
          if ( !v19[2] )
          {
            v33 = sub_4A7538(a1);
            v13 = v9;
            v12 = v33;
            v15 = 54;
            goto LABEL_43;
          }
          v17 = *((_DWORD *)v18 + 5);
          if ( v17 != 1 )
          {
            if ( v17 > 1 )
            {
              if ( v17 != 2 )
              {
                if ( v17 != 3 || !v19 )
                  return 0;
                goto LABEL_37;
              }
              goto LABEL_77;
            }
            goto LABEL_89;
          }
        }
        else
        {
          v17 = *((_DWORD *)v18 + 5);
          if ( v17 != 1 )
          {
            if ( v17 > 1 )
            {
              if ( v17 != 2 )
              {
                if ( v17 != 3 )
                  return 0;
LABEL_37:
                v20 = *v19;
                switch ( v20 )
                {
                  case 'q':
                    if ( v19[1] != 117 || v19[2] )
                      return 0;
                    v21 = sub_4A66F8(a1);
                    break;
                  case 'f':
                    v21 = sub_4A80C8(a1);
                    break;
                  case 'n':
                    v46 = v19[1];
                    if ( v46 != 119 && v46 != 97 )
                      return 0;
                    v22 = sub_4A5E80(a1, 0x5Fu);
                    v23 = sub_4A7538(a1);
                    v48 = *(unsigned __int8 **)(a1 + 24);
                    v49 = *v48;
                    if ( v49 == 69 )
                    {
                      v24 = 0;
                      *(_QWORD *)(a1 + 24) = v48 + 1;
                    }
                    else if ( v49 == 112 )
                    {
                      if ( v48[1] != 105 )
                        return 0;
                      *(_QWORD *)(a1 + 24) = v48 + 2;
                      v24 = (__int64)sub_4A5E80(a1, 0x45u);
                    }
                    else
                    {
                      if ( v49 != 105 || v48[1] != 108 )
                        return 0;
                      v24 = sub_4A66F8(a1);
                    }
LABEL_42:
                    v25 = sub_4A5090(a1, 59, v23, v24);
                    v12 = sub_4A5090(a1, 58, (__int64)v22, v25);
                    v13 = v9;
                    v15 = 57;
                    goto LABEL_43;
                  default:
                    return 0;
                }
                v22 = (_DWORD *)v21;
                v23 = sub_4A66F8(a1);
                v24 = sub_4A66F8(a1);
                if ( !v24 )
                  return 0;
                goto LABEL_42;
              }
LABEL_77:
              if ( !v19 )
                return 0;
              v40 = **(char ***)(v9 + 8);
              if ( v40[1] != 99
                || ((v50 = *v40, v51 = (unsigned __int8)(v50 - 99), v52 = (unsigned __int8)(v50 - 114), v51 > 1)
                  ? (v53 = v52 > 1)
                  : (v53 = 0),
                    v53) )
              {
                if ( *v19 == 102 )
                  v41 = sub_4A80C8(a1);
                else
                  v41 = sub_4A66F8(a1);
              }
              else
              {
                v41 = sub_4A7538(a1);
              }
              v42 = *v19;
              if ( v42 == 99 )
              {
                if ( v19[1] == 108 && !v19[2] )
                {
                  v43 = (__int64)sub_4A5E80(a1, 0x45u);
                  goto LABEL_87;
                }
              }
              else if ( (v42 == 100 || v42 == 112) && v19[1] == 116 && !v19[2] )
              {
                v43 = sub_4A8738(a1);
                v44 = *(_BYTE **)(a1 + 24);
                if ( *v44 == 73 )
                {
                  *(_QWORD *)(a1 + 24) = v44 + 1;
                  v54 = sub_4A6E30(a1);
                  v43 = sub_4A5090(a1, 4, v43, v54);
                }
                goto LABEL_87;
              }
              v43 = sub_4A66F8(a1);
LABEL_87:
              v12 = sub_4A5090(a1, 56, v41, v43);
              v13 = v9;
              v15 = 55;
              goto LABEL_43;
            }
LABEL_89:
            if ( v17 )
              return 0;
            return sub_4A5090(a1, 53, v9, 0);
          }
          if ( !v19 )
            goto LABEL_113;
        }
        v35 = *v19;
        v36 = v35 == 112 || v35 == 109;
        if ( v36 && v19[1] == v35 )
        {
          v39 = *(_BYTE **)(a1 + 24);
          v37 = 1;
          if ( *v39 == 95 )
          {
            *(_QWORD *)(a1 + 24) = v39 + 1;
            v37 = 0;
            v35 = *v19;
          }
        }
        else
        {
          v37 = 0;
        }
        if ( v35 == 115 && v19[1] == 80 && !v19[2] )
          v12 = sub_4A6E30(a1);
        else
          v12 = sub_4A66F8(a1);
        if ( !v37 )
          goto LABEL_18;
        v38 = sub_4A5090(a1, 56, v12, v12);
        v13 = v9;
        v12 = v38;
        v15 = 54;
LABEL_43:
        v14 = a1;
        return sub_4A5090(v14, v15, v13, v12);
      }
      *(_QWORD *)(a1 + 24) = v1 + 2;
      v45 = sub_4A66F8(a1);
      return sub_4A5090(a1, 74, v45, 0);
    case 'f':
      if ( v1[1] == 112 )
      {
        *(_QWORD *)(a1 + 24) = v1 + 2;
        if ( v1[2] == 84 )
        {
          v4 = 0;
          *(_QWORD *)(a1 + 24) = v1 + 3;
          goto LABEL_8;
        }
        v32 = sub_4A5428(a1);
        v4 = v32 + 1;
        if ( (~v32 & 0x7FFFFFFF) != 0 )
        {
LABEL_8:
          v5 = *(_DWORD *)(a1 + 40);
          if ( v5 < *(_DWORD *)(a1 + 44) )
          {
            v6 = *(_QWORD *)(a1 + 32) + 24LL * v5;
            *(_DWORD *)(v6 + 4) = 0;
            *(_DWORD *)(a1 + 40) = v5 + 1;
            *(_DWORD *)v6 = 6;
            *(_QWORD *)(v6 + 8) = v4;
            return v6;
          }
        }
        return 0;
      }
      goto LABEL_12;
    default:
      if ( (unsigned __int8)(v2 - 48) <= 9u )
        goto LABEL_21;
      if ( v2 == 111 )
      {
        if ( v1[1] != 110 )
          goto LABEL_12;
        *(_QWORD *)(a1 + 24) = v1 + 2;
LABEL_21:
        v6 = sub_4A8738(a1);
        if ( !v6 )
          return 0;
        v16 = *(_BYTE **)(a1 + 24);
        if ( *v16 != 73 )
          return v6;
        *(_QWORD *)(a1 + 24) = v16 + 1;
        v27 = sub_4A6E30(a1);
        return sub_4A5090(a1, 4, v6, v27);
      }
      v55 = v2 == 105 || v2 == 116;
      if ( !v55 || v1[1] != 108 )
        goto LABEL_12;
      v56 = 0;
      if ( v2 == 116 )
      {
        v56 = sub_4A7538(a1);
        v1 = *(unsigned __int8 **)(a1 + 24);
        if ( !v1[1] )
          return 0;
      }
      *(_QWORD *)(a1 + 24) = v1 + 2;
      v57 = sub_4A5E80(a1, 0x45u);
      return sub_4A5090(a1, 48, v56, (__int64)v57);
  }
}
