__int64 __fastcall sub_232E60(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r13
  int v3; // ebp
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  const char **v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // [rsp+8h] [rbp-40h]

  v2 = HIDWORD(a2);
  v3 = a2;
  v5 = *(_QWORD *)(a1 + 264);
  qmutex_lock(v5);
  if ( !BYTE4(a2) )
  {
    --*(_DWORD *)(a1 + 272);
    qsnprintf(&unk_8CC610, 16, "%d", a2);
  }
  v6 = *(_QWORD *)(a1 + 248);
  v7 = *(_QWORD *)(a1 + 256);
  if ( v7 < v6 + 1 )
  {
    v12 = nullptr;
    v13 = qvector_reserve(a1 + 240, 0, v6 + 1, 8);
    v14 = *(_QWORD *)(a1 + 248);
    v8 = v13;
    v15 = *(const char ***)(a1 + 240);
    v16 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)(a1 + 256) = v7;
    v17 = v14 - 1;
    if ( v17 >= 0 )
    {
      v18 = v8;
      do
      {
        v12 = *v15;
        v18 += 8;
        ++v15;
        *(_QWORD *)(v18 - 8) = v12;
      }
      while ( v17-- != 0 );
      v15 = *(const char ***)(a1 + 240);
    }
    v20 = v16;
    qfree(v15, v12);
    *(_QWORD *)(a1 + 240) = v8;
    v6 = *(_QWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 256) = v20;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 240);
  }
  v9 = v8 + 8 * v6;
  *(_DWORD *)v9 = v3;
  *(_BYTE *)(v9 + 4) = v2;
  v10 = *(_QWORD *)(a1 + 80);
  ++*(_QWORD *)(a1 + 248);
  qsem_post(v10);
  return qmutex_unlock(v5);
}
