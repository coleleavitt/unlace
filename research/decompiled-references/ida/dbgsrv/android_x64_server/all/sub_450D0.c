/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450D0
// Address: 0x00000000000450D0

//----- (00000000000450D0) ----------------------------------------------------
__int64 __fastcall sub_450D0(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r9
  int v5; // edx
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 1040);
  result = 0xFFFFFFFFLL;
  if ( v2 )
  {
    v4 = a1 + 1040;
    do
    {
      if ( *(_DWORD *)(v2 + 32) >= a2 )
        v4 = v2;
      v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < a2));
    }
    while ( v2 );
    if ( v4 != a1 + 1040 && *(_DWORD *)(v4 + 32) <= a2 )
    {
      v5 = *(_DWORD *)(v4 + 48);
      if ( v5 <= 0 )
        return 2 * (unsigned int)((unsigned int)sub_402C0(a1, a2, 0) != 0) - 1;
      v6 = v5 - 1;
      *(_DWORD *)(v4 + 48) = v6;
      result = 1;
      if ( v6 <= 0 )
        return 2 * (unsigned int)((unsigned int)sub_402C0(a1, a2, 0) != 0) - 1;
    }
  }
  return result;
}
