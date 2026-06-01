/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100052A10
// Address: 0x0000000100052A10

//----- (0000000100052A10) ----------------------------------------------------
void __fastcall sub_100052A10(_Unwind_Exception *a1, int a2)
{
  _QWORD *v2; // x27

  if ( a2 == 1 )
  {
    __cxa_begin_catch(a1);
    sub_100063440(2, (__int64 *)&STACK[0x8C8]);
    sub_10004E350((__int64)v2, (__int64 *)&STACK[0x8C8]);
    sub_1000018E0(&STACK[0x8C8]);
    __cxa_end_catch();
    JUMPOUT(0x100052940LL);
  }
  sub_1000018E0(v2);
  _Unwind_Resume(a1);
}
// 100053004: control flows out of bounds to 100052940
// 100052FEC: variable 'v2' is possibly undefined
