/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400389F0
// Address: 0x00000001400389F0

//----- (00000001400389F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400389F0(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  __int16 v7; // dx
  char v8[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  sub_1400388C0(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        result = a1[39].Part[0];
        v8[0] = 1;
        v9 = 0;
        v7 = *(_WORD *)(result + 24);
        if ( v7 != 42 )
          break;
        LOBYTE(v5) = 1;
        sub_1400388C0(a1, (__int64)v8, v5);
        *(_QWORD *)(a2 + 8) *= v9;
      }
      if ( v7 != 47 )
        break;
      LOBYTE(v5) = 1;
      sub_1400388C0(a1, (__int64)v8, v5);
      if ( !v9 )
        goto LABEL_17;
      if ( *(_BYTE *)a2 || v8[0] )
        *(_QWORD *)(a2 + 8) /= (unsigned __int64)v9;
      else
        *(__int64 *)(a2 + 8) /= v9;
    }
    if ( v7 != 37 )
      return result;
    LOBYTE(v5) = 1;
    sub_1400388C0(a1, (__int64)v8, v5);
    if ( !v9 )
LABEL_17:
      longjmp(a1 + 23, 86);
    if ( *(_BYTE *)a2 || v8[0] )
      *(_QWORD *)(a2 + 8) %= (unsigned __int64)v9;
    else
      *(__int64 *)(a2 + 8) %= v9;
  }
}
// 140038A36: variable 'v5' is possibly undefined
