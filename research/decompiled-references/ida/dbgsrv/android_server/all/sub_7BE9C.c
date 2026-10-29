/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BE9C
// Address: 0x000000000007BE9C

//----- (000000000007BE9C) ----------------------------------------------------
__int64 *__fastcall sub_7BE9C(__int64 **a1, unsigned __int64 *a2, __int64 a3, __int64 **a4)
{
  __int64 **v4; // x22
  __int64 *v5; // x23
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  __int64 *v10; // x21
  __int64 *v11; // x0
  __int64 v12; // x8
  __int64 *v13; // x8
  __int64 *v14; // x1

  v4 = a1 + 1;
  v5 = a1[1];
  if ( v5 )
  {
    v8 = *a2;
    v4 = a1 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v5[4];
        if ( v8 < v9 )
          break;
        if ( v9 >= v8 )
          goto LABEL_11;
        v4 = (__int64 **)(v5 + 1);
        if ( !v5[1] )
          goto LABEL_11;
        v5 = (__int64 *)v5[1];
      }
      if ( !*v5 )
        break;
      v4 = (__int64 **)v5;
      v5 = (__int64 *)*v5;
    }
    v4 = (__int64 **)v5;
    v10 = (__int64 *)*v5;
    if ( !*v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = (__int64 *)(a1 + 1);
LABEL_11:
    v10 = *v4;
    if ( !*v4 )
    {
LABEL_14:
      v11 = (__int64 *)operator new(0x48u);
      v10 = v11;
      v12 = **a4;
      *((_BYTE *)v11 + 40) = 2;
      *v11 = 0;
      v11[1] = 0;
      v11[7] = 0;
      v11[8] = 0;
      v11[6] = 0;
      v11[2] = (__int64)v5;
      v11[4] = v12;
      *v4 = v11;
      v13 = (__int64 *)**a1;
      if ( v13 )
      {
        *a1 = v13;
        v14 = *v4;
      }
      else
      {
        v14 = v11;
      }
      sub_48ED8(a1[1], v14);
      a1[2] = (__int64 *)((char *)a1[2] + 1);
    }
  }
  return v10;
}
