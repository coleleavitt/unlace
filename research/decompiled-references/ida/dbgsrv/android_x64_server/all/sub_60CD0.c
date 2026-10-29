/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60CD0
// Address: 0x0000000000060CD0

//----- (0000000000060CD0) ----------------------------------------------------
__int64 __fastcall sub_60CD0(_QWORD *a1, __int64 a2)
{
  const char *v4; // rsi
  bool v5; // zf
  const char *v6; // rdi

  v4 = s1;
  v5 = a1[2] == 0;
  v6 = s1;
  if ( !v5 )
    v6 = (const char *)a1[1];
  if ( a1[6] )
    v4 = (const char *)a1[5];
  *(_QWORD *)(a2 + 8) = (int)qrename(v6, v4);
  return 0;
}
