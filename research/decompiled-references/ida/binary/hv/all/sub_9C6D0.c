void __fastcall sub_9C6D0(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  pthread_mutex_t *v4; // rbp
  pthread_mutex_t *v5; // rdi
  bool v6; // zf
  char *v7; // rdi
  char *v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rbp
  void *v11; // rdi
  int v12; // edi
  pthread_mutex_t *v13; // rdi

  sub_9BE30(a1);
  v2 = *(_DWORD *)(a1 + 5728);
  *(_QWORD *)(a1 + 5720) = 0;
  if ( v2 )
  {
    v3 = v2 - 1;
    *(_DWORD *)(a1 + 5728) = v3;
    if ( !v3 )
    {
      v12 = *(_DWORD *)(a1 + 5712);
      if ( v12 == -1 )
      {
        sub_98450(*(pthread_mutex_t **)a1);
      }
      else
      {
        sub_952F0(v12);
        v13 = *(pthread_mutex_t **)a1;
        *(_DWORD *)(a1 + 5712) = -1;
        sub_98450(v13);
      }
    }
  }
  v4 = (pthread_mutex_t *)qword_167200;
  sub_98400((pthread_mutex_t *)qword_167200);
  sub_9B9C0((_QWORD *)(a1 + 5648));
  *(_BYTE *)(a1 + 5384) = 0;
  v5 = *(pthread_mutex_t **)a1;
  *(_QWORD *)(a1 + 5696) = 0;
  *(_QWORD *)(a1 + 5704) = 0;
  *(_BYTE *)(a1 + 1032) = 0;
  sub_98140(v5);
  v6 = qword_1671F8 == a1;
  *(_QWORD *)a1 = 0;
  if ( v6 )
    qword_1671F8 = 0;
  v7 = (char *)qword_1671E0;
  v8 = (char *)(qword_1671E0 + 8 * xmmword_1671E8);
  if ( (char *)qword_1671E0 != v8 )
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
      *(_QWORD *)&xmmword_1671E8 = xmmword_1671E8 - 1;
    }
  }
LABEL_11:
  sub_98450(v4);
  v9 = *(_QWORD *)(a1 + 5664);
  while ( v9 )
  {
    v10 = (_QWORD *)v9;
    sub_9B700(*(_QWORD **)(v9 + 24));
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

