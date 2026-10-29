__int64 __fastcall sub_232FB0(__int64 a1, __int64 a2, double a3)
{
  int v3; // ebp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rax
  struct _Unwind_Exception *v14; // rbx

  v3 = a2;
  v5 = QT::QCoreApplication::self[10];
  qmutex_lock(v5);
  v6 = *(_QWORD *)(a1 + 264);
  qmutex_lock(v6);
  if ( (_DWORD)a2 != 30 && (int)++*(_DWORD *)(a1 + 272) > 3 )
  {
    if ( !under_debugger )
    {
      v14 = (struct _Unwind_Exception *)interr(40197, a2, v7, v8, a3);
      qmutex_unlock(v6);
      qmutex_unlock(v5);
      _Unwind_Resume(v14);
    }
    BUG();
  }
  sub_47B9C0(QT::QCoreApplication::self + 2, 1);
  v9 = *(_QWORD *)(a1 + 216);
  v10 = *(_QWORD *)(a1 + 208);
  if ( *(_QWORD *)(a1 + 224) < (unsigned __int64)(v9 + 1) )
  {
    v13 = qvector_reserve(a1 + 208, v10, v9 + 1, 4);
    *(_QWORD *)(a1 + 208) = v13;
    v10 = v13;
    v9 = *(_QWORD *)(a1 + 216);
  }
  *(_DWORD *)(v10 + 4 * v9) = v3;
  v11 = *(_QWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 216);
  qsem_post(v11);
  qmutex_unlock(v6);
  return qmutex_unlock(v5);
}
