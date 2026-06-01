/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000608B4
// Address: 0x00000001000608B4

//----- (00000001000608B4) ----------------------------------------------------
__int64 __fastcall sub_1000608B4(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *v5; // x22
  __int64 *v6; // x8
  __int64 **v7; // x24
  int v8; // w23
  __int64 **v9; // x21
  int v10; // w8
  __int64 *v11; // x25
  __int64 *v12; // x8
  __int64 *v13; // x1

  v5 = *(__int64 **)(a2 + 32);
  v7 = a3 + 1;
  v6 = a3[1];
  v8 = *(_DWORD *)(a1 + 1512);
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (__int64 **)v6;
        v10 = *((_DWORD *)v6 + 8);
        if ( v8 >= v10 )
          break;
        v6 = *v9;
        v7 = v9;
        if ( !*v9 )
          goto LABEL_8;
      }
      if ( v10 >= v8 )
        break;
      v6 = v9[1];
      if ( !v6 )
      {
        v7 = v9 + 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v9 = a3 + 1;
LABEL_8:
    v11 = (__int64 *)v9;
    v9 = (__int64 **)operator new(0x48u);
    *((_DWORD *)v9 + 8) = v8;
    *((_DWORD *)v9 + 10) = -2;
    v9[7] = nullptr;
    v9[8] = nullptr;
    v9[6] = (__int64 *)-1LL;
    *v9 = nullptr;
    v9[1] = nullptr;
    v9[2] = v11;
    *v7 = (__int64 *)v9;
    v12 = (__int64 *)**a3;
    v13 = (__int64 *)v9;
    if ( v12 )
    {
      *a3 = v12;
      v13 = *v7;
    }
    sub_10000BD00(a3[1], v13);
    a3[2] = (__int64 *)((char *)a3[2] + 1);
  }
  v9[6] = v5;
  return *(unsigned int *)(a1 + 244);
}
