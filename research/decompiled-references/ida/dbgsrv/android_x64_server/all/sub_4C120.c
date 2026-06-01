/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C120
// Address: 0x000000000004C120

//----- (000000000004C120) ----------------------------------------------------
_QWORD *__fastcall sub_4C120(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  _QWORD *v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  bool v18; // cc
  __int64 v19; // r12
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rdx
  __int64 v23; // [rsp+8h] [rbp-40h]
  _QWORD *v24; // [rsp+10h] [rbp-38h]

  if ( a2 != a1 )
  {
    v6 = a2;
    v7 = 0x8E38E38E38E38E39LL;
    v23 = a1;
    do
    {
      while ( 1 )
      {
        v8 = v6;
        v9 = v7 * ((a4 - *a3) >> 3);
        v24 = a3;
        if ( a4 - *a3 < 73 )
        {
          v13 = 56 - v9;
          v14 = (unsigned __int128)((__int64)0xB6DB6DB6DB6DB6DBLL * (__int128)(56 - v9)) >> 64;
          v11 = &a3[((unsigned __int64)v14 >> 63) + (v14 >> 4)];
          v12 = *v11 + 72 * (56 * (v13 / 56) - v13) + 3960;
        }
        else
        {
          v10 = v9 - 1;
          v11 = &a3[v10 / 0x38];
          v12 = *v11 + 72 * (v10 % 0x38);
        }
        v15 = v7 * ((v12 + 72 - *v11) >> 3);
        v16 = v7;
        v17 = v7 * ((v6 - a1) >> 3);
        v18 = v17 <= v15;
        if ( v17 > v15 )
          v17 = v7 * ((v12 + 72 - *v11) >> 3);
        v6 -= 72 * v7 * ((v12 + 72 - *v11) >> 3);
        if ( v18 )
          v6 = a1;
        for ( ; v6 != v8; v12 -= 72 )
        {
          v8 -= 72;
          copy_debug_event(v12, v8);
        }
        if ( v17 )
          break;
        a1 = v23;
        v7 = v16;
        a3 = v24;
        if ( v6 == v23 )
          return a3;
      }
      v7 = v16;
      v19 = v16 * ((a4 - *v24) >> 3);
      v18 = v19 <= v17;
      v20 = v19 - v17;
      if ( v18 )
      {
        a3 = &v24[(__int64)(55 - v20) / -56];
        a4 = *a3 + 72 * (56 * ((__int64)(55 - v20) / 56) - (55 - v20)) + 3960;
      }
      else
      {
        v21 = v20 / 0x38;
        a4 = v24[v20 / 0x38] + 72 * (v20 % 0x38);
        a3 = &v24[v21];
      }
      a1 = v23;
    }
    while ( v6 != v23 );
  }
  return a3;
}
