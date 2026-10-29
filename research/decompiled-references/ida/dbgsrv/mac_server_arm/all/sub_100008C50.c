/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008C50
// Address: 0x0000000100008C50

//----- (0000000100008C50) ----------------------------------------------------
void __fastcall sub_100008C50(__int64 a1, _QWORD *a2)
{
  __int64 v4; // x0

  if ( a2 )
  {
    sub_100008C50(a1, *a2);
    sub_100008C50(a1, a2[1]);
    v4 = a2[5];
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    operator delete(a2);
  }
}
