/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45070
// Address: 0x0000000000045070

//----- (0000000000045070) ----------------------------------------------------
__int64 __fastcall sub_45070(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  unsigned __int64 v4; // rbx

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
      sub_3AAD0(a1, a2, 0);
      ++*(_DWORD *)(v4 + 48);
      return 1;
    }
  }
  return result;
}
