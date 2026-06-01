/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C3844
// Address: 0x00000000000C3844

//----- (00000000000C3844) ----------------------------------------------------
void __usercall sub_C3844(
        __int64 a1@<X0>,
        __int64 *a2@<X1>,
        _QWORD *a3@<X8>,
        int a4,
        int a5,
        void *ptr,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14,
        int a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        __int128 a26,
        __int64 a27)
{
  _QWORD *v30; // x21
  void **v31; // x23
  void *v32; // x0
  __int64 v33; // x8

  v30 = qalloc_or_throw(48);
  v30[4] = 0;
  v30[5] = 0;
  v30[2] = 0;
  v30[3] = 0;
  v31 = (void **)operator new(0x28u);
  v31[1] = nullptr;
  v31[2] = nullptr;
  *v31 = nullptr;
  if ( sem_init((sem_t *)(v31 + 3), 0, 0) == -1 )
  {
    v32 = *v31;
    if ( *v31 )
    {
      v31[1] = nullptr;
      qfree(v32);
    }
    operator delete(v31);
    v31 = nullptr;
  }
  v30[4] = v31;
  *((_WORD *)v30 + 20) = 0;
  v33 = *a2;
  *v30 = *a2;
  v30[1] = *(_QWORD *)(v33 + 8);
  **(_QWORD **)(v33 + 8) = v30;
  *(_QWORD *)(v33 + 8) = v30;
  ++*(_QWORD *)(a1 + 16);
  *a3 = v30;
}
