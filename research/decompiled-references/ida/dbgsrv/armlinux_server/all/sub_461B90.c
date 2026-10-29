/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461B90
// Address: 0x0000000000461B90

//----- (0000000000461B90) ----------------------------------------------------
__int64 __fastcall sub_461B90(__int64 (__fastcall ***a1)(_QWORD, __int64))
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 (__fastcall *v4)(_QWORD, __int64); // x20
  __int64 v5; // x0
  unsigned int v7; // w20

  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_522330 + 16LL))(qword_522330);
  v2 = qword_522330;
  v3 = *(_QWORD *)(qword_522330 + 32);
  if ( v3 == qword_522330 + 16 )
  {
    v7 = 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = **a1;
      v5 = sub_4656F0(*(_QWORD *)(v3 + 32));
      v7 = v4(a1, v5);
      if ( v7 )
        break;
      v3 = sub_49F6E8(v3);
      v2 = qword_522330;
      if ( v3 == qword_522330 + 16 )
        goto LABEL_6;
    }
    v2 = qword_522330;
  }
LABEL_6:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return v7;
}
// 522330: using guessed type __int64 qword_522330;
