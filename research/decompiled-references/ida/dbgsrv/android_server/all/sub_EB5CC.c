/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EB5CC
// Address: 0x00000000000EB5CC

//----- (00000000000EB5CC) ----------------------------------------------------
__int64 __fastcall sub_EB5CC(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x10
  unsigned __int8 *v4; // x11
  bool v5; // zf
  unsigned __int64 v6; // x10
  unsigned __int8 *v7; // x9
  int v8; // w21
  __int64 v9; // x20
  unsigned __int8 *v10; // x22
  _QWORD *v11; // x8
  __int64 v12; // x9
  unsigned __int8 **v13; // x0
  __int16 v14; // w8
  char v15; // w10
  __int64 v16; // x9
  unsigned __int8 *v17; // x22
  unsigned __int8 *v18; // x23
  unsigned __int8 *v19; // x9
  unsigned __int64 v20; // x10
  __int64 v21; // x11
  bool v22; // cc
  __int64 v23; // x10
  unsigned __int8 *v24; // x10
  __int64 v25; // x11
  unsigned __int8 *v26; // x12
  unsigned __int64 v27; // x11
  __int64 v28; // x0
  unsigned __int8 *v29; // x20
  __int64 v30; // x21
  _QWORD *v31; // x8
  __int64 v32; // x9
  unsigned __int8 **v33; // x0
  __int64 v34; // x10
  char *v35; // x20
  unsigned __int16 v36; // w11
  __int64 (__fastcall **v37)(); // x9
  __int64 v38; // x0
  unsigned __int8 *v39; // x20
  __int64 v40; // x9
  unsigned __int8 **v41; // x0

  v2 = *a1;
  v1 = a1[1];
  if ( *a1 != v1 )
  {
    if ( *v2 == 85 )
    {
      *a1 = v2 + 1;
      if ( v1 != v2 + 1 && (unsigned int)v2[1] - 48 <= 9 )
      {
        v4 = v2 + 2;
        *a1 = v2 + 2;
        v5 = v1 == v2 + 2;
        v6 = v2[1] - 48LL;
        if ( !v5 )
        {
          while ( (unsigned int)*v4 - 48 < 0xA )
          {
            *a1 = v4 + 1;
            v6 = *v4++ + 10 * v6 - 48;
            v7 = v4;
            if ( v1 == v4 )
              goto LABEL_25;
          }
        }
        v7 = v4;
LABEL_25:
        if ( v1 - v7 >= v6 )
        {
          v17 = &v7[v6];
          v18 = v7;
          v19 = v17;
          *a1 = v17;
          if ( v18 != v17 )
          {
            v20 = v17 - v18;
            if ( (unsigned __int64)(v17 - v18) >= 9
              && *v18 == 111
              && v18[1] == 98
              && v18[2] == 106
              && v18[3] == 99
              && v18[4] == 112
              && v18[5] == 114
              && v18[6] == 111
              && v18[7] == 116
              && v18[8] == 111 )
            {
              v21 = v20 - 1;
              v22 = v20 > 9;
              v23 = 9;
              if ( !v22 )
                v23 = v21;
              v24 = &v18[v23];
              *a1 = v24;
              a1[1] = v17;
              if ( v17 == v24 || (unsigned int)*v24 - 48 > 9 )
                goto LABEL_57;
              if ( v24 == v17 )
              {
                v27 = -48;
LABEL_55:
                v18 = v17;
              }
              else
              {
                v25 = 0;
                while ( 1 )
                {
                  v26 = v24;
                  *a1 = ++v24;
                  v27 = v25 + *v26 - 48;
                  if ( v17 == v24 || (unsigned int)*v24 - 48 >= 0xA )
                    break;
                  v25 = 10 * v27;
                  if ( v17 == v24 )
                  {
                    v27 = v25 - 48;
                    goto LABEL_55;
                  }
                }
                v18 = v24;
              }
              if ( v17 - v24 < v27 )
              {
LABEL_57:
                v18 = nullptr;
                v17 = nullptr;
              }
              else
              {
                v17 = &v18[v27];
                *a1 = &v18[v27];
              }
              *a1 = v19;
              a1[1] = v1;
              if ( v18 != v17 )
              {
                v38 = sub_EB5CC((__int64)a1);
                if ( v38 )
                {
                  v39 = a1[604];
                  v30 = v38;
                  v31 = v39 + 8;
                  v40 = *((_QWORD *)v39 + 1);
                  if ( (unsigned __int64)(v40 + 48) >= 0xFF0 )
                  {
                    v41 = (unsigned __int8 **)operator new[](0x1000u);
                    v40 = 0;
                    *v41 = v39;
                    v41[1] = nullptr;
                    v31 = v41 + 1;
                    v39 = (unsigned __int8 *)v41;
                    a1[604] = (unsigned __int8 *)v41;
                  }
                  v34 = v40 + 48;
                  v35 = (char *)&v39[v40];
                  v36 = 266;
                  v37 = off_162FF8;
LABEL_52:
                  *v31 = v34;
                  *((_QWORD *)v35 + 2) = v37;
                  v9 = (__int64)(v35 + 16);
                  *(_DWORD *)(v9 + 8) = v36 | 0x1010000;
                  *(_QWORD *)(v9 + 16) = v30;
                  *(_QWORD *)(v9 + 24) = v18;
                  *(_QWORD *)(v9 + 32) = v17;
                  return v9;
                }
              }
            }
            else
            {
              v28 = sub_EB5CC((__int64)a1);
              if ( v28 )
              {
                v29 = a1[604];
                v30 = v28;
                v31 = v29 + 8;
                v32 = *((_QWORD *)v29 + 1);
                if ( (unsigned __int64)(v32 + 48) >= 0xFF0 )
                {
                  v33 = (unsigned __int8 **)operator new[](0x1000u);
                  v32 = 0;
                  *v33 = v29;
                  v33[1] = nullptr;
                  v31 = v33 + 1;
                  v29 = (unsigned __int8 *)v33;
                  a1[604] = (unsigned __int8 *)v33;
                }
                v34 = v32 + 48;
                v35 = (char *)&v29[v32];
                v36 = 258;
                v37 = off_163068;
                goto LABEL_52;
              }
            }
          }
        }
      }
      return 0;
    }
    if ( *v2 == 114 )
    {
      ++v2;
      v8 = 4;
      *a1 = v2;
      if ( v2 == v1 )
        goto LABEL_18;
LABEL_13:
      if ( *v2 == 86 )
      {
        ++v2;
        v8 |= 2u;
        *a1 = v2;
      }
      if ( v2 != v1 && *v2 == 75 )
      {
        v8 |= 1u;
        *a1 = v2 + 1;
      }
      goto LABEL_18;
    }
  }
  v8 = 0;
  if ( v2 != v1 )
    goto LABEL_13;
LABEL_18:
  v9 = sub_DB210((__int64)a1);
  if ( v9 && v8 )
  {
    v10 = a1[604];
    v11 = v10 + 8;
    v12 = *((_QWORD *)v10 + 1);
    if ( (unsigned __int64)(v12 + 32) >= 0xFF0 )
    {
      v13 = (unsigned __int8 **)operator new[](0x1000u);
      v12 = 0;
      *v13 = v10;
      v13[1] = nullptr;
      v11 = v13 + 1;
      v10 = (unsigned __int8 *)v13;
      a1[604] = (unsigned __int8 *)v13;
    }
    *v11 = v12 + 32;
    v14 = *(_WORD *)(v9 + 9);
    v15 = *(_BYTE *)(v9 + 11);
    v16 = (__int64)&v10[v12];
    *(_QWORD *)(v16 + 16) = off_1630D8;
    v16 += 16;
    *(_QWORD *)(v16 + 16) = v9;
    v9 = v16;
    *(_BYTE *)(v16 + 8) = 3;
    *(_DWORD *)(v16 + 12) = v8;
    *(_WORD *)(v16 + 9) = v14;
    *(_BYTE *)(v16 + 11) = v15;
  }
  return v9;
}
// 162FF8: using guessed type __int64 (__fastcall *off_162FF8[7])();
// 163068: using guessed type __int64 (__fastcall *off_163068[7])();
// 1630D8: using guessed type __int64 (__fastcall *off_1630D8[7])();
