/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025D30
// Address: 0x0000000100025D30

//----- (0000000100025D30) ----------------------------------------------------
__int64 __fastcall sub_100025D30(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  FILE *v4; // rsi
  __int64 v5; // r15
  _BYTE *v6; // rax
  __int128 v8; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( *((_QWORD *)&xmmword_1000AE250 + 1) > v3 && (v4 = *(FILE **)(xmmword_1000AE250 + 8 * v3)) != nullptr )
  {
    v8 = 0;
    v9 = 0;
    if ( qgetline(&v8, v4) < 0 )
    {
      *(_QWORD *)(a2 + 8) = -1;
      if ( (_QWORD)v8 )
      {
        *((_QWORD *)&v8 + 1) = 0;
        qfree((void *)v8);
      }
    }
    else
    {
      v5 = 0;
      if ( *((_QWORD *)&v8 + 1) )
        v5 = *((_QWORD *)&v8 + 1) - 1LL;
      v6 = (_BYTE *)v8;
      if ( v9 < v5 + 2 )
      {
        v6 = qvector_reserve((__int64)&v8, (void *)v8, v5 + 2, 1u);
        *(_QWORD *)&v8 = v6;
      }
      *((_QWORD *)&v8 + 1) = v5 + 2;
      v6[v5 + 1] = 0;
      *(_BYTE *)(v8 + v5) = 10;
      *(_BYTE *)a2 = 7;
      *(_OWORD *)(a2 + 8) = v8;
      *(_QWORD *)(a2 + 24) = v9;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 1000AE250: using guessed type __int128 xmmword_1000AE250;
