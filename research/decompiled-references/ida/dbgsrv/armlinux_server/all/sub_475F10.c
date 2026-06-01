/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475F10
// Address: 0x0000000000475F10

//----- (0000000000475F10) ----------------------------------------------------
__int64 __fastcall sub_475F10(__int64 a1)
{
  _QWORD *v2; // x19

  v2 = sub_49E050(0x10u);
  sub_47CCA0(v2);
  *v2 = off_51B960;
  v2[1] = a1;
  return sub_47CE78();
}
// 51B960: using guessed type __int64 (__fastcall *off_51B960[3])();
