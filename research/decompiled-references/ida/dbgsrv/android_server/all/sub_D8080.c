/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8080
// Address: 0x00000000000D8080

//----- (00000000000D8080) ----------------------------------------------------
__int64 __fastcall sub_D8080(__int64 result, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // x8
  int v5; // w8

  if ( result != *(_QWORD *)(a2 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(result + 16) + 56LL))(*(_QWORD *)(result + 16));
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      if ( *(_DWORD *)(a2 + 48) == 2 )
        *(_DWORD *)(a2 + 48) = a4;
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 48) = 2;
      *(_DWORD *)(a2 + 60) = v5 + 1;
      *(_BYTE *)(a2 + 78) = 1;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 32) = a3;
    *(_DWORD *)(a2 + 48) = a4;
    *(_DWORD *)(a2 + 60) = 1;
  }
  return result;
}
