/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060440
// Address: 0x0000000100060440

//----- (0000000100060440) ----------------------------------------------------
__int64 __fastcall sub_100060440(_DWORD *a1, int a2, __int64 a3)
{
  int v4; // w12
  int v5; // w12
  __int64 v6; // x21
  int v7; // w0
  int v8; // w8
  __int64 v9; // x10
  int v10; // w9
  __int64 v11; // x11
  __int64 v12; // x13
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x22
  int v17; // w21
  int v18; // w0
  int v19; // w8
  __int64 v20; // x10
  int v21; // w9
  __int64 v22; // x11
  __int64 v23; // x13
  __int64 (__fastcall *v25)(_DWORD *); // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a2 == 8 )
  {
    v4 = a1[184];
    if ( v4 < 0 )
    {
      v6 = a3;
      v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 616LL))(a1);
      a3 = v6;
      if ( (unsigned int)v7 >= 0x10 )
        v8 = 16;
      else
        v8 = v7;
      if ( v7 >= 0 )
        v4 = v8;
      else
        v4 = 0;
      a1[184] = v4;
      if ( !v4 )
        return 0;
    }
    else if ( !v4 )
    {
      return 0;
    }
    v9 = 0;
    v10 = -1;
    v11 = 188;
    while ( 1 )
    {
      v12 = *(_QWORD *)&a1[v11];
      if ( v12 == a3 )
        return 0;
      if ( v10 < 0 && v12 == -1 )
        v10 = v9;
      ++v9;
      v11 += 6;
      if ( v4 == v9 )
      {
        if ( v10 < 0 )
          return 0;
        v14 = (__int64)&a1[6 * v10 + 186];
        *(_DWORD *)v14 = 8;
        *(_QWORD *)(v14 + 8) = a3;
        v15 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 632LL))(a1, 8);
        goto LABEL_42;
      }
    }
  }
  v5 = a1[185];
  if ( v5 < 0 )
  {
    v16 = a3;
    v17 = a2;
    v18 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 624LL))(a1);
    a2 = v17;
    a3 = v16;
    if ( (unsigned int)v18 >= 0x10 )
      v19 = 16;
    else
      v19 = v18;
    if ( v18 >= 0 )
      v5 = v19;
    else
      v5 = 0;
    a1[185] = v5;
    if ( !v5 )
      return 0;
  }
  else if ( !v5 )
  {
    return 0;
  }
  v20 = 0;
  v21 = -1;
  v22 = 284;
  while ( 1 )
  {
    v23 = *(_QWORD *)&a1[v22];
    if ( v23 == a3 )
      break;
    if ( v21 < 0 && v23 == -1 )
      v21 = v20;
    ++v20;
    v22 += 6;
    if ( v5 == v20 )
    {
      if ( v21 < 0 )
        return 0;
      v14 = (__int64)&a1[6 * v21 + 282];
      *(_DWORD *)v14 = a2;
      *(_QWORD *)(v14 + 8) = a3;
      v15 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 640LL))(a1);
LABEL_42:
      *(_QWORD *)(v14 + 16) = v15;
      v25 = *(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 648LL);
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return v25(a1);
    }
  }
  return 0;
}
// 10006068C: variable '_28' is possibly undefined
