/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004284C
// Address: 0x000000010004284C

//----- (000000010004284C) ----------------------------------------------------
_QWORD *__fastcall sub_10004284C(_QWORD *result, _QWORD *a2, unsigned int a3, int a4)
{
  _QWORD *v4; // x9
  _QWORD *v6; // x20
  __int64 v7; // x8
  _BYTE *v8; // x8
  char v9; // w24
  __int64 v10; // x21
  unsigned __int8 *v11; // x23
  int v12; // t1
  _QWORD *v13; // x1
  __int64 v14; // x8
  bool v15; // cf
  __int64 v16; // x8
  __int64 v17; // x25
  int v18; // t1

  v4 = (_QWORD *)(result[7] + 56LL * a4);
  if ( v4[1] > (unsigned __int64)a3 )
  {
    v6 = result;
    v7 = *v4 + 24LL * a3;
    if ( *(_QWORD *)(v7 + 8) )
    {
      v8 = *(_BYTE **)v7;
      v9 = *v8;
      if ( *v8 )
      {
        v10 = (unsigned int)(a4 - 1);
        v11 = v8 + 1;
        do
        {
          while ( v9 < -1 )
          {
            result = (_QWORD *)sub_10004284C(v6, a2, v9 & 0x7F, v10);
            v12 = *v11++;
            v9 = v12;
            if ( !v12 )
              return result;
          }
          v13 = (_QWORD *)*a2;
          v14 = a2[1];
          v15 = v14 != 0;
          v16 = v14 - 1;
          if ( v15 )
            v17 = v16;
          else
            v17 = 0;
          if ( a2[2] < (unsigned __int64)(v17 + 2) )
          {
            result = qvector_reserve(a2, v13, v17 + 2, 1u);
            v13 = result;
            *a2 = result;
          }
          a2[1] = v17 + 2;
          *((_BYTE *)v13 + v17) = v9;
          *(_BYTE *)(*a2 + v17 + 1) = 0;
          v18 = *v11++;
          v9 = v18;
        }
        while ( v18 );
      }
    }
  }
  return result;
}
// 10007AE40: using guessed type char byte_10007AE40;
