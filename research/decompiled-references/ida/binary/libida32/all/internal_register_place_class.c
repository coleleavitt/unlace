__int64 __fastcall internal_register_place_class(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rbx

  if ( !(_BYTE)byte_2CA1F00 && __cxa_guard_acquire(&byte_2CA1F00) )
  {
    v9 = operator new(0x58u);
    *(_QWORD *)v9 = 0;
    v10 = v9;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 48) = 0;
    *(_DWORD *)(v9 + 80) = 0;
    *(_OWORD *)(v9 + 8) = 0;
    *(_OWORD *)(v9 + 32) = 0;
    *(_OWORD *)(v9 + 56) = 0;
    *(_QWORD *)(v9 + 72) = qmutex_create();
    *(_QWORD *)&qword_2CA1F08 = v10;
    __cxa_guard_release(&byte_2CA1F00);
  }
  v6 = *(_QWORD *)&qword_2CA1F08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CA1F08 + 72LL));
  v7 = sub_4A2570(v6, a1, a2, a3, a4);
  qmutex_unlock(*(_QWORD *)(v6 + 72));
  return v7;
}

