_QWORD *__fastcall sub_9AB840(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  void *v20; // rax
  int v21; // edx
  const void *v22; // rsi

  v4 = *(unsigned int *)(a3 + 48);
  v5 = *(_QWORD *)(a3 + 64);
  v6 = (__int64 *)(*a2 + 8 * v4);
  v7 = *(_QWORD *)(a3 + 56);
  if ( (unsigned int)((v5 - v7) >> 4) <= 1 || (v8 = a2[3], v9 = *(_DWORD *)(v8 + 4 * v4), v7 == v5) )
  {
LABEL_6:
    v10 = *v6;
    *v6 = 0;
    *a1 = v10;
    return a1;
  }
  else
  {
    while ( !*(_QWORD *)v7 || v9 >= *(_DWORD *)(v8 + 4LL * *(unsigned int *)(*(_QWORD *)v7 + 48LL)) )
    {
      v7 += 16;
      if ( v5 == v7 )
        goto LABEL_6;
    }
    v12 = *v6;
    v13 = operator new(0x40u);
    *(_BYTE *)v13 = *(_BYTE *)v12;
    v14 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v13 + 16) = 0;
    *(_QWORD *)(v13 + 8) = v14;
    *(_QWORD *)(v13 + 24) = 0;
    *(_DWORD *)(v13 + 32) = 0;
    operator delete(0, 0, 8);
    v19 = *(unsigned int *)(v12 + 32);
    *(_DWORD *)(v13 + 32) = v19;
    if ( (_DWORD)v19 )
    {
      v20 = (void *)sub_22300B0(16 * v19, 8, v15, v16, v17, v18);
      v21 = *(_DWORD *)(v12 + 24);
      *(_QWORD *)(v13 + 16) = v20;
      v22 = *(const void **)(v12 + 16);
      *(_DWORD *)(v13 + 24) = v21;
      *(_DWORD *)(v13 + 28) = *(_DWORD *)(v12 + 28);
      memcpy(v20, v22, 16LL * *(unsigned int *)(v13 + 32));
    }
    else
    {
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
    }
    *a1 = v13;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 56) = 0;
    return a1;
  }
}
