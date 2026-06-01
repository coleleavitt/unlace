/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400384C0
// Address: 0x00000001400384C0

//----- (00000001400384C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400384C0(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  char v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]

  sub_140039430(a1, a2, a3);
  for ( result = a1[39].Part[0]; *(_WORD *)(result + 24) == 124; result = a1[39].Part[0] )
  {
    LOBYTE(v5) = 1;
    v9[0] = 1;
    v10 = 0;
    sub_140039320(a1, (__int64)v9, v5);
    if ( *(_WORD *)(a1[39].Part[0] + 24) == 94 )
    {
      do
      {
        LOBYTE(v5) = 1;
        v11[0] = 1;
        v12 = 0;
        sub_140039320(a1, (__int64)v11, v5);
        v7 = v12 ^ v10;
        v8 = a1[39].Part[0];
        v10 ^= v12;
      }
      while ( *(_WORD *)(v8 + 24) == 94 );
    }
    else
    {
      v7 = v10;
    }
    *(_QWORD *)(a2 + 8) |= v7;
  }
  return result;
}
// 140038505: variable 'v5' is possibly undefined
