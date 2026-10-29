/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001DDE0
// Address: 0x000000010001DDE0

//----- (000000010001DDE0) ----------------------------------------------------
__int64 __fastcall sub_10001DDE0(__int64 a1, int a2)
{
  __int64 result; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 v11; // x23
  _QWORD *v12; // x24
  natural_t *v13; // x25
  __int64 v14; // x8
  __int64 v15; // x23
  __int64 *v16; // x24
  __int64 *i; // x25
  __int64 v18; // x8
  natural_t new_state[64]; // [xsp+20h] [xbp-250h] BYREF
  __int64 v20; // [xsp+120h] [xbp-150h] BYREF

  result = sub_10001D3C0(a1, a2, new_state);
  if ( (_DWORD)result )
  {
    v11 = 0;
    v12 = (_QWORD *)(a1 + 752);
    v13 = new_state;
    while ( 1 )
    {
      if ( (*((_QWORD *)v13 + 16) & 1) != 0 )
      {
        if ( *v12 != -1 )
          goto LABEL_4;
        sub_1000593FC(a1, "hwbpt: - slot=%d addr=%a ctrl=%a\n", v5, v6, v7, v8, v9, v10, v11);
        v14 = 0;
        *(_QWORD *)v13 = 0;
      }
      else
      {
        if ( *v12 == -1 )
          goto LABEL_4;
        sub_1000593FC(a1, "hwbpt: + slot=%d addr=%a ctrl=%a\n", v5, v6, v7, v8, v9, v10, v11);
        v14 = v12[1];
        *(_QWORD *)v13 = *v12;
      }
      *((_QWORD *)v13 + 16) = v14;
LABEL_4:
      ++v11;
      v12 += 3;
      v13 += 2;
      if ( v11 == 16 )
      {
        v15 = 0;
        v16 = &v20;
        for ( i = (__int64 *)(a1 + 1136); ; i += 3 )
        {
          if ( (v16[16] & 1) != 0 )
          {
            if ( *i != -1 )
              goto LABEL_12;
            sub_1000593FC(a1, "watch: - slot=%d addr=%a ctrl=%a\n", v5, v6, v7, v8, v9, v10, v15);
            v18 = 0;
            *v16 = 0;
          }
          else
          {
            if ( *i == -1 )
              goto LABEL_12;
            sub_1000593FC(a1, "watch: + slot=%d addr=%a ctrl=%a\n", v5, v6, v7, v8, v9, v10, v15);
            v18 = i[1];
            *v16 = *i;
          }
          v16[16] = v18;
LABEL_12:
          ++v15;
          ++v16;
          if ( v15 == 16 )
          {
            result = sub_100001AE0(a1, a2);
            if ( result )
              return thread_set_state(*(_DWORD *)(result + 4), 15, new_state, 0x82u) == 0;
            return result;
          }
        }
      }
    }
  }
  return result;
}
// 10001DE84: variable 'v5' is possibly undefined
// 10001DE84: variable 'v6' is possibly undefined
// 10001DE84: variable 'v7' is possibly undefined
// 10001DE84: variable 'v8' is possibly undefined
// 10001DE84: variable 'v9' is possibly undefined
// 10001DE84: variable 'v10' is possibly undefined
