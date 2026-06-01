__int64 *__fastcall sub_691540(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  _QWORD *v19; // rsi
  unsigned int v22; // r8d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rax
  char **exception; // r13
  __int64 v28; // [rsp+8h] [rbp-80h]
  unsigned int v29; // [rsp+14h] [rbp-74h]
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = a2[1];
  v7 = a2[485];
  a1[1] = 0;
  *a1 = v6;
  if ( v7 )
    v8 = *(_DWORD *)(v7 - 4);
  else
    v8 = 0;
  v30 = v6;
  v9 = a2[424];
  v31 = 0;
  if ( v9 )
    v10 = 2 * *(_DWORD *)(v9 - 4);
  else
    v10 = 0;
  sub_6907A0(&v30, v10);
  sub_7E6B80(a2 + 560, &v30);
  v11 = 0;
  v12 = 4LL * v8;
  if ( v8 )
  {
    do
    {
      while ( 1 )
      {
        if ( a3 >= *(_DWORD *)(a2[424] + 24LL * (*(_DWORD *)(a2[485] + v11) >> 1)) )
        {
          v13 = *(_QWORD *)(v31 + 8LL * *(unsigned int *)(a2[485] + v11));
          if ( v13 )
          {
            v14 = a2[1];
            v15 = (_QWORD *)a1[1];
            *(_DWORD *)(v13 + 8) += 2;
            v28 = v14;
            if ( v15 )
            {
              v16 = *((_DWORD *)v15 - 1);
              if ( v16 == *((_DWORD *)v15 - 2) )
              {
                v22 = (3 * v16 + 1) >> 1;
                v23 = 8 * v22 + 8;
                if ( 8 * v16 + 8 >= (unsigned int)v23 || v16 >= v22 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_68CF80(v32, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v32);
                  sub_233E40((__int64)v32);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v29 = (3 * v16 + 1) >> 1;
                v24 = (unsigned int *)sub_186B300(v15 - 1, v23);
                v25 = v24[1];
                v15 = v24 + 2;
                a1[1] = (__int64)(v24 + 2);
                *v24 = v29;
                LODWORD(v24) = v25;
                v19 = &v15[v25];
                v18 = (_DWORD)v24 + 1;
              }
              else
              {
                v17 = v16;
                v18 = v16 + 1;
                v19 = &v15[v17];
              }
            }
            else
            {
              v26 = (_QWORD *)sub_186B270(0x18u);
              v15 = v26 + 1;
              *v26 = 2;
              v18 = 1;
              a1[1] = (__int64)v15;
              v19 = v15;
            }
            *v19 = v13;
            *((_DWORD *)v15 - 1) = v18;
            if ( (*(_DWORD *)(v13 + 8))-- == 1 )
              break;
          }
        }
        v11 += 4;
        if ( v11 == v12 )
          goto LABEL_15;
      }
      v11 += 4;
      sub_15D7BC0(v28, v13);
    }
    while ( v11 != v12 );
  }
LABEL_15:
  sub_2334C0(&v30);
  return a1;
}

