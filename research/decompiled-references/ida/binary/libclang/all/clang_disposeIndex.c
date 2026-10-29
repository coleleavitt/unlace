void __fastcall clang_disposeIndex(char *a1, unsigned __int64 a2)
{
  char *v3; // rax
  char *v4; // rdi
  char *v5; // rdi
  char *v6; // rdi
  volatile signed __int32 *v7; // rbp
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // eax
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi

  if ( a1 )
  {
    v3 = a1 + 136;
    v4 = *((char **)a1 + 15);
    if ( v4 != v3 )
    {
      a2 = *((_QWORD *)a1 + 17) + 1LL;
      operator delete(v4, a2);
    }
    v5 = *((char **)a1 + 11);
    if ( v5 != a1 + 104 )
    {
      a2 = *((_QWORD *)a1 + 13) + 1LL;
      operator delete(v5, a2);
    }
    v6 = *((char **)a1 + 7);
    if ( v6 != a1 + 72 )
    {
      a2 = *((_QWORD *)a1 + 9) + 1LL;
      operator delete(v6, a2);
    }
    v7 = *((volatile signed __int32 **)a1 + 6);
    if ( v7 )
    {
      v8 = v7 + 2;
      if ( *((_QWORD *)v7 + 1) == 0x100000001LL )
      {
        v11 = *(_QWORD *)v7;
        v12 = *((_QWORD *)a1 + 6);
        *((_QWORD *)v7 + 1) = 0;
        (*(void (__fastcall **)(__int64, unsigned __int64, volatile signed __int32 *))(v11 + 16))(v12, a2, v8);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v9 = _InterlockedExchangeAdd(v8, 0xFFFFFFFF);
        }
        else
        {
          v9 = *((_DWORD *)v7 + 2);
          *((_DWORD *)v7 + 2) = v9 - 1;
        }
        if ( v9 == 1 )
          sub_6111C0(v7);
      }
    }
    v10 = *((char **)a1 + 1);
    if ( v10 != a1 + 24 )
      operator delete(v10, *((_QWORD *)a1 + 3) + 1LL);
    operator delete(a1, 0x98u);
  }
}

