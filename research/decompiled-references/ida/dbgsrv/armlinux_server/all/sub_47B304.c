/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B304
// Address: 0x000000000047B304

//----- (000000000047B304) ----------------------------------------------------
void __fastcall __noreturn sub_47B304(
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
        void *a25,
        __int64 a26,
        int a27,
        void *a28,
        __int64 a29,
        int a30,
        void *ptr,
        __int64 a32)
{
  __int64 v32; // x20

  if ( ptr )
    j__free(ptr);
  if ( a28 )
    j__free(a28);
  if ( a25 )
    j__free(a25);
  if ( v32 )
    sub_47A6E0(v32);
  _Unwind_Resume(a1);
}
// 47B33C: variable 'v32' is possibly undefined
