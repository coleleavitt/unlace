__int64 __fastcall sub_227F90(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int *v8; // rdi
  unsigned int v9; // r12d
  struct _Unwind_Exception *v11; // rbx

  v3 = a1[33];
  qmutex_lock(v3);
  v7 = a1[27];
  if ( !v7 )
  {
    if ( !under_debugger )
    {
      v11 = (struct _Unwind_Exception *)interr(40244, a2, v5, v6, a3);
      qmutex_unlock(v3);
      _Unwind_Resume(v11);
    }
    BUG();
  }
  v8 = (unsigned int *)a1[26];
  v9 = *v8;
  memmove(v8, v8 + 1, 4 * v7 - 4);
  --a1[27];
  qmutex_unlock(v3);
  return v9;
}
