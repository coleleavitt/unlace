__int64 __fastcall sub_F598A0(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  void *v4; // r13
  __int64 v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // r12
  _QWORD *v8; // rdi

  *(_QWORD *)a1 = &off_2B223A0;
  operator delete();
  operator delete();
  v1 = *(unsigned int *)(a1 + 80);
  if ( (_DWORD)v1 )
  {
    v2 = *(_QWORD **)(a1 + 64);
    v3 = &v2[2 * v1];
    do
    {
      if ( *v2 != -8192 && *v2 != -4096 )
      {
        v4 = (void *)v2[1];
        if ( v4 )
        {
          sub_F59490(v2[1]);
          operator delete(v4, 0x68u);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
  }
  operator delete();
  operator delete();
  *(_QWORD *)a1 = &unk_2BDB168;
  v5 = *(unsigned int *)(a1 + 24);
  if ( (_DWORD)v5 )
  {
    v6 = *(_QWORD **)(a1 + 8);
    v7 = &v6[10 * v5];
    do
    {
      if ( *v6 != -4096 && *v6 != -8192 )
      {
        v8 = (_QWORD *)v6[1];
        if ( v8 != v6 + 3 )
          free(v8);
      }
      v6 += 10;
    }
    while ( v7 != v6 );
  }
  return operator delete();
}

