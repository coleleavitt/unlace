/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012D04
// Address: 0x0000000100012D04

//----- (0000000100012D04) ----------------------------------------------------
__int64 __fastcall sub_100012D04(__int64 result, _DWORD *a2, unsigned __int64 a3, __int64 a4, off_t a5, __int64 a6)
{
  __int64 v6; // x22
  off_t v7; // x23
  unsigned __int64 v10; // x9
  __int64 v11; // x24
  unsigned __int64 v12; // x8

  v6 = a6;
  v7 = a5;
  if ( a5 != -1 )
  {
    if ( a6 != -1 )
      goto LABEL_3;
LABEL_6:
    result = qlsize(result);
    v6 = result;
    LODWORD(v10) = 0;
    if ( v7 < 0 )
      goto LABEL_11;
    goto LABEL_7;
  }
  v11 = result;
  v7 = qlseek(result, 0, 1);
  result = v11;
  if ( v6 == -1 )
    goto LABEL_6;
LABEL_3:
  LODWORD(v10) = 0;
  if ( v7 < 0 )
  {
LABEL_11:
    *a2 = v10;
    result = sub_10001BF64();
    if ( (_DWORD)result != 1 )
      sub_10001BFD4(0);
    return result;
  }
LABEL_7:
  v12 = v6 - v7;
  if ( v6 - v7 < 0 )
    goto LABEL_11;
  if ( !is_mul_ok((unsigned int)*a2, a3) || v12 < (unsigned int)*a2 * a3 )
  {
    v10 = v12 / a3;
    goto LABEL_11;
  }
  return result;
}
