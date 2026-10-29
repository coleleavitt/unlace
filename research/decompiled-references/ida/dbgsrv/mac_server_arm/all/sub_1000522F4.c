/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000522F4
// Address: 0x00000001000522F4

//----- (00000001000522F4) ----------------------------------------------------
void __fastcall __noreturn sub_1000522F4(
        _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  char **v9; // x19
  _QWORD *v10; // x21
  _QWORD *v11; // x23

  sub_10000A550(v11);
  sub_100006228(v10);
  sub_100006228(a9);
  sub_100010900(v9);
  _Unwind_Resume(a1);
}
// 1000522FC: variable 'v11' is possibly undefined
// 100052374: variable 'v10' is possibly undefined
// 100052384: variable 'v9' is possibly undefined
