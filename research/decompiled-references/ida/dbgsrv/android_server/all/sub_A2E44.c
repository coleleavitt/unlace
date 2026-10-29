/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2E44
// Address: 0x00000000000A2E44

//----- (00000000000A2E44) ----------------------------------------------------
__int64 __fastcall sub_A2E44(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v3; // x22
  __int64 **v4; // x23
  __int64 *v5; // x24
  int v8; // w8
  int v9; // w9
  __int64 *v10; // x21
  _QWORD *v11; // x0
  int v12; // w8
  __int64 *v13; // x8
  __int64 *v14; // x1

  v3 = *(_QWORD *)(a2 + 32);
  v4 = a3 + 1;
  v5 = a3[1];
  if ( v5 )
  {
    v8 = *(_DWORD *)(a1 + 1512);
    v4 = a3 + 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *((_DWORD *)v5 + 8);
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
      goto LABEL_12;
  }
  else
  {
    v5 = (__int64 *)(a3 + 1);
LABEL_11:
    v10 = *v4;
    if ( !*v4 )
    {
LABEL_12:
      v11 = operator new(0x48u);
      v12 = *(_DWORD *)(a1 + 1512);
      v11[7] = 0;
      v11[8] = 0;
      *v11 = 0;
      v11[1] = 0;
      v11[2] = v5;
      *((_DWORD *)v11 + 10) = -2;
      v11[6] = -1;
      *((_DWORD *)v11 + 8) = v12;
      *v4 = v11;
      v10 = v11;
      v13 = (__int64 *)**a3;
      if ( v13 )
      {
        *a3 = v13;
        v14 = *v4;
      }
      else
      {
        v14 = v11;
      }
      sub_48ED8(a3[1], v14);
      a3[2] = (__int64 *)((char *)a3[2] + 1);
    }
  }
  v10[6] = v3;
  return *(unsigned int *)(a1 + 244);
}
