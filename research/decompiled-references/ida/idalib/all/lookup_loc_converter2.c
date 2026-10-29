__int64 __fastcall lookup_loc_converter2(const char *a1, const char *a2)
{
  __int64 v2; // rbx
  int v3; // ebp
  int v4; // eax
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx

  if ( !(_BYTE)byte_2CCBE00 && __cxa_guard_acquire(&byte_2CCBE00) )
  {
    v7 = operator new(0x58u);
    *(_QWORD *)v7 = 0;
    v8 = v7;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 80) = 0;
    *(_OWORD *)(v7 + 8) = 0;
    *(_OWORD *)(v7 + 32) = 0;
    *(_OWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 72) = qmutex_create();
    *(_QWORD *)&qword_2CCBE08 = v8;
    __cxa_guard_release(&byte_2CCBE00);
  }
  v2 = *(_QWORD *)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  v3 = sub_4B7980(v2, a2);
  v4 = sub_4B7980(v2, a1);
  v5 = sub_4BBCC0(v2, v4, v3, 1);
  qmutex_unlock(*(_QWORD *)(v2 + 72));
  return v5;
}
