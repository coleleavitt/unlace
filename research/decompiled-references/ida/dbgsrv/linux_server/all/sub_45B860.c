/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45B860
// Address: 0x000000000045B860

//----- (000000000045B860) ----------------------------------------------------
void __fastcall sub_45B860(_QWORD *a1)
{
  _BYTE *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *a1 = &off_4C4860;
  a1[24] = off_4C48B8;
  v2 = (_BYTE *)a1[55];
  if ( v2[860] != 1 && v2 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 40LL))(v2);
  sub_46D7F0((__int64)a1);
  a1[56] = 0;
  sub_478720((__int64)(a1 + 46));
  sub_478720((__int64)(a1 + 37));
  v3 = (void *)a1[33];
  a1[24] = qword_4C4C50;
  if ( v3 )
  {
    a1[34] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[26];
  if ( v4 )
  {
    a1[27] = 0;
    j__free(v4);
  }
  sub_46D790(a1);
}
// 4C4860: using guessed type __int64 (__fastcall *off_4C4860)();
// 4C48B8: using guessed type __int64 (__fastcall *off_4C48B8[9])();
// 4C4C50: using guessed type __int64 qword_4C4C50[2];
