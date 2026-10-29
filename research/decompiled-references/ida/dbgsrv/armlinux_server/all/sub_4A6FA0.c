/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A6FA0
// Address: 0x00000000004A6FA0

//----- (00000000004A6FA0) ----------------------------------------------------
__int64 __fastcall sub_4A6FA0(__int64 a1)
{
  unsigned __int8 *v1; // x1
  unsigned int v3; // w2
  __int64 v4; // x19
  _BYTE *v5; // x0
  int v6; // w1
  int *v7; // x0
  __int64 v8; // x3
  int v9; // w0
  int v10; // w21
  int v11; // w0
  int v12; // w0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 *v16; // x24
  __int64 v17; // x0
  unsigned __int8 *v18; // x2
  __int64 v19; // x23
  __int64 v20; // x25
  int i; // w19
  bool v23; // zf
  __int64 v25; // x0
  int v26; // w0
  int v27; // w1
  __int64 v28; // x0
  __int64 v29; // x0
  int v30; // w0
  int v31; // w2
  __int64 v32; // t2
  __int64 v33; // x19
  __int64 v34; // x2
  __int64 v35; // x0
  _BYTE *v36; // x1
  int v37; // w0
  int v38; // w1
  __int64 v39; // x0
  int *v41; // x0
  int v42; // w0
  int v43; // w0
  __int64 v44; // x2
  __int64 v45; // x19
  __int64 v46; // [xsp+58h] [xbp+58h]
  __int64 v47; // [xsp+68h] [xbp+68h] BYREF

  v1 = *(unsigned __int8 **)(a1 + 24);
  v3 = *v1;
  if ( v3 == 83 )
  {
    if ( v1[1] == 116 )
    {
      v32 = a1 + 40;
      v30 = *(_DWORD *)(a1 + 40);
      v31 = *(_DWORD *)(v32 + 4);
      *(_QWORD *)(a1 + 24) = v1 + 2;
      v33 = 0;
      if ( v30 < v31 )
      {
        v34 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = v30 + 1;
        v33 = v34 + 24LL * v30;
        *(_DWORD *)(v33 + 4) = 0;
        *(_DWORD *)v33 = 0;
        *(_QWORD *)(v33 + 8) = "std";
        *(_DWORD *)(v33 + 16) = 3;
      }
      v35 = sub_4A8738(a1);
      v14 = sub_4A5090(a1, 1, v33, v35);
      v36 = *(_BYTE **)(a1 + 24);
      *(_DWORD *)(a1 + 80) += 3;
      if ( *v36 != 73 )
        return v14;
      if ( !v14 )
        return 0;
      v37 = *(_DWORD *)(a1 + 56);
      if ( v37 >= *(_DWORD *)(a1 + 60) )
        return 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v37) = v14;
      *(_DWORD *)(a1 + 56) = v37 + 1;
    }
    else
    {
      v14 = sub_4A5718(a1, 0);
      if ( **(_BYTE **)(a1 + 24) != 73 )
        return v14;
    }
    v28 = a1;
    goto LABEL_47;
  }
  if ( v3 > 0x53 )
  {
    if ( v3 == 85 )
      return sub_4A8738(a1);
    if ( v3 == 90 )
    {
      *(_QWORD *)(a1 + 24) = v1 + 1;
      v4 = sub_4A8CC0(a1, 0);
      v5 = *(_BYTE **)(a1 + 24);
      if ( *v5 == 69 )
      {
        *(_QWORD *)(a1 + 24) = v5 + 1;
        v6 = (unsigned __int8)v5[1];
        if ( v6 == 115 )
        {
          *(_QWORD *)(a1 + 24) = v5 + 2;
          if ( (unsigned int)sub_4A5990(a1) )
          {
            v43 = *(_DWORD *)(a1 + 40);
            v8 = 0;
            if ( v43 < *(_DWORD *)(a1 + 44) )
            {
              v44 = *(_QWORD *)(a1 + 32);
              *(_DWORD *)(a1 + 40) = v43 + 1;
              v8 = v44 + 24LL * v43;
              *(_DWORD *)(v8 + 4) = 0;
              *(_DWORD *)v8 = 0;
              *(_QWORD *)(v8 + 8) = "string literal";
              *(_DWORD *)(v8 + 16) = 14;
            }
            return sub_4A5090(a1, 2, v4, v8);
          }
        }
        else
        {
          if ( v6 != 100 )
          {
            v7 = (int *)sub_4A6FA0(a1);
            v8 = (__int64)v7;
            if ( !v7 )
              return sub_4A5090(a1, 2, v4, v8);
            v9 = *v7;
            if ( v9 == 69 )
              return sub_4A5090(a1, 2, v4, v8);
            v10 = -1;
            if ( v9 == 71 )
              return sub_4A5090(a1, 2, v4, v8);
LABEL_11:
            v46 = v8;
            v11 = sub_4A5990(a1);
            v8 = v46;
            if ( v11 )
              goto LABEL_12;
            return 0;
          }
          *(_QWORD *)(a1 + 24) = v5 + 2;
          v10 = sub_4A5428(a1);
          if ( (v10 & 0x80000000) == 0 )
          {
            v41 = (int *)sub_4A6FA0(a1);
            v8 = (__int64)v41;
            if ( !v41 )
              goto LABEL_13;
            v42 = *v41;
            if ( v42 == 69 || v42 == 71 )
            {
LABEL_12:
              if ( v10 == -1 )
                return sub_4A5090(a1, 2, v4, v8);
LABEL_13:
              v12 = *(_DWORD *)(a1 + 40);
              if ( v12 >= *(_DWORD *)(a1 + 44) )
              {
                v8 = 0;
              }
              else
              {
                v13 = *(_QWORD *)(a1 + 32) + 24LL * v12;
                *(_DWORD *)(v13 + 4) = 0;
                *(_DWORD *)(a1 + 40) = v12 + 1;
                *(_DWORD *)v13 = 70;
                *(_QWORD *)(v13 + 8) = v8;
                v8 = v13;
                *(_DWORD *)(v13 + 16) = v10;
              }
              return sub_4A5090(a1, 2, v4, v8);
            }
            goto LABEL_11;
          }
        }
      }
      return 0;
    }
LABEL_43:
    v14 = sub_4A8738(a1);
    if ( **(_BYTE **)(a1 + 24) == 73 )
    {
      if ( !v14 )
        return 0;
      v27 = *(_DWORD *)(a1 + 56);
      if ( v27 >= *(_DWORD *)(a1 + 60) )
        return 0;
      v28 = a1;
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v27) = v14;
      *(_DWORD *)(a1 + 56) = v27 + 1;
LABEL_47:
      v29 = sub_4A6F70(v28);
      return sub_4A5090(a1, 4, v14, v29);
    }
    return v14;
  }
  if ( v3 != 78 )
    goto LABEL_43;
  *(_QWORD *)(a1 + 24) = v1 + 1;
  v16 = sub_4A83A0(a1, &v47, 1);
  if ( !v16 )
    return 0;
  v17 = sub_4A5118(a1, 0);
  v18 = *(unsigned __int8 **)(a1 + 24);
  v19 = v17;
  v20 = 0;
  for ( i = *v18; ; i = *++v18 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !i )
            goto LABEL_78;
          if ( i != 68 )
            break;
          v39 = (v18[1] & 0xDF) == 0x54 ? sub_4A7538(a1) : sub_4A8738(a1);
