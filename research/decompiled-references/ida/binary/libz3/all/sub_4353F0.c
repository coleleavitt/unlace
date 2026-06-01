void __fastcall __noreturn sub_4353F0(__int64 a1)
{
  char **exception; // r12
  __int64 v2; // rdx
  int v3; // r12d
  _QWORD *v4; // rbp
  unsigned int i; // r14d
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdx
  unsigned int v14; // edx
  size_t v15; // rsi
  unsigned int *v16; // rax
  _QWORD *v17; // rax
  unsigned int v18; // [rsp+Ch] [rbp-6Ch]
  __int64 v19[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 232LL))(*(_QWORD *)(a1 + 96));
  v4 = nullptr;
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 96) + 240LL))(*(_QWORD *)(a1 + 96), i);
        v7 = *(_QWORD **)(a1 + 152);
        if ( v7 )
        {
          v8 = *((unsigned int *)v7 - 1);
          if ( (_DWORD)v8 )
            break;
        }
LABEL_10:
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        if ( v4 )
        {
          v10 = *((_DWORD *)v4 - 1);
          if ( v10 == *((_DWORD *)v4 - 2) )
          {
            v14 = (3 * v10 + 1) >> 1;
            v15 = 8 * v14 + 8;
            if ( 8 * v10 + 8 >= (unsigned int)v15 || v10 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_D0F44(v19, "Overflow encountered when expanding vector", v2);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v19);
              sub_233E40((__int64)v19);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (3 * v10 + 1) >> 1;
            v16 = (unsigned int *)sub_186B300(v4 - 1, v15);
            v4 = v16 + 2;
            *v16 = v18;
            LODWORD(v16) = v16[1];
            v13 = &v4[(unsigned int)v16];
            v12 = (_DWORD)v16 + 1;
          }
          else
          {
            v11 = v10;
            v12 = v10 + 1;
            v13 = &v4[v11];
          }
        }
        else
        {
          v17 = (_QWORD *)sub_186B270(0x18u);
          v4 = v17 + 1;
          *v17 = 2;
          v12 = 1;
          v13 = v4;
        }
        ++i;
        *v13 = v6;
        *((_DWORD *)v4 - 1) = v12;
        if ( v3 == i )
          goto LABEL_9;
      }
      v9 = &v7[v8];
      while ( v6 != *v7 )
      {
        if ( v9 == ++v7 )
          goto LABEL_10;
      }
    }
  }
LABEL_9:
  sub_4317F0(a1 + 136);
  sub_1872CE0("");
  sub_1873130(107, 445);
}

