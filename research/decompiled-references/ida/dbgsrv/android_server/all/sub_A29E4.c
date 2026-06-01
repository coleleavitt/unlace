/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A29E4
// Address: 0x00000000000A29E4

//----- (00000000000A29E4) ----------------------------------------------------
__int64 __fastcall sub_A29E4(_DWORD *a1, int a2, __int64 a3)
{
  int v5; // w8
  int v7; // w8
  int v8; // w0
  int v9; // w10
  int v10; // w9
  __int64 v11; // x12
  int v13; // w0
  int v14; // w10
  __int64 v15; // x12

  if ( a2 == 4 )
    return 0;
  if ( a2 != 8 )
  {
    v7 = a1[185];
    if ( v7 < 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 624LL))(a1);
      a1[185] = v13;
      if ( v13 < 0 )
      {
        a1[185] = 0;
        return 2;
      }
      if ( v13 >= 16 )
        v7 = 16;
      else
        v7 = v13;
      a1[185] = v7;
      if ( v7 < 1 )
        return 2;
    }
    else if ( v7 < 1 )
    {
      return 2;
    }
    v14 = 0;
    v10 = -1;
    while ( 1 )
    {
      v15 = *(_QWORD *)&a1[6 * v14 + 284];
      if ( v15 == a3 )
        break;
      if ( v15 == -1 && v10 < 0 )
        v10 = v14;
      if ( ++v14 >= v7 )
        return (v10 >> 31) & 6;
    }
    return 4;
  }
  v5 = a1[184];
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 < 1 )
      return 2;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 616LL))(a1);
  a1[184] = v8;
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( v8 >= 16 )
      v5 = 16;
    else
      v5 = v8;
    a1[184] = v5;
    if ( v5 < 1 )
      return 2;
LABEL_15:
    v9 = 0;
    v10 = -1;
    while ( 1 )
    {
      v11 = *(_QWORD *)&a1[6 * v9 + 188];
      if ( v11 == a3 )
        break;
      if ( v11 == -1 && v10 < 0 )
        v10 = v9;
      if ( ++v9 >= v5 )
        return (v10 >> 31) & 6;
    }
    return 4;
  }
  a1[184] = 0;
  return 2;
}
