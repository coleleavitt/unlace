/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BDF0
// Address: 0x000000000040BDF0

//----- (000000000040BDF0) ----------------------------------------------------
void __fastcall __noreturn sub_40BDF0(
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
        void *a23,
        _QWORD *a24)
{
  __int64 v24; // x25
  _QWORD *v25; // x1
  _QWORD *v27; // x20
  void *v28; // x0
  void *v29; // x0

  v25 = *(_QWORD **)(v24 + 56);
  *(_QWORD *)v24 = qword_51D958;
  while ( v25 )
  {
    v27 = (_QWORD *)*v25;
    j__free_0(v25);
    v25 = v27;
  }
  memset(*(void **)(v24 + 40), 0, 8LL * a24[1]);
  a24[2] = 0;
  a24[3] = 0;
  v28 = *(void **)(v24 + 40);
  if ( a23 != v28 )
    j__free_0(v28);
  v29 = *(void **)(v24 + 16);
  if ( v29 )
  {
    *(_QWORD *)(v24 + 24) = 0;
    j__free(v29);
  }
  _Unwind_Resume(a1);
}
// 40BDF0: variable 'v24' is possibly undefined
// 51D958: using guessed type __int64 qword_51D958[2];
