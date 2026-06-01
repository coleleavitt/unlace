__int64 __fastcall sub_478F50(__int64 a1, const char *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  double v4; // xmm0_8
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _Unwind_Exception *v9; // r14

  v4 = 0.0;
  *(_QWORD *)a1 = &unk_893C50;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  result = qmutex_create();
  *(_QWORD *)(a1 + 64) = result;
  if ( !result )
  {
    if ( !under_debugger )
    {
      v9 = (struct _Unwind_Exception *)interr(40195, a2, v7, v8, 0.0);
      v2 = *(_QWORD *)(a1 + 40);
      if ( v2 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        v4 = qfree(v2, a2);
      }
      v3 = *(_QWORD *)(a1 + 16);
      if ( v3 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        qfree(v3, a2, v4);
      }
      _Unwind_Resume(v9);
    }
    BUG();
  }
  return result;
}
