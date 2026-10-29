/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C7C8
// Address: 0x000000000049C7C8

//----- (000000000049C7C8) ----------------------------------------------------
_QWORD *__fastcall sub_49C7C8(_QWORD *result, char *a2, __int64 *a3)
{
  _QWORD *v3; // x19
  unsigned __int64 v6; // x22
  void *v7; // x1
  __int64 v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11[4]; // [xsp+40h] [xbp-20h] BYREF

  if ( result )
  {
    v3 = result;
    v6 = result[1];
    if ( v6 > 1 )
    {
      v7 = (void *)*result;
      if ( *(_BYTE *)(*result + v6 - 2) != 10 )
      {
        if ( v6 + 1 > result[2] )
        {
          v7 = sub_491288((__int64)result, v7, v6 + 1, 1u);
          *v3 = v7;
        }
        v3[1] = v6 + 1;
        *((_BYTE *)v7 + v6 - 1) = 10;
        *(_BYTE *)(*v3 + v6) = 0;
      }
    }
    v8 = a3[1];
    v9 = a3[2];
    v10 = a3[3];
    v11[0] = *a3;
    v11[1] = v8;
    v11[2] = v9;
    v11[3] = v10;
    return (_QWORD *)sub_42D038((__int64)v3, a2, v11);
  }
  return result;
}
