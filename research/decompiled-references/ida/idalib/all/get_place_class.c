__int64 __fastcall get_place_class(_DWORD *a1, _DWORD *a2, int a3)
{
  _QWORD *v4; // r13
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r13

  if ( !(_BYTE)byte_2CCBE00 && __cxa_guard_acquire(&byte_2CCBE00) )
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
    *(_QWORD *)&qword_2CCBE08 = v10;
    __cxa_guard_release(&byte_2CCBE00);
  }
  v4 = *(_QWORD **)&qword_2CCBE08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CCBE08 + 72LL));
  v5 = (__int64 *)v4[3];
  v6 = &v5[4 * v4[4]];
  if ( v5 == v6 )
    goto LABEL_13;
  while ( a3 != *((_DWORD *)v5 + 4) )
  {
    v5 += 4;
    if ( v6 == v5 )
      goto LABEL_13;
  }
  if ( !v5 )
  {
LABEL_13:
    v7 = 0;
  }
  else
  {
    if ( a1 )
      *a1 = *((_DWORD *)v5 + 5);
    if ( a2 )
      *a2 = *((_DWORD *)v5 + 6);
    v7 = *v5;
  }
  qmutex_unlock(v4[9]);
  return v7;
}
