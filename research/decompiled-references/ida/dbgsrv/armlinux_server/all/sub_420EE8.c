/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420EE8
// Address: 0x0000000000420EE8

//----- (0000000000420EE8) ----------------------------------------------------
__int64 __fastcall sub_420EE8(__int64 a1)
{
  int v2; // w3
  __int64 v3; // x0
  unsigned int v4; // w8
  int v5; // w2
  __int64 v6; // x20
  int v7; // w21
  __int16 v8; // w1
  __int64 v9; // x2
  unsigned __int8 (__fastcall *v10)(__int64, __int64, __int64); // x4
  __int64 result; // x0
  int v12; // w0

  v2 = 3;
  v3 = 0;
  v4 = *(unsigned __int16 *)(a1 + 522);
  v5 = (unsigned __int16)__rev16(v4);
  while ( 1 )
  {
    v6 = 4 * v3++;
    v7 = *((unsigned __int8 *)qword_4C2EB0 + v6 + 2);
    if ( *(unsigned __int8 *)(a1 + 616) != v7 )
      break;
    if ( v2 == v4 && (unsigned __int16)(*(_WORD *)(a1 + 520) - 2) <= 1u )
      goto LABEL_7;
LABEL_13:
    if ( v3 == 3 )
      return 1;
    v2 = *(unsigned __int16 *)((char *)qword_4C2EB0 + v6 + 4);
  }
  if ( v2 != v5 )
    goto LABEL_13;
  v8 = __rev16(*(unsigned __int16 *)(a1 + 520));
  if ( (unsigned __int16)(v8 - 2) > 1u )
    goto LABEL_13;
  v9 = *(unsigned __int8 *)(a1 + 509);
  v10 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(a1 + 496);
  *(_WORD *)(a1 + 520) = v8;
  *(_WORD *)(a1 + 522) = v2;
  result = v10(a1, 3, v9);
  if ( !(_DWORD)result )
    return result;
  *(_BYTE *)(a1 + 616) = v7;
LABEL_7:
  v12 = *((unsigned __int8 *)qword_4C2EB0 + v6 + 3);
  *(_BYTE *)(a1 + 618) = v12;
  if ( !v12 )
    *(_BYTE *)(a1 + 617) = 0;
  return 1;
}
// 4C2EB0: using guessed type __int64 qword_4C2EB0[2];
