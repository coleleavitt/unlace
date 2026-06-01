/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A8CC0
// Address: 0x00000000004A8CC0

//----- (00000000004A8CC0) ----------------------------------------------------
__int64 __fastcall sub_4A8CC0(__int64 a1, char a2)
{
  unsigned __int8 *v2; // x2
  int v5; // w1
  int v7; // w21
  __int64 v8; // x20
  int v9; // w0
  int i; // w0
  int *j; // x2
  __int64 v15; // x2
  int v16; // w3
  int v17; // w1
  unsigned int v18; // w1
  __int64 v19; // x3
  __int64 v20; // x8
  __int64 v21; // x2
  int v22; // w1
  unsigned int v23; // w1
  __int64 v24; // x1
  unsigned int v25; // w0
  __int64 v26; // x1
  unsigned int v27; // w0
  int v28; // w0
  _BYTE *v29; // x1
  _BYTE *v30; // x8
  int v31; // w9
  int v32; // w11
  int v33; // w10
  int v34; // w0
  int v35; // w1
  int *v36; // x3
  __int64 v37; // x0
  __int64 v38; // x1
  int v39; // w4
  int v40; // w3
  int v42; // w0
  __int64 v43; // x5
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x20
  _BYTE *v47; // x0
  __int64 v48; // x0

  v2 = *(unsigned __int8 **)(a1 + 24);
  v5 = *v2;
  if ( v5 == 71 || v5 == 84 )
  {
    v16 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v16 + 20;
    v17 = *v2;
    if ( v17 == 84 )
    {
      *(_QWORD *)(a1 + 24) = v2 + 1;
      if ( v2[1] )
      {
        *(_QWORD *)(a1 + 24) = v2 + 2;
        v23 = v2[1];
        if ( v23 == 83 )
        {
          v21 = sub_4A7538(a1);
          v19 = 0;
          v22 = 13;
          return sub_4A5090(a1, v22, v21, v19);
        }
        if ( v23 <= 0x53 )
        {
          if ( v23 == 72 )
          {
            v21 = sub_4A6FA0(a1);
            v19 = 0;
            v22 = 20;
            return sub_4A5090(a1, v22, v21, v19);
          }
          if ( v23 > 0x48 )
          {
            if ( v23 == 73 )
            {
              v21 = sub_4A7538(a1);
              v19 = 0;
              v22 = 12;
              return sub_4A5090(a1, v22, v21, v19);
            }
            if ( v23 == 74 )
            {
              v21 = sub_4A7538(a1);
              v19 = 0;
              v22 = 18;
              return sub_4A5090(a1, v22, v21, v19);
            }
          }
          else if ( v23 == 67 )
          {
            v46 = sub_4A7538(a1);
            if ( (sub_4A5320((unsigned __int8 **)(a1 + 24)) & 0x80000000) == 0 )
            {
              v47 = *(_BYTE **)(a1 + 24);
              if ( *v47 == 95 )
              {
                *(_QWORD *)(a1 + 24) = v47 + 1;
                v21 = sub_4A7538(a1);
                v19 = v46;
                *(_DWORD *)(a1 + 80) += 5;
                v22 = 11;
                return sub_4A5090(a1, v22, v21, v19);
              }
            }
          }
          else if ( v23 == 70 )
          {
            v21 = sub_4A7538(a1);
            v19 = 0;
            v22 = 14;
            return sub_4A5090(a1, v22, v21, v19);
          }
        }
        else
        {
          if ( v23 == 87 )
          {
            v21 = sub_4A6FA0(a1);
            v19 = 0;
            v22 = 21;
            return sub_4A5090(a1, v22, v21, v19);
          }
          if ( v23 <= 0x57 )
          {
            if ( v23 == 84 )
            {
              *(_DWORD *)(a1 + 80) = v16 + 10;
              v21 = sub_4A7538(a1);
              v19 = 0;
              v22 = 10;
              return sub_4A5090(a1, v22, v21, v19);
            }
            if ( v23 == 86 )
            {
              *(_DWORD *)(a1 + 80) = v16 + 15;
              v21 = sub_4A7538(a1);
              v19 = 0;
              v22 = 9;
              return sub_4A5090(a1, v22, v21, v19);
            }
          }
          else if ( v23 == 104 )
          {
            if ( (unsigned int)sub_4A5D08(a1, 104) )
            {
              v21 = sub_4A8CC0(a1, 0);
              v19 = 0;
              v22 = 15;
              return sub_4A5090(a1, v22, v21, v19);
            }
          }
          else if ( v23 == 118 )
          {
            if ( (unsigned int)sub_4A5D08(a1, 118) )
            {
              v21 = sub_4A8CC0(a1, 0);
              v19 = 0;
              v22 = 16;
              return sub_4A5090(a1, v22, v21, v19);
            }
          }
          else if ( v23 == 99 && (unsigned int)sub_4A5D08(a1, 0) && (unsigned int)sub_4A5D08(a1, 0) )
          {
            v21 = sub_4A8CC0(a1, 0);
            v19 = 0;
            v22 = 17;
            return sub_4A5090(a1, v22, v21, v19);
          }
        }
      }
      return 0;
    }
    if ( v17 != 71 )
      return 0;
    *(_QWORD *)(a1 + 24) = v2 + 1;
    if ( !v2[1] )
      return 0;
    *(_QWORD *)(a1 + 24) = v2 + 2;
    v18 = v2[1];
    if ( v18 == 84 )
    {
      if ( v2[2] && (*(_QWORD *)(a1 + 24) = v2 + 3, v2[2] == 110) )
      {
        v48 = sub_4A8CC0(a1, 0);
        v19 = 0;
        v21 = v48;
        v22 = 73;
      }
      else
      {
        v21 = sub_4A8CC0(a1, 0);
        v19 = 0;
        v22 = 72;
      }
      return sub_4A5090(a1, v22, v21, v19);
    }
    if ( v18 <= 0x54 )
    {
      if ( v18 == 65 )
      {
        v45 = sub_4A8CC0(a1, 0);
        v19 = 0;
        v21 = v45;
        v22 = 23;
        return sub_4A5090(a1, v22, v21, v19);
      }
      if ( v18 == 82 )
      {
        sub_4A6FA0(a1);
        v19 = sub_4A53C0(a1);
        v21 = v20;
        v22 = 22;
        return sub_4A5090(a1, v22, v21, v19);
      }
      return 0;
    }
    if ( v18 == 86 )
    {
      v21 = sub_4A6FA0(a1);
      v19 = 0;
      v22 = 19;
      return sub_4A5090(a1, v22, v21, v19);
    }
    if ( v18 != 114 )
      return 0;
    v28 = sub_4A5320((unsigned __int8 **)(a1 + 24));
    if ( v28 <= 1 )
      return 0;
    v29 = *(_BYTE **)(a1 + 24);
    if ( !*v29 )
      return 0;
    v30 = v29 + 1;
    *(_QWORD *)(a1 + 24) = v29 + 1;
    if ( *v29 != 95 )
      return 0;
    v31 = v28 - 1;
    v21 = 0;
    v32 = 24;
    v33 = 64;
    while ( 1 )
    {
      if ( !*v30 )
        return 0;
      if ( *v30 == 36 )
      {
        v34 = (unsigned __int8)v30[1];
        switch ( v34 )
        {
          case 'S':
            v34 = 47;
            break;
          case '_':
            v34 = 46;
            break;
          case '$':
            break;
          default:
            return 0;
        }
        v35 = *(_DWORD *)(a1 + 40);
        v30 = (_BYTE *)(*(_QWORD *)(a1 + 24) + 2LL);
        if ( v35 >= *(_DWORD *)(a1 + 44) )
        {
          *(_QWORD *)(a1 + 24) = v30;
          return 0;
        }
        v31 -= 2;
        v36 = (int *)(*(_QWORD *)(a1 + 32) + v35 * (__int64)v32);
        v36[1] = 0;
        *(_DWORD *)(a1 + 40) = v35 + 1;
        *v36 = v33;
        v36[2] = v34;
        *(_QWORD *)(a1 + 24) = v30;
      }
      else
      {
        v38 = 1;
        do
        {
          v39 = v38;
          if ( (int)v38 >= v31 )
            break;
          v40 = (unsigned __int8)v30[v38++];
        }
        while ( v40 != 36 && v40 != 0 );
        v42 = *(_DWORD *)(a1 + 40);
        if ( v42 >= *(_DWORD *)(a1 + 44) )
        {
          v8 = 0;
          *(_QWORD *)(a1 + 24) += v39;
          return v8;
        }
        v43 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 40) = v42 + 1;
        v36 = (int *)(v43 + v42 * (__int64)v32);
        v44 = *(_QWORD *)(a1 + 24);
        v31 -= v39;
        v36[1] = 0;
        *v36 = 0;
        *((_QWORD *)v36 + 1) = v30;
        v30 = (_BYTE *)(v44 + v39);
        v36[4] = v39;
        *(_QWORD *)(a1 + 24) = v30;
      }
      if ( v21 )
      {
        v21 = sub_4A5090(a1, 63, v21, (__int64)v36);
        if ( !v21 )
          return 0;
      }
      else
      {
        v21 = (__int64)v36;
      }
      if ( v31 <= 0 )
      {
        v19 = 0;
        v22 = 62;
        return sub_4A5090(a1, v22, v21, v19);
      }
    }
  }
  v7 = a2 & 1;
  v8 = sub_4A6FA0(a1);
  if ( !v8 )
    v7 = 0;
  if ( v7 && (*(_DWORD *)(a1 + 16) & 1) == 0 )
  {
    for ( i = *(_DWORD *)v8; (unsigned int)(*(_DWORD *)v8 - 28) <= 4; i = *(_DWORD *)v8 )
      v8 = *(_QWORD *)(v8 + 8);
    if ( i == 2 )
    {
      for ( j = *(int **)(v8 + 16); sub_4A52F8(*j); j = *(int **)(v15 + 8) )
        ;
      *(_QWORD *)(v8 + 16) = v15;
    }
    return v8;
  }
  v9 = **(unsigned __int8 **)(a1 + 24);
  if ( v9 == 69 || v9 == 0 || v8 == 0 )
    return v8;
  v24 = v8;
  while ( 1 )
  {
    v25 = *(_DWORD *)v24;
    if ( *(_DWORD *)v24 <= 0x20u )
      break;
    if ( v25 != 76 && (v25 < 0x4C || v25 - 78 > 1) )
      goto LABEL_73;
LABEL_79:
    v24 = *(_QWORD *)(v24 + 8);
    if ( !v24 )
      goto LABEL_74;
  }
  if ( v25 >= 0x1C )
    goto LABEL_79;
  if ( v25 == 4 )
  {
    v26 = *(_QWORD *)(v24 + 8);
    if ( !v26 )
      goto LABEL_54;
    while ( 1 )
    {
      v27 = *(_DWORD *)v26;
      if ( *(_DWORD *)v26 > 8u )
        break;
      if ( v27 >= 7 )
        goto LABEL_73;
      if ( (unsigned int)(*(_DWORD *)v26 - 1) <= 1 )
      {
        v26 = *(_QWORD *)(v26 + 16);
        if ( v26 )
          continue;
      }
      goto LABEL_54;
    }
    if ( v27 != 52 )
    {
LABEL_54:
      LODWORD(v24) = 1;
      goto LABEL_74;
    }
  }
LABEL_73:
  LODWORD(v24) = 0;
LABEL_74:
  v37 = sub_4A8628(a1, v24);
  v21 = v8;
  v19 = v37;
  v22 = 3;
  return sub_4A5090(a1, v22, v21, v19);
}
// 4A8D74: variable 'v15' is possibly undefined
// 4A8DF8: variable 'v20' is possibly undefined
// 4A8F50: variable 'v30' is possibly undefined
// 4A8F9C: variable 'v31' is possibly undefined
// 4A8F94: variable 'v32' is possibly undefined
// 4A8FAC: variable 'v33' is possibly undefined
