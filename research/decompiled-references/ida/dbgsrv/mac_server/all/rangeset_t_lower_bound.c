/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_lower_bound
// Address: 0x0000000100080A30

//----- (0000000100080A30) ----------------------------------------------------
__int64 __fastcall rangeset_t_lower_bound(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // r8

  result = *a1;
  v3 = 16 * a1[1];
  if ( v3 )
  {
    v4 = v3 >> 4;
    do
    {
      v5 = 16 * (v4 >> 1);
      v6 = v4 + ~(v4 >> 1);
      if ( *(_QWORD *)(result + v5 + 8) > a2 )
        v6 = v4 >> 1;
      else
        result += v5 + 16;
      v4 = v6;
    }
    while ( v6 );
  }
  return result;
}
