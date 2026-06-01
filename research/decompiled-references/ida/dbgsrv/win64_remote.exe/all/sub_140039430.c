/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039430
// Address: 0x0000000140039430

//----- (0000000140039430) ----------------------------------------------------
unsigned __int64 __fastcall sub_140039430(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  _BOOL8 i; // rcx
  unsigned __int64 v8; // rdx
  __int16 v9; // ax
  _BOOL8 v10; // rax
  char v11[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  char v13[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+48h] [rbp-10h]

  sub_140039320(a1, a2, a3);
  for ( result = a1[39].Part[0]; *(_WORD *)(result + 24) == 94; result = a1[39].Part[0] )
  {
    LOBYTE(v5) = 1;
    v15[0] = 1;
    v16 = 0;
    sub_140039260(a1, (__int64)v15, v5);
    if ( *(_WORD *)(a1[39].Part[0] + 24) == 38 )
    {
      do
      {
        LOBYTE(v5) = 1;
        v11[0] = 1;
        v12 = 0;
        sub_140038E60(a1, (__int64)v11, v5);
        for ( i = v12; ; v12 = i )
        {
          while ( 1 )
          {
            v8 = a1[39].Part[0];
            v13[0] = 1;
            v14 = 0;
            v9 = *(_WORD *)(v8 + 24);
            if ( v9 != 15677 )
              break;
            LOBYTE(v5) = 1;
            sub_140038E60(a1, (__int64)v13, v5);
            v11[0] = 0;
            i = v12 == v14;
            v12 = i;
          }
          if ( v9 != 8509 )
            break;
          LOBYTE(v5) = 1;
          sub_140038E60(a1, (__int64)v13, v5);
          v11[0] = 0;
          i = v12 != v14;
        }
        v10 = i & v16;
        v16 &= i;
      }
      while ( *(_WORD *)(v8 + 24) == 38 );
    }
    else
    {
      v10 = v16;
    }
    *(_QWORD *)(a2 + 8) ^= v10;
  }
  return result;
}
// 140039488: variable 'v5' is possibly undefined
