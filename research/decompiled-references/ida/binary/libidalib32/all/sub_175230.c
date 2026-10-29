__int64 __fastcall sub_175230(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 (*v14)(); // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( (a3 & 4) == 0 && (unsigned __int8)is_main_thread() )
    return (**(__int64 (__fastcall ***)(__int64))a2)(a2);
  qmutex_lock();
  v6 = qthread_self();
  v7 = *(_QWORD *)(a1 + 40);
  v8 = v6;
  v9 = v7 + 16LL * *(_QWORD *)(a1 + 48);
  if ( v7 != v9 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    while ( !(unsigned __int8)qthread_equal() )
    {
      v10 += 16;
      if ( v9 == v10 )
        goto LABEL_8;
    }
    if ( *(_DWORD *)(v10 + 8) != 1 )
    {
      qmutex_unlock();
      return -1;
    }
  }
LABEL_8:
  v11 = a3 & 7;
  if ( (a3 & 2) != 0 )
    v12 = v11 | 0x12345679;
  else
    v12 = v11 | 0x12345678;
  *(_QWORD *)(a2 + 8) = v12;
  v13 = v12 & 4;
  v14 = *(__int64 (**)())(*(_QWORD *)a1 + 240LL);
  if ( v14 != sub_173C20 && ((unsigned __int8 (__fastcall *)(__int64, __int64))v14)(a1, a2) )
  {
    if ( v13 )
      return -1;
    return *(_QWORD *)(a2 + 8);
  }
  if ( !(*(_QWORD *)(a2 + 16) | v13) )
  {
    v21 = qsem_create();
    *(_QWORD *)(a2 + 16) = v21;
    if ( !v21 )
LABEL_31:
      abort();
  }
  if ( !a4 )
  {
    v15 = 1;
    if ( *(_DWORD *)(a1 + 72) != -1 )
      v15 = *(_DWORD *)(a1 + 72) + 1;
    a4 = v15;
    *(_DWORD *)(a1 + 72) = v15;
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v16 + 1) )
  {
    v20 = qvector_reserve();
    v16 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 16) = v20;
    v17 = v20;
  }
  v18 = v17 + 24 * v16;
  *(_QWORD *)v18 = 0;
  ++*(_QWORD *)(a1 + 24);
  *(_QWORD *)v18 = a2;
  *(_QWORD *)(v18 + 8) = v8;
  *(_DWORD *)(v18 + 16) = a4;
  qmutex_unlock();
  send_request_to_main_thread(nullptr);
  result = a4;
  if ( !v13 )
  {
    if ( (unsigned __int8)qsem_wait() )
      return *(_QWORD *)(a2 + 8);
    qsem_free();
    goto LABEL_31;
  }
  return result;
}

