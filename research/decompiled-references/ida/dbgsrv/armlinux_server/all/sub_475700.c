/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475700
// Address: 0x0000000000475700

//----- (0000000000475700) ----------------------------------------------------
__int64 __fastcall sub_475700(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x24
  int v8; // w2
  _QWORD *v9; // x19
  char *v10; // x23
  __int64 v11; // x25
  _DWORD *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x25
  _BOOL4 v15; // w0
  void *v17; // x0

  v5 = a3 + 1;
  v6 = a3[2];
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v8 = *(_DWORD *)(a1 + 1640);
    v9 = v5;
    do
    {
      while ( *(_DWORD *)(v6 + 32) >= v8 )
      {
        v9 = (_QWORD *)v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v6 )
          goto LABEL_5;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v6 );
LABEL_5:
    if ( v5 != v9 )
    {
      v10 = (char *)(v9 + 5);
      if ( v8 >= *((_DWORD *)v9 + 8) )
        goto LABEL_13;
    }
  }
  else
  {
    v9 = a3 + 1;
  }
  v11 = (__int64)v9;
  v12 = sub_49E050(0x48u);
  v10 = (char *)(v12 + 10);
  v12[8] = *(_DWORD *)(a1 + 1640);
  v12[10] = -2;
  *((_QWORD *)v12 + 7) = 0;
  *((_QWORD *)v12 + 8) = 0;
  *((_QWORD *)v12 + 6) = -1;
  v14 = sub_45F948(a3, v11, v12 + 8);
  if ( v13 )
  {
    v15 = v5 == (_QWORD *)v13;
    if ( v14 )
      v15 = 1;
    if ( !v15 )
      LOBYTE(v15) = v12[8] < *(_DWORD *)(v13 + 32);
    sub_49F830(v15, (__int64)v12, (_QWORD *)v13, v5);
    ++a3[5];
LABEL_13:
    *((_QWORD *)v10 + 1) = v7;
    return *(unsigned int *)(a1 + 276);
  }
  if ( (int)v12[10] >= -1 )
  {
    v17 = *((void **)v12 + 6);
    if ( v17 )
    {
      *((_QWORD *)v12 + 7) = 0;
      j__free(v17);
    }
  }
  j__free_0(v12);
  *(_QWORD *)(v14 + 48) = v7;
  return *(unsigned int *)(a1 + 276);
}
// 4757A8: variable 'v13' is possibly undefined
