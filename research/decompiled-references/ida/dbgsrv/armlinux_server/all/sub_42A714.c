/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A714
// Address: 0x000000000042A714

//----- (000000000042A714) ----------------------------------------------------
void __fastcall __noreturn sub_42A714(
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
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        __int64 a30,
        int a31,
        int a32,
        int a33,
        int a34,
        void *ptr,
        __int64 a36)
{
  __int64 v36; // x26
  __int64 v37; // x27

  sub_48C428(*(_QWORD *)(v36 + 472), v37 + *(_QWORD *)(v36 + 480), 0);
  if ( ptr )
    j__free(ptr);
  _Unwind_Resume(a1);
}
// 42A71C: variable 'v36' is possibly undefined
// 42A720: variable 'v37' is possibly undefined
