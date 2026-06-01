/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45ED40
// Address: 0x000000000045ED40

//----- (000000000045ED40) ----------------------------------------------------
__int64 __fastcall sub_45ED40(__int64 a1)
{
  _QWORD *v2; // x21
  __int64 v3; // x19

  v2 = (_QWORD *)(a1 + 520);
  v3 = *(_QWORD *)(a1 + 536);
  if ( v3 != a1 + 520 )
  {
    do
    {
      while ( (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
                a1,
                *(_QWORD *)(v3 + 40),
                v3 + 48,
                *(unsigned __int8 *)(v3 + 56),
                0) )
      {
        v3 = sub_49F748(v3);
        if ( (_QWORD *)v3 == v2 )
          goto LABEL_6;
      }
      sub_40A690((int)"Failed to restore broken breakpoint at 0x%a\n", *(_QWORD *)(v3 + 40));
      v3 = sub_49F748(v3);
    }
    while ( (_QWORD *)v3 != v2 );
  }
LABEL_6:
  sub_40D380(a1 + 512, *(_QWORD **)(a1 + 528));
  v2[1] = 0;
  v2[2] = v2;
  v2[3] = v2;
  v2[4] = 0;
  return 1;
}
// 49F748: using guessed type __int64 __fastcall sub_49F748(_QWORD);
