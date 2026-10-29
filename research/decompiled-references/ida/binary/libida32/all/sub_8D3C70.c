__int64 __fastcall sub_8D3C70(__int64 a1, __int64 a2, const char *a3)
{
  char v3; // r13
  int v5; // esi
  size_t v7; // r14
  _QWORD *v8; // r14
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  bool v13; // zf
  void *ptr; // [rsp+8h] [rbp-60h]
  void *v15; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 120);
  v17 = __readfsqword(0x28u);
  if ( !v5 )
  {
    if ( unk_2C581E0 )
    {
      if ( *(_DWORD *)(a1 + 112) <= dword_2CAD3D4 )
      {
        if ( !under_debugger )
          interr(2386);
        BUG();
      }
      dword_2CAD3D4 = *(_DWORD *)(a1 + 112);
    }
    pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 32));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 120), 1u);
    v3 = 1;
  }
  v15 = nullptr;
  v16 = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v15 = (void *)qvector_reserve(&v15, 0, v7 + 1, 1);
    *(_QWORD *)&v16 = v7 + 1;
    memmove(v15, a3, v7);
    *((_BYTE *)v15 + v7) = 0;
    ptr = v15;
    v8 = sub_8D3B60(a1 + 128, (__int64)&v15);
    if ( ptr )
    {
      *(_QWORD *)&v16 = 0;
      qfree(ptr);
    }
  }
  else
  {
    v8 = sub_8D3B60(a1 + 128, (__int64)&v15);
  }
  if ( v8 != (_QWORD *)(a1 + 136) )
  {
    v9 = v8[7];
    if ( v9 >= *(_QWORD *)(a1 + 184) )
      sub_8CBE10();
    v10 = (_QWORD *)(*(_QWORD *)(a1 + 176) + 16 * v9);
    if ( v10 )
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0;
        *(_OWORD *)(a2 + 32) = 0;
        *(_OWORD *)(a2 + 64) = 0;
        *(_OWORD *)(a2 + 16) = 0;
        *(_OWORD *)(a2 + 48) = 0;
        *(_QWORD *)(a2 + 40) = *(_QWORD *)(*v10 + 8LL);
        v11 = v10[1];
        *(_DWORD *)(a2 + 12) = 0x8000;
        *(_QWORD *)(a2 + 64) = v11;
      }
      if ( !v3 )
        return 0;
      if ( *(int *)(a1 + 120) > 0 )
      {
        _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
        v13 = *(_BYTE *)(a1 + 116) == 0;
        dword_2CAD3D4 = 0;
        if ( !v13 )
          *(_BYTE *)(a1 + 116) = 0;
        pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 32));
        return 0;
      }
LABEL_30:
      sub_8CBDF0();
    }
  }
  if ( v3 )
  {
    if ( *(int *)(a1 + 120) <= 0 )
      goto LABEL_30;
    _InterlockedSub((volatile signed __int32 *)(a1 + 120), 1u);
    v13 = *(_BYTE *)(a1 + 116) == 0;
    dword_2CAD3D4 = 0;
    if ( !v13 )
      *(_BYTE *)(a1 + 116) = 0;
    pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 32));
  }
  set_error_string();
  return 3;
}

