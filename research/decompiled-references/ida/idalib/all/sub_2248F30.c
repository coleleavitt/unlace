int __fastcall sub_2248F30(__int64 a1, int a2)
{
  int v3; // ebp
  char *v4; // r14
  char *v5; // r15
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  int v9; // r13d
  _QWORD *v10; // rax
  void *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r8
  _QWORD *v15; // rax
  size_t v16; // rdx
  void *v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  char *v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  __m128i v24; // xmm0
  unsigned __int64 v25; // rsi
  char *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  bool v29; // zf
  char *v30; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  char *v34; // [rsp+0h] [rbp-68h] BYREF
  int v35; // [rsp+Ch] [rbp-5Ch]
  char *v36; // [rsp+10h] [rbp-58h]
  size_t stacksize; // [rsp+18h] [rbp-50h]
  unsigned __int64 v38; // [rsp+20h] [rbp-48h]
  pthread_rwlock_t *rwlock; // [rsp+28h] [rbp-40h]

  v3 = a2;
  rwlock = (pthread_rwlock_t *)(a1 + 32);
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 32)) == 35 )
    std::__throw_system_error(35);
  v4 = *(char **)(a1 + 16);
  v5 = *(char **)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 356);
  v7 = v4 - v5;
  v8 = (v4 - v5) >> 3;
  if ( v6 > v8 )
  {
    v9 = (v4 - v5) >> 3;
    if ( (int)v6 <= a2 )
      v3 = *(_DWORD *)(a1 + 356);
    v35 = v3;
    if ( (int)v8 < v3 )
    {
      while ( 1 )
      {
        while ( *(char **)(a1 + 24) != v4 )
        {
          v10 = (_QWORD *)operator new(0x10u);
          *v10 = a1;
          v11 = v10;
          *((_DWORD *)v10 + 2) = v9;
          v12 = sub_2297DF0((void *(*)(void *))sub_224A710, v10, qword_26FB7E0[0]);
          *(_QWORD *)v4 = v12;
          if ( !v12 )
            operator delete(v11, 0x10u);
          v5 = *(char **)(a1 + 8);
          v4 = (char *)(*(_QWORD *)(a1 + 16) + 8LL);
          *(_QWORD *)(a1 + 16) = v4;
          v7 = v4 - v5;
          v8 = (v4 - v5) >> 3;
          v9 = v8;
          if ( v35 <= (int)v8 )
            return pthread_rwlock_unlock(rwlock);
        }
        if ( !v8 )
          break;
        v13 = 2 * v8;
        if ( v8 > 2 * v8 || v13 > 0x1FFFFFFFFFFFFFFFLL )
        {
          v13 = -8;
LABEL_15:
          v14 = operator new(v13);
          v34 = (char *)(v14 + 8);
          goto LABEL_16;
        }
        if ( v13 )
        {
          v13 = 16 * v8;
          goto LABEL_15;
        }
        v34 = byte_8;
        v14 = 0;
LABEL_16:
        v38 = v14;
        v36 = (char *)(v14 + v7);
        stacksize = qword_26FB7E0[0];
        v15 = (_QWORD *)operator new(0x10u);
        v16 = stacksize;
        *v15 = a1;
        v17 = v15;
        *((_DWORD *)v15 + 2) = v9;
        v18 = sub_2297DF0((void *(*)(void *))sub_224A710, v15, v16);
        v19 = v38;
        *(_QWORD *)v36 = v18;
        if ( !v18 )
        {
          v36 = (char *)v19;
          operator delete(v17, 0x10u);
          v19 = (unsigned __int64)v36;
        }
        if ( v5 == v4 )
        {
          if ( !v4 )
          {
            v4 = v34;
            v9 = 1;
            v8 = 1;
            v7 = 8;
            goto LABEL_30;
          }
        }
        else
        {
          v20 = v5;
          v21 = v4 - 8 - v5;
          if ( (v19 >= (unsigned __int64)(v5 + 16) || (unsigned __int64)v5 >= v19 + 16) && v21 > 0x10 )
          {
            v22 = ((unsigned __int64)(v4 - 8 - v5) >> 3) + 1;
            v23 = 0;
            do
            {
              v24 = _mm_loadu_si128((const __m128i *)&v5[v23]);
              *(_OWORD *)&v5[v23] = 0;
              *(__m128i *)(v19 + v23) = v24;
              v23 += 16;
            }
            while ( v23 != 16 * (v22 >> 1) );
            v25 = 8 * (v22 & 0xFFFFFFFFFFFFFFFELL);
            v26 = &v5[v25];
            v27 = (_QWORD *)(v19 + v25);
            if ( v22 != (v22 & 0xFFFFFFFFFFFFFFFELL) )
            {
              v28 = *(_QWORD *)v26;
              *(_QWORD *)v26 = 0;
              *v27 = v28;
            }
          }
          else
          {
            v32 = v19;
            do
            {
              v33 = *(_QWORD *)v20;
              *(_QWORD *)v20 = 0;
              v20 += 8;
              v32 += 8LL;
              *(_QWORD *)(v32 - 8) = v33;
            }
            while ( v4 != v20 );
          }
          v29 = *(_QWORD *)v5 == 0;
          v34 = (char *)(v19 + v21 + 16);
          if ( !v29 )
LABEL_40:
            std::terminate();
          v30 = v5;
          while ( 1 )
          {
            v30 += 8;
            if ( v30 == v4 )
              break;
            if ( *(_QWORD *)v30 )
              goto LABEL_40;
          }
        }
        v36 = (char *)v19;
        operator delete(v5);
        v4 = v34;
        v19 = (unsigned __int64)v36;
        v7 = v34 - v36;
        v8 = (v34 - v36) >> 3;
        v9 = v8;
LABEL_30:
        v36 = (char *)v19;
        v5 = (char *)v19;
        *(_QWORD *)(a1 + 24) = v19 + v13;
        *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v34);
        if ( v35 <= v9 )
          return pthread_rwlock_unlock(rwlock);
      }
      v13 = 8;
      goto LABEL_15;
    }
  }
  return pthread_rwlock_unlock(rwlock);
}
