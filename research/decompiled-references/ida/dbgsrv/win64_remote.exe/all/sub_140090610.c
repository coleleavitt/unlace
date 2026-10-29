/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140090610
// Address: 0x0000000140090610

//----- (0000000140090610) ----------------------------------------------------
void __fastcall sub_140090610()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx

  v0 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAE28;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAE28);
  if ( qword_1400CAE20 )
  {
    sub_140002CE0((struct __crt_locale_pointers *)"PDB: forcibly killing thread...\n");
    sub_14005D940((HANDLE *)qword_1400CAE20);
    sub_14005D8F0((void **)qword_1400CAE20);
    qword_1400CAE20 = nullptr;
  }
  sub_14005D6D0(v0);
  sub_14005D710((void *)qword_1400CAE08);
  sub_14005D710((void *)qword_1400CAE10);
  sub_14005D670((struct _RTL_CRITICAL_SECTION *)qword_1400CAE28);
}
// 1400CAE08: using guessed type __int64 qword_1400CAE08;
// 1400CAE10: using guessed type __int64 qword_1400CAE10;
