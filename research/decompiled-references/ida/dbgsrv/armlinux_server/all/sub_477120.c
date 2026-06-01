/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477120
// Address: 0x0000000000477120

//----- (0000000000477120) ----------------------------------------------------
__int64 __fastcall sub_477120(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // x20
  __int64 v8; // x19
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x1
  __int64 v12; // x0
  unsigned __int64 v15; // x0

  v4 = 0;
  if ( (a4 & 0x80000000) == 0 )
  {
    v15 = sub_4926B8();
    v4 = (unsigned int)v15 + 1000LL * a4 + 1000000 * HIDWORD(v15);
  }
  if ( !a3 )
    return a3;
  v8 = a3;
  while ( 1 )
  {
    if ( v4 )
    {
      v9 = sub_4926B8();
      v10 = (unsigned int)v9 + 1000000 * HIDWORD(v9);
      v11 = (v4 - v10) / 0x3E8;
      v11 = v4 > v10 ? (unsigned int)v11 : 0LL;
    }
    else
    {
      v11 = 0xFFFFFFFFLL;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, v11) <= 0 )
      break;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2, v8);
    if ( v12 <= 0 )
      break;
    a2 += v12;
    v8 -= v12;
    if ( !v8 )
      return a3;
  }
  return a3 - v8;
}
