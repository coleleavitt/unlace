__int64 __fastcall sub_169320(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int16 v8; // bp
  bool v9; // zf
  __int64 result; // rax
  struct _Unwind_Exception *v11; // rbp

  v8 = a5;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_235A00;
  *(_QWORD *)(a1 + 56) = 0;
  sub_1770B0(a1, a2, a3, a4, a5, a6);
  v9 = *(_BYTE *)(a1 + 64) == 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_WORD *)(a1 + 80) = 0x8000;
  if ( !v9 )
  {
    if ( !under_debugger )
    {
      v11 = (struct _Unwind_Exception *)interr();
      sub_9A070((_QWORD *)a1);
      _Unwind_Resume(v11);
    }
    BUG();
  }
  result = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(result + 916);
  *(_WORD *)(a1 + 80) = *(_WORD *)(result + 924);
  *(_DWORD *)(result + 916) = a3;
  *(_DWORD *)(result + 920) = a4;
  *(_WORD *)(result + 924) = v8;
  return result;
}

