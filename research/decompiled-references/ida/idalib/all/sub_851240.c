void __fastcall sub_851240(__int64 a1, const char *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbp
  void *v6; // rdi
  bool v7; // zf
  char *v8; // rdi
  char *v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rbp
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  sub_8509A0(a1);
  v3 = *(_DWORD *)(a1 + 5728);
  *(_QWORD *)(a1 + 5720) = 0;
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_DWORD *)(a1 + 5728) = v4;
    if ( !v4 )
    {
      v13 = *(unsigned int *)(a1 + 5712);
      if ( (_DWORD)v13 == -1 )
      {
        qmutex_unlock(*(_QWORD *)a1);
      }
      else
      {
        qclose(v13);
        v14 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 5712) = -1;
        qmutex_unlock(v14);
      }
    }
  }
  v5 = qword_2CD6F60;
  qmutex_lock(qword_2CD6F60);
  sub_850530((_QWORD *)(a1 + 5648), a2);
  *(_BYTE *)(a1 + 5384) = 0;
  v6 = *(void **)a1;
  *(_QWORD *)(a1 + 5696) = 0;
  *(_QWORD *)(a1 + 5704) = 0;
  *(_BYTE *)(a1 + 1032) = 0;
  qmutex_free(v6);
  v7 = qword_2CD6F58 == a1;
  *(_QWORD *)a1 = 0;
  if ( v7 )
    qword_2CD6F58 = 0;
  v8 = (char *)qword_2CD6F40;
  v9 = (char *)(qword_2CD6F40 + 8 * xmmword_2CD6F48);
  if ( (char *)qword_2CD6F40 != v9 )
  {
    while ( a1 != *(_QWORD *)v8 )
    {
      v8 += 8;
      if ( v9 == v8 )
        goto LABEL_11;
    }
    if ( v9 != v8 )
    {
      memmove(v8, v8 + 8, v9 - v8 - 8);
      *(_QWORD *)&xmmword_2CD6F48 = xmmword_2CD6F48 - 1;
    }
  }
LABEL_11:
  qmutex_unlock(v5);
  v10 = *(_QWORD *)(a1 + 5664);
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_850270(*(_QWORD **)(v10 + 24));
    v12 = *(void **)(v10 + 32);
    v10 = *(_QWORD *)(v10 + 16);
    if ( v12 )
    {
      v11[5] = 0;
      qfree(v12);
    }
    operator delete(v11, 0x40u);
  }
}
