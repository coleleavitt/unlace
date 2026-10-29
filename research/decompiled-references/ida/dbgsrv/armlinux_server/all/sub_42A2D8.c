/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A2D8
// Address: 0x000000000042A2D8

//----- (000000000042A2D8) ----------------------------------------------------
unsigned __int64 __fastcall sub_42A2D8(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v9; // x5
  unsigned __int64 v11; // x0
  bool v12; // zf
  unsigned __int64 result; // x0
  unsigned __int64 v14; // x4
  __int64 v15; // x0
  __int64 v16; // [xsp+38h] [xbp-8h]
  __int64 v17; // [xsp+38h] [xbp-8h]

  if ( a5 == -1 )
  {
    v17 = a6;
    v15 = sub_48C428(a1, 0, 1);
    a6 = v17;
    a5 = v15;
  }
  if ( a6 == -1 )
  {
    v16 = a5;
    a6 = sub_48C400(a1);
    a5 = v16;
  }
  v9 = a6 - a5;
  if ( a5 < 0 || (v9 & 0x8000000000000000LL) != 0LL )
  {
    v14 = 0;
LABEL_17:
    *a2 = v14;
    result = sub_41A9E0();
    if ( (_DWORD)result != 1 )
      sub_420558(nullptr);
    return result;
  }
  v11 = *a2;
  if ( *a2 )
    v12 = a3 == 0;
  else
    v12 = 1;
  if ( v12 )
  {
    result = a3 * v11;
    if ( result <= v9 )
      return result;
    goto LABEL_15;
  }
  if ( !is_mul_ok(a3, v11) || (result = a3 * v11, result > v9) )
  {
LABEL_15:
    v14 = v9 / a3;
    goto LABEL_17;
  }
  return result;
}
