/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400388C0
// Address: 0x00000001400388C0

//----- (00000001400388C0) ----------------------------------------------------
__int64 __fastcall sub_1400388C0(_JBTYPE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int16 v7; // cx
  __int64 result; // rax
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( (_BYTE)a3 )
    sub_140039590(a1);
  v5 = a1[39].Part[0];
  v6 = 0;
  v9[0] = 1;
  v10 = 0;
  v7 = *(_WORD *)(v5 + 24);
  switch ( v7 )
  {
    case '-':
      LOBYTE(a3) = 1;
      sub_1400388C0(a1, v9, a3);
      *(_QWORD *)(a2 + 8) = -v10;
      result = v9[0];
      *(_BYTE *)a2 = v9[0];
      break;
    case '+':
      LOBYTE(a3) = 1;
      sub_1400388C0(a1, v9, a3);
      *(_QWORD *)(a2 + 8) = v10;
      result = v9[0];
      *(_BYTE *)a2 = v9[0];
      break;
    case '!':
      LOBYTE(a3) = 1;
      sub_1400388C0(a1, v9, a3);
      result = v9[0];
      LOBYTE(v6) = v10 == 0;
      *(_BYTE *)a2 = v9[0];
      *(_QWORD *)(a2 + 8) = v6;
      break;
    case '~':
      LOBYTE(a3) = 1;
      sub_1400388C0(a1, v9, a3);
      *(_QWORD *)(a2 + 8) = ~v10;
      result = v9[0];
      *(_BYTE *)a2 = v9[0];
      break;
    default:
      return sub_140038670((__int64)a1, a2);
  }
  return result;
}
// 140038907: variable 'a3' is possibly undefined
