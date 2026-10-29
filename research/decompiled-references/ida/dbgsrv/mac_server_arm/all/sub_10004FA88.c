/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004FA88
// Address: 0x000000010004FA88

//----- (000000010004FA88) ----------------------------------------------------
void __fastcall sub_10004FA88(_Unwind_Exception *a1, int a2)
{
  _QWORD *v2; // x27

  if ( a2 == 1 )
  {
    __cxa_begin_catch(a1);
    sub_10005F000(2, (__int64 *)&STACK[0x8C8]);
    sub_10004B950((__int64)v2, (__int64 *)&STACK[0x8C8]);
    sub_1000017A4(&STACK[0x8C8]);
    __cxa_end_catch();
    JUMPOUT(0x10004F9B8LL);
  }
  sub_1000017A4(v2);
  _Unwind_Resume(a1);
}
// 10005007C: control flows out of bounds to 10004F9B8
// 100050064: variable 'v2' is possibly undefined
