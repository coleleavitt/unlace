/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E3BC
// Address: 0x000000010005E3BC

//----- (000000010005E3BC) ----------------------------------------------------
__int64 __fastcall sub_10005E3BC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // x0
  unsigned __int64 v9; // x24
  __int64 v10; // x8
  __int64 v11; // x22
  unsigned __int64 v12; // x0
  unsigned __int64 v13; // x8
  bool v14; // cf
  bool v15; // cc
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x8
  __int64 v18; // x1
  __int64 v19; // x0

  if ( (a4 & 0x80000000) != 0 )
  {
    v9 = 0;
  }
  else
  {
    v8 = qtime64();
    v9 = v8 + 1000LL * a4 - 4293967296u * HIDWORD(v8);
  }
  v10 = a3;
  while ( v10 )
  {
    v11 = v10;
    if ( v9 )
    {
      v12 = qtime64();
      v13 = v12 - 4293967296u * HIDWORD(v12);
      v14 = v9 >= v13;
      v16 = v9 - v13;
      v15 = v16 != 0 && v14;
      v17 = v16 / 0x3E8;
      if ( v15 )
        v18 = (unsigned int)v17;
      else
        v18 = 0;
    }
    else
    {
      v18 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v18) > 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, v11);
      v10 = v11 - v19;
      a2 += v19;
      if ( v19 > 0 )
        continue;
    }
    a3 -= v11;
    return a3;
  }
  return a3;
}
