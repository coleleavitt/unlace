__int64 __fastcall sub_1EE20(_BYTE *a1, __int64 a2, __int64 a3)
{
  void *v3; // r13
  __int64 result; // rax
  __int64 v6; // rax
  const char *v7; // rdx
  __int64 v8; // r13
  struct _Unwind_Exception *v9; // rbx

  if ( *(_DWORD *)(a3 + 48) )
  {
    v6 = operator new(0x58u);
    v7 = s1;
    v8 = v6;
    if ( *(_QWORD *)(a3 + 8) )
      v7 = *(const char **)a3;
    sub_1EB90(v6, a2, (__int64)v7);
    result = create_generic_linput(v8);
    *a1 = 1;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 32) != *(_QWORD *)(a3 + 40) )
    {
      if ( !under_debugger )
      {
        v9 = (struct _Unwind_Exception *)interr(20113);
        operator delete(v3, 0x58u);
        _Unwind_Resume(v9);
      }
      BUG();
    }
    qlseek(a2, *(_QWORD *)(a3 + 24), 0);
    *a1 = 0;
    return a2;
  }
  return result;
}
