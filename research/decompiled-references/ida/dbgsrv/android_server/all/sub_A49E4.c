/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A49E4
// Address: 0x00000000000A49E4

//----- (00000000000A49E4) ----------------------------------------------------
__int64 __fastcall sub_A49E4(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x19
  unsigned __int64 v8; // x0
  unsigned __int64 v9; // x24
  __int64 v10; // x22
  unsigned __int64 v11; // x0
  unsigned __int64 v12; // x8
  bool v13; // cf
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x1
  __int64 v16; // x0

  v4 = a3;
  if ( a4 < 0 )
  {
    v9 = 0;
    if ( !a3 )
      return v4;
  }
  else
  {
    v8 = qtime64();
    v9 = (unsigned int)v8 + 1000LL * a4 + 1000000 * HIDWORD(v8);
    if ( !v4 )
      return v4;
  }
  v10 = v4;
  while ( 1 )
  {
    if ( v9 )
    {
      v11 = qtime64();
      v12 = 1000000 * HIDWORD(v11) + (unsigned int)v11;
      v13 = v9 >= v12;
      v14 = v9 - v12;
      v15 = (v14 != 0) & (unsigned __int8)v13 ? v14 / 0x3E8 : 0LL;
    }
    else
    {
      v15 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v15) < 1 )
      break;
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, v10);
    if ( v16 <= 0 )
      break;
    v10 -= v16;
    a2 += v16;
    if ( !v10 )
      return v4;
  }
  v4 -= v10;
  return v4;
}
