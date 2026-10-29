void __fastcall sub_9573D0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  __int64 v3; // rbp
  unsigned int v4; // r12d
  unsigned int v5; // r13d
  __int64 v6; // r15
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rbp
  __int64 v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // r8d
  unsigned int v18; // eax
  unsigned int *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  char **exception; // rbx
  unsigned int v23; // [rsp+0h] [rbp-6Ch]
  unsigned int v24; // [rsp+0h] [rbp-6Ch]
  __int64 v25[11]; // [rsp+14h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 72) )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(*(_QWORD *)(a1 + 32));
    if ( !(unsigned int)sub_8E7030(*(_QWORD *)(a1 + 24)) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 562LL) )
      {
        v1 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 1184LL);
        if ( v1 )
        {
          if ( *(_DWORD *)(v1 - 4) )
          {
            v2 = *(_QWORD *)(a1 + 24);
            v3 = *(_QWORD *)(v2 + 8664);
            if ( v3 )
            {
              v4 = *(_DWORD *)(v3 - 4);
              v23 = *(_DWORD *)(a1 + 64);
              v5 = v4;
              if ( v23 < v4 )
              {
                v6 = sub_180C100(v2 + 8400, 24);
                *(_DWORD *)(v6 + 16) = v23;
                v7 = *(_QWORD **)(v2 + 9456);
                *(_QWORD *)v6 = &off_1C4C070;
                *(_QWORD *)(v6 + 8) = a1 + 64;
                if ( v7 )
                {
                  v8 = *((_DWORD *)v7 - 1);
                  v9 = *((_DWORD *)v7 - 2);
                  if ( v8 == v9 )
                  {
                    v17 = (3 * v9 + 1) >> 1;
                    v18 = 8 * v17 + 8;
                    if ( 8 * v9 + 8 >= v18 || v9 >= v17 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(v25, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v25);
                      sub_233E40((__int64)v25);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v24 = (3 * v9 + 1) >> 1;
                    v19 = (unsigned int *)sub_186B300(v7 - 1, v18);
                    v20 = v19[1];
                    v7 = v19 + 2;
                    *(_QWORD *)(v2 + 9456) = v19 + 2;
                    *v19 = v24;
                    LODWORD(v19) = v20;
                    v12 = &v7[v20];
                    v11 = (_DWORD)v19 + 1;
                  }
                  else
                  {
                    v10 = v8;
                    v11 = v8 + 1;
                    v12 = &v7[v10];
                  }
                }
                else
                {
                  v21 = (_QWORD *)sub_186B270(0x18u);
                  *v21 = 2;
                  v11 = 1;
                  v7 = v21 + 1;
                  *(_QWORD *)(v2 + 9456) = v7;
                  v12 = v7;
                }
                *v12 = v6;
                *((_DWORD *)v7 - 1) = v11;
                v13 = *(unsigned int *)(a1 + 64);
                v14 = (__int64 *)(v3 + 8 * v13);
                if ( (unsigned int)v13 < v4 )
                {
                  do
                  {
                    v15 = *v14++;
                    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 64LL))(
                      *(_QWORD *)(a1 + 32),
                      v15,
                      0);
                    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 40) + 64LL))(
                      *(_QWORD *)(a1 + 40),
                      v15,
                      1);
                    v16 = *(_DWORD *)(a1 + 64) + 1;
                    *(_DWORD *)(a1 + 64) = v16;
                  }
                  while ( v16 < v5 );
                }
              }
            }
          }
        }
      }
    }
  }
}

