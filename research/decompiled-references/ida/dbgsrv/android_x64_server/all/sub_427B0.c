/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427B0
// Address: 0x00000000000427B0

//----- (00000000000427B0) ----------------------------------------------------
void __fastcall sub_427B0(_QWORD *a1, __int64 a2, char a3, char **a4)
{
  __int64 v6; // r15
  void *v7; // rdi
  void *v8; // rdi

  if ( a3 )
  {
    sub_39C10((__int64)a1, nullptr);
    v6 = sub_A0550((__int64)a1);
    sub_4AD50(v6, (__int64)(a1 + 111));
    sub_4AE30(v6 + 24, (__int64)(a1 + 114));
    v7 = (void *)a1[111];
    if ( v7 )
    {
      a1[112] = 0;
      qfree(v7);
      a1[111] = 0;
      a1[113] = 0;
    }
    v8 = (void *)a1[114];
    if ( v8 )
    {
      a1[115] = 0;
      qfree(v8);
      a1[114] = 0;
      a1[116] = 0;
    }
  }
  if ( a4 )
    sub_3CB10((__int64)a1, a4);
}
