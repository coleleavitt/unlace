__int64 __fastcall sub_647B50(void ***a1, void ***a2, int a3)
{
  void **v4; // rbx
  void *v5; // rdi
  void **v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  void *v9; // r13
  int v10; // eax
  void *v11; // rax

  switch ( a3 )
  {
    case 1:
      *a1 = *a2;
      break;
    case 2:
      v6 = *a2;
      v7 = operator new(0x20u);
      *(_QWORD *)v7 = 0;
      v8 = v7;
      *(_OWORD *)(v7 + 8) = 0;
      v9 = v6[1];
      if ( v9 )
      {
        v11 = (void *)qalloc_or_throw(4LL * (_QWORD)v9);
        *(_QWORD *)v8 = v11;
        *(_QWORD *)(v8 + 16) = v9;
        memcpy(v11, *v6, 4LL * (_QWORD)v9);
        *(_QWORD *)(v8 + 8) = v9;
      }
      v10 = *((_DWORD *)v6 + 6);
      *a1 = (void **)v8;
      *(_DWORD *)(v8 + 24) = v10;
      break;
    case 3:
      v4 = *a1;
      if ( *a1 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          v4[1] = nullptr;
          qfree(v5);
        }
        operator delete(v4, 0x20u);
      }
      break;
    case 0:
      *a1 = nullptr;
      break;
  }
  return 0;
}
