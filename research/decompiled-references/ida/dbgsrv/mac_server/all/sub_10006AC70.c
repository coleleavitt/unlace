/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006AC70
// Address: 0x000000010006AC70

//----- (000000010006AC70) ----------------------------------------------------
__int64 __fastcall sub_10006AC70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax

  v3 = a3;
  v5 = a3;
  while ( v5 )
  {
    v6 = v5;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, a2, v5);
    v5 = v6 - v7;
    a2 += v7;
    if ( v7 <= 0 )
    {
      v3 -= v6;
      return v3;
    }
  }
  return v3;
}
