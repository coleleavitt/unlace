/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140038580
// Address: 0x0000000140038580

//----- (0000000140038580) ----------------------------------------------------
unsigned __int64 __fastcall sub_140038580(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  char v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  char v12[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  sub_1400384C0(a1, a2, a3);
  for ( result = a1[39].Part[0]; *(_WORD *)(result + 24) == 9766; result = a1[39].Part[0] )
  {
    LOBYTE(v5) = 1;
    v10[0] = 1;
    v11 = 0;
    sub_140039430(a1, (__int64)v10, v5);
    if ( *(_WORD *)(a1[39].Part[0] + 24) == 124 )
    {
      do
      {
        LOBYTE(v5) = 1;
        v12[0] = 1;
        v13 = 0;
        sub_140039430(a1, (__int64)v12, v5);
        v7 = v13 | v11;
        v8 = a1[39].Part[0];
        v11 |= v13;
      }
      while ( *(_WORD *)(v8 + 24) == 124 );
    }
    else
    {
      v7 = v11;
    }
    if ( !*(_QWORD *)(a2 + 8) || (v9 = 1, !v7) )
      v9 = 0;
    *(_QWORD *)(a2 + 8) = v9;
    *(_BYTE *)a2 = 0;
  }
  return result;
}
// 1400385D5: variable 'v5' is possibly undefined
