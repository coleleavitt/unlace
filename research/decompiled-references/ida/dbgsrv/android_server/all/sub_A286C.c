/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A286C
// Address: 0x00000000000A286C

//----- (00000000000A286C) ----------------------------------------------------
__int64 __fastcall sub_A286C(_DWORD *a1, int *a2, __int64 a3)
{
  int v3; // w8
  int v7; // w0
  int v8; // w10
  _QWORD *v9; // x11
  int v10; // w9
  __int64 result; // x0

  v3 = a1[184];
  if ( v3 < 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 616LL))(a1);
    a1[184] = v7;
    if ( v7 < 0 )
    {
      a1[184] = 0;
      return 6;
    }
    if ( v7 >= 16 )
      v3 = 16;
    else
      v3 = v7;
    a1[184] = v3;
    if ( v3 < 1 )
      return 6;
  }
  else if ( v3 < 1 )
  {
    return 6;
  }
  v8 = 0;
  v9 = a1 + 188;
  v10 = -1;
  do
  {
    if ( *v9 == a3 )
      return 4;
    if ( *v9 == -1 && v10 < 0 )
      v10 = v8;
    ++v8;
    v9 += 3;
  }
  while ( v8 < v3 );
  if ( v10 < 0 )
    return 6;
  result = 0;
  if ( a2 )
    *a2 = v10;
  return result;
}
