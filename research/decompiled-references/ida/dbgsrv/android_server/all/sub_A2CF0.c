/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2CF0
// Address: 0x00000000000A2CF0

//----- (00000000000A2CF0) ----------------------------------------------------
__int64 __fastcall sub_A2CF0(_DWORD *a1, __int64 a2, int a3)
{
  int v5; // w9
  int v6; // w9
  int v7; // w0
  int v8; // w10
  _QWORD *i; // x8
  int v10; // w0
  int v11; // w10

  if ( a3 != 8 )
  {
    v6 = a1[185];
    if ( v6 < 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 624LL))(a1);
      a1[185] = v10;
      if ( v10 < 0 )
      {
        a1[185] = 0;
        return 0;
      }
      if ( v10 >= 16 )
        v6 = 16;
      else
        v6 = v10;
      a1[185] = v6;
      if ( v6 < 1 )
        return 0;
    }
    else if ( v6 < 1 )
    {
      return 0;
    }
    v11 = 0;
    for ( i = a1 + 286; *(i - 1) != a2; i += 3 )
    {
      if ( ++v11 >= v6 )
        return 0;
    }
    goto LABEL_26;
  }
  v5 = a1[184];
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 < 1 )
      return 0;
    goto LABEL_13;
  }
  v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 616LL))(a1);
  a1[184] = v7;
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( v7 >= 16 )
      v5 = 16;
    else
      v5 = v7;
    a1[184] = v5;
    if ( v5 < 1 )
      return 0;
LABEL_13:
    v8 = 0;
    for ( i = a1 + 190; *(i - 1) != a2; i += 3 )
    {
      if ( ++v8 >= v5 )
        return 0;
    }
LABEL_26:
    *((_DWORD *)i - 4) = 12;
    *(i - 1) = -1;
    *i = 0;
    return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 648LL))(a1);
  }
  a1[184] = 0;
  return 0;
}
