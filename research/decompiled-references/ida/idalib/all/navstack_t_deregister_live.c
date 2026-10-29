__int64 __fastcall navstack_t_deregister_live(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rbp

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
  v2 = *(_QWORD *)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)v2 != v4 )
  {
    while ( a1 != *v3 )
    {
      if ( (_QWORD *)v4 == ++v3 )
        return qmutex_unlock(*(_QWORD *)(v2 + 72));
    }
    if ( (_QWORD *)v4 != v3 )
    {
      memmove(v3, v3 + 1, v4 - (_QWORD)v3 - 8);
      --*(_QWORD *)(v2 + 8);
    }
  }
  return qmutex_unlock(*(_QWORD *)(v2 + 72));
}
