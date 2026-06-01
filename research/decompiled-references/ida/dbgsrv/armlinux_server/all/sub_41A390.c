/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A390
// Address: 0x000000000041A390

//----- (000000000041A390) ----------------------------------------------------
__int64 __fastcall sub_41A390(char **a1, unsigned __int8 **a2, unsigned __int64 a3, _DWORD *a4, char a5, int *a6)
{
  unsigned __int8 *v9; // x0
  int v10; // w1
  int v11; // w2
  unsigned int v12; // w28
  __int64 result; // x0
  size_t v15; // x22
  void *v16; // x23
  char v17; // w24
  char *v18; // x0
  char *v19; // x3
  unsigned __int64 v20; // x2
  int v21; // w25
  int v22; // w26
  int v23; // w27
  int v24; // w1
  int v25; // w1
  char *v26; // x2
  unsigned __int8 *v27; // x2
  void *v28; // x0
  unsigned __int8 *v29; // x23
  size_t v30; // x24
  unsigned int v31; // w1
  unsigned __int8 *v32; // x0
  int v33; // w2
  int v34; // w1
  int v35; // w2
  int v36; // w1
  unsigned __int64 v37; // x25
  unsigned __int8 *v38; // [xsp+60h] [xbp-40h] BYREF
  size_t v39; // [xsp+68h] [xbp-38h] BYREF
  void *src; // [xsp+70h] [xbp-30h] BYREF
  unsigned __int64 v41; // [xsp+78h] [xbp-28h]
  unsigned __int64 v42; // [xsp+80h] [xbp-20h]
  int v43; // [xsp+88h] [xbp-18h] BYREF
  int v44; // [xsp+8Ch] [xbp-14h] BYREF
  int v45; // [xsp+90h] [xbp-10h]
  char v46; // [xsp+94h] [xbp-Ch]

  v9 = *a2;
  v38 = v9;
  if ( (unsigned __int64)v9 >= a3 )
    return 0;
  v38 = v9 + 1;
  src = nullptr;
  v41 = 0;
  v42 = 0;
  v10 = *v9;
  v11 = v10 & 0xC0;
  if ( v11 != 128 )
  {
    if ( v11 == 192 )
    {
      v15 = 0;
      v46 = -64;
      v16 = nullptr;
      v43 = v10 & 0x3F;
      goto LABEL_16;
    }
    if ( v11 != 64 )
    {
      v46 = *v9;
      switch ( v10 )
      {
        case 0:
        case 10:
        case 11:
        case 28:
          v15 = 0;
          v16 = nullptr;
          goto LABEL_16;
        case 2:
          v31 = v9[1];
          v43 = v31;
          if ( !a6 )
            goto LABEL_47;
          v33 = *a6;
          v32 = v9 + 2;
          goto LABEL_41;
        case 3:
          v34 = v9[2];
          v35 = v9[1];
          if ( a5 )
            v31 = v34 + (v35 << 8);
          else
            v31 = v35 + (v34 << 8);
          v43 = v31;
          if ( a6 )
          {
            v32 = v9 + 3;
            v33 = *a6;
            goto LABEL_41;
          }
          if ( !under_debugger )
            sub_492270(20142);
          return result;
        case 4:
          v31 = *(_DWORD *)(v9 + 1);
          if ( a5 )
            v31 = bswap32(v31);
          v43 = v31;
          if ( a6 )
          {
            v32 = v9 + 5;
            v33 = *a6;
LABEL_41:
            v36 = v31 + v33;
            v15 = 0;
            v16 = nullptr;
            *a6 = v36;
            v38 = v32;
            v44 = v36;
            goto LABEL_16;
          }
          if ( !under_debugger )
            sub_492270(20142);
          return result;
        case 5:
        case 9:
        case 12:
        case 20:
          v12 = (unsigned __int8)((__int64 (__fastcall *)(int *, __int64, _QWORD, unsigned __int8 **, unsigned __int64))loc_48E7D8)(
                                   &v44,
                                   32,
                                   0,
                                   &v38,
                                   a3);
          if ( v12 )
            goto LABEL_24;
          goto LABEL_22;
        case 6:
        case 7:
        case 8:
        case 13:
        case 14:
        case 46:
LABEL_24:
          v12 = (unsigned __int8)((__int64 (__fastcall *)(int *, __int64, _QWORD, unsigned __int8 **, unsigned __int64))loc_48E7D8)(
                                   &v43,
                                   32,
                                   0,
                                   &v38,
                                   a3);
          if ( !v12 )
            goto LABEL_22;
          v15 = v41;
          goto LABEL_11;
        case 15:
          v12 = (unsigned __int8)((__int64 (__fastcall *)(size_t *, __int64, _QWORD, unsigned __int8 **, unsigned __int64))loc_48E7D8)(
                                   &v39,
                                   64,
                                   0,
                                   &v38,
                                   a3);
          if ( !v12 )
            goto LABEL_22;
          v29 = v38;
          v30 = v39;
          v15 = v41;
          if ( !v39 )
            goto LABEL_28;
          v37 = v39 + v41;
          if ( v39 + v41 >= v41 )
          {
            if ( v39 + v41 <= v41 )
              goto LABEL_56;
          }
          else
          {
            if ( v41 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (v41 & 0x8000000000000000LL) != 0 )
                v41 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_56;
            }
            v37 = 0x7FFFFFFFFFFFFFFFLL;
          }
          if ( v42 < v37 )
            src = sub_491288((__int64)&src, src, v37, 1u);
          memset((char *)src + v41, 0, v37 - v41);
          v41 = v37;
LABEL_56:
          memcpy((char *)src + v15, v29, v30);
          v29 = v38;
          v30 = v39;
          v15 = v41;
LABEL_28:
          v38 = &v29[v30];
          goto LABEL_11;
        default:
          return 0;
      }
      while ( 1 )
      {
        __break(0x3E8u);
LABEL_47:
        if ( !under_debugger )
          sub_492270(20142);
      }
    }
    v24 = v10 & 0x3F;
    v43 = v24;
    v46 = 64;
    if ( a6 )
    {
      v15 = 0;
      v16 = nullptr;
      v25 = v24 + *a6;
      *a6 = v25;
      v44 = v25;
      goto LABEL_16;
    }
    return 0;
  }
  v43 = v10 & 0x3F;
  v46 = 0x80;
  v12 = (unsigned __int8)((__int64 (__fastcall *)(int *, __int64, _QWORD, unsigned __int8 **, unsigned __int64))loc_48E7D8)(
                           &v44,
                           32,
                           0,
                           &v38,
                           a3);
  if ( v12 )
  {
    v15 = v41;
    v45 = v44 * *a4;
LABEL_11:
    if ( v15 )
    {
      v16 = sub_491248(v15);
      memcpy(v16, src, v15);
      v17 = v46;
      v18 = *a1;
      v19 = a1[1];
      v20 = (unsigned __int64)(v19 + 1);
      v21 = v45;
      v23 = v43;
      v22 = v44;
      if ( v19 + 1 <= a1[2] )
      {
LABEL_17:
        v12 = 1;
        v26 = &v18[40 * (_QWORD)v19];
        *(_QWORD *)v26 = v16;
        *((_QWORD *)v26 + 1) = v15;
        *((_QWORD *)v26 + 2) = v15;
        *((_DWORD *)v26 + 6) = v23;
        *((_DWORD *)v26 + 7) = v22;
        *((_DWORD *)v26 + 8) = v21;
        v26[36] = v17;
        v27 = v38;
        v28 = src;
        ++a1[1];
        *a2 = v27;
        goto LABEL_18;
      }
LABEL_13:
      v18 = (char *)sub_491288((__int64)a1, v18, v20, 0x28u);
      v19 = a1[1];
      *a1 = v18;
      goto LABEL_17;
    }
    v16 = nullptr;
LABEL_16:
    v18 = *a1;
    v19 = a1[1];
    v20 = (unsigned __int64)(v19 + 1);
    v17 = v46;
    v23 = v43;
    v22 = v44;
    v21 = v45;
    if ( v19 + 1 <= a1[2] )
      goto LABEL_17;
    goto LABEL_13;
  }
LABEL_22:
  v28 = src;
LABEL_18:
  if ( v28 )
  {
    v41 = 0;
    j__free(v28);
  }
  return v12;
}
// 41A390: could not find valid save-restore pair for x23
// 41A390: could not find valid save-restore pair for x26
// 41A390: could not find valid save-restore pair for x27
// 52451C: using guessed type char under_debugger;
