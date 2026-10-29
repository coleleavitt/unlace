/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48770
// Address: 0x0000000000048770

//----- (0000000000048770) ----------------------------------------------------
char sub_48770()
{
  __int64 (__fastcall **v1[2])(_QWORD, __int64); // [rsp+8h] [rbp-10h] BYREF

  v1[1] = (__int64 (__fastcall **)(_QWORD, __int64))__readfsqword(0x28u);
  v1[0] = (__int64 (__fastcall **)(_QWORD, __int64))&off_146ED0;
  sub_A4130(v1);
  return 1;
}
// 146ED0: using guessed type __int64 (__fastcall *off_146ED0)();
