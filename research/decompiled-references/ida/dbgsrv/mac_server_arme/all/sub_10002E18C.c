/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E18C
// Address: 0x000000010002E18C

//----- (000000010002E18C) ----------------------------------------------------
_QWORD **__fastcall sub_10002E18C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x1
  unsigned __int64 v5; // x9
  int v6; // w8
  int v7; // w21
  int v8; // w23
  int *v9; // x24
  _BYTE *v10; // x0
  _BYTE *v11; // x0
  _BYTE *v12; // x0
  _BYTE *v13; // x0
  size_t v14; // x21
  __int64 v15; // x25
  __int64 v16; // x20
  int v17; // w21
  _QWORD **result; // x0
  char v19; // [xsp+3h] [xbp-5Dh] BYREF
  _BYTE __src[20]; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v21; // [xsp+18h] [xbp-48h] BYREF

  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
  v4 = a2[1];
  if ( v4 )
  {
    sub_10002E2F0((_QWORD **)a1, v4);
    if ( a2[1] )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 1;
      do
      {
        v9 = (int *)(*a2 + 16 * v5);
        v10 = pack_dd(__src, (unsigned __int64)&v21, *v9 - v6);
        v11 = pack_dd(v10, (unsigned __int64)&v21, v9[1] - v7);
        v12 = pack_dd(v11, (unsigned __int64)&v21, v9[2]);
        v13 = pack_dd(v12, (unsigned __int64)&v21, v9[3]);
        v14 = v13 - __src;
        if ( v13 != __src )
        {
          v15 = *(_QWORD *)(a1 + 8);
          v19 = 0;
          sub_10001B764((_QWORD **)a1, v15 + v14, &v19);
          memcpy((void *)(*(_QWORD *)a1 + v15), __src, v14);
        }
        v6 = *v9;
        v7 = v9[1];
        v5 = v8++;
      }
      while ( a2[1] > v5 );
    }
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = v16 - *(_DWORD *)(a1 + 24);
  __src[0] = 0;
  result = sub_10001B764((_QWORD **)a1, v16 + 2, __src);
  *(_WORD *)(*(_QWORD *)a1 + v16) = v17;
  return result;
}
