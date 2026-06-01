/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006117C
// Address: 0x000000010006117C

//----- (000000010006117C) ----------------------------------------------------
void __fastcall __noreturn sub_10006117C(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  _QWORD *v2; // x20
  _QWORD **v3; // x21
  __int64 v4; // x22

  *v3 = off_10009FB40;
  sub_100062328(v4, v3[2]);
  operator delete(v3);
  sub_100006678((_QWORD *)(v1 + 56));
  sub_100006678((_QWORD *)(v1 + 32));
  sub_100006678(v2);
  _Unwind_Resume(a1);
}
// 100061198: variable 'v3' is possibly undefined
// 1000611A4: variable 'v4' is possibly undefined
// 1000611B8: variable 'v1' is possibly undefined
// 1000611CC: variable 'v2' is possibly undefined
// 10009FB40: using guessed type __int64 (__fastcall *off_10009FB40[5])();
