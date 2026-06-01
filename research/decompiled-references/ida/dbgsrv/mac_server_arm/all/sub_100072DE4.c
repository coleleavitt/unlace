/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100072DE4
// Address: 0x0000000100072DE4

//----- (0000000100072DE4) ----------------------------------------------------
void __usercall sub_100072DE4(__int64 a1@<X0>, __int64 *a2@<X1>, _QWORD *a3@<X8>)
{
  _OWORD *v6; // x22
  void *v7; // x23
  kern_return_t v8; // w0
  void *v10; // x0
  __int64 v11; // x8
  _QWORD *v12; // x9

  v6 = qalloc_or_throw(48);
  v6[1] = 0u;
  v6[2] = 0u;
  v7 = operator new(0x20u);
  *((_QWORD *)v7 + 1) = 0;
  *((_QWORD *)v7 + 2) = 0;
  *(_QWORD *)v7 = 0;
  v8 = semaphore_create(mach_task_self_, (semaphore_t *)v7 + 6, 0, 0);
  if ( v7 == (void *)-25LL || v8 != 0 )
  {
    v10 = *(void **)v7;
    if ( *(_QWORD *)v7 )
    {
      *((_QWORD *)v7 + 1) = 0;
      qfree(v10);
    }
    operator delete(v7);
    v7 = nullptr;
  }
  *((_QWORD *)v6 + 4) = v7;
  *((_WORD *)v6 + 20) = 0;
  v11 = *a2;
  *(_QWORD *)v6 = *a2;
  v12 = *(_QWORD **)(v11 + 8);
  *((_QWORD *)v6 + 1) = v12;
  *v12 = v6;
  *(_QWORD *)(v11 + 8) = v6;
  ++*(_QWORD *)(a1 + 16);
  *a3 = v6;
}
