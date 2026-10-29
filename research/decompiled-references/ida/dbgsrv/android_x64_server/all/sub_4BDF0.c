/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BDF0
// Address: 0x000000000004BDF0

//----- (000000000004BDF0) ----------------------------------------------------
_QWORD *__fastcall sub_4BDF0(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v7; // r15
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  signed __int64 v10; // rbp
  char v11; // cc
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rbp
  _QWORD *v15; // r13
  __int64 v16; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // r12
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v26; // [rsp+0h] [rbp-58h]
  signed __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  if ( a4 != a2 )
  {
    v7 = a2;
    v8 = 56 * (a3 - a1) - 0x71C71C71C71C71C7LL * ((a4 - *a3) >> 3) + (a2 - *a1) / -72;
    while ( v8 > 0 )
    {
      v10 = 0x8E38E38E38E38E39LL * ((*a1 + 4032LL - v7) >> 3);
      v11 = v10 <= v8;
      if ( v10 > v8 )
        v10 = v8;
      v12 = v7 + 72 * v8;
      if ( v11 )
        v12 = *a1 + 4032LL;
      if ( v12 != v7 )
      {
        v27 = v10;
        v29 = v8;
        v28 = v7;
        v13 = a6;
        v26 = v12;
        do
        {
          v14 = v7;
          v15 = a5;
          v16 = *a5 + 4032LL - v13;
          v7 += v16;
          v17 = 0x8E38E38E38E38E39LL * (v16 >> 3);
          v18 = 0x8E38E38E38E38E39LL * ((v12 - v14) >> 3);
          if ( v18 <= v17 )
            v7 = v12;
          else
            v18 = v17;
          for ( ; v7 != v14; a6 += 72 )
          {
            copy_debug_event(a6, v14);
            v14 += 72;
          }
          if ( v18 )
          {
            v19 = 0x8E38E38E38E38E39LL * ((v13 - *v15) >> 3);
            v11 = ((__int64)(v18 + v19) < 0) ^ __OFADD__(v18, v19) | (v18 + v19 == 0);
            v20 = v18 + v19;
            if ( v11 )
            {
              v22 = &v15[(__int64)(55 - v20) / -56];
              v13 = *v22 + 72 * (56 * ((__int64)(55 - v20) / 56) - (55 - v20)) + 3960;
            }
            else
            {
              v21 = v20 / 0x38;
              v13 = v15[v20 / 0x38] + 72 * (v20 % 0x38);
              v22 = &v15[v21];
            }
            a5 = v22;
          }
          else
          {
            a5 = v15;
          }
          v12 = v26;
          a6 = v13;
        }
        while ( v7 != v26 );
        a6 = v13;
        v8 = v29;
        v7 = v28;
        v10 = v27;
      }
      v8 -= v10;
      if ( v10 )
      {
        v23 = v10 - 0x71C71C71C71C71C7LL * ((v7 - *a1) >> 3);
        if ( (__int64)v23 > 0 )
        {
          v9 = v23 / 0x38;
          v7 = a1[v23 / 0x38] + 72 * (v23 % 0x38);
          a1 += v9;
        }
        else
        {
          v24 = (__int64)(55 - v23) / -56;
          v7 = a1[v24] + 72 * (56 * ((__int64)(55 - v23) / 56) - (55 - v23)) + 3960;
          a1 += v24;
        }
      }
    }
  }
  return a5;
}
