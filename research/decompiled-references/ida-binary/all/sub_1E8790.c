__int64 __fastcall sub_1E8790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  void *v5; // rbp
  unsigned int v6; // r14d
  __int64 v8; // rbp
  __int16 v9; // ax
  struct _Unwind_Exception *v11; // rbx

  if ( *(_QWORD *)(a1 + 8)
    || *(_QWORD *)(a1 + 16)
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 144)
    || *(_QWORD *)(a1 + 48) )
  {
    if ( !under_debugger )
    {
      v11 = (struct _Unwind_Exception *)interr(40705, a2, a3, a4, a5);
      operator delete(v5, 0x1B8u);
      _Unwind_Resume(v11);
    }
    BUG();
  }
  *(_DWORD *)a1 = 0;
  v6 = a4;
  v8 = operator new(0x1B8u);
  sub_2876C0(v8, v6);
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 80) = 0;
  v9 = unk_8BCE1C;
  *(_DWORD *)(a1 + 88) = -1;
  *(_WORD *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 94) = v9;
  *(_DWORD *)(a1 + 96) = 1;
  *(_QWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  *(_OWORD *)(a1 + 64) = 0;
  return a1;
}
