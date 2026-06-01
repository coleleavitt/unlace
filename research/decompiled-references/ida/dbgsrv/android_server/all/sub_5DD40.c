/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DD40
// Address: 0x000000000005DD40

//----- (000000000005DD40) ----------------------------------------------------
__int64 __fastcall sub_5DD40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x8
  __int64 *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x8

  v2 = *(_QWORD *)(a1 + 8);
  if ( qword_166A50 <= v2 )
  {
    v4 = (__int64 *)(a2 + 8);
    goto LABEL_5;
  }
  v4 = (__int64 *)(a2 + 8);
  v5 = *(_QWORD *)(qword_166A48 + 8 * v2);
  if ( !v5 )
  {
LABEL_5:
    v6 = -1;
    goto LABEL_6;
  }
  --*(_QWORD *)(a2 + 8);
  v6 = (int)sub_66600(sub_5E334, v5, a1 + 32);
LABEL_6:
  *v4 = v6;
  return 0;
}
// 66600: using guessed type __int64 __fastcall sub_66600(_QWORD, _QWORD, _QWORD);
// 166A48: using guessed type __int64 qword_166A48;
// 166A50: using guessed type __int64 qword_166A50;
