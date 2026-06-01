void __fastcall sub_227B7D0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 88))(a1);
  if ( v2 )
  {
    v3 = a1[4];
    v4 = a1[2];
    v5 = v2;
    if ( v3 != v4 )
    {
      v6 = *a1;
      a1[4] = v4;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v6 + 72))(a1, v4, v3 - v4);
    }
    v7 = operator new[](v5);
    if ( *((_DWORD *)a1 + 11) == 1 )
    {
      v11 = (void *)a1[2];
      if ( v11 )
      {
        v13 = v7;
        operator delete[](v11);
        v7 = v13;
      }
    }
    a1[2] = v7;
    a1[3] = v7 + v5;
    a1[4] = v7;
    *((_DWORD *)a1 + 11) = 1;
  }
  else
  {
    v8 = a1[4];
    v9 = a1[2];
    if ( v8 != v9 )
    {
      v10 = *a1;
      a1[4] = v9;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v10 + 72))(a1, v9, v8 - v9);
    }
    if ( *((_DWORD *)a1 + 11) == 1 )
    {
      v12 = (void *)a1[2];
      if ( v12 )
        operator delete[](v12);
    }
    a1[4] = 0;
    *((_OWORD *)a1 + 1) = 0;
    *((_DWORD *)a1 + 11) = 0;
  }
}
