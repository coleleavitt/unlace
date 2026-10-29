__int64 __fastcall sub_8CDCB0(__int64 a1, size_t *a2, void *a3)
{
  __int64 v3; // r13
  _QWORD *v7; // rdx
  __int64 v8; // rsi
  char v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  size_t v12; // r14
  unsigned int v13; // ebp
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rdi
  __int64 (*v18)(); // rcx
  bool v19; // al

  if ( (*(_BYTE *)(a1 + 136) & 2) != 0 )
  {
    if ( !under_debugger )
      interr(2241);
    goto LABEL_31;
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v3 + 120) )
  {
    v7 = *(_QWORD **)(a1 + 144);
    v8 = *(_QWORD *)(a1 + 152);
    v9 = 0;
    v10 = v7[1] - v8;
    v11 = v10;
    if ( v10 <= 0 )
    {
      *a2 = 0;
      return 0;
    }
    goto LABEL_4;
  }
  if ( unk_2C581E0 )
  {
    if ( *(_DWORD *)(v3 + 112) > dword_2CAD3D4 )
    {
      dword_2CAD3D4 = *(_DWORD *)(v3 + 112);
      goto LABEL_15;
    }
    if ( !under_debugger )
      interr(2386);
LABEL_31:
    BUG();
  }
LABEL_15:
  pthread_rwlock_rdlock((pthread_rwlock_t *)(v3 + 32));
  _InterlockedAdd((volatile signed __int32 *)(v3 + 120), 1u);
  v9 = 1;
  v7 = *(_QWORD **)(a1 + 144);
  v8 = *(_QWORD *)(a1 + 152);
  v10 = v7[1] - v8;
  v11 = v10;
  if ( v10 <= 0 )
  {
    *a2 = 0;
    v13 = 0;
LABEL_17:
    v15 = *(_QWORD *)(a1 + 8);
    if ( *(int *)(v15 + 120) <= 0 )
      sub_8CBDF0();
    _InterlockedSub((volatile signed __int32 *)(v15 + 120), 1u);
    v16 = *(_BYTE *)(v15 + 116) == 0;
    dword_2CAD3D4 = 0;
    if ( !v16 )
      *(_BYTE *)(v15 + 116) = 0;
    pthread_rwlock_unlock((pthread_rwlock_t *)(v15 + 32));
    return v13;
  }
LABEL_4:
  v12 = *a2;
  if ( *a2 < v10 )
    v11 = *a2;
  else
    v12 = v10;
  memcpy(a3, (const void *)(*v7 + v8), v12);
  *(_QWORD *)(a1 + 152) += v11;
  *a2 = v12;
  if ( (*(_BYTE *)(a1 + 136) & 4) != 0 && (MD5Update(), (v17 = *(_QWORD *)(a1 + 16)) != 0) )
  {
    v13 = 0;
    v18 = *(__int64 (**)())(*(_QWORD *)v17 + 8LL);
    v19 = 0;
    if ( v18 != sub_8A46A0 )
    {
      v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v18)(v17, 1, v11);
      v19 = v13 == 1;
    }
    *(_BYTE *)(a1 + 140) = v19;
  }
  else
  {
    v13 = 0;
  }
  if ( v9 )
    goto LABEL_17;
  return v13;
}

