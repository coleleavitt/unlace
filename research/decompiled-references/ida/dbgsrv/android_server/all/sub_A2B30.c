/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2B30
// Address: 0x00000000000A2B30

//----- (00000000000A2B30) ----------------------------------------------------
__int64 __fastcall sub_A2B30(_DWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v7; // w8
  int v8; // w8
  int v10; // w0
  int v11; // w10
  int v12; // w9
  __int64 v13; // x12
  _DWORD *v15; // x22
  int v16; // w0
  int v17; // w10
  int v18; // w9
  __int64 v19; // x12
  _DWORD *v21; // x23

  if ( a2 == 8 )
  {
    v7 = a1[184];
    if ( (v7 & 0x80000000) == 0 )
    {
      if ( v7 < 1 )
        return 0;
LABEL_13:
      v11 = 0;
      v12 = -1;
      while ( 1 )
      {
        v13 = *(_QWORD *)&a1[6 * v11 + 188];
        if ( v13 == a3 )
          break;
        if ( v13 == -1 && v12 < 0 )
          v12 = v11;
        if ( ++v11 >= v7 )
        {
          if ( v12 < 0 )
            return 0;
          v15 = &a1[6 * v12];
          v15[186] = 8;
          *((_QWORD *)v15 + 94) = a3;
          *((_QWORD *)v15 + 95) = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 632LL))(
                                    a1,
                                    8,
                                    a3,
                                    a4);
          return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 648LL))(a1);
        }
      }
      return 0;
    }
    v10 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 616LL))(a1);
    a1[184] = v10;
    if ( (v10 & 0x80000000) == 0 )
    {
      if ( v10 >= 16 )
        v7 = 16;
      else
        v7 = v10;
      a1[184] = v7;
      if ( v7 < 1 )
        return 0;
      goto LABEL_13;
    }
    a1[184] = 0;
  }
  else
  {
    v8 = a1[185];
    if ( v8 < 0 )
    {
      v16 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 624LL))(a1);
      a1[185] = v16;
      if ( v16 < 0 )
      {
        a1[185] = 0;
        return 0;
      }
      if ( v16 >= 16 )
        v8 = 16;
      else
        v8 = v16;
      a1[185] = v8;
      if ( v8 < 1 )
        return 0;
    }
    else if ( v8 < 1 )
    {
      return 0;
    }
    v17 = 0;
    v18 = -1;
    while ( 1 )
    {
      v19 = *(_QWORD *)&a1[6 * v17 + 284];
      if ( v19 == a3 )
        break;
      if ( v19 == -1 && v18 < 0 )
        v18 = v17;
      if ( ++v17 >= v8 )
      {
        if ( v18 < 0 )
          return 0;
        v21 = &a1[6 * v18];
        v21[282] = a2;
        *((_QWORD *)v21 + 142) = a3;
        *((_QWORD *)v21 + 143) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 640LL))(
                                   a1,
                                   a2,
                                   a3,
                                   a4);
        return (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 648LL))(a1);
      }
    }
  }
  return 0;
}
