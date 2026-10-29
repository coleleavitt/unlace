__int64 __fastcall navstack_t_register_live(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( !(_BYTE)byte_2CA1F00 && __cxa_guard_acquire(&byte_2CA1F00) )
  {
    v8 = operator new(0x58u);
    *(_QWORD *)v8 = 0;
    v9 = v8;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_DWORD *)(v8 + 80) = 0;
    *(_OWORD *)(v8 + 8) = 0;
    *(_OWORD *)(v8 + 32) = 0;
    *(_OWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 72) = qmutex_create();
    *(_QWORD *)&qword_2CA1F08 = v9;
    __cxa_guard_release(&byte_2CA1F00);
  }
  v1 = *(__int64 **)&qword_2CA1F08;
  qmutex_lock(*(_QWORD *)(*(_QWORD *)&qword_2CA1F08 + 72LL));
  v2 = v1[1];
  v3 = (_QWORD *)(*v1 + 8 * v2);
  v4 = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 != v3 )
  {
    while ( a1 != *v4 )
    {
      if ( v3 == ++v4 )
        goto LABEL_8;
    }
    if ( v3 != v4 )
      return qmutex_unlock(v1[9]);
  }
LABEL_8:
  v6 = v2 + 1;
  if ( v1[2] < v6 )
  {
    v10 = qvector_reserve(v1, *v1, v6, 8);
    v11 = v1[1];
    *v1 = v10;
    v3 = (_QWORD *)(v10 + 8 * v11);
  }
  *v3 = a1;
  v7 = v1[9];
  ++v1[1];
  return qmutex_unlock(v7);
}

