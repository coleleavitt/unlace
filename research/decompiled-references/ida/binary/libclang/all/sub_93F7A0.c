__int64 *__fastcall sub_93F7A0(__int64 a1)
{
  int v2; // eax
  _DWORD *v3; // rdi
  __int64 v4; // rax
  _DWORD *v5; // rbx
  _DWORD *v6; // rbp
  void *v7; // rdi
  unsigned __int8 v8; // al
  void **v9; // rbp
  void **v10; // rbx
  _DWORD *v12; // rbx
  _DWORD *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rdx
  void (__fastcall *v16)(_QWORD, __int64); // rax
  _DWORD *v17; // rax

  *(_QWORD *)a1 = &qword_49F6D28[2];
  v2 = *(_DWORD *)(a1 + 776);
  v3 = *(_DWORD **)(a1 + 768);
  if ( v2 )
  {
    v12 = v3;
    v13 = &v3[4 * *(unsigned int *)(a1 + 784)];
    if ( v3 != v13 )
    {
      while ( *v12 > 0xFFFFFFFD )
      {
        v12 += 4;
        if ( v13 == v12 )
          goto LABEL_2;
      }
      if ( v13 != v12 )
      {
        do
        {
          v14 = *((_QWORD *)v12 + 1);
          if ( *(_BYTE *)(v14 + 27) )
          {
            v15 = *(_QWORD *)(v14 + 32);
            v16 = *(void (__fastcall **)(_QWORD, __int64))(v15 + 64);
            if ( v16 )
              v16(*((_QWORD *)v12 + 1), v14 + *(unsigned int *)(v15 + 16) + 40);
            *(_BYTE *)(v14 + 27) = 0;
          }
          v17 = v12 + 4;
          if ( v12 + 4 == v13 )
            break;
          while ( 1 )
          {
            v12 = v17;
            if ( *v17 <= 0xFFFFFFFD )
              break;
            v17 += 4;
            if ( v13 == v17 )
              goto LABEL_35;
          }
        }
        while ( v13 != v17 );
LABEL_35:
        v3 = *(_DWORD **)(a1 + 768);
      }
    }
  }
LABEL_2:
  v4 = *(unsigned int *)(a1 + 784);
  if ( (_DWORD)v4 )
  {
    v5 = v3;
    v6 = &v3[4 * v4];
    do
    {
      while ( *v5 > 0xFFFFFFFD )
      {
        v5 += 4;
        if ( v6 == v5 )
          goto LABEL_9;
      }
      v7 = *((void **)v5 + 1);
      if ( v7 )
        operator delete[](v7);
      *((_QWORD *)v5 + 1) = 0;
      v5 += 4;
    }
    while ( v6 != v5 );
  }
LABEL_9:
  operator delete();
  v8 = *(_BYTE *)(a1 + 736);
  if ( v8 != 0xFF )
  {
    if ( v8 == 1 )
    {
      sub_A1C0C0(a1 + 680);
    }
    else if ( v8 > 2u && *(_DWORD *)(a1 + 680) > 1u )
    {
      sub_69F740(a1 + 680);
    }
    *(_BYTE *)(a1 + 736) = -1;
  }
  sub_A1B5B0(a1 + 384);
  v9 = *(void ***)(a1 + 64);
  v10 = &v9[18 * *(unsigned int *)(a1 + 72)];
  if ( v9 != v10 )
  {
    do
    {
      v10 -= 18;
      if ( *v10 != v10 + 2 )
        free(*v10);
    }
    while ( v9 != v10 );
    v10 = *(void ***)(a1 + 64);
  }
  if ( v10 != (void **)(a1 + 80) )
    free(v10);
  operator delete();
  operator delete();
  *(_QWORD *)a1 = &qword_49F6D00[2];
  return &qword_49F6D00[2];
}

