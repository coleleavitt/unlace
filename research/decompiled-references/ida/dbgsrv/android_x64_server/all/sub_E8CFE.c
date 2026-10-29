/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E8CFE
// Address: 0x00000000000E8CFE

//----- (00000000000E8CFE) ----------------------------------------------------
__int64 __fastcall sub_E8CFE(_QWORD *a1, _QWORD *a2)
{
  int v2; // r14d
  __int64 CFA; // rax
  __int64 v4; // rdx
  int v5; // ebp
  int v6; // eax
  _BYTE v8[336]; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, _QWORD *, _QWORD *); // [rsp+150h] [rbp-58h]

  while ( 1 )
  {
    v2 = sub_E891E(a2, (__int64)v8);
    CFA = Unwind_GetCFA((__int64)a2);
    v4 = a2[24] >> 63;
    v5 = 4 * (CFA - v4 == a1[3]);
    if ( v2 )
      return 2;
    if ( v9 )
      break;
LABEL_3:
    if ( v5 )
      abort();
    sub_E88DB((__int64)a2, (__int64)v8, v4);
  }
  v6 = v9(1, v5 | 2u, *a1, a1, a2);
  if ( v6 != 7 )
  {
    if ( v6 != 8 )
      return 2;
    goto LABEL_3;
  }
  return 7;
}
// E8D8C: variable 'v4' is possibly undefined
