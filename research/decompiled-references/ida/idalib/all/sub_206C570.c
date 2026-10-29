__int64 __fastcall sub_206C570(_QWORD *a1)
{
  unsigned int v1; // ebx
  _QWORD *v2; // r15
  size_t v3; // r13
  const void *v4; // rax
  size_t v5; // rdx
  _QWORD *v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rbp
  int v10; // eax
  _QWORD *v11; // rbp
  int v12; // eax
  __int64 v13; // rdi

  v1 = 0;
  v2 = (_QWORD *)a1[10];
  if ( v2 != a1 + 9 )
  {
    do
    {
      v6 = (_QWORD *)v2[1];
      v7 = sub_20A0E90(v2);
      if ( v8 > 8 && *(_QWORD *)v7 == 0x6762642E6D766C6CLL && *(_BYTE *)(v7 + 8) == 46
        || (v3 = j__strlen("llvm.gcov"), v4 = (const void *)sub_20A0E90(v2), v5 == v3)
        && (!v5 || !memcmp(v4, "llvm.gcov", v5)) )
      {
        v1 = 1;
        sub_20A0E30(v2);
      }
      v2 = v6;
    }
    while ( a1 + 9 != v6 );
  }
  v9 = (_QWORD *)a1[4];
  if ( a1 + 3 != v9 )
  {
    do
    {
      while ( v9 )
      {
        v10 = sub_206BC70((__int64)(v9 - 7));
        v9 = (_QWORD *)v9[1];
        v1 |= v10;
        if ( a1 + 3 == v9 )
          goto LABEL_17;
      }
      v9 = nullptr;
      v1 |= sub_206BC70(0);
    }
    while ( a1 != (_QWORD *)-24LL );
  }
LABEL_17:
  v11 = (_QWORD *)a1[2];
  if ( a1 + 1 != v11 )
  {
    do
    {
      while ( v11 )
      {
        v12 = sub_20B3A50(v11 - 7, 0);
        v11 = (_QWORD *)v11[1];
        v1 |= v12;
        if ( a1 + 1 == v11 )
          goto LABEL_22;
      }
      v11 = nullptr;
      v1 |= sub_20B3A50(0, 0);
    }
    while ( a1 != (_QWORD *)-8LL );
  }
LABEL_22:
  v13 = a1[20];
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
  return v1;
}
