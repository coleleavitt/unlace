/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C7F0
// Address: 0x000000010005C7F0

//----- (000000010005C7F0) ----------------------------------------------------
__int64 __fastcall sub_10005C7F0(_DWORD *a1, int a2, __int64 a3)
{
  int v4; // w12
  int v5; // w12
  __int64 v6; // x21
  int v7; // w0
  int v8; // w8
  __int64 v9; // x10
  _DWORD *v10; // x8
  __int64 *v11; // x11
  int v12; // w9
  __int64 v13; // x13
  __int64 v14; // t1
  __int64 v16; // x10
  __int64 v17; // x22
  int v18; // w21
  int v19; // w0
  int v20; // w8
  __int64 v21; // x10
  __int64 *v22; // x11
  __int64 v23; // x13
  __int64 v24; // t1
  int *v26; // x20

  if ( a2 == 8 )
  {
    v4 = a1[184];
    if ( v4 < 0 )
    {
      v6 = a3;
      v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 616LL))(a1);
      a3 = v6;
      if ( (unsigned int)v7 >= 0x10 )
        v8 = 16;
      else
        v8 = v7;
      if ( v7 >= 0 )
        v4 = v8;
      else
        v4 = 0;
      a1[184] = v4;
      if ( !v4 )
        return 0;
    }
    else if ( !v4 )
    {
      return 0;
    }
    v9 = 0;
    v10 = a1 + 186;
    v11 = (__int64 *)(a1 + 188);
    v12 = -1;
    while ( 1 )
    {
      v14 = *v11;
      v11 += 3;
      v13 = v14;
      if ( v14 == a3 )
        return 0;
      if ( v12 < 0 && v13 == -1 )
        v12 = v9;
      if ( v4 == ++v9 )
      {
        if ( v12 < 0 )
          return 0;
        a2 = 8;
        v16 = 632;
        goto LABEL_42;
      }
    }
  }
  v5 = a1[185];
  if ( v5 < 0 )
  {
    v17 = a3;
    v18 = a2;
    v19 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 624LL))(a1);
    a2 = v18;
    a3 = v17;
    if ( (unsigned int)v19 >= 0x10 )
      v20 = 16;
    else
      v20 = v19;
    if ( v19 >= 0 )
      v5 = v20;
    else
      v5 = 0;
    a1[185] = v5;
    if ( !v5 )
      return 0;
  }
  else if ( !v5 )
  {
    return 0;
  }
  v21 = 0;
  v10 = a1 + 282;
  v22 = (__int64 *)(a1 + 284);
  v12 = -1;
  while ( 1 )
  {
    v24 = *v22;
    v22 += 3;
    v23 = v24;
    if ( v24 == a3 )
      break;
    if ( v12 < 0 && v23 == -1 )
      v12 = v21;
    if ( v5 == ++v21 )
    {
      if ( v12 < 0 )
        return 0;
      v16 = 640;
LABEL_42:
      v26 = &v10[6 * v12];
      *v26 = a2;
      *((_QWORD *)v26 + 1) = a3;
      *((_QWORD *)v26 + 2) = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + v16))(a1);
      return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 648LL))(a1);
    }
  }
  return 0;
}
