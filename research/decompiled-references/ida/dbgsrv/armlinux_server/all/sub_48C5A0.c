/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C5A0
// Address: 0x000000000048C5A0

//----- (000000000048C5A0) ----------------------------------------------------
__int64 __fastcall sub_48C5A0(_QWORD *a1, __int64 a2, char *a3, size_t a4)
{
  __int64 v5; // x2
  unsigned __int64 v8; // x3
  char *v9; // x22
  __off64_t v10; // x1
  __int64 v11; // x21
  size_t v12; // x0
  unsigned __int64 v13; // x0
  __int64 v14; // x22
  __int64 v15; // x1

  v5 = a1[7];
  if ( v5 == a2 )
  {
    v8 = a1[6];
    if ( v8 < a1[4] )
    {
      v9 = a3;
      v10 = a1[8];
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1[3] + 8 * v8);
        if ( sub_48C428(v11, v10, 0) != a1[8] )
          return -1;
        v12 = sub_48C160(v11, v9, a4);
        if ( v12 == -1 )
        {
          v12 = 0;
          if ( !a4 )
          {
LABEL_13:
            v5 = a1[7];
            v14 = v9 - a3;
            v15 = v14;
            a1[8] += v12;
            goto LABEL_10;
          }
        }
        else
        {
          v9 += v12;
          a4 -= v12;
          if ( !a4 )
            goto LABEL_13;
        }
        v10 = 0;
        v13 = a1[4];
        v8 = a1[6] + 1LL;
        a1[6] = v8;
        a1[8] = 0;
        if ( v13 <= v8 )
        {
          v14 = v9 - a3;
          v5 = a1[7];
          v15 = v14;
          goto LABEL_10;
        }
      }
    }
    v15 = 0;
    v14 = 0;
LABEL_10:
    a1[7] = v5 + v15;
  }
  else
  {
    v14 = -1;
    sub_4869C8(3);
  }
  return v14;
}
