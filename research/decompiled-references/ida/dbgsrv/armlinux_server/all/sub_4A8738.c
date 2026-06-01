/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A8738
// Address: 0x00000000004A8738

//----- (00000000004A8738) ----------------------------------------------------
__int64 __fastcall sub_4A8738(__int64 a1)
{
  unsigned __int8 *v1; // x4
  int v3; // w3
  __int64 v4; // x0
  __int64 v5; // x20
  int v7; // w1
  int v8; // w0
  int v9; // w1
  unsigned __int8 *v10; // x5
  __int64 v11; // x3
  int v12; // w4
  _BYTE *v13; // x3
  __int64 v14; // x0
  int v15; // w2
  _DWORD *v16; // x0
  unsigned int v17; // w1
  int v18; // w1
  int v19; // w3
  int v20; // w5
  __int64 v21; // x3
  __int64 v22; // x1
  unsigned int v23; // w1
  int v24; // w21
  int v25; // w1
  int v26; // w3
  __int64 v27; // x2
  __int64 v28; // x1
  unsigned __int8 *v29; // x3
  __int64 v30; // x8
  unsigned __int8 *v31; // x0
  int v32; // w0
  __int64 v33; // x8
  int v34; // w1
  unsigned __int8 *v35; // x4
  int v36; // w7
  __int64 v37; // x3
  int v38; // w1
  int v39; // w4
  int v40; // w6
  __int64 v41; // x3
  int v42; // w1
  int v43; // w7
  unsigned int v44; // w0

  v1 = *(unsigned __int8 **)(a1 + 24);
  v3 = *v1;
  if ( (unsigned __int8)(v3 - 48) <= 9u )
  {
    v5 = sub_4A5530(a1);
    if ( **(_BYTE **)(a1 + 24) != 66 )
      return v5;
    return sub_4A5698(a1, v5);
  }
  if ( (unsigned __int8)(v3 - 97) <= 0x19u )
  {
    if ( v3 == 111 && v1[1] == 110 )
      *(_QWORD *)(a1 + 24) = v1 + 2;
    v4 = sub_4A80C8(a1);
    v5 = v4;
    if ( v4 )
    {
      if ( *(_DWORD *)v4 == 49 )
      {
        v11 = *(_QWORD *)(v4 + 8);
        v12 = *(_DWORD *)(v11 + 16);
        v13 = *(_BYTE **)v11;
        *(_DWORD *)(a1 + 80) += 7 + v12;
        if ( *v13 == 108 && v13[1] == 105 && !v13[2] )
        {
          v14 = sub_4A5530(a1);
          v5 = sub_4A5090(a1, 54, v5, v14);
        }
      }
    }
    goto LABEL_6;
  }
  if ( (unsigned __int8)(v3 - 67) <= 1u )
  {
    v16 = *(_DWORD **)(a1 + 72);
    if ( v16 && (!*v16 || *v16 == 24) )
    {
      *(_DWORD *)(a1 + 80) += v16[4];
      v3 = *v1;
    }
    if ( v3 != 67 )
    {
      if ( v3 != 68 )
      {
        v5 = 0;
        goto LABEL_7;
      }
      v17 = v1[1];
      if ( v17 == 50 )
      {
        v15 = 3;
      }
      else if ( v17 > 0x32 )
      {
        if ( v17 == 52 )
        {
          v15 = 4;
        }
        else
        {
          v15 = 5;
          if ( v17 != 53 )
            return 0;
        }
      }
      else if ( v17 == 48 )
      {
        v15 = 1;
      }
      else
      {
        v15 = 2;
        if ( v17 != 49 )
          return 0;
      }
      v18 = *(_DWORD *)(a1 + 40);
      v19 = *(_DWORD *)(a1 + 44);
      *(_QWORD *)(a1 + 24) = v1 + 2;
      if ( v18 < v19
        && (v20 = v18 + 1,
            v21 = *(_QWORD *)(a1 + 32),
            v22 = 24LL * v18,
            v5 = v21 + v22,
            *(_DWORD *)(v21 + v22 + 4) = 0,
            *(_DWORD *)(a1 + 40) = v20,
            v16) )
      {
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)(v21 + v22) = 8;
        *(_DWORD *)(v5 + 8) = v15;
        *(_QWORD *)(v5 + 16) = v16;
        v3 = v1[2];
      }
      else
      {
        v3 = v1[2];
        v5 = 0;
      }
LABEL_7:
      if ( v3 != 66 )
        return v5;
      return sub_4A5698(a1, v5);
    }
    v23 = v1[1];
    if ( v23 != 73 )
    {
      if ( v23 == 51 )
      {
        v24 = 3;
        *(_QWORD *)(a1 + 24) = v1 + 2;
        goto LABEL_52;
      }
      if ( v23 > 0x33 )
      {
        if ( v23 == 52 )
        {
          v24 = 4;
          *(_QWORD *)(a1 + 24) = v1 + 2;
          goto LABEL_52;
        }
        if ( v23 == 53 )
        {
          v24 = 5;
          *(_QWORD *)(a1 + 24) = v1 + 2;
          goto LABEL_52;
        }
      }
      else
      {
        if ( v23 == 49 )
        {
          v24 = 1;
          *(_QWORD *)(a1 + 24) = v1 + 2;
          goto LABEL_52;
        }
        if ( v23 == 50 )
        {
          v24 = 2;
          *(_QWORD *)(a1 + 24) = v1 + 2;
LABEL_52:
          v25 = *(_DWORD *)(a1 + 40);
          if ( v25 < *(_DWORD *)(a1 + 44)
            && (v26 = v25 + 1,
                v27 = *(_QWORD *)(a1 + 32),
                v28 = 24LL * v25,
                v5 = v27 + v28,
                *(_DWORD *)(v27 + v28 + 4) = 0,
                *(_DWORD *)(a1 + 40) = v26,
                v16) )
          {
            v29 = *(unsigned __int8 **)(a1 + 24);
            *(_DWORD *)(v5 + 4) = 0;
            *(_DWORD *)(v27 + v28) = 7;
            *(_DWORD *)(v5 + 8) = v24;
            *(_QWORD *)(v5 + 16) = v16;
            v3 = *v29;
          }
          else
          {
            v5 = 0;
            v3 = **(unsigned __int8 **)(a1 + 24);
          }
          goto LABEL_7;
        }
      }
      return 0;
    }
    *(_QWORD *)(a1 + 24) = v1 + 1;
    v44 = v1[2];
    if ( v44 == 51 )
    {
      v24 = 3;
      *(_QWORD *)(a1 + 24) = v1 + 3;
      goto LABEL_73;
    }
    if ( v44 > 0x33 )
    {
      if ( v44 == 52 )
      {
        v24 = 4;
        *(_QWORD *)(a1 + 24) = v1 + 3;
        goto LABEL_73;
      }
      if ( v44 == 53 )
      {
        v24 = 5;
        *(_QWORD *)(a1 + 24) = v1 + 3;
        goto LABEL_73;
      }
    }
    else
    {
      if ( v44 == 49 )
      {
        v24 = 1;
        *(_QWORD *)(a1 + 24) = v1 + 3;
        goto LABEL_73;
      }
      if ( v44 == 50 )
      {
        v24 = 2;
        *(_QWORD *)(a1 + 24) = v1 + 3;
LABEL_73:
        sub_4A7538(a1);
        v16 = *(_DWORD **)(a1 + 72);
        goto LABEL_52;
      }
    }
    v3 = v1[1];
    v5 = 0;
    goto LABEL_7;
  }
  if ( v3 == 76 )
  {
    *(_QWORD *)(a1 + 24) = v1 + 1;
    v5 = sub_4A5530(a1);
    if ( v5 && (unsigned int)sub_4A5990(a1) )
      goto LABEL_6;
    return 0;
  }
  if ( v3 != 85 )
    return 0;
  v7 = v1[1];
  if ( v7 == 108 )
  {
    *(_QWORD *)(a1 + 24) = v1 + 1;
    v5 = 0;
    v3 = v1[1];
    if ( v3 == 108 )
    {
      *(_QWORD *)(a1 + 24) = v1 + 2;
      v30 = sub_4A8290(a1);
      v31 = *(unsigned __int8 **)(a1 + 24);
      v3 = *v31;
      if ( v30 )
      {
        if ( v3 == 69 )
        {
          *(_QWORD *)(a1 + 24) = v31 + 1;
          v32 = sub_4A5428(a1);
          if ( v32 < 0 )
          {
            v5 = 0;
            v3 = **(unsigned __int8 **)(a1 + 24);
          }
          else
          {
            v34 = *(_DWORD *)(a1 + 40);
            v35 = *(unsigned __int8 **)(a1 + 24);
            if ( v34 >= *(_DWORD *)(a1 + 44)
              || (v40 = v34 + 1,
                  v41 = 24LL * v34,
                  v42 = *(_DWORD *)(a1 + 56),
                  v43 = *(_DWORD *)(a1 + 60),
                  v5 = *(_QWORD *)(a1 + 32) + v41,
                  *(_DWORD *)(v5 + 4) = 0,
                  *(_DWORD *)(a1 + 40) = v40,
                  *(_DWORD *)v5 = 69,
                  *(_QWORD *)(v5 + 8) = v33,
                  *(_DWORD *)(v5 + 16) = v32,
                  v42 >= v43) )
            {
              v3 = *v35;
              v5 = 0;
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v42) = v5;
              *(_DWORD *)(a1 + 56) = v42 + 1;
              v3 = *v35;
            }
          }
        }
      }
    }
    goto LABEL_7;
  }
  if ( v7 == 116 )
  {
    *(_QWORD *)(a1 + 24) = v1 + 1;
    v5 = 0;
    v3 = v1[1];
    if ( v3 != 116 )
      goto LABEL_7;
    *(_QWORD *)(a1 + 24) = v1 + 2;
    v8 = sub_4A5428(a1);
    if ( (v8 & 0x80000000) == 0 )
    {
      v9 = *(_DWORD *)(a1 + 40);
      v10 = *(unsigned __int8 **)(a1 + 24);
      if ( v9 >= *(_DWORD *)(a1 + 44)
        || (v36 = v9 + 1,
            v37 = 24LL * v9,
            v39 = *(_DWORD *)(a1 + 56),
            v38 = *(_DWORD *)(a1 + 60),
            v5 = *(_QWORD *)(a1 + 32) + v37,
            *(_DWORD *)(v5 + 4) = 0,
            *(_DWORD *)(a1 + 40) = v36,
            *(_DWORD *)v5 = 71,
            *(_QWORD *)(v5 + 8) = v8,
            v39 >= v38) )
      {
        v3 = *v10;
        v5 = 0;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v39) = v5;
        *(_DWORD *)(a1 + 56) = v39 + 1;
        v3 = *v10;
      }
      goto LABEL_7;
    }
LABEL_6:
    v3 = **(unsigned __int8 **)(a1 + 24);
    goto LABEL_7;
  }
  return 0;
}
// 4A8B50: variable 'v33' is possibly undefined
