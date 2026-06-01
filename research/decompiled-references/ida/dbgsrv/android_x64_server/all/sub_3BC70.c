/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BC70
// Address: 0x000000000003BC70

//----- (000000000003BC70) ----------------------------------------------------
__int64 __fastcall sub_3BC70(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 1040);
  if ( v2 )
  {
    v3 = a1 + 1040;
    do
    {
      if ( *(_DWORD *)(v2 + 32) >= (int)a2 )
        v3 = v2;
      v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < (int)a2));
    }
    while ( v2 );
    if ( v3 != a1 + 1040 && *(_DWORD *)(v3 + 32) <= (int)a2 )
      return 0;
  }
  if ( *(_DWORD *)(a1 + 1140) != a2 )
    sub_3AAD0(a1, a2, 0);
  return sub_3A650(a1, a2, -1);
}
