/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000045C8
// Address: 0x00000001000045C8

//----- (00000001000045C8) ----------------------------------------------------
__int64 __fastcall sub_1000045C8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v9; // x20
  __int64 v10; // x9
  int v11; // w8
  __int64 v12; // x22
  char v13; // w0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  __int64 v20; // x21
  _QWORD *v22; // x21
  _QWORD *v23; // x9
  _QWORD *v24; // x8
  bool v25; // zf
  char v26; // w8
  unsigned int v27[256]; // [xsp+28h] [xbp-438h] BYREF

  if ( *(_DWORD *)(a1 + 1556) != 4 )
  {
    if ( !a2 )
      return 0xFFFFFFFFLL;
    v9 = (_QWORD *)(a1 + 1912);
    v10 = *(_QWORD *)(a1 + 1912);
    if ( !v10 )
      goto LABEL_12;
    v11 = *(_DWORD *)(a2 + 4);
    v12 = a1 + 1912;
    do
    {
      if ( *(_DWORD *)(v10 + 32) >= v11 )
        v12 = v10;
      v10 = *(_QWORD *)(v10 + 8LL * (*(_DWORD *)(v10 + 32) < v11));
    }
    while ( v10 );
    if ( (_QWORD *)v12 != v9 && *(_DWORD *)(v12 + 32) <= v11 )
    {
      v20 = v12 + 40;
      if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
        v26 = *(_BYTE *)(a2 + 16);
      else
        v26 = 1;
      *(_BYTE *)(v12 + 2152) = v26 & 1;
      if ( (*(_BYTE *)(a1 + 664) & 1) == 0 )
      {
LABEL_17:
        if ( !*(_QWORD *)(a1 + 160) && (*(_BYTE *)(a1 + 1928) & 1) == 0 )
        {
          if ( *(_DWORD *)(a1 + 1556) == 1 )
          {
            *(_BYTE *)(v20 + 14) = 1;
            *(_DWORD *)(a1 + 1556) = 0;
          }
          v22 = *(_QWORD **)(a1 + 1904);
          if ( v22 != v9 )
          {
            do
            {
              if ( *((_BYTE *)v22 + 2152) == 1 )
                *((_DWORD *)v22 + 12) = 0;
              if ( *((_DWORD *)v22 + 14) == 2 )
                sub_100002C64(a1, (int *)v22 + 10);
              sub_100002D84(a1, (__int64)(v22 + 5));
              v23 = (_QWORD *)v22[1];
              if ( v23 )
              {
                do
                {
                  v24 = v23;
                  v23 = (_QWORD *)*v23;
                }
                while ( v23 );
              }
              else
              {
                do
                {
                  v24 = (_QWORD *)v22[2];
                  v25 = *v24 == (_QWORD)v22;
                  v22 = v24;
                }
                while ( !v25 );
              }
              v22 = v24;
            }
            while ( v24 != v9 );
          }
        }
        return 1;
      }
      v13 = sub_1000599D8(a2, (char *)v27, 0x400u);
    }
    else
    {
LABEL_12:
      if ( (*(_BYTE *)(a1 + 664) & 1) == 0 )
      {
        v20 = 0;
        goto LABEL_17;
      }
      v13 = sub_1000599D8(a2, (char *)v27, 0x400u);
      v20 = 0;
    }
    sub_1000593FC(
      a1,
      "continue after event %s (%d pending, block type %d, sig#=%d,%shandled)\n",
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v13);
    goto LABEL_17;
  }
  if ( *(_DWORD *)(a1 + 528) != -1 )
  {
    sub_1000593FC(a1, "%d: reaping the child status\n", a3, a4, a5, a6, a7, a8, *(_DWORD *)(a1 + 528));
    sub_100002E64(a1, v27, 1);
    *(_DWORD *)(a1 + 528) = -1;
  }
  return 1;
}
// 1000046CC: variable 'v14' is possibly undefined
// 1000046CC: variable 'v15' is possibly undefined
// 1000046CC: variable 'v16' is possibly undefined
// 1000046CC: variable 'v17' is possibly undefined
// 1000046CC: variable 'v18' is possibly undefined
// 1000046CC: variable 'v19' is possibly undefined
