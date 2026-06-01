/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140038DA0
// Address: 0x0000000140038DA0

//----- (0000000140038DA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140038DA0(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  __int16 v7; // cx
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  char v10[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  sub_140038B10(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      result = a1[39].Part[0];
      v10[0] = 1;
      v11 = 0;
      v7 = *(_WORD *)(result + 24);
      if ( v7 != 15934 )
        break;
      LOBYTE(v5) = 1;
      sub_140038B10(a1, (__int64)v10, v5);
      v8 = *(_QWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 )
        v9 = (unsigned __int64)v8 >> v11;
      else
        v9 = v8 >> v11;
      *(_QWORD *)(a2 + 8) = v9;
    }
    if ( v7 != 15420 )
      break;
    LOBYTE(v5) = 1;
    sub_140038B10(a1, (__int64)v10, v5);
    *(_QWORD *)(a2 + 8) <<= v11;
  }
  return result;
}
// 140038DF8: variable 'v5' is possibly undefined
