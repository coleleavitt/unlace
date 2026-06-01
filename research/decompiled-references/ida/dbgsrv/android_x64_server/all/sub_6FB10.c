/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FB10
// Address: 0x000000000006FB10

//----- (000000000006FB10) ----------------------------------------------------
void __fastcall sub_6FB10(void *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)a1 = &off_14DEF8;
  v2 = *((void **)a1 + 17);
  if ( v2 )
  {
    *((_QWORD *)a1 + 18) = 0;
    qfree(v2);
    *((_QWORD *)a1 + 17) = 0;
    *((_QWORD *)a1 + 19) = 0;
  }
  if ( *((_QWORD *)a1 + 11) )
  {
    sub_6FC00((__int64 *)a1 + 11, 0);
    qfree(*((void **)a1 + 11));
    *((_QWORD *)a1 + 11) = 0;
    *((_QWORD *)a1 + 13) = 0;
  }
  v3 = *((void **)a1 + 8);
  if ( v3 )
  {
    *((_QWORD *)a1 + 9) = 0;
    qfree(v3);
    *((_QWORD *)a1 + 8) = 0;
    *((_QWORD *)a1 + 10) = 0;
  }
  sub_6FA60((char **)a1 + 5);
  sub_38490((char **)a1 + 2);
}
// 14DEF8: using guessed type __int64 (__fastcall *off_14DEF8)();
