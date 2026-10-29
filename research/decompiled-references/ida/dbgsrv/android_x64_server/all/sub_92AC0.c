/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92AC0
// Address: 0x0000000000092AC0

//----- (0000000000092AC0) ----------------------------------------------------
void __fastcall sub_92AC0(_QWORD *a1)
{
  _BYTE *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_14E5E0;
  a1[24] = off_14E638;
  v2 = (_BYTE *)a1[55];
  if ( v2 && !v2[732] )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 40LL))(v2);
  sub_A7CB0((__int64)a1);
  a1[56] = 0;
  free_debug_event((__int64)(a1 + 46));
  free_debug_event((__int64)(a1 + 37));
  a1[24] = &off_14F690;
  v3 = (void *)a1[33];
  if ( v3 )
  {
    a1[34] = 0;
    qfree(v3);
    a1[33] = 0;
    a1[35] = 0;
  }
  v4 = (void *)a1[26];
  if ( v4 )
  {
    a1[27] = 0;
    qfree(v4);
    a1[26] = 0;
    a1[28] = 0;
  }
  sub_A7CE0(a1);
}
// 14E5E0: using guessed type __int64 (__fastcall *off_14E5E0)();
// 14E638: using guessed type __int64 (__fastcall *off_14E638[9])();
// 14F690: using guessed type __int64 (__fastcall *off_14F690)();
