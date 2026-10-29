/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFBDC
// Address: 0x00000000000BFBDC

//----- (00000000000BFBDC) ----------------------------------------------------
__int64 __fastcall sub_BFBDC(__int64 result, char *a2)
{
  int *v3; // x22
  int *v4; // x21
  __int64 v5; // x9
  __int64 v6; // x8
  int *v7; // x20
  __int64 v8; // x10
  __int64 v9; // x23
  int *v10; // x22
  unsigned __int64 v11; // x8
  int v12; // w9
  int v13; // w10
  char *v14; // x8
  bool v15; // cc
  __int64 v16; // x10
  unsigned __int64 v17; // x23
  __int64 v18; // x10
  bool v19; // zf
  int v20; // w9
  bool v21; // cc
  int v22; // t1
  bool v23; // cc
  bool v24; // cc
  __int64 v25; // x9
  bool v26; // w24
  int v27; // w8
  bool v28; // cc
  __int64 v29; // x9
  __int64 v30; // x9
  int v31; // w8
  bool v32; // cc
  int v33; // t1
  bool v34; // cc
  char v35; // w8
  unsigned int v36; // w8
  int v37; // w8
  int *v38; // x21
  int *v39; // x9
  __int64 v40; // x8
  int *v41; // x10
  int v42; // w9
  bool v43; // cc
  __int64 v44; // x9
  __int64 v45; // x10
  char *v46; // x12
  int v47; // w13
  bool v48; // cc
  __int64 *v49; // x22
  int v50; // w8
  int v51; // w9
  __int64 v52; // x9
  __int64 v53; // x9
  bool v54; // cc
  int v55; // w9
  __int64 v56; // x8
  bool v57; // cc
  __int64 v58; // x9

  v3 = (int *)result;
  while ( 2 )
  {
    v4 = (int *)(a2 - 8);
LABEL_4:
    v5 = a2 - (char *)v3;
    v6 = (a2 - (char *)v3) >> 3;
    v7 = v3;
    switch ( v6 )
    {
      case 0LL:
      case 1LL:
        return result;
      case 2LL:
        v37 = *((_DWORD *)a2 - 2);
        if ( v37 == *v3 )
        {
          if ( *((_DWORD *)a2 - 1) >= v3[1] )
            return result;
        }
        else if ( v37 >= *v3 )
        {
          return result;
        }
        v52 = *(_QWORD *)v3;
        *(_QWORD *)v3 = *((_QWORD *)a2 - 1);
        *((_QWORD *)a2 - 1) = v52;
        return result;
      case 3LL:
        return sub_C0174(v3, v3 + 2, (int *)a2 - 2);
      case 4LL:
        v49 = (__int64 *)(v3 + 4);
        result = sub_C0174(v7, v7 + 2, v7 + 4);
        v50 = *((_DWORD *)a2 - 2);
        v51 = v7[4];
        if ( v50 == v51 )
        {
          if ( *((_DWORD *)a2 - 1) >= v7[5] )
            return result;
        }
        else if ( v50 >= v51 )
        {
          return result;
        }
        v53 = *v49;
        *v49 = *((_QWORD *)a2 - 1);
        *((_QWORD *)a2 - 1) = v53;
        LODWORD(v53) = v7[2];
        v54 = *(_DWORD *)v49 < (int)v53;
        if ( *(_DWORD *)v49 == (_DWORD)v53 )
          v54 = v7[5] < v7[3];
        if ( v54 )
        {
          v55 = *v7;
          v56 = *((_QWORD *)v7 + 2);
          v57 = *v7 <= (int)v56;
          *(int8x16_t *)(v7 + 2) = vextq_s8(*(int8x16_t *)(v7 + 2), *(int8x16_t *)(v7 + 2), 8u);
          if ( v55 == (_DWORD)v56 )
            v57 = v7[1] <= SHIDWORD(v56);
          if ( !v57 )
          {
            v58 = *(_QWORD *)v7;
            *(_QWORD *)v7 = v56;
            *((_QWORD *)v7 + 1) = v58;
          }
        }
        return result;
      case 5LL:
        return sub_C0288(v3, v3 + 2, v3 + 4, v3 + 6, (int *)a2 - 2);
      default:
        if ( v5 > 247 )
        {
          if ( v6 >= 0 )
            v8 = (a2 - (char *)v3) >> 3;
          else
            v8 = v6 + 1;
          v9 = v8 >> 1;
          v10 = &v3[2 * (v8 >> 1)];
          if ( v5 < 7993 )
          {
            result = sub_C0174(v7, &v7[2 * (v8 >> 1)], (int *)a2 - 2);
          }
          else
          {
            v11 = v6 + (v6 < 0 ? 3uLL : 0);
            result = sub_C0288(
                       v7,
                       (int *)((char *)v7 + ((2 * v11) & 0xFFFFFFFFFFFFFFF8LL)),
                       &v7[2 * (v8 >> 1)],
                       (int *)((char *)v10 + ((2 * v11) & 0xFFFFFFFFFFFFFFF8LL)),
                       (int *)a2 - 2);
          }
          v12 = *v7;
          v13 = *v10;
          if ( *v7 == *v10 )
          {
            if ( v7[1] >= v7[2 * v9 + 1] )
              goto LABEL_14;
          }
          else if ( v12 >= v13 )
          {
LABEL_14:
            if ( v7 != (int *)(a2 - 16) )
            {
              v14 = a2 - 16;
              while ( 1 )
              {
                v15 = *(_DWORD *)v14 < v13;
                if ( *(_DWORD *)v14 == v13 )
                  v15 = *((_DWORD *)v14 + 1) < v7[2 * v9 + 1];
                if ( v15 )
                  break;
                v14 -= 8;
                if ( v7 == (int *)v14 )
                  goto LABEL_51;
              }
              v16 = *(_QWORD *)v7;
              LODWORD(result) = result + 1;
              *(_QWORD *)v7 = *(_QWORD *)v14;
              *(_QWORD *)v14 = v16;
              goto LABEL_24;
            }
LABEL_51:
            v3 = v7 + 2;
            if ( v12 == *v4 )
            {
              if ( v7[1] >= *((_DWORD *)a2 - 1) )
              {
LABEL_53:
                if ( v3 == v4 )
                  return result;
                v3 = v7 + 4;
                while ( 1 )
                {
                  v27 = *(v3 - 2);
                  v28 = v12 < v27;
                  if ( v12 == v27 )
                    v28 = v7[1] < *(v3 - 1);
                  if ( v28 )
                    break;
                  v3 += 2;
                  if ( a2 == (char *)v3 )
                    return result;
                }
                v29 = *((_QWORD *)v3 - 1);
                *((_QWORD *)v3 - 1) = *(_QWORD *)v4;
                *(_QWORD *)v4 = v29;
                if ( v3 == v4 )
                  return result;
LABEL_66:
                while ( 1 )
                {
                  v31 = *v7;
                  while ( 1 )
                  {
                    v32 = v31 < *v3;
                    if ( v31 == *v3 )
                      v32 = v7[1] < v3[1];
                    if ( v32 )
                      break;
                    v3 += 2;
                  }
                  do
                  {
                    while ( 1 )
                    {
                      v33 = *(v4 - 2);
                      v4 -= 2;
                      v34 = v31 < v33;
                      if ( v31 != v33 )
                        break;
                      if ( v7[1] >= v4[1] )
                        goto LABEL_75;
                    }
                  }
                  while ( v34 );
LABEL_75:
                  if ( v3 >= v4 )
                    break;
                  v30 = *(_QWORD *)v3;
                  *(_QWORD *)v3 = *(_QWORD *)v4;
                  v3 += 2;
                  *(_QWORD *)v4 = v30;
                }
                v35 = 4;
LABEL_77:
                v36 = v35 & 7;
                if ( v36 <= 4 && ((1 << v36) & 0x15) != 0 )
                  continue;
                return result;
              }
            }
            else if ( v12 >= *v4 )
            {
              goto LABEL_53;
            }
            if ( v3 == v4 )
              return result;
            goto LABEL_66;
          }
          v14 = a2 - 8;
LABEL_24:
          v17 = (unsigned __int64)(v7 + 2);
          if ( v7 + 2 < (int *)v14 )
          {
            while ( 1 )
            {
              v20 = *v10;
              while ( 1 )
              {
                v21 = *(_DWORD *)v17 < v20;
                if ( *(_DWORD *)v17 == v20 )
                  v21 = *(_DWORD *)(v17 + 4) < v10[1];
                if ( !v21 )
                  break;
                v17 += 8LL;
              }
              do
              {
                while ( 1 )
                {
                  v22 = *((_DWORD *)v14 - 2);
                  v14 -= 8;
                  v23 = v22 < v20;
                  if ( v22 != v20 )
                    break;
                  if ( *((_DWORD *)v14 + 1) < v10[1] )
                    goto LABEL_39;
                }
              }
              while ( !v23 );
LABEL_39:
              if ( v17 > (unsigned __int64)v14 )
                break;
              v18 = *(_QWORD *)v17;
              v19 = v10 == (int *)v17;
              LODWORD(result) = result + 1;
              *(_QWORD *)v17 = *(_QWORD *)v14;
              v17 += 8LL;
              if ( v19 )
                v10 = (int *)v14;
              *(_QWORD *)v14 = v18;
            }
          }
          if ( (int *)v17 != v10 )
          {
            v24 = *v10 < *(_DWORD *)v17;
            if ( *v10 == *(_DWORD *)v17 )
              v24 = v10[1] < *(_DWORD *)(v17 + 4);
            if ( v24 )
            {
              v25 = *(_QWORD *)v17;
              LODWORD(result) = result + 1;
              *(_QWORD *)v17 = *(_QWORD *)v10;
              *(_QWORD *)v10 = v25;
            }
          }
          if ( (_DWORD)result )
          {
LABEL_49:
            if ( (__int64)(v17 - (_QWORD)v7) < (__int64)&a2[-v17] )
            {
              result = sub_BFBDC(v7, v17);
              v3 = (int *)(v17 + 8);
              goto LABEL_4;
            }
            result = sub_BFBDC(v17 + 8, a2);
            a2 = (char *)v17;
            v3 = v7;
            continue;
          }
          v3 = (int *)(v17 + 8);
          v26 = sub_C0438((__int64 *)v7, (char *)v17);
          result = sub_C0438((__int64 *)(v17 + 8), a2);
          if ( (result & 1) == 0 )
          {
            if ( v26 )
              goto LABEL_4;
            goto LABEL_49;
          }
          if ( v26 )
          {
            v35 = 1;
          }
          else
          {
            a2 = (char *)v17;
            v35 = 2;
          }
          v3 = v7;
          goto LABEL_77;
        }
        v38 = v3 + 4;
        result = sub_C0174(v3, v3 + 2, v3 + 4);
        v39 = v3 + 6;
        if ( v3 + 6 != (int *)a2 )
        {
          v40 = 0;
          do
          {
            v41 = v38;
            v38 = v39;
            v42 = *v39;
            v43 = v42 < *v41;
            if ( v42 == *v41 )
              v43 = v38[1] < v41[1];
            if ( v43 )
            {
              v44 = *(_QWORD *)v38;
              *(_QWORD *)v38 = *(_QWORD *)v41;
              if ( v41 != v3 )
              {
                v45 = v40;
                while ( 1 )
                {
                  v46 = (char *)v3 + v45;
                  v47 = *(int *)((char *)v3 + v45 + 8);
                  v48 = v47 <= (int)v44;
                  if ( v47 == (_DWORD)v44 )
                    v48 = *((_DWORD *)v46 + 3) <= SHIDWORD(v44);
                  if ( v48 )
                    break;
                  v45 -= 8;
                  *((_QWORD *)v46 + 2) = *((_QWORD *)v46 + 1);
                  if ( v45 == -16 )
                  {
                    v41 = v3;
                    goto LABEL_102;
                  }
                }
                v41 = (int *)((char *)v3 + v45 + 16);
              }
LABEL_102:
              *(_QWORD *)v41 = v44;
            }
            v39 = v38 + 2;
            v40 += 8;
          }
          while ( v38 + 2 != (int *)a2 );
        }
        return result;
    }
  }
}
