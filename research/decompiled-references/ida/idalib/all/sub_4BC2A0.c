__int64 __fastcall sub_4BC2A0(int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebp
  __int64 v4; // rax
  __int64 v5; // rbx

  if ( !(_BYTE)byte_2CCBE00 && __cxa_guard_acquire(&byte_2CCBE00) )
  {
    v4 = operator new(0x58u);
    *(_QWORD *)v4 = 0;
    v5 = v4;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 80) = 0;
    *(_OWORD *)(v4 + 8) = 0;
    *(_OWORD *)(v4 + 32) = 0;
    *(_OWORD *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 72) = qmutex_create();
    *(_QWORD *)&qword_2CCBE08 = v5;
    __cxa_guard_release(&byte_2CCBE00);
  }
  v1 = *(_QWORD *)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  v2 = sub_4BC210(v1, a1);
  qmutex_unlock(*(_QWORD *)(v1 + 72));
  return v2;
}
