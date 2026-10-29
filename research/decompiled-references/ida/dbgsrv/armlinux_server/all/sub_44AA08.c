/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44AA08
// Address: 0x000000000044AA08

//----- (000000000044AA08) ----------------------------------------------------
__int64 __fastcall sub_44AA08(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x19
  unsigned __int64 v5; // x23
  unsigned __int64 v6; // x22
  _BYTE *v8; // x0
  unsigned __int64 v9; // x1
  __int64 v10; // x22
  __int64 *v11; // x0
  unsigned __int64 v12; // x22
  __int64 v13; // x19
  __int64 *v14; // x2
  __int64 v15[4]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v16[5]; // [xsp+78h] [xbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 != a2 )
  {
    memset(&v15[1], 0, 24);
    LOBYTE(v15[0]) = 2;
    if ( v4 <= a2 )
    {
      if ( v4 >= a2 )
        goto LABEL_6;
      v8 = *(_BYTE **)a1;
      v9 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)a1 <= (unsigned __int64)v15 && v15 < (__int64 *)&v8[32 * v9] )
      {
        memset(&v16[1], 0, 24);
        LOBYTE(v16[0]) = 2;
        sub_4488B8(v16, v15);
        if ( a2 > *(_QWORD *)(a1 + 16) )
          *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, a2, 0x20u);
        v12 = *(_QWORD *)(a1 + 8);
        if ( a2 > v12 )
        {
          v13 = 32 * v12;
          do
          {
            v14 = (__int64 *)(*(_QWORD *)a1 + v13);
            *(_BYTE *)v14 = 2;
            v14[1] = 0;
            v14[2] = 0;
            v14[3] = 0;
            sub_4488B8(v14, v16);
            ++v12;
            v13 += 32;
          }
          while ( a2 != v12 );
        }
        *(_QWORD *)(a1 + 8) = a2;
        sub_448310(v16);
        goto LABEL_6;
      }
      if ( a2 <= v9
        || (v8 = sub_491288(a1, *(void **)a1, a2, 0x20u), v4 = *(_QWORD *)(a1 + 8), *(_QWORD *)a1 = v8, a2 > v4) )
      {
        v10 = 32 * v4;
        while ( 1 )
        {
          v8[v10] = 2;
          v11 = (__int64 *)&v8[v10];
          v11[1] = 0;
          v11[2] = 0;
          v11[3] = 0;
          sub_4488B8(v11, v15);
          ++v4;
          v10 += 32;
          if ( a2 <= v4 )
            break;
          v8 = *(_BYTE **)a1;
        }
      }
    }
    else
    {
      v5 = 32 * a2;
      v6 = a2;
      do
      {
        ++v6;
        sub_448310((__int64 *)(*(_QWORD *)a1 + v5));
        v5 += 32LL;
      }
      while ( v4 != v6 );
    }
    *(_QWORD *)(a1 + 8) = a2;
LABEL_6:
    sub_448310(v15);
  }
  return v16[4] ^ _stack_chk_guard;
}
