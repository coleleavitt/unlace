__int64 __fastcall sub_15B5F0(__int64 a1, const __m128i *a2, __int64 a3)
{
  void *v3; // rbp
  __int64 v5; // rbp
  __int16 v6; // ax
  __m128i v8; // xmm0
  struct _Unwind_Exception *v9; // rbx

  if ( *(_QWORD *)(a1 + 8) || *(_QWORD *)(a1 + 16) || *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 48) )
  {
    if ( !under_debugger )
    {
      v9 = (struct _Unwind_Exception *)interr();
      operator delete(v3, 0x150u);
      _Unwind_Resume(v9);
    }
    BUG();
  }
  *(_DWORD *)a1 = 0;
  v5 = operator new(0x150u);
  sub_FBB80(v5);
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 80) = 0;
  v6 = unk_2440C8;
  *(_DWORD *)(a1 + 88) = -1;
  *(_WORD *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 94) = v6;
  *(_DWORD *)(a1 + 96) = 1;
  *(_OWORD *)(a1 + 64) = 0;
  v8 = _mm_loadu_si128(a2);
  *(_QWORD *)(a1 + 48) = a3;
  *(__m128i *)(a1 + 140) = v8;
  return a1;
}

