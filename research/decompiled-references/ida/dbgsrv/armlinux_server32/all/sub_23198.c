/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23198
// Address: 0x00023198

//----- (00023198) --------------------------------------------------------
bool __fastcall sub_23198(char **a1, char **a2, char *a3, _DWORD *a4, char a5, unsigned int *a6)
{
  char *v8; // r1
  int v11; // r3
  int v12; // lr
  _BOOL4 v13; // r3
  size_t v15; // r4
  void *v16; // r8
  int v17; // r3
  unsigned int v18; // r3
  char *v19; // r0
  unsigned int v20; // r10
  int v21; // r11
  char v22; // r9
  char *v23; // r1
  int v24; // r0
  char *v25; // r1
  void *v26; // r0
  char *v27; // r1
  unsigned int v28; // r3
  unsigned int v29; // r2
  char *v30; // r1
  int v31; // r2
  int v32; // r3
  unsigned int v33; // r3
  char *v34; // r8
  size_t v35; // r9
  unsigned int v36; // r10
  int v37; // [sp+Ch] [bp-30h]
  _BOOL4 v38; // [sp+Ch] [bp-30h]
  char *v39; // [sp+10h] [bp-2Ch] BYREF
  size_t v40; // [sp+14h] [bp-28h] BYREF
  void *src; // [sp+18h] [bp-24h] BYREF
  int v42; // [sp+1Ch] [bp-20h]
  unsigned int v43; // [sp+20h] [bp-1Ch]
  int v44; // [sp+24h] [bp-18h] BYREF
  unsigned int v45; // [sp+28h] [bp-14h] BYREF
  int v46; // [sp+2Ch] [bp-10h]
  char v47; // [sp+30h] [bp-Ch]

  v8 = *a2;
  v39 = v8;
  if ( v8 >= a3 )
    return 0;
  v39 = v8 + 1;
  src = nullptr;
  v42 = 0;
  v43 = 0;
  v11 = (unsigned __int8)*v8;
  v12 = v11 & 0xC0;
  if ( v12 != 128 )
  {
    if ( v12 == 192 )
    {
      v15 = 0;
      v44 = v11 & 0x3F;
      v16 = nullptr;
      v47 = -64;
      goto LABEL_14;
    }
    if ( v12 != 64 )
    {
      v47 = *v8;
      switch ( v11 )
      {
        case 0:
        case 10:
        case 11:
        case 28:
          v15 = 0;
          v16 = nullptr;
          goto LABEL_14;
        case 2:
          v29 = (unsigned __int8)v8[1];
          v44 = v29;
          if ( a6 )
          {
            v28 = *a6;
            v30 = v8 + 2;
            goto LABEL_34;
          }
          if ( !under_debugger )
            sub_78C64(20142);
          goto LABEL_42;
        case 3:
          v31 = (unsigned __int8)v8[2];
          v32 = (unsigned __int8)v8[1];
          if ( a5 )
            v28 = v31 + (v32 << 8);
          else
            v28 = v32 + (v31 << 8);
          v44 = v28;
          if ( a6 )
          {
            v29 = *a6;
            v30 = v8 + 3;
            goto LABEL_34;
          }
          if ( !under_debugger )
            sub_78C64(20142);
          goto LABEL_42;
        case 4:
          v28 = *(_DWORD *)(v8 + 1);
          if ( a5 )
          {
            v28 = bswap32(v28);
            v44 = v28;
          }
          else
          {
            v44 = *(_DWORD *)(v8 + 1);
          }
          if ( a6 )
          {
            v29 = *a6;
            v30 = v8 + 5;
LABEL_34:
            v33 = v28 + v29;
            v15 = 0;
            *a6 = v33;
            v16 = nullptr;
            v39 = v30;
            v45 = v33;
            goto LABEL_14;
          }
          if ( !under_debugger )
            sub_78C64(20142);
LABEL_42:
          __und(0xFFu);
        case 5:
        case 9:
        case 12:
        case 20:
          v13 = sub_7643C(&v45, 32, 0, &v39, a3);
          if ( !v13 )
            goto LABEL_21;
          goto LABEL_22;
        case 6:
        case 7:
        case 8:
        case 13:
        case 14:
        case 46:
LABEL_22:
          v13 = sub_7643C(&v44, 32, 0, &v39, a3);
          if ( !v13 )
            goto LABEL_21;
          v15 = v42;
          break;
        case 15:
          v13 = sub_7643C(&v40, 32, 0, &v39, a3);
          if ( !v13 )
            goto LABEL_21;
          v34 = v39;
          v35 = v40;
          v15 = v42;
          if ( !v40 )
            goto LABEL_38;
          v36 = v40 + v42;
          if ( !__CFADD__(v40, v42) )
          {
            if ( v42 >= v36 )
              goto LABEL_54;
            goto LABEL_56;
          }
          if ( (unsigned int)v42 <= 0x7FFFFFFE )
          {
            v36 = 0x7FFFFFFF;
LABEL_56:
            if ( v43 < v36 )
              src = sub_78018((int)&src, src, v36, 1u);
            memset((char *)src + v42, 0, v36 - v42);
            v42 = v36;
            goto LABEL_54;
          }
          if ( v42 < 0 )
            v42 = 0x7FFFFFFF;
LABEL_54:
          memcpy((char *)src + v15, v34, v35);
          v34 = v39;
          v35 = v40;
          v15 = v42;
LABEL_38:
          v39 = &v34[v35];
          break;
        default:
          return 0;
      }
LABEL_10:
      if ( v15 )
      {
        v16 = sub_77FEC(v15);
        memcpy(v16, src, v15);
      }
      else
      {
        v16 = nullptr;
      }
      goto LABEL_14;
    }
    v17 = v11 & 0x3F;
    v47 = 64;
    v44 = v17;
    if ( a6 )
    {
      v15 = 0;
      v16 = nullptr;
      v18 = v17 + *a6;
      *a6 = v18;
      v45 = v18;
LABEL_14:
      v19 = a1[1];
      v20 = v45;
      v21 = v44;
      v22 = v47;
      v37 = v46;
      v23 = *a1;
      if ( v19 + 1 > a1[2] )
      {
        v23 = (char *)sub_78018((int)a1, v23, (unsigned int)(v19 + 1), 0x1Cu);
        v19 = a1[1];
        *a1 = v23;
      }
      v13 = 1;
      v24 = 28 * (_DWORD)v19;
      *(_DWORD *)&v23[v24] = v16;
      v25 = &v23[v24];
      *((_DWORD *)v25 + 1) = v15;
      *((_DWORD *)v25 + 2) = v15;
      *((_DWORD *)v25 + 3) = v21;
      *((_DWORD *)v25 + 4) = v20;
      *((_DWORD *)v25 + 5) = v37;
      v25[24] = v22;
      v26 = src;
      v27 = v39;
      ++a1[1];
      *a2 = v27;
      goto LABEL_17;
    }
    return 0;
  }
  v44 = v11 & 0x3F;
  v47 = 0x80;
  v13 = sub_7643C(&v45, 32, 0, &v39, a3);
  if ( v13 )
  {
    v15 = v42;
    v46 = *a4 * v45;
    goto LABEL_10;
  }
LABEL_21:
  v26 = src;
LABEL_17:
  if ( v26 )
  {
    v38 = v13;
    v42 = 0;
    sub_77F70(v26);
    return v38;
  }
  return v13;
}
// D6C20: using guessed type char under_debugger;
