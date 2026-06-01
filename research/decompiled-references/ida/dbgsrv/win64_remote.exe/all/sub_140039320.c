/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039320
// Address: 0x0000000140039320

//----- (0000000140039320) ----------------------------------------------------
unsigned __int64 __fastcall sub_140039320(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  _BOOL8 i; // rcx
  unsigned __int64 v8; // rax
  __int16 v9; // ax
  char v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  char v12[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  sub_140039260(a1, a2, a3);
  for ( result = a1[39].Part[0]; *(_WORD *)(result + 24) == 38; result = a1[39].Part[0] )
  {
    LOBYTE(v5) = 1;
    v10[0] = 1;
    v11 = 0;
    sub_140038E60(a1, (__int64)v10, v5);
    for ( i = v11; ; v11 = i )
    {
      while ( 1 )
      {
        v8 = a1[39].Part[0];
        v12[0] = 1;
        v13 = 0;
        v9 = *(_WORD *)(v8 + 24);
        if ( v9 != 15677 )
          break;
        LOBYTE(v5) = 1;
        sub_140038E60(a1, (__int64)v12, v5);
        v10[0] = 0;
        i = v11 == v13;
        v11 = i;
      }
      if ( v9 != 8509 )
        break;
      LOBYTE(v5) = 1;
      sub_140038E60(a1, (__int64)v12, v5);
      v10[0] = 0;
      i = v11 != v13;
    }
    *(_QWORD *)(a2 + 8) &= i;
  }
  return result;
}
// 140039378: variable 'v5' is possibly undefined
