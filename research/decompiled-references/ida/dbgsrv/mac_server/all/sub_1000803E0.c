/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000803E0
// Address: 0x00000001000803E0

//----- (00000001000803E0) ----------------------------------------------------
_QWORD *__fastcall sub_1000803E0(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _OWORD *v5; // r12
  void *v6; // r14
  kern_return_t v7; // eax
  void *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rcx

  v5 = qalloc_or_throw(48);
  v5[1] = 0;
  v5[2] = 0;
  v6 = operator new(0x20u);
  *(_OWORD *)v6 = 0;
  *((_QWORD *)v6 + 2) = 0;
  v7 = semaphore_create(mach_task_self_, (semaphore_t *)v6 + 6, 0, 0);
  if ( v6 == (void *)-25LL || v7 )
  {
    v8 = *(void **)v6;
    if ( *(_QWORD *)v6 )
    {
      *((_QWORD *)v6 + 1) = 0;
      qfree(v8);
    }
    operator delete(v6);
    v6 = nullptr;
  }
  *((_QWORD *)v5 + 4) = v6;
  *((_WORD *)v5 + 20) = 0;
  v9 = *a3;
  *(_QWORD *)v5 = *a3;
  v10 = *(_QWORD **)(v9 + 8);
  *((_QWORD *)v5 + 1) = v10;
  *v10 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  ++*(_QWORD *)(a2 + 16);
  *a1 = v5;
  return a1;
}
