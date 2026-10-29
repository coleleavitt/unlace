/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140059310
// Address: 0x0000000140059310

//----- (0000000140059310) ----------------------------------------------------
char __fastcall sub_140059310(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( (int)sub_140054410(a1[4]) <= 0 )
    goto LABEL_6;
  v4 = a1[17];
  v5 = 1024;
  a1[17] = 0;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v4 > 0x400 )
    v5 = v4;
  sub_140002EF0(a2, v6 + v5);
  v7 = sub_140054420(a1[4]);
  if ( v7 <= 0 )
  {
LABEL_6:
    a1[8] = (__int64)"irs";
    return 0;
  }
  else
  {
    sub_140002EF0(a2, v6 + v7);
    return 1;
  }
}
