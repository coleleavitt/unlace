/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003D7FC
// Address: 0x000000010003D7FC

//----- (000000010003D7FC) ----------------------------------------------------
void __fastcall __noreturn sub_10003D7FC(
        _Unwind_Exception *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        void *__p,
        __int64 a12,
        int a13,
        __int16 a14,
        char a15,
        char a16)
{
  __int64 v16; // x19
  __int64 v17; // x20

  sub_10003DDD8(v16 + 568);
  sub_100006228((_QWORD *)(v16 + 296));
  sub_10003DE34((_QWORD *)(v16 + 248));
  sub_100010900((char **)(v16 + 224));
  sub_10003DE74(v17);
  sub_10003DEDC((void **)(v16 + 56));
  sub_100006228((_QWORD *)(v16 + 32));
  _Unwind_Resume(a1);
}
// 10003D820: variable 'v16' is possibly undefined
// 10003D844: variable 'v17' is possibly undefined
