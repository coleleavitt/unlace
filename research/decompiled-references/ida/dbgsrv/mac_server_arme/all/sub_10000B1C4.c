/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B1C4
// Address: 0x000000010000B1C4

//----- (000000010000B1C4) ----------------------------------------------------
__int64 __fastcall sub_10000B1C4(__int64 a1, unsigned __int64 *a2)
{
  int v4; // w0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  int v11; // w8
  size_t v12; // x21
  _QWORD *v13; // x23
  void *v14; // x22
  void *v15; // x0
  __int64 v16; // x20
  __int64 (__fastcall **v18)(); // [xsp+10h] [xbp-90h] BYREF
  int v19; // [xsp+18h] [xbp-88h]
  __int64 v20; // [xsp+1Ch] [xbp-84h]
  __int128 v21; // [xsp+24h] [xbp-7Ch]
  void *__src[2]; // [xsp+38h] [xbp-68h]
  __int128 v23; // [xsp+48h] [xbp-58h]
  __int128 v24; // [xsp+58h] [xbp-48h]

  v18 = off_10009CBD0;
  v19 = 1;
  v20 = 0;
  v21 = 0u;
  *(_OWORD *)__src = 0u;
  v23 = 0u;
  v24 = 0u;
  v4 = sub_100019BA0(*(_QWORD *)(a1 + 8) + 1560LL, *a2, (__int64)&v18, 0);
  if ( (_DWORD)v21 == 2 )
    v11 = v4;
  else
    v11 = 0;
  if ( v11 != 1 )
  {
    v16 = 0;
    goto LABEL_12;
  }
  sub_100004BD4(*(_QWORD *)(a1 + 8), "%a: located exe header\n", v5, v6, v7, v8, v9, v10, *a2);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1768LL) = *a2;
  v12 = v23;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1776LL) = *(_QWORD *)((char *)&v21 + 4);
  v13 = *(_QWORD **)(a1 + 8);
  if ( v12 )
  {
    v14 = qalloc_or_throw(v12);
    memcpy(v14, __src[1], v12);
    v15 = (void *)v13[226];
    if ( !v15 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v14 = nullptr;
  v15 = (void *)v13[226];
  if ( v15 )
  {
LABEL_10:
    v13[227] = 0;
    qfree(v15);
  }
LABEL_11:
  v13[226] = v14;
  v13[227] = v12;
  v13[228] = v12;
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1552LL) = HIDWORD(v20);
  v16 = 1;
LABEL_12:
  v18 = off_10009CBD0;
  if ( __src[1] )
  {
    *(_QWORD *)&v23 = 0;
    qfree(__src[1]);
  }
  return v16;
}
// 10000B280: variable 'v5' is possibly undefined
// 10000B280: variable 'v6' is possibly undefined
// 10000B280: variable 'v7' is possibly undefined
// 10000B280: variable 'v8' is possibly undefined
// 10000B280: variable 'v9' is possibly undefined
// 10000B280: variable 'v10' is possibly undefined
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();
