__int64 __fastcall sub_C2BF0(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rax
  struct _Unwind_Exception *v7; // rbx

  qmutex_lock();
  qmutex_lock();
  if ( a2 != 30 && (int)++*(_DWORD *)(a1 + 256) > 3 )
  {
    if ( !under_debugger )
    {
      v7 = (struct _Unwind_Exception *)interr();
      qmutex_unlock();
      qmutex_unlock();
      _Unwind_Resume(v7);
    }
    BUG();
  }
  sub_175720(TProgram::application + 136LL, 1);
  v3 = *(_QWORD *)(a1 + 200);
  v4 = *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(a1 + 208) < (unsigned __int64)(v3 + 1) )
  {
    v6 = qvector_reserve();
    *(_QWORD *)(a1 + 192) = v6;
    v4 = v6;
    v3 = *(_QWORD *)(a1 + 200);
  }
  *(_DWORD *)(v4 + 4 * v3) = a2;
  ++*(_QWORD *)(a1 + 200);
  qsem_post();
  qmutex_unlock();
  return qmutex_unlock();
}

