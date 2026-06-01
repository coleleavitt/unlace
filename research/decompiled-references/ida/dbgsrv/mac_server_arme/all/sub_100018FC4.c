/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100018FC4
// Address: 0x0000000100018FC4

//----- (0000000100018FC4) ----------------------------------------------------
__int64 __fastcall sub_100018FC4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // x20
  __int64 v11; // x1
  __int64 v12; // x21
  unsigned __int64 v13; // x24
  __int64 v14; // x8
  __int64 v15; // x21
  __int64 v16; // x23
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  __int64 v23; // x8
  __int64 (__fastcall **v24)(); // [xsp+20h] [xbp-70h] BYREF
  char *v25; // [xsp+28h] [xbp-68h]
  __int64 v26; // [xsp+30h] [xbp-60h]
  __int64 v27; // [xsp+38h] [xbp-58h]
  __int64 v28; // [xsp+40h] [xbp-50h] BYREF
  __int64 (__fastcall **v29)(); // [xsp+48h] [xbp-48h] BYREF
  unsigned __int64 v30; // [xsp+50h] [xbp-40h] BYREF

  if ( *(_QWORD *)(a1 + 152) )
    return 1;
  v10 = a1 + 144;
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 == -1 )
  {
    sub_1000593FC(
      *(_QWORD *)(a1 + 8),
      "parsing cache header: version=%d, shared_cache_base_address=%a, shared_cache_slide=%a\n",
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      *(_DWORD *)(a1 + 88));
    v23 = *(_QWORD *)(a1 + 8);
    LODWORD(v25) = 1;
    v24 = &off_10009D880;
    v26 = v23;
    v27 = v10;
    sub_100019940(a1, (__int64)&v24, *(_QWORD *)(a1 + 136));
  }
  else
  {
    v30 = 0;
    v12 = *(int *)(a1 + 20);
    if ( (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
           *(_QWORD *)(a1 + 8),
           v11,
           &v30,
           v12,
           0) != v12 )
      return 0;
    if ( v30 )
    {
      v13 = 0;
      v14 = *(int *)(a1 + 20);
      v15 = *(_QWORD *)(a1 + 80) + v14;
      while ( 1 )
      {
        v29 = nullptr;
        if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 (__fastcall ***)(), _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
               *(_QWORD *)(a1 + 8),
               v15,
               &v29,
               (int)v14,
               0) != (int)v14 )
          break;
        v28 = 0;
        v16 = *(int *)(a1 + 20);
        if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
               *(_QWORD *)(a1 + 8),
               v15 + v16,
               &v28,
               v16,
               0) != v16 )
          break;
        v24 = v29;
        v25 = (char *)v29 + v28;
        sub_100004BD4(*(_QWORD *)(a1 + 8), "shared cache range: %a..%a\n", v17, v18, v19, v20, v21, v22, (char)v29);
        rangeset_t_add(v10, (__int64)&v24);
        ++v13;
        LODWORD(v14) = *(_DWORD *)(a1 + 20);
        v15 += 2 * (int)v14;
        if ( v13 >= v30 )
          return *(_QWORD *)(a1 + 152) != 0;
      }
      return 0;
    }
  }
  return *(_QWORD *)(a1 + 152) != 0;
}
// 100019138: variable 'v17' is possibly undefined
// 100019138: variable 'v18' is possibly undefined
// 100019138: variable 'v19' is possibly undefined
// 100019138: variable 'v20' is possibly undefined
// 100019138: variable 'v21' is possibly undefined
// 100019138: variable 'v22' is possibly undefined
// 10009D880: using guessed type __int64 (__fastcall *off_10009D880)();
