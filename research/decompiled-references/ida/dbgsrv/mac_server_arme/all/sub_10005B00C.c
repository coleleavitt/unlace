/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B00C
// Address: 0x000000010005B00C

//----- (000000010005B00C) ----------------------------------------------------
__int64 **__fastcall sub_10005B00C(__int64 **a1, int *a2)
{
  __int64 *v3; // x8
  __int64 **v4; // x22
  int v5; // w21
  __int64 **v6; // x20
  int v7; // w8
  __int64 *v8; // x23
  __int64 *v9; // x8
  __int64 *v10; // x1

  v4 = a1 + 1;
  v3 = a1[1];
  v5 = *a2;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (__int64 **)v3;
        v7 = *((_DWORD *)v3 + 8);
        if ( v5 >= v7 )
          break;
        v3 = *v6;
        v4 = v6;
        if ( !*v6 )
          goto LABEL_8;
      }
      if ( v7 >= v5 )
        break;
      v3 = v6[1];
      if ( !v3 )
      {
        v4 = v6 + 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v6 = a1 + 1;
LABEL_8:
    v8 = (__int64 *)v6;
    v6 = (__int64 **)operator new(0x48u);
    *((_DWORD *)v6 + 8) = v5;
    *((_DWORD *)v6 + 10) = -2;
    v6[7] = nullptr;
    v6[8] = nullptr;
    v6[6] = (__int64 *)-1LL;
    *v6 = nullptr;
    v6[1] = nullptr;
    v6[2] = v8;
    *v4 = (__int64 *)v6;
    v9 = (__int64 *)**a1;
    v10 = (__int64 *)v6;
    if ( v9 )
    {
      *a1 = v9;
      v10 = *v4;
    }
    sub_10000BD00(a1[1], v10);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v6 + 5;
}
