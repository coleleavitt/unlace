/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9251C
// Address: 0x0009251C

//----- (0009251C) --------------------------------------------------------
_DWORD *__fastcall sub_9251C(int a1, int a2, unsigned __int8 **a3)
{
  __int64 v4; // r0
  __int64 *v5; // r3
  unsigned __int8 **v6; // r2
  __int64 *v7; // r3
  int v8; // r0
  unsigned __int8 *v9; // r6
  _DWORD *v10; // r9
  const char *v11; // r2
  char *v12; // r3
  unsigned __int8 *v13; // r0
  __int64 v14; // r0
  int v15; // r12
  unsigned int v16; // r2
  unsigned int i; // r3
  int v18; // r6
  int v19; // r5
  unsigned int v20; // r1
  int v21; // r2
  int *v22; // r3
  __int64 v23; // r0
  __int64 v24; // r0
  int v25; // r1
  unsigned __int8 *v26; // r0
  unsigned __int8 *v27; // r0
  _BOOL4 v28; // r8
  int v29; // r0
  __int64 v30; // r0
  const char *v31; // r0
  char *v32; // r1
  unsigned __int8 *v33; // r0
  int v34; // r0
  __int64 v35; // kr08_8
  _DWORD *v36; // r0
  unsigned int v37; // r6
  __int64 v38; // r0
  int v40; // r1
  __int64 v41; // r0
  unsigned __int8 *v42; // r0
  unsigned __int8 *v43; // r0
  unsigned __int8 *v44; // r0
  unsigned __int8 *v45; // r6
  int v46; // r2
  _DWORD *v47; // r3
  __int64 v48; // r0
  bool v49; // zf
  unsigned __int8 *v50; // r0
  unsigned __int8 *v51; // r8
  unsigned __int8 *v52; // r0
  unsigned __int8 *v53; // r0
  int v55; // [sp+Ch] [bp-4Ch]
  int v56; // [sp+Ch] [bp-4Ch]
  unsigned __int8 *v57; // [sp+10h] [bp-48h] BYREF
  __int64 v58; // [sp+14h] [bp-44h] BYREF
  _DWORD *v59; // [sp+1Ch] [bp-3Ch] BYREF
  unsigned __int8 *v60; // [sp+20h] [bp-38h] BYREF
  unsigned __int8 *v61; // [sp+24h] [bp-34h] BYREF
  unsigned __int8 *v62; // [sp+28h] [bp-30h] BYREF
  char v63[4]; // [sp+2Ch] [bp-2Ch] BYREF
  int v64; // [sp+30h] [bp-28h]
  __int64 *v65; // [sp+34h] [bp-24h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = (__int64 *)(HIDWORD(v4) - v4);
  if ( HIDWORD(v4) == (_DWORD)v4 )
  {
LABEL_14:
    v10 = nullptr;
    v65 = (__int64 *)a1;
    v62 = nullptr;
    LOWORD(v61) = 0;
    v63[0] = 0;
    v64 = (*(_DWORD *)(a1 + 336) - *(_DWORD *)(a1 + 332)) >> 2;
    v13 = sub_933A4((__int64 *)a1, (unsigned int)&v61, a3, v5);
    v60 = v13;
    if ( v13 )
    {
      v10 = v13;
      v14 = *(_QWORD *)(a1 + 332);
      v15 = v64;
      v16 = (HIDWORD(v14) - (int)v14) >> 2;
      for ( i = v64; i < v16; ++i )
      {
        v18 = *(_DWORD *)(v14 + 4 * i);
        v19 = *(_DWORD *)(a1 + 288);
        v20 = *(_DWORD *)(v18 + 8);
        if ( v20 >= (*(_DWORD *)(a1 + 292) - v19) >> 2 )
          return nullptr;
        *(_DWORD *)(v18 + 12) = *(_DWORD *)(v19 + 4 * v20);
      }
      *(_DWORD *)(a1 + 336) = v14 + 4 * v15;
      if ( !sub_93774(&v65) )
      {
        v59 = nullptr;
        if ( sub_924C8((__int64 *)a1, "Ua9enable_ifI", (unsigned __int8 *)"") )
        {
          v55 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
          while ( 1 )
          {
            v24 = *(_QWORD *)a1;
            if ( (_DWORD)v24 != HIDWORD(v24) )
            {
              HIDWORD(v24) = *(unsigned __int8 *)v24;
              if ( HIDWORD(v24) == 69 )
                break;
            }
            LODWORD(v58) = sub_93798(a1, SHIDWORD(v24), v21, v22);
            if ( !(_DWORD)v58 )
              return nullptr;
            LODWORD(v23) = a1 + 8;
            HIDWORD(v23) = &v58;
            sub_938C4(v23);
          }
          *(_DWORD *)a1 = v24 + 1;
          sub_9392E(&v58, a1, v55);
          v36 = sub_93AC6(a1 + 368, 16);
          v21 = 16843017;
          v37 = HIDWORD(v58);
          v22 = (int *)v58;
          *v36 = &off_DC624;
          v36[1] = 16843017;
          *((_QWORD *)v36 + 1) = __PAIR64__(v37, (unsigned int)v22);
          v59 = v36;
        }
        v57 = nullptr;
        if ( !(_BYTE)v61 )
        {
          if ( BYTE1(v61) )
          {
            v57 = sub_92B28((__int64 *)a1, (unsigned __int8)v61, v21, v22);
            if ( !v57 )
              return nullptr;
          }
        }
        v38 = *(_QWORD *)a1;
        if ( (_DWORD)v38 == HIDWORD(v38) || *(_BYTE *)v38 != 118 )
        {
          v40 = *(_DWORD *)(a1 + 12);
          v56 = (v40 - *(_DWORD *)(a1 + 8)) >> 2;
          while ( 1 )
          {
            LODWORD(v58) = sub_92B28((__int64 *)a1, v40, v21, v22);
            if ( !(_DWORD)v58 )
              break;
            LODWORD(v41) = a1 + 8;
            HIDWORD(v41) = &v58;
            sub_938C4(v41);
            if ( sub_93774(&v65) )
            {
              sub_9392E(&v58, a1, v56);
              return sub_93950(a1, (int *)&v57, (int *)&v60, &v58, (int *)&v59, (int *)&v62, v63);
            }
          }
          return nullptr;
        }
        *(_DWORD *)a1 = v38 + 1;
        v58 = 0;
        return sub_93950(a1, (int *)&v57, (int *)&v60, &v58, (int *)&v59, (int *)&v62, v63);
      }
    }
    return v10;
  }
  a3 = (unsigned __int8 **)*(unsigned __int8 *)v4;
  if ( a3 != (unsigned __int8 **)((char *)&dword_44 + 3) )
  {
    if ( a3 == (unsigned __int8 **)&dword_54 )
    {
      v6 = (unsigned __int8 **)(v4 + 1);
      if ( (unsigned int)v5 >= 2 )
      {
        v7 = (__int64 *)*(unsigned __int8 *)v6;
        switch ( *(_BYTE *)v6 )
        {
          case 'S':
            *(_DWORD *)a1 = v4 + 2;
            v27 = sub_92B28((__int64 *)a1, SHIDWORD(v4), (int)v6, v7);
            if ( !v27 )
              return nullptr;
            v9 = v27;
            v10 = sub_93AC6(a1 + 368, 20);
            v11 = "typeinfo name for ";
            v12 = "";
            goto LABEL_79;
          case 'T':
            *(_DWORD *)a1 = v4 + 2;
            v42 = sub_92B28((__int64 *)a1, SHIDWORD(v4), (int)v6, v7);
            if ( !v42 )
              return nullptr;
            v9 = v42;
            v10 = sub_93AC6(a1 + 368, 20);
            v11 = "VTT for ";
            v12 = "";
            goto LABEL_79;
          case 'U':
            goto LABEL_35;
          case 'V':
            *(_DWORD *)a1 = v4 + 2;
            v43 = sub_92B28((__int64 *)a1, SHIDWORD(v4), (int)v6, v7);
            if ( !v43 )
              return nullptr;
            v9 = v43;
            v10 = sub_93AC6(a1 + 368, 20);
            v11 = "vtable for ";
            v12 = "";
            goto LABEL_79;
          case 'W':
            *(_DWORD *)a1 = v4 + 2;
            v10 = nullptr;
            v61 = sub_933A4((__int64 *)a1, 0, v6, v7);
            if ( !v61 )
              return v10;
            return (_DWORD *)sub_92B08(a1, (int)"thread-local wrapper routine for ", (int *)&v61);
          default:
            if ( v7 == (__int64 *)((char *)&dword_40 + 3) )
            {
              *(_DWORD *)a1 = v4 + 2;
              v44 = sub_92B28((__int64 *)a1, SHIDWORD(v4), (int)v6, (int *)((char *)&dword_40 + 3));
              if ( v44 )
              {
                v45 = v44;
                sub_92AAC(&v61, (unsigned __int8 **)a1, 1);
                LODWORD(v48) = v61;
                v49 = v61 == v62;
                if ( v61 != v62 )
                {
                  v48 = *(_QWORD *)a1;
                  v49 = (_DWORD)v48 == HIDWORD(v48);
                }
                if ( !v49 && *(_BYTE *)v48 == 95 )
                {
                  *(_DWORD *)a1 = v48 + 1;
                  v50 = sub_92B28((__int64 *)a1, 95, v46, v47);
                  if ( v50 )
                  {
                    v51 = v50;
                    v10 = sub_93AC6(a1 + 368, 16);
                    *v10 = &off_DBC24;
                    v10[1] = 16843030;
                    v10[2] = v51;
                    v10[3] = v45;
                    return v10;
                  }
                }
              }
              return nullptr;
            }
            if ( v7 == (__int64 *)&dword_48 )
            {
              *(_DWORD *)a1 = v4 + 2;
              v10 = nullptr;
              v52 = sub_933A4((__int64 *)a1, 0, v6, (__int64 *)&dword_48);
              if ( !v52 )
                return v10;
              v9 = v52;
              v10 = sub_93AC6(a1 + 368, 20);
              v11 = "thread-local initialization routine for ";
              v12 = "";
            }
            else
            {
              if ( v7 != (__int64 *)((char *)&dword_48 + 1) )
              {
                if ( v7 != (__int64 *)((char *)&dword_60 + 3) )
                  goto LABEL_35;
                *(_DWORD *)a1 = v4 + 2;
                if ( !sub_939B4((unsigned __int8 **)a1) && !sub_939B4((unsigned __int8 **)a1) )
                {
                  v8 = sub_9251C(a1);
                  if ( v8 )
                  {
                    v9 = (unsigned __int8 *)v8;
                    v10 = sub_93AC6(a1 + 368, 20);
                    v11 = "covariant return thunk to ";
                    v12 = "";
                    goto LABEL_79;
                  }
                }
                return nullptr;
              }
              *(_DWORD *)a1 = v4 + 2;
              v53 = sub_92B28((__int64 *)a1, SHIDWORD(v4), (int)v6, (int *)((char *)&dword_48 + 1));
              if ( !v53 )
                return nullptr;
              v9 = v53;
              v10 = sub_93AC6(a1 + 368, 20);
              v11 = "typeinfo for ";
              v12 = "";
            }
            break;
        }
        goto LABEL_79;
      }
LABEL_35:
      *(_DWORD *)a1 = v6;
      v28 = (unsigned __int8 **)HIDWORD(v4) != v6 && *(unsigned __int8 *)v6 == 118;
      if ( !sub_939B4((unsigned __int8 **)a1) )
      {
        v29 = sub_9251C(a1);
        if ( v29 )
        {
          v9 = (unsigned __int8 *)v29;
          v10 = sub_93AC6(a1 + 368, 20);
          HIDWORD(v30) = 16843029;
          LODWORD(v30) = &off_DBBE8;
          *(_QWORD *)v10 = v30;
          if ( v28 )
          {
            v31 = "virtual thunk to ";
            v32 = "";
          }
          else
          {
            v31 = "non-virtual thunk to ";
            v32 = "";
          }
          v10[2] = v31;
          v10[3] = v32;
          goto LABEL_80;
        }
      }
      return nullptr;
    }
    goto LABEL_14;
  }
  if ( (unsigned int)v5 < 2 )
    return nullptr;
  v25 = *(unsigned __int8 *)(v4 + 1);
  if ( v25 == 82 )
  {
    *(_DWORD *)a1 = v4 + 2;
    v10 = nullptr;
    v33 = sub_933A4((__int64 *)a1, 0, (unsigned __int8 **)((char *)&dword_44 + 3), v5);
    if ( !v33 )
      return v10;
    v9 = v33;
    v34 = sub_93A64((unsigned __int8 **)a1, (unsigned int *)&v61);
    v35 = *(_QWORD *)a1;
    if ( (_DWORD)v35 == HIDWORD(v35) || *(_BYTE *)v35 != 95 )
    {
      if ( !v34 )
        return nullptr;
    }
    else
    {
      *(_DWORD *)a1 = v35 + 1;
    }
    v10 = sub_93AC6(a1 + 368, 20);
    v11 = "reference temporary for ";
    v12 = "";
LABEL_79:
    *v10 = &off_DBBE8;
    v10[1] = 16843029;
    v10[2] = v11;
    v10[3] = v12;
LABEL_80:
    v10[4] = v9;
    return v10;
  }
  if ( v25 != 86 )
    return nullptr;
  *(_DWORD *)a1 = v4 + 2;
  v10 = nullptr;
  v26 = sub_933A4((__int64 *)a1, 0, (unsigned __int8 **)((char *)&dword_44 + 3), v5);
  if ( v26 )
  {
    v9 = v26;
    v10 = sub_93AC6(a1 + 368, 20);
    v11 = "guard variable for ";
    v12 = "";
    goto LABEL_79;
  }
  return v10;
}
// 92688: variable 'v21' is possibly undefined
// 92688: variable 'v22' is possibly undefined
// 92854: variable 'v40' is possibly undefined
// 9299C: variable 'v46' is possibly undefined
// 9299C: variable 'v47' is possibly undefined
// 40: using guessed type int;
// 44: using guessed type int dword_44;
// 48: using guessed type int dword_48;
// 54: using guessed type int;
// 60: using guessed type int;
// DBBE8: using guessed type _UNKNOWN *off_DBBE8;
// DBC24: using guessed type _UNKNOWN *off_DBC24;
// DC624: using guessed type _UNKNOWN *off_DC624;
