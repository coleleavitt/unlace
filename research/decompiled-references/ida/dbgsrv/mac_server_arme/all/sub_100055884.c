/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055884
// Address: 0x0000000100055884

//----- (0000000100055884) ----------------------------------------------------
__int64 __fastcall sub_100055884(__int64 a1, _DWORD *a2, unsigned int a3)
{
  off_t v4; // x1
  __int64 v5; // x19
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 v8; // x11
  __int64 v9; // x12
  __int64 v10; // x10
  unsigned __int64 v11; // x10
  unsigned __int64 v12; // x13
  bool v13; // cf
  unsigned __int64 v14; // x13
  bool v15; // cc

  if ( a2 && *a2 == 3 )
  {
    v4 = a3;
    v5 = 1;
  }
  else
  {
    v4 = a3;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 32 * v6;
    while ( (--v6 & 0x8000000000000000LL) == 0 )
    {
      v8 = v7 - 32;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v9 + v7;
      v12 = *(_QWORD *)(v10 - 32);
      v11 = *(_QWORD *)(v10 - 24);
      v13 = a3 >= v12;
      v14 = a3 - v12;
      v15 = v13 && v11 > a3;
      v7 = v8;
      if ( v15 )
      {
        if ( *(_QWORD *)(v9 + v8 + 16) + v14 != -1 )
        {
          v5 = 1;
          v4 = *(_QWORD *)(v9 + v8 + 16) + v14;
          goto LABEL_14;
        }
        break;
      }
    }
    v5 = 0;
  }
LABEL_14:
  qlseek((__int64)a2, v4, 0);
  return v5;
}
