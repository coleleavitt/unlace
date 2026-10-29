void __fastcall sub_98B0E0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  void *v7; // rbp
  __int64 v8; // r12
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // rdx
  const void *v18; // rsi

  v4 = (__int64 *)(*a1 + 8LL * *(unsigned int *)(a2 + 48));
  if ( *v4 )
  {
    sub_98A4B0(*v4, a3);
    return;
  }
  v5 = *a4;
  if ( *a4 )
  {
    *a4 = 0;
    v7 = (void *)*v4;
    *v4 = v5;
    if ( v7 )
    {
LABEL_5:
      operator delete();
      operator delete();
      operator delete(v7, 0x40u);
    }
  }
  else
  {
    v8 = operator new(0x40u);
    v9 = *(_BYTE *)a3;
    *(_QWORD *)(v8 + 16) = 0;
    *(_BYTE *)v8 = v9;
    v10 = *(_QWORD *)(a3 + 8);
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 8) = v10;
    *(_DWORD *)(v8 + 32) = 0;
    operator delete();
    v15 = *(_DWORD *)(a3 + 32);
    *(_DWORD *)(v8 + 32) = v15;
    if ( v15 )
    {
      v16 = (void *)sub_220C370(16LL * v15, 8, v11, v12, v13, v14);
      v17 = *(_QWORD *)(a3 + 24);
      v18 = *(const void **)(a3 + 16);
      *(_QWORD *)(v8 + 16) = v16;
      *(_QWORD *)(v8 + 24) = v17;
      memcpy(v16, v18, 16LL * *(unsigned int *)(v8 + 32));
    }
    else
    {
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
    }
    *(_QWORD *)(v8 + 40) = 0;
    v7 = (void *)*v4;
    *(_QWORD *)(v8 + 48) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *v4 = v8;
    if ( v7 )
      goto LABEL_5;
  }
}

