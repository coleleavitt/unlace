__int64 __fastcall sub_4D2700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  void *v7; // rdi
  _QWORD *v8; // rbx
  int v9; // esi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 i; // rcx
  unsigned int v13; // ebx
  _DWORD *v15; // rdi

  v7 = qword_2CA2088;
  if ( qword_2CA2088 )
  {
    qmutex_lock(qword_2CA2088);
    v7 = qword_2CA2088;
    if ( qword_2CA2088 )
    {
      qmutex_lock(qword_2CA2088);
      v8 = qword_2CA2080;
      v7 = qword_2CA2088;
      if ( qword_2CA2080 )
        goto LABEL_6;
LABEL_18:
      if ( v7 )
        qmutex_unlock(v7);
LABEL_20:
      if ( !under_debugger )
        interr(1812);
      BUG();
    }
  }
  v8 = qword_2CA2080;
  if ( !qword_2CA2080 )
    goto LABEL_20;
LABEL_6:
  while ( a1 != v8[6] )
  {
    v8 = (_QWORD *)*v8;
    if ( !v8 )
      goto LABEL_18;
  }
  if ( v7 )
    qmutex_unlock(v7);
  v9 = *((_DWORD *)v8 + 36);
  if ( (v9 & 0x4000) != 0 )
    goto LABEL_14;
  v10 = (__int64 *)v8[23];
  v11 = v8[24];
  for ( i = (__int64)&v10[v11]; (__int64 *)i != v10; ++v10 )
  {
    v11 = *v10;
    if ( *(_QWORD *)(*v10 + 48) )
      goto LABEL_14;
  }
  if ( (v9 & 0x80u) != 0 )
  {
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  if ( (v9 & 0x20) != 0 )
  {
    sub_4CEED0(a1, 1);
  }
  else
  {
    v15 = (_DWORD *)v8[6];
    if ( v15 )
    {
      sub_4D24B0(v15, (__int64)(v8 + 7), v11, i, a5, a6);
      v8[6] = 0;
    }
  }
  v13 = 1;
LABEL_15:
  if ( qword_2CA2088 )
    qmutex_unlock(qword_2CA2088);
  return v13;
}

