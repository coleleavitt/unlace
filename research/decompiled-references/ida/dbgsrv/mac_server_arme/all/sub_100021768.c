/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100021768
// Address: 0x0000000100021768

//----- (0000000100021768) ----------------------------------------------------
__int64 __fastcall sub_100021768(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x8
  bool v3; // cf
  unsigned __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x20
  __int64 v8; // x9
  unsigned __int64 v9; // x8
  __int64 v11; // x23
  __int64 v12; // x21
  __int64 v13; // x22
  unsigned int (__fastcall *v14)(__int64, __int64, __int64); // x24
  __int64 v15; // x8
  __int64 v16; // x25

  v2 = a1[2];
  v3 = v2 != 0;
  v4 = v2 - 1;
  if ( !v3 )
    v4 = 0;
  v5 = a1[6];
  v3 = v5 != 0;
  v6 = v5 - 1;
  if ( v3 )
    v7 = v6;
  else
    v7 = 0;
  v8 = a1[9];
  *(_QWORD *)(a2 + 8) = -1;
  if ( v7 - 1 < v4 )
  {
    v9 = v4 + 1;
    if ( v9 != v7 )
    {
      v11 = 0;
      v12 = a1[5];
      v13 = a1[1];
      if ( v8 )
        v14 = (unsigned int (__fastcall *)(__int64, __int64, __int64))memicmp;
      else
        v14 = (unsigned int (__fastcall *)(__int64, __int64, __int64))&_memcmp;
      if ( v9 - v7 <= 1 )
        v15 = 1;
      else
        v15 = v9 - v7;
      v16 = -v15;
      while ( v14(v13, v12, v7) )
      {
        ++v13;
        if ( v16 == --v11 )
          return 0;
      }
      *(_QWORD *)(a2 + 8) = -v11;
    }
  }
  return 0;
}
