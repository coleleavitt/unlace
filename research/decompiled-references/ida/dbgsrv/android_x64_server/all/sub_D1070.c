/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1070
// Address: 0x00000000000D1070

//----- (00000000000D1070) ----------------------------------------------------
__int64 __fastcall sub_D1070(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( a1 != *(_QWORD *)(a2 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 56LL))(*(_QWORD *)(a1 + 16));
  result = *(_QWORD *)(a2 + 32);
  if ( result )
  {
    if ( result == a3 )
    {
      if ( *(_DWORD *)(a2 + 48) == 2 )
        *(_DWORD *)(a2 + 48) = a4;
    }
    else
    {
      ++*(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 48) = 2;
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
