__int64 __fastcall CoinSimpFactorization::newEta(CoinSimpFactorization *this, int a2, int a3)
{
  int v5; // edi
  int v6; // ebp
  int v7; // edi
  int v8; // ebp
  unsigned __int64 v9; // rdi
  void *v10; // rax
  void *v11; // r14
  void *v12; // r13
  int v13; // edi
  unsigned __int64 v14; // rdi
  void *v15; // rax
  void *v16; // r14
  void *v17; // r13
  __int64 v18; // rdx
  int v19; // eax
  __int64 result; // rax
  unsigned __int64 v21; // rdi
  void *v22; // rax
  void *v23; // r15
  void *v24; // r14
  int v25; // edi
  void *v26; // rax
  void *v27; // r15
  void *v28; // r14
  int v29; // edi
  void *v30; // rax
  void *v31; // r14
  void *v32; // r13
  int v33; // eax

  v5 = *((_DWORD *)this + 126);
  if ( *((_DWORD *)this + 125) == v5 - 1 )
  {
    v21 = *((_DWORD *)this + 128) + v5;
    if ( v21 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_13;
    v22 = (void *)operator new[](4 * v21);
    v23 = *((void **)this + 57);
    v24 = v22;
    memcpy(v22, v23, 4LL * *((int *)this + 126));
    operator delete[](v23);
    v25 = *((_DWORD *)this + 126) + *((_DWORD *)this + 128);
    *((_QWORD *)this + 57) = v24;
    if ( (unsigned __int64)v25 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_13;
    v26 = (void *)operator new[](4LL * v25);
    v27 = *((void **)this + 58);
    v28 = v26;
    memcpy(v26, v27, 4LL * *((int *)this + 126));
    operator delete[](v27);
    v29 = *((_DWORD *)this + 126) + *((_DWORD *)this + 128);
    *((_QWORD *)this + 58) = v28;
    if ( (unsigned __int64)v29 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_13;
    v30 = (void *)operator new[](4LL * v29);
    v31 = *((void **)this + 59);
    v32 = v30;
    memcpy(v30, v31, 4LL * *((int *)this + 126));
    operator delete[](v31);
    v33 = *((_DWORD *)this + 128);
    *((_QWORD *)this + 59) = v32;
    *((_DWORD *)this + 126) += v33;
  }
  v6 = *((_DWORD *)this + 124) + a3;
  v7 = *((_DWORD *)this + 127);
  if ( v6 > v7 )
  {
    v8 = v6 - v7;
    if ( *((_DWORD *)this + 128) >= v8 )
      v8 = *((_DWORD *)this + 128);
    v9 = v8 + v7;
    if ( v9 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v10 = (void *)operator new[](4 * v9);
      v11 = *((void **)this + 60);
      v12 = v10;
      memcpy(v10, v11, 4LL * *((int *)this + 124));
      operator delete[](v11);
      v13 = *((_DWORD *)this + 127);
      *((_QWORD *)this + 60) = v12;
      v14 = v8 + v13;
      if ( v14 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v15 = (void *)operator new[](8 * v14);
        v16 = *((void **)this + 61);
        v17 = v15;
        memcpy(v15, v16, 8LL * *((int *)this + 124));
        operator delete[](v16);
        *((_DWORD *)this + 127) += v8;
        *((_QWORD *)this + 61) = v17;
        goto LABEL_8;
      }
    }
LABEL_13:
    __cxa_throw_bad_array_new_length();
  }
LABEL_8:
  v18 = *((_QWORD *)this + 57);
  v19 = *((_DWORD *)this + 125) + 1;
  *((_DWORD *)this + 125) = v19;
  *(_DWORD *)(v18 + 4LL * v19) = a2;
  *(_DWORD *)(*((_QWORD *)this + 58) + 4LL * *((int *)this + 125)) = *((_DWORD *)this + 124);
  result = *((_QWORD *)this + 59);
  *(_DWORD *)(result + 4LL * *((int *)this + 125)) = 0;
  return result;
}

