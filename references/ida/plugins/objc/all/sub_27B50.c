_QWORD *__fastcall sub_27B50(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v4; // rax
  __int64 v5; // r13
  int v6; // r14d
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  int tinfo_size; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  void (__fastcall *v11)(__int64, _QWORD *, _QWORD, _QWORD); // rax

  v2 = *(_QWORD *)(**(_QWORD **)(a2 + 8) + 72LL);
  hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp();
  hexdsp(268, v2);
  v4 = **(_QWORD **)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 72);
  if ( !*(_QWORD *)(v5 + 8)
    && (v6 = *(_DWORD *)(v4 + 68),
        v7 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(),
        *(_DWORD *)(v7(268, v5) + 88) == v6) )
  {
    *a1 = 0;
    copy_tinfo_t();
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) == 0xB )
    {
      get_tinfo_property();
      tinfo_size = get_tinfo_size();
      v9 = **(_QWORD **)(a2 + 8);
      if ( tinfo_size == *(_DWORD *)(v9 + 68) && !(*(_QWORD *)(*(_QWORD *)(v9 + 72) + 8LL) % tinfo_size) )
      {
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        return a1;
      }
      clear_tinfo_t();
    }
    v10 = *(_DWORD *)(**(_QWORD **)(a2 + 8) + 68LL);
    *a1 = 0;
    v11 = (void (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))get_hexdsp();
    v11(165, a1, v10, 0);
  }
  return a1;
}
