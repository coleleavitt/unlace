__int64 __fastcall sub_1C2D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // r13
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  void (__fastcall *v12)(__int64, __int64, __int64); // rax
  __int64 v13; // rdx
  int v14; // eax
  void (__fastcall *v15)(__int64, __int64, __int64); // rax
  struct _Unwind_Exception *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx

  v6 = *(int *)(a1 + 8);
  if ( v6 >= a4[1] )
  {
    if ( !under_debugger )
    {
      v17 = (struct _Unwind_Exception *)interr(30704);
      sub_C930(v4 + 64, a2, v18);
      sub_C930(v4 + 48, a2, v19);
      sub_C930(v5, a2, v20);
      sub_19800(v4, a2, v21);
      _Unwind_Resume(v17);
    }
    BUG();
  }
  v7 = a3;
  v8 = *a4 + 16 * v6;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, a2, a3);
  v10 = hexdsp(129, 80);
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0;
  v12 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(129, 80, v11);
  v12(333, v10, a2);
  v14 = 4;
  if ( v7 != *(_DWORD *)(v8 + 4) )
    v14 = (v7 < *(_DWORD *)(v8 + 4)) + 9;
  *(_DWORD *)v10 = v14;
  v15 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(333, v10, v13);
  v15(274, v10 + 32, v8);
  *(_DWORD *)(v10 + 68) = v7;
  return v10;
}
