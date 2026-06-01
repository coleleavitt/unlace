/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE214
// Address: 0x00000000000DE214

//----- (00000000000DE214) ----------------------------------------------------
__int64 __fastcall sub_DE214(__int64 a1)
{
  _BYTE *v1; // x20
  _BYTE *v2; // x21
  _BYTE *v3; // x22
  char *v5; // x20
  _QWORD *v6; // x20
  __int64 v7; // x8
  _QWORD *v8; // x9
  _QWORD *v9; // x0
  int v10; // w10
  __int64 v11; // x8
  __int64 v12; // x9
  unsigned int v13; // w10
  __int64 v14; // x8
  _BYTE *v15; // x12
  _BYTE *v16; // x9
  __int64 v17; // x12
  __int64 v18; // x21
  char *v19; // x0
  char *v20; // x8
  _BYTE *v21; // x21
  size_t v22; // x23
  __int64 v23; // x25
  __int64 v24; // x24
  char *v25; // x22
  char *v26; // x0
  __int64 v27; // x10
  __int64 v28; // x11
  unsigned __int64 v29; // x8

  v2 = *(_BYTE **)a1;
  v1 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 == v1 || *v2 != 83 )
    return 0;
  v3 = v2 + 1;
  *(_QWORD *)a1 = v2 + 1;
  if ( v1 == v2 + 1 )
  {
    if ( islower(0) )
      goto LABEL_5;
  }
  else if ( islower((unsigned __int8)*v3) )
  {
LABEL_5:
    if ( v1 == v3 )
      return 0;
    v5 = nullptr;
    switch ( *v3 )
    {
      case 'a':
        v6 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v8 = v6 + 1;
        v7 = v6[1];
        if ( (unsigned __int64)(v7 + 16) >= 0xFF0 )
        {
          v9 = (_QWORD *)operator new[](0x1000u);
          v7 = 0;
          v10 = 0;
          *v9 = v6;
          v9[1] = 0;
          v8 = v9 + 1;
          *(_QWORD *)(a1 + 4832) = v9;
          goto LABEL_36;
        }
        v10 = 0;
        break;
      case 'b':
        v6 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v8 = v6 + 1;
        v7 = v6[1];
        if ( (unsigned __int64)(v7 + 16) >= 0xFF0 )
        {
          v9 = (_QWORD *)operator new[](0x1000u);
          v7 = 0;
          *v9 = v6;
          v9[1] = 0;
          v8 = v9 + 1;
          *(_QWORD *)(a1 + 4832) = v9;
          v10 = 1;
          goto LABEL_36;
        }
        v10 = 1;
        break;
      case 'd':
        v6 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v8 = v6 + 1;
        v7 = v6[1];
        if ( (unsigned __int64)(v7 + 16) >= 0xFF0 )
        {
          v9 = (_QWORD *)operator new[](0x1000u);
          v7 = 0;
          *v9 = v6;
          v9[1] = 0;
          v8 = v9 + 1;
          v10 = 5;
          *(_QWORD *)(a1 + 4832) = v9;
          goto LABEL_36;
        }
        v10 = 5;
        break;
      case 'i':
        v6 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v8 = v6 + 1;
        v7 = v6[1];
        if ( (unsigned __int64)(v7 + 16) >= 0xFF0 )
        {
          v9 = (_QWORD *)operator new[](0x1000u);
          v7 = 0;
          *v9 = v6;
          v9[1] = 0;
          v8 = v9 + 1;
          *(_QWORD *)(a1 + 4832) = v9;
          v10 = 3;
          goto LABEL_36;
        }
        v10 = 3;
        break;
      case 'o':
        v6 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v8 = v6 + 1;
        v7 = v6[1];
        if ( (unsigned __int64)(v7 + 16) >= 0xFF0 )
        {
          v9 = (_QWORD *)operator new[](0x1000u);
          v7 = 0;
          *v9 = v6;
          v9[1] = 0;
          v8 = v9 + 1;
          *(_QWORD *)(a1 + 4832) = v9;
          v10 = 4;
          goto LABEL_36;
        }
        v10 = 4;
        break;
      case 's':
        v6 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 2;
        v8 = v6 + 1;
        v7 = v6[1];
        if ( (unsigned __int64)(v7 + 16) < 0xFF0 )
        {
          v10 = 2;
        }
        else
        {
          v9 = (_QWORD *)operator new[](0x1000u);
          v7 = 0;
          *v9 = v6;
          v9[1] = 0;
          v8 = v9 + 1;
          *(_QWORD *)(a1 + 4832) = v9;
          v10 = 2;
LABEL_36:
          v6 = v9;
        }
        break;
      default:
        return (__int64)v5;
    }
    *v8 = v7 + 16;
    *(_QWORD *)((char *)v6 + v7 + 16) = off_162AB8;
    v18 = (__int64)v6 + v7 + 16;
    *(_DWORD *)(v18 + 8) = 16843044;
    *(_DWORD *)(v18 + 12) = v10;
    v19 = sub_DF304(a1, (char *)v18);
    if ( v19 == (char *)v18 )
      return v18;
    v20 = *(char **)(a1 + 304);
    v5 = v19;
    if ( v20 == *(char **)(a1 + 312) )
    {
      v21 = *(_BYTE **)(a1 + 296);
      v22 = v20 - v21;
      v23 = (v20 - v21) >> 3;
      v24 = (v20 - v21) >> 2;
      if ( (_BYTE *)(a1 + 320) == v21 )
      {
        v26 = (char *)malloc(2 * v22);
        v25 = v26;
        if ( v22 )
          memmove(v26, v21, v22);
        *(_QWORD *)(a1 + 296) = v25;
      }
      else
      {
        v25 = (char *)realloc(*(void **)(a1 + 296), 2 * v22);
        *(_QWORD *)(a1 + 296) = v25;
      }
      v20 = &v25[8 * v23];
      *(_QWORD *)(a1 + 304) = v20;
      *(_QWORD *)(a1 + 312) = &v25[8 * v24];
    }
    *(_QWORD *)(a1 + 304) = v20 + 8;
    *(_QWORD *)v20 = v5;
    return (__int64)v5;
  }
  if ( v3 == v1 || *v3 != 95 )
  {
    if ( v1 == v3 )
      return 0;
    v13 = (unsigned __int8)*v3;
    if ( v13 < 0x30 || v13 >= 0x3A && (unsigned __int8)(v13 - 65) > 0x19u )
      return 0;
    v14 = 0;
    v15 = v2 + 2;
    while ( 1 )
    {
      v16 = v15;
      if ( (unsigned __int8)v13 >= 0x3Au )
      {
        if ( (unsigned __int8)(v13 - 65) > 0x19u )
        {
          v16 = v15 - 1;
LABEL_54:
          if ( v16 != v1 && *v16 == 95 )
          {
            v27 = *(_QWORD *)(a1 + 296);
            v28 = *(_QWORD *)(a1 + 304);
            v29 = v14 + 1;
            *(_QWORD *)a1 = v16 + 1;
            if ( v29 < (v28 - v27) >> 3 )
              return *(_QWORD *)(v27 + 8 * v29);
          }
          return 0;
        }
        v17 = -55;
      }
      else
      {
        v17 = -48;
      }
      v14 = v17 + (unsigned __int8)v13 + 36 * v14;
      *(_QWORD *)a1 = v16;
      if ( v1 != v16 )
      {
        v15 = v16 + 1;
        v13 = (unsigned __int8)*v16;
        if ( v13 > 0x2F )
          continue;
      }
      goto LABEL_54;
    }
  }
  v11 = *(_QWORD *)(a1 + 296);
  v12 = *(_QWORD *)(a1 + 304);
  *(_QWORD *)a1 = v2 + 2;
  if ( v11 == v12 )
    return 0;
  return *(_QWORD *)v11;
}
// 162AB8: using guessed type __int64 (__fastcall *off_162AB8[7])();
