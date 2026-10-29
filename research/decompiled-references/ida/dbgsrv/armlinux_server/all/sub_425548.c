/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425548
// Address: 0x0000000000425548

//----- (0000000000425548) ----------------------------------------------------
unsigned __int64 __fastcall sub_425548(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2
  unsigned __int64 v4; // x3
  bool v5; // zf
  bool v6; // zf
  unsigned __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x4
  __int64 v12; // x23
  size_t v13; // x22
  int v14; // w6
  unsigned __int64 *v15; // x19
  __int64 i; // x22
  __int64 v18; // x2
  _DWORD *v19; // x1
  _QWORD *v20; // x0
  __int64 v21; // x5
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x2

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 != 12 && v2 != 24 )
    return 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = v4 && v2 != 0;
  if ( v5 && !is_mul_ok(v4, v2) )
    return 0;
  v6 = a2 && v2 != 0;
  if ( v6 && !is_mul_ok(a2, v2) )
    return 0;
  v8 = a2;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = sub_48C428(*(_QWORD *)(v9 + 472), 0, 1);
  v11 = *(_QWORD *)(v9 + 480);
  v12 = v10 - v11;
  if ( sub_48C428(*(_QWORD *)(v9 + 472), *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 64) * *(_QWORD *)(a1 + 32) + v11, 0) == -1
    || (v13 = v8 * *(_QWORD *)(a1 + 32),
        v13 != sub_48C160(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), *(void **)(a1 + 40), v13)) )
  {
    v8 = 0;
  }
  else
  {
    v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 616LL);
    if ( *(_QWORD *)(a1 + 32) == 12 )
    {
      v18 = *(_QWORD *)(a1 + 40);
      v19 = (_DWORD *)(v18 + 12 * v8 - 12);
      v20 = (_QWORD *)(v18 + 24 * v8 - 24);
      if ( v8 )
      {
        v21 = 0;
        do
        {
          LODWORD(v23) = *v19;
          LODWORD(v22) = v19[1];
          LODWORD(v24) = v19[2];
          if ( v14 )
          {
            v22 = bswap32(v22);
            v23 = bswap32(v23);
            v24 = bswap32(v24);
          }
          else
          {
            v22 = (unsigned int)v22;
            v23 = (unsigned int)v23;
            v24 = (int)v24;
          }
          *v20 = v23;
          v20[1] = v22;
          ++v21;
          v20[2] = v24;
          v19 -= 3;
          v20 -= 3;
        }
        while ( v8 != v21 );
      }
    }
    else if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 616LL) )
    {
      v15 = *(unsigned __int64 **)(a1 + 40);
      if ( v8 )
      {
        for ( i = 0; i != v8; ++i )
        {
          *v15 = sub_48CD50(*v15);
          v15[1] = sub_48CD50(v15[1]);
          v15[2] = sub_48CD50(v15[2]);
          v15 += 3;
        }
      }
    }
  }
  sub_48C428(*(_QWORD *)(v9 + 472), v12 + *(_QWORD *)(v9 + 480), 0);
  return v8;
}
