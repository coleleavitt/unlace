/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45140
// Address: 0x0000000000045140

//----- (0000000000045140) ----------------------------------------------------
__int64 __fastcall sub_45140(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r8

  result = 0xFFFFFFFFLL;
  if ( a3 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 1040);
    if ( v4 )
    {
      v5 = a1 + 1040;
      v6 = v5;
      do
      {
        if ( *(_DWORD *)(v4 + 32) >= a2 )
          v6 = v4;
        v4 = *(_QWORD *)(v4 + 8LL * (*(_DWORD *)(v4 + 32) < a2));
      }
      while ( v4 );
      if ( v6 != v5 && *(_DWORD *)(v6 + 32) <= a2 )
      {
        *(_BYTE *)(v6 + 56) = 1;
        return 1;
      }
    }
  }
  return result;
}
