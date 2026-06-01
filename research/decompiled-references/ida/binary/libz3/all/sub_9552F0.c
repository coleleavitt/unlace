__int64 __fastcall sub_9552F0(__int64 *a1)
{
  char **exception; // rbx
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rsi
  int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r12
  __int64 v18; // r14
  unsigned int v19; // eax
  unsigned int v21; // r8d
  unsigned int v22; // eax
  unsigned int *v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  unsigned int v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+0h] [rbp-78h]
  unsigned int v30; // [rsp+Ch] [rbp-6Ch]
  __int64 v31[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 1192);
  v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 112LL);
  if ( v4 == sub_9573D0 )
  {
    if ( *(_BYTE *)(v3 + 72) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 32) + 40LL))(*(_QWORD *)(v3 + 32));
      if ( !(unsigned int)sub_8E7030(*(_QWORD *)(v3 + 24)) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v3 + 16) + 562LL) )
        {
          v5 = *(_QWORD *)(**(_QWORD **)(v3 + 8) + 1184LL);
          if ( v5 )
          {
            if ( *(_DWORD *)(v5 - 4) )
            {
              v6 = *(_QWORD *)(v3 + 24);
              v7 = *(_QWORD *)(v6 + 8664);
              if ( v7 )
              {
                v8 = *(_DWORD *)(v7 - 4);
                v27 = *(_DWORD *)(v3 + 64);
                if ( v27 < v8 )
                {
                  v9 = sub_180C100(v6 + 8400, 24);
                  *(_DWORD *)(v9 + 16) = v27;
                  v10 = *(_QWORD **)(v6 + 9456);
                  *(_QWORD *)v9 = &off_1C4C070;
                  *(_QWORD *)(v9 + 8) = v3 + 64;
                  if ( v10 )
                  {
                    v11 = *((_DWORD *)v10 - 1);
                    v12 = *((_DWORD *)v10 - 2);
                    if ( v11 == v12 )
                    {
                      v21 = (3 * v12 + 1) >> 1;
                      v22 = 8 * v21 + 8;
                      if ( 8 * v12 + 8 >= v22 || v12 >= v21 )
                      {
                        exception = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v31, "Overflow encountered when expanding vector");
                        *exception = (char *)off_1C63128;
                        sub_2333C0(exception + 1, v31);
                        sub_233E40((__int64)v31);
                        __cxa_throw(
                          exception,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v30 = (3 * v12 + 1) >> 1;
                      v28 = v9;
                      v23 = (unsigned int *)sub_186B300(v10 - 1, v22);
                      v9 = v28;
                      v24 = v23[1];
                      v10 = v23 + 2;
                      *(_QWORD *)(v6 + 9456) = v23 + 2;
                      *v23 = v30;
                      LODWORD(v23) = v24;
                      v15 = &v10[v24];
                      v14 = (_DWORD)v23 + 1;
                    }
                    else
                    {
                      v13 = v11;
                      v14 = v11 + 1;
                      v15 = &v10[v13];
                    }
                  }
                  else
                  {
                    v29 = v9;
                    v25 = (_QWORD *)sub_186B270(0x18u);
                    v9 = v29;
                    v26 = v25;
                    *v25 = 2;
                    v14 = 1;
                    v10 = v26 + 1;
                    *(_QWORD *)(v6 + 9456) = v10;
                    v15 = v10;
                  }
                  *v15 = v9;
                  *((_DWORD *)v10 - 1) = v14;
                  v16 = *(unsigned int *)(v3 + 64);
                  v17 = (__int64 *)(v7 + 8 * v16);
                  if ( (unsigned int)v16 < v8 )
                  {
                    do
                    {
                      v18 = *v17++;
                      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v3 + 32) + 64LL))(
                        *(_QWORD *)(v3 + 32),
                        v18,
                        0);
                      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v3 + 40) + 64LL))(
                        *(_QWORD *)(v3 + 40),
                        v18,
                        1);
                      v19 = *(_DWORD *)(v3 + 64) + 1;
                      *(_DWORD *)(v3 + 64) = v19;
                    }
                    while ( v19 < v8 );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    ((void (__fastcall *)(_QWORD))v4)(*(_QWORD *)(*a1 + 1192));
  }
  return sub_ADDC00(v2 + 24);
}

