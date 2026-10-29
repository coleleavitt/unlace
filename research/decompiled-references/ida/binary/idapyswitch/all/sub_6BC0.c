void __fastcall sub_6BC0(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rbp
  void *v5; // rdi
  bool v6; // zf
  char *v7; // rdi
  char *v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  sub_6320(a1);
  v2 = *(_DWORD *)(a1 + 5728);
  *(_QWORD *)(a1 + 5720) = 0;
  if ( v2 )
  {
    v3 = v2 - 1;
    *(_DWORD *)(a1 + 5728) = v3;
    if ( !v3 )
    {
      v12 = *(unsigned int *)(a1 + 5712);
      if ( (_DWORD)v12 == -1 )
      {
        sub_11F20(*(_QWORD *)a1);
      }
      else
      {
        sub_10C40(v12);
        v13 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 5712) = -1;
        sub_11F20(v13);
      }
    }
  }
  v4 = qword_1C310;
  sub_11ED0(qword_1C310);
  sub_5730((_QWORD *)(a1 + 5648));
  *(_BYTE *)(a1 + 5384) = 0;
  v5 = *(void **)a1;
  *(_QWORD *)(a1 + 5696) = 0;
  *(_QWORD *)(a1 + 5704) = 0;
  *(_BYTE *)(a1 + 1032) = 0;
  sub_11DA0(v5);
  v6 = qword_1C308 == a1;
  *(_QWORD *)a1 = 0;
  if ( v6 )
    qword_1C308 = 0;
  v7 = (char *)qword_1C2F0;
  v8 = (char *)(qword_1C2F0 + 8 * xmmword_1C2F8);
  if ( (char *)qword_1C2F0 != v8 )
  {
    while ( a1 != *(_QWORD *)v7 )
    {
      v7 += 8;
      if ( v8 == v7 )
        goto LABEL_11;
    }
    if ( v8 != v7 )
    {
      memmove(v7, v7 + 8, v8 - v7 - 8);
      *(_QWORD *)&xmmword_1C2F8 = xmmword_1C2F8 - 1;
    }
  }
LABEL_11:
  sub_11F20(v4);
  v9 = *(_QWORD *)(a1 + 5664);
  while ( v9 )
  {
    v10 = (_QWORD *)v9;
    sub_5470(*(_QWORD **)(v9 + 24));
    v11 = *(void **)(v9 + 32);
    v9 = *(_QWORD *)(v9 + 16);
    if ( v11 )
    {
      v10[5] = 0;
      j__free(v11);
    }
    operator delete(v10, 0x40u);
  }
}

