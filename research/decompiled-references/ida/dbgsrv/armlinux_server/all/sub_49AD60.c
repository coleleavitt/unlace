/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49AD60
// Address: 0x000000000049AD60

//----- (000000000049AD60) ----------------------------------------------------
__int64 __fastcall sub_49AD60(_QWORD *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 result; // x0
  __int64 v7; // x1
  _BYTE *v8; // x3
  int v9; // w21
  __int64 v10; // x24
  unsigned __int64 v11; // x25
  unsigned int v12; // w0
  unsigned __int8 *v13; // [xsp+50h] [xbp-10h] BYREF

  result = 0;
  if ( a1 )
  {
    v7 = a1[5];
    result = 1;
    if ( v7 )
    {
      result = 0;
      v8 = (_BYTE *)a1[4];
      if ( (*v8 & 0x80) == 0 )
      {
        v9 = 1 << (*v8 & 0xF);
        if ( v9 <= 8 && a2 + a1[1] >= a2 )
        {
          result = 1;
          v10 = a2 - a1[3];
          if ( v10 )
          {
            v13 = v8 + 1;
            v11 = (unsigned __int64)&v8[v7];
            if ( &v8[v7] <= v8 + 1 )
            {
LABEL_16:
              a1[3] = a2;
              return 1;
            }
            else
            {
              while ( 1 )
              {
                v12 = sub_48E5A8(&v13, v11);
                if ( v12 + v9 <= v12 || a1[1] <= (unsigned __int64)(v12 + v9) )
                  return 0;
                sub_49AC18((unsigned __int64 *)(*a1 + v12), v9, v10, a3);
                if ( (unsigned __int64)v13 >= v11 )
                  goto LABEL_16;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
