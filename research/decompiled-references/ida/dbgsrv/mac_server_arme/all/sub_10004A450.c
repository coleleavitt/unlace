/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A450
// Address: 0x000000010004A450

//----- (000000010004A450) ----------------------------------------------------
__int64 __fastcall sub_10004A450(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  int *v4; // x9
  int *v5; // x28
  __int64 v6; // x10
  size_t v7; // x23
  const void **v8; // x26
  unsigned __int8 *v9; // x20
  int v10; // w21
  void *v11; // x24
  _BYTE *v12; // x0
  _BYTE *v13; // x22
  size_t v14; // x27
  size_t v15; // x23
  _BYTE *v16; // x24
  __int64 v17; // x25
  _QWORD *v18; // x0
  _QWORD *v19; // x8
  __int64 v21; // [xsp+0h] [xbp-80h]
  void *__s; // [xsp+8h] [xbp-78h]
  __int64 v23; // [xsp+10h] [xbp-70h]
  __int64 v24; // [xsp+18h] [xbp-68h]

  v2 = *(_QWORD *)(a1 + 4192);
  if ( (v2 & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0;
  v4 = *(int **)(a1 + 4184);
  v24 = a1 + 48;
  v21 = a2;
  __s = (void *)(a1 + 48 + a2);
  v23 = a1 + 4152;
  v5 = v4;
  do
  {
    v6 = *(_QWORD *)(a1 + 4240);
    v7 = v6 - a2;
    if ( v6 != a2 )
    {
      v8 = (const void **)(**(_QWORD **)(a1 + 24) + 80LL * *v5);
      v9 = (unsigned __int8 *)v8[1];
      v10 = *(unsigned __int8 *)*v8;
      v11 = __s;
      while ( 1 )
      {
        v12 = memchr(v11, v10, v7);
        if ( !v12 )
        {
LABEL_3:
          v4 = *(int **)(a1 + 4184);
          v2 = *(_QWORD *)(a1 + 4192);
          a2 = v21;
          break;
        }
        v13 = v12;
        v14 = (_BYTE *)v11 - v12 + v7;
        if ( v14 >= (unsigned __int64)v9 )
          v15 = (size_t)v9;
        else
          v15 = (_BYTE *)v11 - v12 + v7;
        if ( !memcmp(v12, *v8, v15) )
        {
          v16 = &v13[*(_QWORD *)(a1 + 4144) - v24];
          if ( (unsigned __int64)v9 <= v14 )
          {
            **(_QWORD **)(a1 + 8) = v16;
            return 1;
          }
          v17 = *v5;
          v18 = qalloc_or_throw(40);
          v18[2] = v16;
          v18[3] = v17;
          v18[4] = v15;
          *v18 = v23;
          v19 = *(_QWORD **)(a1 + 4160);
          v18[1] = v19;
          *v19 = v18;
          *(_QWORD *)(a1 + 4160) = v18;
          ++*(_QWORD *)(a1 + 4168);
        }
        v11 = v13 + 1;
        v7 = v14 - 1;
        if ( v14 == 1 )
          goto LABEL_3;
      }
    }
    ++v5;
  }
  while ( v5 != &v4[v2] );
  return 0;
}
