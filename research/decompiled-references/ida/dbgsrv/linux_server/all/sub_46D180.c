/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D180
// Address: 0x000000000046D180

//----- (000000000046D180) ----------------------------------------------------
__int64 __fastcall sub_46D180(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rcx

  result = 0;
  if ( a2 != 4 )
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 8 * v4 + 864);
      if ( a3 == v5 && a2 == *(_DWORD *)(a1 + 4 * v4 + 896) )
        return 6;
      if ( v5 == -1 )
        break;
      if ( ++v4 == 4 )
        return 6;
    }
    return 0;
  }
  return result;
}
