void __fastcall sub_7E6CD0(__int64 a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 *v3; // rbp
  __int64 v4; // r14
  _QWORD *v5; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v15; // r12
  unsigned int i; // eax
  unsigned int v17; // edx
  size_t v18; // rsi
  unsigned int v19; // r14d
  unsigned int *v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 *v24; // [rsp+0h] [rbp-78h]
  unsigned int v25; // [rsp+Ch] [rbp-6Ch]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(__int64 **)(a1 + 16);
  if ( v3 )
  {
    v4 = 2LL * *((unsigned int *)v3 - 1);
    v24 = &v3[v4];
    if ( &v3[v4] != v3 )
    {
      v5 = (_QWORD *)a2[1];
      while ( 1 )
      {
        v13 = *((unsigned int *)v3 + 2);
        v14 = v13 + 1;
        if ( v5 )
        {
          v15 = *((unsigned int *)v5 - 1);
          if ( (unsigned int)v15 < v14 )
          {
            for ( i = *((_DWORD *)v5 - 2); i < v14; i = *((_DWORD *)v5 - 2) )
            {
              v17 = (3 * i + 1) >> 1;
              v18 = 8 * v17 + 8;
              v19 = v17;
              if ( 8 * i + 8 >= (unsigned int)v18 || i >= v17 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v26, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v26);
                sub_233E40((__int64)v26);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v20 = (unsigned int *)sub_186B300(v5 - 1, v18);
              v5 = v20 + 2;
              *v20 = v19;
              a2[1] = (__int64)(v20 + 2);
LABEL_15:
              ;
            }
            v21 = 8 * v15;
            *((_DWORD *)v5 - 1) = v14;
            v13 = *((unsigned int *)v3 + 2);
            v22 = 8LL * v14;
            if ( v21 != v22 )
            {
              v25 = *((_DWORD *)v3 + 2);
              memset(&v5[(unsigned __int64)v21 / 8], 0, v22 - v21);
              v13 = v25;
            }
          }
        }
        else
        {
          v13 = 0xFFFFFFFFLL;
          if ( v14 )
          {
            v15 = 0;
            v23 = (_QWORD *)sub_186B270(0x18u);
            v5 = v23 + 1;
            *v23 = 2;
            a2[1] = (__int64)(v23 + 1);
            goto LABEL_15;
          }
        }
        v7 = *v3;
        if ( *v3 )
          ++*(_DWORD *)(v7 + 8);
        v8 = v13;
        v9 = &v5[v13];
        v10 = *v9;
        if ( *v9 && (v11 = *a2, v12 = *(_DWORD *)(v10 + 8) == 1, --*(_DWORD *)(v10 + 8), v12) )
        {
          sub_15D7BC0(v11, v10);
          v5 = (_QWORD *)a2[1];
          v3 += 2;
          v5[v8] = v7;
          if ( v24 == v3 )
            return;
        }
        else
        {
          *v9 = v7;
          v3 += 2;
          if ( v24 == v3 )
            return;
        }
      }
    }
  }
}

