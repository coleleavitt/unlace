/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F8CC
// Address: 0x000000010001F8CC

//----- (000000010001F8CC) ----------------------------------------------------
__int64 __fastcall sub_10001F8CC(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x8
  bool v3; // cf
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x9
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x20
  __int64 v9; // x8
  unsigned __int64 v10; // x9
  __int64 v12; // x23
  __int64 v13; // x21
  __int64 v14; // x22
  unsigned int (__fastcall *v15)(__int64, __int64, __int64); // x24
  __int64 v16; // x8
  __int64 v17; // x25

  v2 = a1[2];
  v3 = v2 != 0;
  v4 = v2 - 1;
  if ( v3 )
    v5 = v4;
  else
    v5 = 0;
  v6 = a1[6];
  v3 = v6 != 0;
  v7 = v6 - 1;
  if ( v3 )
    v8 = v7;
  else
    v8 = 0;
  v9 = a1[9];
  *(_QWORD *)(a2 + 8) = -1;
  if ( v8 - 1 < v5 )
  {
    v10 = v5 + 1 - v8;
    if ( v10 )
    {
      v12 = 0;
      v13 = a1[5];
      v14 = a1[1];
      if ( v9 )
        v15 = (unsigned int (__fastcall *)(__int64, __int64, __int64))memicmp;
      else
        v15 = (unsigned int (__fastcall *)(__int64, __int64, __int64))&_memcmp;
      if ( v10 <= 1 )
        v16 = 1;
      else
        v16 = v10;
      v17 = -v16;
      while ( v15(v14, v13, v8) )
      {
        ++v14;
        if ( v17 == --v12 )
          return 0;
      }
      *(_QWORD *)(a2 + 8) = -v12;
    }
  }
  return 0;
}
