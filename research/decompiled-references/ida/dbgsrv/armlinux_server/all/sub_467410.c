/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467410
// Address: 0x0000000000467410

//----- (0000000000467410) ----------------------------------------------------
__int64 __fastcall sub_467410(__int64 a1, _DWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // x4
  bool v9; // w3
  __int64 result; // x0
  unsigned __int64 v11; // x1
  bool v12; // zf
  unsigned __int64 v13; // x4
  __int64 v14; // x0
  __int64 v15; // [xsp+28h] [xbp-8h]
  __int64 v16; // [xsp+28h] [xbp-8h]

  if ( a4 == -1 )
  {
    v16 = a5;
    v14 = sub_48C428(a1, 0, 1);
    a5 = v16;
    a4 = v14;
  }
  if ( a5 == -1 )
  {
    v15 = a4;
    a5 = sub_48C400(a1);
    a4 = v15;
  }
  v8 = a5 - a4;
  v9 = a4 >= 0;
  result = v9 & (unsigned __int8)((v8 & 0x8000000000000000LL) == 0LL);
  if ( !v9 || (v8 & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v13) = 0;
    goto LABEL_14;
  }
  v11 = (unsigned int)*a2;
  if ( *a2 )
    v12 = a3 == 0;
  else
    v12 = 1;
  if ( v12 )
  {
    if ( v11 * a3 <= v8 )
      return result;
    goto LABEL_12;
  }
  if ( !is_mul_ok(a3, v11) || v11 * a3 > v8 )
  {
LABEL_12:
    v13 = v8 / a3;
LABEL_14:
    result = 0;
    *a2 = v13;
  }
  return result;
}
