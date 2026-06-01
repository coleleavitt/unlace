void __fastcall clang_disposeStringSet(void **a1)
{
  __int64 v2; // rbp
  char *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rdi
  int v10; // eax
  _QWORD v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *((unsigned int *)a1 + 2);
  v3 = (char *)*a1;
  if ( (_DWORD)v2 )
  {
    v4 = 16 * v2;
    v5 = 0;
    while ( 1 )
    {
      v9 = *(_QWORD **)&v3[v5];
      v10 = *(_DWORD *)&v3[v5 + 8];
      if ( v10 != 1 )
        break;
      if ( v9 )
      {
        free(v9);
        v5 += 16;
        v3 = (char *)*a1;
        if ( v4 == v5 )
          goto LABEL_11;
      }
      else
      {
LABEL_7:
        v5 += 16;
        if ( v4 == v5 )
          goto LABEL_11;
      }
    }
    if ( v10 == 2 )
    {
      v6 = v9[19];
      v11[0] = *(_QWORD *)&v3[v5];
      v7 = *(_QWORD *)(v6 + 16);
      v8 = *(_QWORD **)(v7 + 8);
      if ( v8 == *(_QWORD **)(v7 + 16) )
      {
        sub_690850(v7, v11);
      }
      else
      {
        *v8 = v9;
        *(_QWORD *)(v7 + 8) += 8LL;
      }
      v3 = (char *)*a1;
    }
    goto LABEL_7;
  }
LABEL_11:
  if ( v3 )
    operator delete[](v3);
  operator delete(a1, 0x10u);
}

