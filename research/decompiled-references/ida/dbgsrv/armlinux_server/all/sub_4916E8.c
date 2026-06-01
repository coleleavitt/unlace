/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4916E8
// Address: 0x00000000004916E8

//----- (00000000004916E8) ----------------------------------------------------
_DWORD *__fastcall sub_4916E8(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // x4
  __int64 v3; // x8
  int v4; // w5
  int v5; // w7
  _BOOL4 v6; // w2
  __int64 v7; // x3
  _QWORD *v8; // x2
  _QWORD *i; // x2
  int v10; // w3
  _DWORD *v11; // x6
  int v12; // w3

  if ( result != a2 )
  {
    v2 = result + 2;
    if ( a2 != result + 2 )
    {
      v3 = -8LL - (_QWORD)result;
      do
      {
        v4 = *v2;
        v5 = v2[1];
        if ( *v2 == *result )
          v6 = result[1] > v5;
        else
          v6 = v4 < *result;
        v2 += 2;
        if ( !v6 )
        {
          for ( i = v2 - 2; ; i[1] = *i )
          {
            v10 = *((_DWORD *)i - 2);
            v11 = i;
            if ( v4 == v10 )
            {
              v12 = *((_DWORD *)i-- - 1);
              if ( v12 <= v5 )
              {
LABEL_18:
                *v11 = v4;
                v11[1] = v5;
                goto LABEL_11;
              }
            }
            else
            {
              --i;
              if ( v4 >= v10 )
                goto LABEL_18;
            }
          }
        }
        v7 = ((__int64)v2 + v3) >> 3;
        if ( (__int64)v2 + v3 > 0 )
        {
          v8 = v2;
          do
          {
            --v8;
            --v7;
            *v8 = *(v8 - 1);
          }
          while ( v7 );
        }
        *result = v4;
        result[1] = v5;
LABEL_11:
        ;
      }
      while ( a2 != v2 );
    }
  }
  return result;
}
