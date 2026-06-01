/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454D80
// Address: 0x0000000000454D80

//----- (0000000000454D80) ----------------------------------------------------
void __fastcall __noreturn sub_454D80(
        struct _Unwind_Exception *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        char **a24,
        char **a25,
        void **a26,
        __int64 a27,
        __int64 a28,
        __int64 a29)
{
  _QWORD *v29; // x19
  __int64 v30; // x25
  void *v32; // x0
  void *v33; // x0
  void *v34; // x0

  sub_4507F0((void *)(a29 - 24));
  sub_452C60(a26);
  v32 = (void *)v29[39];
  if ( v32 )
  {
    v29[40] = 0;
    j__free(v32);
  }
  v33 = (void *)v29[33];
  if ( v33 )
  {
    v29[34] = 0;
    j__free(v33);
  }
  sub_40CB60(a24);
  sub_452930(v30);
  sub_452858(a25);
  v34 = (void *)v29[4];
  if ( v34 )
  {
    v29[5] = 0;
    j__free(v34);
  }
  _Unwind_Resume(a1);
}
// 454D98: variable 'v29' is possibly undefined
// 454DC4: variable 'v30' is possibly undefined
