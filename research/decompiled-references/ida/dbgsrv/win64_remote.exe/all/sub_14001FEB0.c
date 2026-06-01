/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FEB0
// Address: 0x000000014001FEB0

//----- (000000014001FEB0) ----------------------------------------------------
__int64 __fastcall sub_14001FEB0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  FILE *v4; // r10
  __int64 v5; // rcx
  __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < qword_1400CAFB0 && (v4 = *((FILE **)qword_1400CAFA8 + v2)) != nullptr )
  {
    v7 = *(_WORD *)(a1 + 40);
    v5 = (int)sub_140064850(v4, (char *)&v7, 2, *(_QWORD *)(a1 + 72) != 0);
    *(_QWORD *)(a2 + 8) = v5;
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
