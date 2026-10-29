/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033A20
// Address: 0x0000000100033A20

//----- (0000000100033A20) ----------------------------------------------------
__int64 __fastcall sub_100033A20(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx

  result = -1;
  if ( a2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = *a1;
      v5 = 0;
      while ( *(_QWORD *)(v4 + 8 * v5) != a2 )
      {
        if ( v3 == ++v5 )
          return result;
      }
      return v5;
    }
  }
  return result;
}
