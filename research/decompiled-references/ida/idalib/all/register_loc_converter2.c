__int64 __fastcall register_loc_converter2(const char *a1, const char *a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx

  if ( !(_BYTE)byte_2CCBE00 && __cxa_guard_acquire(&byte_2CCBE00) )
  {
    v6 = operator new(0x58u);
    *(_QWORD *)v6 = 0;
    v7 = v6;
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 48) = 0;
    *(_DWORD *)(v6 + 80) = 0;
    *(_OWORD *)(v6 + 8) = 0;
    *(_OWORD *)(v6 + 32) = 0;
    *(_OWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 72) = qmutex_create();
    *(_QWORD *)&qword_2CCBE08 = v7;
    __cxa_guard_release(&byte_2CCBE00);
  }
  v4 = *(_QWORD **)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  sub_4BBD10(v4, a1, a2, a3, 1);
  return qmutex_unlock(v4[9]);
}
