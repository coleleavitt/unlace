__int64 __fastcall sub_B8650(__int64 a1)
{
  __int64 v2; // rax
  unsigned int *v3; // rdi
  unsigned int v4; // r12d
  struct _Unwind_Exception *v6; // rbx

  qmutex_lock();
  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 )
  {
    if ( !under_debugger )
    {
      v6 = (struct _Unwind_Exception *)interr();
      qmutex_unlock();
      _Unwind_Resume(v6);
    }
    BUG();
  }
  v3 = *(unsigned int **)(a1 + 192);
  v4 = *v3;
  memmove(v3, v3 + 1, 4 * v2 - 4);
  --*(_QWORD *)(a1 + 200);
  qmutex_unlock();
  return v4;
}

