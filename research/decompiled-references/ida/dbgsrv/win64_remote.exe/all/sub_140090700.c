/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140090700
// Address: 0x0000000140090700

//----- (0000000140090700) ----------------------------------------------------
void __fastcall sub_140090700()
{
  if ( qword_1400C6BF8 )
  {
    qword_1400C6C00 = 0;
    j_free(qword_1400C6BF8);
    qword_1400C6BF8 = nullptr;
    qword_1400C6C08 = 0;
  }
  sub_14002BD20((void **)qword_1400C6BC8);
  if ( qword_1400C6BB0 )
  {
    qword_1400C6BB8 = 0;
    j_free(qword_1400C6BB0);
    qword_1400C6BB0 = nullptr;
    qword_1400C6BC0 = 0;
  }
  sub_14002BC90((__int64)qword_1400C6B98);
  sub_14000B020((void **)qword_1400C6B80);
  off_1400C6B70 = (__int64 (__fastcall *)(void *))&off_140094B78;
}
// 140094B78: using guessed type __int64 (__fastcall *off_140094B78)();
// 1400C6B70: using guessed type __int64 (__fastcall *off_1400C6B70)(void *Block);
// 1400C6B80: using guessed type __int64 qword_1400C6B80[3];
// 1400C6B98: using guessed type __int64 qword_1400C6B98[3];
// 1400C6BB8: using guessed type __int64 qword_1400C6BB8;
// 1400C6BC0: using guessed type __int64 qword_1400C6BC0;
// 1400C6BC8: using guessed type __int64 qword_1400C6BC8[4];
// 1400C6C00: using guessed type __int64 qword_1400C6C00;
// 1400C6C08: using guessed type __int64 qword_1400C6C08;
