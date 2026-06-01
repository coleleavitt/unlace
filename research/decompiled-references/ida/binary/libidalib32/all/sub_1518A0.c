__int64 __fastcall sub_1518A0(void *a1)
{
  int *v1; // rax
  int *v2; // r13
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  void *v6; // rax

  if ( !a1 || !qword_253040 )
    return 0;
  qmutex_lock();
  v1 = (int *)qword_253070;
  if ( !qword_253070 )
    goto LABEL_12;
  v2 = &dword_253068;
  do
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)v1 + 2);
      v4 = *((_QWORD *)v1 + 3);
      if ( *((_QWORD *)v1 + 4) < (unsigned __int64)a1 )
        break;
      v2 = v1;
      v1 = *((int **)v1 + 2);
      if ( !v3 )
        goto LABEL_8;
    }
    v1 = *((int **)v1 + 3);
  }
  while ( v4 );
LABEL_8:
  if ( v2 == &dword_253068 || (unsigned __int64)a1 < *((_QWORD *)v2 + 4) )
  {
LABEL_12:
    v5 = 0;
  }
  else
  {
    qthread_kill();
    qthread_join();
    qthread_free();
    v5 = 1;
    operator delete(a1, 0x18u);
    v6 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v6, 0x30u);
    --qword_253088;
  }
  qmutex_unlock();
  return v5;
}

