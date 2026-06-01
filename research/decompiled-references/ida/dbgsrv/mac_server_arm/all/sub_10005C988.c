/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005C988
// Address: 0x000000010005C988

//----- (000000010005C988) ----------------------------------------------------
__int64 __fastcall sub_10005C988(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // x9
  __int64 v4; // x9
  _DWORD *v5; // x19
  __int64 v6; // x20
  int v7; // w0
  int v8; // w8
  _DWORD *v9; // x8
  _DWORD *v10; // x19
  __int64 v11; // x20
  int v12; // w0
  int v13; // w8

  if ( a3 == 8 )
  {
    LODWORD(v3) = a1[184];
    if ( (v3 & 0x80000000) != 0 )
    {
      v5 = a1;
      v6 = a2;
      v7 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 616LL))();
      a2 = v6;
      v8 = v7;
      a1 = v5;
      if ( (unsigned int)v8 >= 0x10 )
        LODWORD(v3) = 16;
      else
        LODWORD(v3) = v8;
      if ( v8 < 0 )
        LODWORD(v3) = 0;
      v5[184] = v3;
      if ( !(_DWORD)v3 )
        return 0;
    }
    else if ( !(_DWORD)v3 )
    {
      return 0;
    }
    v9 = a1 + 186;
    v3 = (unsigned int)v3;
    while ( *((_QWORD *)v9 + 1) != a2 )
    {
      v9 += 6;
      if ( !--v3 )
        return 0;
    }
  }
  else
  {
    LODWORD(v4) = a1[185];
    if ( (v4 & 0x80000000) != 0 )
    {
      v10 = a1;
      v11 = a2;
      v12 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 624LL))();
      a2 = v11;
      v13 = v12;
      a1 = v10;
      if ( (unsigned int)v13 >= 0x10 )
        LODWORD(v4) = 16;
      else
        LODWORD(v4) = v13;
      if ( v13 < 0 )
        LODWORD(v4) = 0;
      v10[185] = v4;
      if ( !(_DWORD)v4 )
        return 0;
    }
    else if ( !(_DWORD)v4 )
    {
      return 0;
    }
    v9 = a1 + 282;
    v4 = (unsigned int)v4;
    while ( *((_QWORD *)v9 + 1) != a2 )
    {
      v9 += 6;
      if ( !--v4 )
        return 0;
    }
  }
  *v9 = 12;
  *(_OWORD *)(v9 + 2) = xmmword_100075710;
  return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 648LL))(a1);
}
// 100075710: using guessed type __int128 xmmword_100075710;
