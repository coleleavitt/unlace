__int64 __fastcall sub_75E3A0(__int64 a1, int a2, const void *a3, size_t a4)
{
  __int64 *v5; // r12
  __int64 result; // rax
  void *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rbx
  _QWORD *v12; // r14
  void *v13; // rdi
  void *v14; // rdi
  _QWORD *v15; // r14
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  char v21; // al
  void *v22; // rdi
  char v23; // bl
  unsigned __int8 v25; // [rsp+8h] [rbp-50h]

  if ( !*(_BYTE *)(a1 + 105) )
  {
    v8 = *(_QWORD *)(a1 + 56);
    v9 = 0;
    v10 = 0;
    if ( v8 )
    {
      do
      {
        v11 = v9 + *(_QWORD *)(a1 + 48);
        v12 = *(_QWORD **)(v11 + 120);
        while ( v12 )
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
          operator delete(v13, 0x10u);
        }
        memset(*(void **)(v11 + 104), 0, 8LL * *(_QWORD *)(v11 + 112));
        v14 = *(void **)(v11 + 104);
        *(_QWORD *)(v11 + 128) = 0;
        *(_QWORD *)(v11 + 120) = 0;
        if ( v14 != (void *)(v11 + 152) )
          operator delete(v14, 8LL * *(_QWORD *)(v11 + 112));
        v15 = *(_QWORD **)(v11 + 64);
        while ( v15 )
        {
          v16 = v15;
          v15 = (_QWORD *)*v15;
          operator delete(v16, 0x10u);
        }
        memset(*(void **)(v11 + 48), 0, 8LL * *(_QWORD *)(v11 + 56));
        v17 = *(void **)(v11 + 48);
        *(_QWORD *)(v11 + 72) = 0;
        *(_QWORD *)(v11 + 64) = 0;
        if ( v17 != (void *)(v11 + 96) )
          operator delete(v17, 8LL * *(_QWORD *)(v11 + 56));
        v18 = *(void **)(v11 + 24);
        if ( v18 )
        {
          *(_QWORD *)(v11 + 32) = 0;
          qfree(v18);
        }
        v19 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *(_QWORD *)(v11 + 8) = 0;
          qfree(v19);
        }
        ++v10;
        v9 += 176;
      }
      while ( v8 != v10 );
    }
    v20 = *(void **)(a1 + 112);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 96) = 0;
    *(_BYTE *)(a1 + 105) = 1;
    if ( v20 )
    {
      *(_QWORD *)(a1 + 120) = 0;
      qfree(v20);
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 128) = 0;
    }
    *(_DWORD *)(a1 + 136) = -1;
    if ( (_WORD)a2 )
      return 0;
    goto LABEL_28;
  }
  if ( !(_WORD)a2 )
  {
LABEL_28:
    v5 = (__int64 *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 120) )
      goto LABEL_29;
    v5 = (__int64 *)(a1 + 112);
    v21 = sub_75E280(a1, a1 + 112, *(unsigned int *)(a1 + 136));
    v22 = *(void **)(a1 + 112);
    v23 = v21;
    if ( v22 )
    {
      *(_QWORD *)(a1 + 120) = 0;
      qfree(v22);
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 128) = 0;
    }
    *(_DWORD *)(a1 + 136) = -1;
    if ( v23 )
    {
LABEL_29:
      *(_DWORD *)(a1 + 136) = a2;
      goto LABEL_5;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 136) == -1 )
    return 0;
  v5 = (__int64 *)(a1 + 112);
LABEL_5:
  if ( !a4 || (sub_753A60(v5, a3, a4), result = 1, a4 <= 0x3FF) )
  {
    result = sub_75E280(a1, v5, *(unsigned int *)(a1 + 136));
    v7 = *(void **)(a1 + 112);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 120) = 0;
      v25 = result;
      qfree(v7);
      *(_QWORD *)(a1 + 112) = 0;
      result = v25;
      *(_QWORD *)(a1 + 128) = 0;
    }
    *(_DWORD *)(a1 + 136) = -1;
  }
  return result;
}

