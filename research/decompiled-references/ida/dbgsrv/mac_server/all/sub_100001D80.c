/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001D80
// Address: 0x0000000100001D80

//----- (0000000100001D80) ----------------------------------------------------
__int64 __fastcall sub_100001D80(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1216);
  if ( !v2 )
    return 0;
  v3 = a1 + 1216;
  v4 = v3;
  do
  {
    if ( *(_DWORD *)(v2 + 32) >= a2 )
      v4 = v2;
    v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < a2));
  }
  while ( v2 );
  if ( v4 == v3 )
    return 0;
  result = 0;
  if ( *(_DWORD *)(v4 + 32) <= a2 )
    return v4 + 40;
  return result;
}
