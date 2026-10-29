__int64 __fastcall sub_233310(
        __int64 a1,
        const char *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v11; // rbp
  _QWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  char v23; // [rsp+0h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 64) )
  {
    sub_232FB0(a1, 26, *(double *)a3.m128_u64);
    a2 = (_BYTE *)(&dword_0 + 1);
    v11 = QT::QCoreApplication::self;
    v12 = QT::QCoreApplication::self + 2;
    (*(void (__fastcall **)(_QWORD *, __int64))(QT::QCoreApplication::self[2] + 232LL))(
      QT::QCoreApplication::self + 2,
      1);
    if ( *(_DWORD *)(a1 + 88) == 4 )
    {
      sub_169700(
        (int)"Debugger thread seems to be hung, killing it...\n",
        1,
        v13,
        v14,
        v15,
        v16,
        a3,
        a4,
        a5,
        a6,
        v17,
        v18,
        a9,
        a10,
        v23);
      qthread_kill(*(_QWORD *)(a1 + 64));
    }
    else
    {
      a2 = &byte_5;
      sub_232FB0(a1, 5, *(double *)a3.m128_u64);
    }
    qthread_join(*(_QWORD *)(a1 + 64));
    qthread_free(*(_QWORD *)(a1 + 64));
    (*(void (__fastcall **)(_QWORD *))(v11[2] + 216LL))(v12);
    inform_idc_about_debthread(0);
    qsem_free(*(_QWORD *)(a1 + 72));
    qsem_free(*(_QWORD *)(a1 + 80));
    qmutex_free(*(_QWORD *)(a1 + 264));
  }
  v19 = *(_QWORD *)(a1 + 240);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v19, a2);
  }
  v20 = *(_QWORD *)(a1 + 208);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree(v20, a2);
  }
  *(_QWORD *)(a1 + 96) = dthr_executor_t___vtable;
  free_debug_event(a1 + 128);
  v21 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 96) = &off_86FF78;
  return qsem_free(v21);
}
