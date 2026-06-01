/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6CBA0
// Address: 0x000000000006CBA0

//----- (000000000006CBA0) ----------------------------------------------------
__int64 __fastcall sub_6CBA0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
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
        if ( ++v5 >= v3 )
          return result;
      }
      return v5;
    }
  }
  return result;
}
