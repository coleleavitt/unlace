/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001FE50
// Address: 0x000000014001FE50

//----- (000000014001FE50) ----------------------------------------------------
__int64 __fastcall sub_14001FE50(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  FILE *v5; // rcx
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 >= qword_1400CAFB0
    || (v5 = *((FILE **)qword_1400CAFA8 + v4)) == nullptr
    || (v6 = (unsigned int)sub_1400647A0(v5, &v9, 4, *(_QWORD *)(a1 + 40) != 0) == 0, v7 = v9, !v6) )
  {
    v7 = -1;
  }
  *(_QWORD *)(a2 + 8) = v7;
  return 0;
}
// 1400CAFB0: using guessed type __int64 qword_1400CAFB0;
