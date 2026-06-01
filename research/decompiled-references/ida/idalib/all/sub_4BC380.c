__int64 __fastcall sub_4BC380(__int64 a1)
{
  _QWORD *v1; // r13
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
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
  v1 = *(_QWORD **)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  do
  {
    v2 = v1[4];
    if ( !v2 )
      break;
    v3 = v1[3];
    v4 = 0;
    while ( a1 != *(_QWORD *)(v3 + 8) )
    {
      ++v4;
      v3 += 32;
      if ( v2 == v4 )
        return qmutex_unlock(v1[9]);
    }
    sub_4BC210((__int64)v1, *(_DWORD *)(v3 + 16));
  }
  while ( v2 != v4 );
  return qmutex_unlock(v1[9]);
}
