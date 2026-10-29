__int64 __fastcall sub_12E0E10(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  char **v6; // r15
  int v7; // r13d
  __int64 v8; // rbx
  char **v9; // rdi
  __int64 v10; // rbp
  char **v11; // rbx
  char **i; // r14
  char *v13; // rax
  size_t v14; // rdx
  unsigned __int64 v15; // rdi
  char *v16; // rax
  char **v18; // rcx
  void **v19; // rbp
  void *v20; // rdi
  void **v21; // rbx
  void *v22; // rdi
  char **v23; // rax
  __int64 v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *(unsigned int *)(a1 + 8);
    v5 = a2;
    v6 = *(char ***)a1;
    v7 = *(_DWORD *)(a2 + 8);
    if ( v3 <= v4 )
    {
      v18 = *(char ***)a1;
      if ( *(_DWORD *)(a2 + 8) )
      {
        v23 = sub_12E0D40(*(char ***)a2, *(_QWORD *)a2 + 16 * v3, v6);
        v18 = *(char ***)a1;
        v6 = v23;
        v4 = *(unsigned int *)(a1 + 8);
      }
      v19 = (void **)&v18[2 * v4];
      while ( v6 != (char **)v19 )
      {
        v19 -= 2;
        v20 = *v19;
        if ( (char *)*v19 + 0x2000 != nullptr && (char *)*v19 + 4096 != nullptr && v20 )
          operator delete[](v20);
      }
    }
    else
    {
      v8 = 2 * v4;
      if ( v3 > *(unsigned int *)(a1 + 12) )
      {
        v21 = (void **)&v6[v8];
        while ( v21 != (void **)v6 )
        {
          while ( 1 )
          {
            v21 -= 2;
            v22 = *v21;
            if ( (char *)*v21 + 0x2000 == nullptr || (char *)*v21 + 4096 == nullptr || !v22 )
              break;
            v24 = v5;
            operator delete[](v22);
            v5 = v24;
            if ( v21 == (void **)v6 )
              goto LABEL_26;
          }
        }
LABEL_26:
        v25 = v5;
        v8 = 0;
        *(_DWORD *)(a1 + 8) = 0;
        sub_12DE810(a1, v3);
        v6 = *(char ***)a1;
        v9 = *(char ***)v25;
        v3 = *(unsigned int *)(v25 + 8);
        v10 = *(_QWORD *)v25;
      }
      else
      {
        v9 = *(char ***)a2;
        v10 = *(_QWORD *)a2 + v8 * 8;
        if ( v4 )
        {
          sub_12E0D40(v9, v10, v6);
          v6 = *(char ***)a1;
          v9 = *(char ***)a2;
          v3 = *(unsigned int *)(a2 + 8);
          v10 = *(_QWORD *)a2 + v8 * 8;
        }
      }
      v11 = &v6[v8];
      for ( i = &v9[2 * v3]; (char **)v10 != i; v11 += 2 )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(v10 + 8);
          *((_DWORD *)v11 + 2) = v15;
          *((_DWORD *)v11 + 3) = *(_DWORD *)(v10 + 12);
          v16 = *(char **)v10;
          if ( *(_QWORD *)v10 == -4096 || v16 == (char *)-8192LL )
            break;
          v13 = (char *)operator new[](v15);
          v14 = *((unsigned int *)v11 + 2);
          v10 += 16;
          v11 += 2;
          *(v11 - 2) = v13;
          memcpy(v13, *(const void **)(v10 - 16), v14);
          if ( (char **)v10 == i )
            goto LABEL_12;
        }
        v10 += 16;
        *v11 = v16;
      }
    }
LABEL_12:
    *(_DWORD *)(a1 + 8) = v7;
  }
  return a1;
}
