unsigned __int64 *__fastcall sub_86A9C0(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbx
  __int64 v3; // r13
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // rbp
  size_t v8; // rax
  size_t v9; // r14
  _QWORD *v10; // rbp
  size_t v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi

  v1 = 48;
  if ( a1 >= 0x30 )
    v1 = a1;
  v2 = (v1 + 23) & 0xFFFFFFFFFFFFFFF8LL;
  pthread_mutex_lock(&mutex);
  v3 = qword_2CD6FE8;
  if ( qword_2CD6FE8 )
  {
    v4 = (unsigned __int64 *)qword_2CD6FE8;
    while ( 1 )
    {
      v5 = v4[4];
      if ( v5 >= v2 )
        break;
      v4 = (unsigned __int64 *)v4[2];
      if ( !v4 )
        goto LABEL_11;
    }
    if ( v2 + 64 >= v5 )
    {
      v15 = v4[2];
      if ( v15 )
      {
        *(_QWORD *)(v15 + 24) = v4[3];
        v15 = v4[2];
      }
      v16 = v4[3];
      if ( v16 )
        *(_QWORD *)(v16 + 16) = v15;
      else
        qword_2CD6FE8 = v15;
      v6 = v4;
      v2 = v5;
    }
    else
    {
      v6 = (unsigned __int64 *)((char *)v4 + v5 - v2);
      v4[4] = v5 - v2;
      v6[1] = v5 - v2;
      *(unsigned __int64 *)((char *)v4 + v5 + 8) = v2;
    }
    *v6 = v2;
    qword_2CD6FE0 += v2;
    pthread_mutex_unlock(&mutex);
    return v6 + 2;
  }
  else
  {
LABEL_11:
    v8 = v2 + 65551;
    LOWORD(v8) = 0;
    v9 = v8;
    v10 = mmap(nullptr, v8, 7, 34, -1, 0);
    if ( (unsigned __int64)v10 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    {
      pthread_mutex_unlock(&mutex);
      return nullptr;
    }
    else
    {
      v11 = v9 - 16;
      qword_2CD6FD8 += v9 - 16;
      v12 = qword_2CD6FE0;
      v10[1] = 0;
      v13 = (_QWORD *)((char *)v10 + v9 - 16);
      if ( v2 + 64 >= v9 - 16 )
      {
        *v10 = v11;
        qword_2CD6FE0 = v11 + v12;
      }
      else
      {
        v11 -= v2;
        *v10 = v2;
        qword_2CD6FE0 = v2 + v12;
        v14 = (_QWORD *)((char *)v10 + v2);
        v14[1] = v2;
        *v14 = 0;
        v14[4] = v11;
        v14[2] = v3;
        v14[3] = 0;
        if ( v3 )
          *(_QWORD *)(v3 + 24) = v14;
        qword_2CD6FE8 = (__int64)v10 + v2;
      }
      *v13 = 1;
      v13[1] = v11;
      pthread_mutex_unlock(&mutex);
      return v10 + 2;
    }
  }
}
