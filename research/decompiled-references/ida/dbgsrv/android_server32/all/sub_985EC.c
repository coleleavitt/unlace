/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_985EC
// Address: 0x000985EC

//----- (000985EC) --------------------------------------------------------
_DWORD *__fastcall sub_985EC(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  unsigned __int8 *v6; // r5
  unsigned __int8 *v7; // r6
  int v8; // r1
  int v9; // r2
  int v10; // r3
  __int64 v11; // kr00_8
  int v12; // r1
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r5
  int v17; // r6
  _DWORD *v18; // r0
  _DWORD *v19; // r9
  _DWORD *result; // r0
  int v21; // r5
  int v22; // r1
  int v23; // r2
  _DWORD *v24; // r3
  _DWORD *v25; // r6
  char v26; // r2
  __int16 v27; // r3
  _DWORD *v28; // r0
  _DWORD *v29; // r9
  int v30; // [sp+0h] [bp-30h] BYREF
  int v31; // [sp+4h] [bp-2Ch]
  unsigned __int8 *v32; // [sp+Ch] [bp-24h] BYREF
  unsigned __int8 *v33; // [sp+10h] [bp-20h]

  v30 = a3;
  v31 = a4;
  v5 = *a1;
  if ( (_DWORD)v5 != HIDWORD(v5) && *(_BYTE *)v5 == 85 )
  {
    *(_DWORD *)a1 = v5 + 1;
    sub_97DB4(&v32, a1);
    v6 = v32;
    v7 = v33;
    if ( v32 != v33 )
    {
      if ( sub_93370(&v32, "objcproto", (unsigned __int8 *)"") )
      {
        v11 = *a1;
        v12 = v7 - v6 - 1;
        if ( (unsigned int)(v7 - v6) > 9 )
          v12 = 9;
        *(_DWORD *)a1 = &v6[v12];
        *((_DWORD *)a1 + 1) = v7;
        sub_97DB4(&v30, a1);
        v17 = v30;
        v16 = v31;
        *a1 = v11;
        if ( v17 != v16 )
        {
          v18 = sub_985EC(a1, v13, v14, v15);
          if ( v18 )
          {
            v19 = v18;
            result = sub_93AC6((int)(a1 + 46), 20);
            *result = &off_DC75C;
            result[1] = 16843018;
            result[2] = v19;
            result[3] = v17;
            result[4] = v16;
            return result;
          }
        }
      }
      else
      {
        v28 = sub_985EC(a1, v8, v9, v10);
        if ( v28 )
        {
          v29 = v28;
          result = sub_93AC6((int)(a1 + 46), 20);
          *result = &off_DC790;
          result[1] = 16843010;
          result[2] = v29;
          result[3] = v6;
          result[4] = v7;
          return result;
        }
      }
    }
    return nullptr;
  }
  v21 = sub_94068(a1);
  result = sub_92B28(a1, v22, v23, v24);
  if ( !result )
    return nullptr;
  v25 = result;
  if ( v21 )
  {
    result = sub_93AC6((int)(a1 + 46), 16);
    v26 = *((_BYTE *)v25 + 7);
    v27 = *(_WORD *)((char *)v25 + 5);
    *result = &off_DC7C4;
    *(_WORD *)((char *)result + 5) = v27;
    result[2] = v21;
    result[3] = v25;
    *((_BYTE *)result + 7) = v26;
    *((_BYTE *)result + 4) = 3;
  }
  return result;
}
// 98662: variable 'v13' is possibly undefined
// 98662: variable 'v14' is possibly undefined
// 98662: variable 'v15' is possibly undefined
// 98692: variable 'v22' is possibly undefined
// 98692: variable 'v23' is possibly undefined
// 98692: variable 'v24' is possibly undefined
// 986CA: variable 'v8' is possibly undefined
// 986CA: variable 'v9' is possibly undefined
// 986CA: variable 'v10' is possibly undefined
// DC75C: using guessed type _UNKNOWN *off_DC75C;
// DC790: using guessed type _UNKNOWN *off_DC790;
// DC7C4: using guessed type _UNKNOWN *off_DC7C4;
