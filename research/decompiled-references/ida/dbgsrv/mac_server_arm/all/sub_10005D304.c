/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D304
// Address: 0x000000010005D304

//----- (000000010005D304) ----------------------------------------------------
void __fastcall __noreturn sub_10005D304(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  _QWORD *v2; // x20
  _QWORD **v3; // x21
  __int64 v4; // x22

  *v3 = off_10009BB00;
  sub_10005E220(v4, v3[2]);
  operator delete(v3);
  sub_100006228((_QWORD *)(v1 + 56));
  sub_100006228((_QWORD *)(v1 + 32));
  sub_100006228(v2);
  _Unwind_Resume(a1);
}
// 10005D310: variable 'v3' is possibly undefined
// 10005D31C: variable 'v4' is possibly undefined
// 10005D330: variable 'v1' is possibly undefined
// 10005D344: variable 'v2' is possibly undefined
// 10009BB00: using guessed type __int64 (__fastcall *off_10009BB00[5])();
