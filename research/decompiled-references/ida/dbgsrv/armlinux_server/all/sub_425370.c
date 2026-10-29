/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_425370
// Address: 0x0000000000425370

//----- (0000000000425370) ----------------------------------------------------
unsigned __int64 __fastcall sub_425370(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x2
  unsigned __int64 v3; // x3
  bool v4; // zf
  bool v5; // zf
  unsigned __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x4
  __int64 v11; // x23
  size_t v12; // x22
  int v13; // w5
  unsigned __int64 *v14; // x19
  __int64 i; // x22
  __int64 v17; // x1
  _DWORD *v18; // x0
  _QWORD *v19; // x1
  __int64 v20; // x4
  __int64 v21; // x3
  __int64 v22; // x2

  v2 = *(_QWORD *)(a1 + 32);
  if ( ((v2 - 8) & 0xFFFFFFFFFFFFFFF7LL) != 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = v3 && v2 != 0;
  if ( v4 && !is_mul_ok(v3, v2) )
    return 0;
  v5 = a2 && v2 != 0;
  if ( v5 && !is_mul_ok(a2, v2) )
    return 0;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = sub_48C428(*(_QWORD *)(v8 + 472), 0, 1);
  v10 = *(_QWORD *)(v8 + 480);
  v11 = v9 - v10;
  if ( sub_48C428(*(_QWORD *)(v8 + 472), *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 64) * *(_QWORD *)(a1 + 32) + v10, 0) == -1
    || (v12 = v7 * *(_QWORD *)(a1 + 32),
        v12 != sub_48C160(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 472LL), *(void **)(a1 + 40), v12)) )
  {
    v7 = 0;
  }
  else
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 616LL);
    if ( *(_QWORD *)(a1 + 32) == 8 )
    {
      v17 = *(_QWORD *)(a1 + 40);
      v18 = (_DWORD *)(v17 + 8 * v7 - 8);
      v19 = (_QWORD *)(v17 + 16 * v7 - 16);
      if ( v7 )
      {
        v20 = 0;
        do
        {
          LODWORD(v22) = *v18;
          LODWORD(v21) = v18[1];
          if ( v13 )
          {
            v21 = bswap32(v21);
            v22 = bswap32(v22);
          }
          else
          {
            v21 = (unsigned int)v21;
            v22 = (unsigned int)v22;
          }
          v19[1] = v21;
          ++v20;
          *v19 = v22;
          v19 -= 2;
          v18 -= 2;
        }
        while ( v7 != v20 );
      }
    }
    else if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 616LL) )
    {
      v14 = *(unsigned __int64 **)(a1 + 40);
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          *v14 = sub_48CD50(*v14);
          v14[1] = sub_48CD50(v14[1]);
          v14 += 2;
        }
      }
    }
  }
  sub_48C428(*(_QWORD *)(v8 + 472), v11 + *(_QWORD *)(v8 + 480), 0);
  return v7;
}
