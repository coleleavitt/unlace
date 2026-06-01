void __fastcall sub_8EC940(__int64 a1, int a2, _DWORD *a3)
{
  char **exception; // rbx
  _BYTE *v4; // rcx
  _DWORD *v5; // r12
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  char *v9; // rdx
  char v10; // r13
  unsigned int v11; // eax
  char v12; // al
  unsigned int v13; // eax
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_BYTE **)(a1 + 10376);
  if ( v4 )
    *((_DWORD *)v4 - 1) = 0;
  if ( a2 )
  {
    v5 = a3;
    v6 = &a3[a2];
    while ( 1 )
    {
      v10 = 1;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      if ( v11 > *(_DWORD *)(a1 + 184) )
        v11 = *(_DWORD *)(a1 + 184);
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 56LL))(
                *(_QWORD *)(a1 + 7488),
                *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*v5 >> 1)));
        v4 = *(_BYTE **)(a1 + 10376);
        v10 = v12;
      }
      if ( !v4 )
        break;
      v13 = *((_DWORD *)v4 - 1);
      if ( v13 == *((_DWORD *)v4 - 2) )
      {
        v14 = (3 * v13 + 1) >> 1;
        v15 = v14 + 8;
        if ( v13 + 8 >= (unsigned int)v15 || v13 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_8E4EB0(v19, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v19);
          sub_233E40((__int64)v19);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v5;
        v16 = (unsigned int *)sub_186B300(v4 - 8, v15);
        v17 = v16[1];
        v4 = v16 + 2;
        *v16 = v14;
        *(_QWORD *)(a1 + 10376) = v16 + 2;
        *((_BYTE *)v16 + v17 + 8) = v10;
        v16[1] = v17 + 1;
        if ( v6 == v5 )
          return;
      }
      else
      {
        v7 = v13;
        v8 = v13 + 1;
        v9 = &v4[v7];
LABEL_6:
        ++v5;
        *v9 = v10;
        *((_DWORD *)v4 - 1) = v8;
        if ( v6 == v5 )
          return;
      }
    }
    v18 = (_QWORD *)sub_186B270(0xAu);
    v4 = v18 + 1;
    *v18 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 10376) = v4;
    v9 = v4;
    goto LABEL_6;
  }
}