LABEL_62:
          v38 = 1;
          if ( v20 )
            goto LABEL_66;
          v18 = *(unsigned __int8 **)(a1 + 24);
          v20 = v39;
          i = *v18;
LABEL_39:
          if ( i == 69 )
            break;
          if ( !v20 )
            goto LABEL_78;
          v26 = *(_DWORD *)(a1 + 56);
          if ( v26 >= *(_DWORD *)(a1 + 60) )
            goto LABEL_78;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v26) = v20;
          *(_DWORD *)(a1 + 56) = v26 + 1;
          i = *v18;
        }
        if ( (unsigned __int8)(i - 48) > 9u && (unsigned __int8)(i - 97) > 0x19u )
        {
          v23 = i == 67 || i == 85;
          if ( !v23 && i != 76 )
            break;
        }
        v25 = sub_4A8738(a1);
        if ( v20 )
          goto LABEL_68;
        v20 = v25;
LABEL_38:
        v18 = *(unsigned __int8 **)(a1 + 24);
        v23 = i == 83;
        i = *v18;
        if ( !v23 )
          goto LABEL_39;
      }
      if ( i != 83 )
        break;
      v25 = sub_4A5718(a1, 1);
      if ( v20 )
      {
LABEL_68:
        v20 = sub_4A5090(a1, 1, v20, v25);
        goto LABEL_38;
      }
      v18 = *(unsigned __int8 **)(a1 + 24);
      v20 = v25;
      i = *v18;
    }
    if ( i == 73 )
    {
      if ( !v20 )
        goto LABEL_78;
      *(_QWORD *)(a1 + 24) = v18 + 1;
      v39 = sub_4A6E30(a1);
      v38 = 4;
LABEL_66:
      v20 = sub_4A5090(a1, v38, v20, v39);
      goto LABEL_38;
    }
    if ( i == 84 )
    {
      v39 = sub_4A54A0(a1);
      goto LABEL_62;
    }
    if ( i == 69 )
      break;
    if ( i != 77 || v20 == 0 )
    {
LABEL_78:
      *v16 = 0;
      return 0;
    }
    *(_QWORD *)(a1 + 24) = v18 + 1;
  }
  *v16 = v20;
  if ( !v20 )
    return 0;
  if ( v19 )
  {
    *(_QWORD *)(v19 + 8) = v47;
    v47 = v19;
  }
  if ( *v18 != 69 )
    return 0;
  v45 = v47;
  *(_QWORD *)(a1 + 24) = v18 + 1;
  return v45;
}
