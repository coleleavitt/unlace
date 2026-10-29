/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140039260
// Address: 0x0000000140039260

//----- (0000000140039260) ----------------------------------------------------
unsigned __int64 __fastcall sub_140039260(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  unsigned __int64 result; // rax
  __int16 v7; // cx
  bool v8; // zf
  char v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  sub_140038E60(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      result = a1[39].Part[0];
      v9[0] = 1;
      v10 = 0;
      v7 = *(_WORD *)(result + 24);
      if ( v7 != 15677 )
        break;
      LOBYTE(v5) = 1;
      sub_140038E60(a1, (__int64)v9, v5);
      v8 = *(_QWORD *)(a2 + 8) == v10;
      *(_BYTE *)a2 = 0;
      *(_QWORD *)(a2 + 8) = v8;
    }
    if ( v7 != 8509 )
      break;
    LOBYTE(v5) = 1;
    sub_140038E60(a1, (__int64)v9, v5);
    v8 = *(_QWORD *)(a2 + 8) == v10;
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 8) = !v8;
  }
  return result;
}
// 1400392B8: variable 'v5' is possibly undefined
