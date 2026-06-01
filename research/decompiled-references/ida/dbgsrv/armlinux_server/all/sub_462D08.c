/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462D08
// Address: 0x0000000000462D08

//----- (0000000000462D08) ----------------------------------------------------
void __fastcall sub_462D08(_QWORD *a1)
{
  unsigned __int8 *v2; // x0
  void *v3; // x0
  void *v4; // x0

  v2 = (unsigned __int8 *)a1[55];
  *a1 = off_51DF50;
  a1[24] = off_51DFA8;
  if ( ((v2 != nullptr) & (v2[860] ^ 1)) != 0 )
    (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v2 + 40LL))(v2);
  sub_475A18(a1);
  a1[56] = 0;
  sub_482ED0((__int64)(a1 + 46));
  sub_482ED0((__int64)(a1 + 37));
  v3 = (void *)a1[33];
  a1[24] = qword_51E360;
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
  sub_475970(a1);
}
// 51DF50: using guessed type __int64 (__fastcall *off_51DF50[9])();
// 51DFA8: using guessed type __int64 (__fastcall *off_51DFA8[9])();
// 51E360: using guessed type __int64 qword_51E360[2];
