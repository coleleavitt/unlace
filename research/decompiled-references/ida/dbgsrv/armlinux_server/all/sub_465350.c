/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465350
// Address: 0x0000000000465350

//----- (0000000000465350) ----------------------------------------------------
void __fastcall __noreturn sub_465350(
        struct _Unwind_Exception *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        void *ptr,
        __int64 a16)
{
  void **v16; // x21

  if ( ptr )
    j__free(ptr);
  sub_48C0F8(v16);
  _Unwind_Resume(a1);
}
// 465374: variable 'v16' is possibly undefined
