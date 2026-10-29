/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450B50
// Address: 0x0000000000450B50

//----- (0000000000450B50) ----------------------------------------------------
__int64 __fastcall sub_450B50(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v6; // x3
  char *v7; // x0
  __int64 v8; // x20
  unsigned __int64 v9; // x19
  __int64 v10; // x19

  v4 = sub_490E28(a1, *(FILE **)(a2 + 288));
  if ( v4 > 0
    && *(_QWORD *)(a1 + 8) > 3u
    && !strncmp(*(const char **)a1, (const char *)&qword_4C6B00, 3u)
    && v4 + 2 >= sub_4905F0(*(FILE **)(a2 + 288)) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v4 = v6 - 1;
      if ( v6 == 1 )
        return v4;
      v7 = *(char **)a1;
      if ( (unsigned __int64)v4 <= 3 )
      {
        v9 = 1;
        v8 = 0;
      }
      else
      {
        v8 = v6 - 4;
        v9 = v6 - 3;
        memmove(v7, v7 + 3, v6 - 4);
        v7 = *(char **)a1;
      }
      if ( v9 > *(_QWORD *)(a1 + 16) )
      {
        v7 = (char *)sub_491288(a1, v7, v9, 1u);
        *(_QWORD *)a1 = v7;
      }
      *(_QWORD *)(a1 + 8) = v9;
      v7[v8] = 0;
      v10 = *(_QWORD *)(a1 + 8);
      if ( v10 )
        return v10 - 1;
    }
    return 0;
  }
  return v4;
}
// 4C6B00: using guessed type __int64 qword_4C6B00;
