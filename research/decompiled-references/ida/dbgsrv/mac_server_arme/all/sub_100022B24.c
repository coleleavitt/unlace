/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022B24
// Address: 0x0000000100022B24

//----- (0000000100022B24) ----------------------------------------------------
__int64 __fastcall sub_100022B24(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x8
  FILE *v4; // x1
  void *v5; // x1
  __int64 v6; // x21
  void *v8; // [xsp+0h] [xbp-40h] BYREF
  __int128 v9; // [xsp+8h] [xbp-38h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( qword_1000A5928 > v3 && (v4 = *(FILE **)(qword_1000A5920 + 8 * v3)) != nullptr )
  {
    v8 = nullptr;
    v9 = 0u;
    if ( qgetline((__int64)&v8, v4) < 0 )
    {
      *(_QWORD *)(a2 + 8) = -1;
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree(v8);
      }
    }
    else
    {
      v5 = v8;
      if ( (_QWORD)v9 )
        v6 = v9 - 1;
      else
        v6 = 0;
      if ( *((_QWORD *)&v9 + 1) < (unsigned __int64)(v6 + 2) )
      {
        v5 = qvector_reserve(&v8, v8, v6 + 2, 1u);
        v8 = v5;
      }
      *(_QWORD *)&v9 = v6 + 2;
      *((_BYTE *)v5 + v6 + 1) = 0;
      *((_BYTE *)v8 + v6) = 10;
      *(_BYTE *)a2 = 7;
      *(_QWORD *)(a2 + 8) = v8;
      *(_OWORD *)(a2 + 16) = v9;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 1000A5920: using guessed type __int64 qword_1000A5920;
// 1000A5928: using guessed type __int64 qword_1000A5928;
