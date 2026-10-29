/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066E80
// Address: 0x0000000100066E80

//----- (0000000100066E80) ----------------------------------------------------
__int64 __fastcall sub_100066E80(void **a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 i; // r13
  __int64 result; // rax

  if ( (int)a3 > 0 )
  {
    v6 = a3;
    for ( i = 0; i != v6; ++i )
    {
      if ( !a4 || (result = *(unsigned __int8 *)(a4 + ((unsigned int)i >> 3)), _bittest((const int *)&result, i & 7)) )
        result = sub_100066F00(a1, a2);
      a2 += 32;
    }
  }
  return result;
}
