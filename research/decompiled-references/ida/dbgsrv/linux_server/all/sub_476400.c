/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476400
// Address: 0x0000000000476400

//----- (0000000000476400) ----------------------------------------------------
__int64 __fastcall sub_476400(unsigned int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v5; // eax

  if ( a1 <= 0x7F )
  {
    v1 = *((_DWORD *)qword_49AEE0 + a1);
    v2 = HIWORD(v1);
    LOBYTE(v3) = BYTE2(v1);
    if ( BYTE2(v1) > 1u && (_WORD)v1 != 270 && (_WORD)v1 != 290 )
      goto LABEL_5;
    return 0;
  }
  v5 = sub_4762F0(a1);
  v3 = HIWORD(v5);
  if ( BYTE2(v5) <= 1u )
    return 0;
  v2 = a1 - 8232;
  if ( a1 - 8232 <= 1 )
    return 0;
  if ( (_WORD)v5 == 270 )
    return 0;
  if ( (_WORD)v5 == 290 )
    return 0;
  v1 = a1 - 8206;
  if ( a1 - 8206 <= 1 )
    return 0;
  if ( a1 != 1564 )
  {
LABEL_5:
    LOBYTE(v1) = a1 - 8234 > 4;
    LOBYTE(v2) = (_BYTE)v3 != 5;
    return v2 & v1;
  }
  return 0;
}
// 49AEE0: using guessed type __int64 qword_49AEE0[630];
