/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A97E0
// Address: 0x00000000000A97E0

//----- (00000000000A97E0) ----------------------------------------------------
__int64 __fastcall sub_A97E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( !a3 )
    return 0;
  v3 = a3;
  v5 = a3;
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2, v5);
    if ( v6 <= 0 )
      break;
    a2 += v6;
    v5 -= v6;
    if ( !v5 )
      return v3;
  }
  v3 -= v5;
  return v3;
}
