/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000478B4
// Address: 0x00000001000478B4

//----- (00000001000478B4) ----------------------------------------------------
__int64 __fastcall sub_1000478B4(__int64 a1, __int64 a2)
{
  int *v3; // x10
  __int64 v4; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  _QWORD *v7; // x0
  _QWORD *v8; // x8
  _QWORD *v9; // x8
  unsigned __int64 v10; // x12
  unsigned __int64 v11; // x28
  unsigned __int64 v12; // x25
  __int64 v13; // x26
  __int64 v14; // x27
  unsigned __int64 v15; // x20
  unsigned __int64 v16; // x23
  int v17; // w21
  int v18; // w22
  int v19; // w24
  __int64 v22; // [xsp+0h] [xbp-90h]
  __int64 v23; // [xsp+8h] [xbp-88h]
  unsigned __int64 v25; // [xsp+18h] [xbp-78h]
  unsigned __int64 v26; // [xsp+20h] [xbp-70h]
  int *v27; // [xsp+28h] [xbp-68h]

  if ( (*(_QWORD *)(a1 + 4216) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0;
  v26 = a2 - *(_QWORD *)(a1 + 4240);
  v3 = *(int **)(a1 + 4208);
  v22 = a1 + a2 + 48;
  v23 = a1 + 4152;
  while ( 1 )
  {
    v27 = v3;
    v9 = (_QWORD *)(**(_QWORD **)(a1 + 24) + 80LL * *v3);
    v10 = v9[1];
    if ( v26 >= v10 )
      v11 = v9[1];
    else
      v11 = v26;
    v25 = v9[1];
    if ( v9[4] )
      v12 = v9[3] + v10 - v11;
    else
      v12 = 0;
    if ( v11 )
    {
      v13 = 0;
      v14 = 0;
      v15 = v22 - v11;
      v16 = *v9 + v10 - v11;
      while ( 1 )
      {
        v17 = *(unsigned __int8 *)(v15 + v13);
        v18 = *(unsigned __int8 *)(v16 + v13);
        v19 = *(_DWORD *)(a1 + 32);
        if ( (v19 & 1) == 0 )
        {
          v17 = (unsigned __int8)__toupper(*(unsigned __int8 *)(v15 + v13));
          v18 = (unsigned __int8)__toupper(v18);
        }
        if ( !v12 )
          break;
        if ( (v19 & 0x20) != 0 )
        {
          if ( (*(unsigned __int8 *)(v12 + v14) & (v17 ^ v18)) != 0 )
            goto LABEL_5;
        }
        else if ( v12 == 255 )
        {
          if ( v18 != 255 && v17 != v18 )
            goto LABEL_5;
        }
        else if ( *(_BYTE *)(v12 + v14) )
        {
          break;
        }
LABEL_15:
        v14 = (int)++v13;
        if ( v11 <= (int)v13 )
          goto LABEL_3;
      }
      if ( v17 != v18 )
        goto LABEL_5;
      goto LABEL_15;
    }
LABEL_3:
    v4 = *(_QWORD *)(a1 + 4144);
    if ( v25 <= v26 )
      break;
    v5 = a2 - v25 + v4;
    v6 = *v27;
    v7 = qalloc_or_throw(40);
    v7[2] = v5;
    v7[3] = v6;
    v7[4] = v11;
    *v7 = v23;
    v8 = *(_QWORD **)(a1 + 4160);
    v7[1] = v8;
    *v8 = v7;
    *(_QWORD *)(a1 + 4160) = v7;
    ++*(_QWORD *)(a1 + 4168);
LABEL_5:
    v3 = v27 + 1;
    if ( v27 + 1 == (int *)(*(_QWORD *)(a1 + 4208) + 4LL * *(_QWORD *)(a1 + 4216)) )
      return 0;
  }
  **(_QWORD **)(a1 + 8) = a2 - v11 + v4;
  return 1;
}
