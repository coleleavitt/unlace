/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4304E8
// Address: 0x00000000004304E8

//----- (00000000004304E8) ----------------------------------------------------
__int64 __fastcall sub_4304E8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x22
  __int64 v3; // x2
  unsigned __int64 v4; // x20
  unsigned __int64 v5; // x22
  __int64 v6; // x2
  bool v7; // cf
  __int64 v8; // x24
  __int64 v9; // x20
  __int64 v10; // x23
  __int64 v11; // x19
  unsigned int (__fastcall *v12)(__int64, __int64, unsigned __int64); // x21

  v2 = a1[6];
  v3 = a1[2];
  v4 = v3 - 1;
  if ( !v3 )
    v4 = 0;
  if ( !v2 )
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
  v5 = v2 - 1;
  v6 = a1[9];
  if ( v5 )
    v7 = v4 >= v5;
  else
    v7 = 0;
  *(_QWORD *)(a2 + 8) = -1;
  if ( !v7 )
    return 0;
  v8 = a1[1];
  v9 = v4 - v5 + 1;
  v10 = a1[5];
  if ( !v9 )
    return 0;
  v11 = 0;
  v12 = (unsigned int (__fastcall *)(__int64, __int64, unsigned __int64))memicmp;
  if ( !v6 )
    v12 = (unsigned int (__fastcall *)(__int64, __int64, unsigned __int64))&memcmp;
  do
  {
    if ( !v12(v8 + v11, v10, v5) )
    {
      *(_QWORD *)(a2 + 8) = v11;
      return 0;
    }
    ++v11;
  }
  while ( v9 != v11 );
  return 0;
}
