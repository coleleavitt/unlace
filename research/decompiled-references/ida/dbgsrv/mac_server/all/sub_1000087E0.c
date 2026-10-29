/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000087E0
// Address: 0x00000001000087E0

//----- (00000001000087E0) ----------------------------------------------------
__int64 __fastcall sub_1000087E0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rcx

  result = 0xFFFFFFFFLL;
  if ( a3 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 1216);
    if ( v4 )
    {
      v5 = a1 + 1216;
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
        *(_BYTE *)(v6 + 53) = 1;
        return 1;
      }
    }
  }
  return result;
}
