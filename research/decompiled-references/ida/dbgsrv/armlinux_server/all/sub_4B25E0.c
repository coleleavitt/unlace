/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B25E0
// Address: 0x00000000004B25E0

//----- (00000000004B25E0) ----------------------------------------------------
__int64 __fastcall sub_4B25E0(_QWORD *a1, _BYTE *src, __int64 a3)
{
  size_t v3; // x19
  _BYTE *v6; // x1
  _BYTE *v7; // x0
  __int64 result; // x0
  _BYTE *v9; // x1
  _BYTE *v10; // x1
  __int64 v11; // [xsp+38h] [xbp+38h] BYREF

  v3 = a3 - (_QWORD)src;
  v11 = a3 - (_QWORD)src;
  if ( (unsigned __int64)(a3 - (_QWORD)src) > 0xF )
  {
    v7 = sub_4AFA78((__int64)a1, (unsigned __int64 *)&v11, 0);
    *a1 = v7;
    a1[2] = v11;
  }
  else
  {
    v6 = (_BYTE *)*a1;
    v7 = (_BYTE *)*a1;
    if ( v3 == 1 )
    {
      *v6 = *src;
      result = v11;
      v9 = (_BYTE *)*a1;
      a1[1] = v11;
      v9[result] = 0;
      return result;
    }
    if ( !v3 )
    {
      result = v11;
      a1[1] = v11;
      v6[result] = 0;
      return result;
    }
  }
  memcpy(v7, src, v3);
  result = v11;
  v10 = (_BYTE *)*a1;
  a1[1] = v11;
  v10[result] = 0;
  return result;
}
