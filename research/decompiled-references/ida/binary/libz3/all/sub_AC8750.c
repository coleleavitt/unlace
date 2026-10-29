void __fastcall sub_AC8750(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  unsigned int **v3; // rbx
  unsigned int **i; // r14
  __int64 v6; // rbp
  unsigned int *v7; // r12
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int **v12; // rcx
  unsigned int v13; // ebp
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(unsigned int ***)(a1 + 64);
  if ( v3 )
  {
    for ( i = &v3[*((unsigned int *)v3 - 1)]; i != v3; *((_DWORD *)v8 - 1) = v11 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        v7 = *v3;
        if ( (!(unsigned int)sub_8E7030(v6)
           || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v6 + 7488) + 56LL))(
                *(_QWORD *)(v6 + 7488),
                v7))
          && (unsigned int)sub_8E80A0(*(_QWORD **)(a1 + 16), v7) == 1 )
        {
          break;
        }
        if ( i == ++v3 )
          return;
      }
      v8 = (_QWORD *)*a2;
      if ( *a2 )
      {
        v9 = *((_DWORD *)v8 - 1);
        if ( v9 == *((_DWORD *)v8 - 2) )
        {
          v13 = (3 * v9 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v18, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v18);
            sub_233E40((__int64)v18);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v8 - 1, v14);
          v16 = v15[1];
          v8 = v15 + 2;
          *v15 = v13;
          *a2 = v15 + 2;
          LODWORD(v15) = v16;
          v12 = (unsigned int **)&v8[v16];
          v11 = (_DWORD)v15 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = (unsigned int **)&v8[v10];
        }
      }
      else
      {
        v17 = (_QWORD *)sub_186B270(0x18u);
        v8 = v17 + 1;
        *v17 = 2;
        v11 = 1;
        *a2 = v8;
        v12 = (unsigned int **)v8;
      }
      ++v3;
      *v12 = v7;
    }
  }
}

