void __fastcall sub_B66DE0(__int64 a1, unsigned int a2, char a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r13
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v12; // rcx
  unsigned int v13; // ebp
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 8872) + 16LL * a2;
  if ( (*(_BYTE *)(v5 + 11) & 0x40) == 0 )
  {
    if ( !a3 )
    {
      v6 = sub_180C100(a1 + 8400, 24);
      v7 = *(_QWORD **)(a1 + 9456);
      v8 = v6;
      *(_QWORD *)v6 = off_1C575A8;
      *(_QWORD *)(v6 + 8) = a1;
      *(_DWORD *)(v6 + 16) = a2;
      if ( v7 )
      {
        v9 = *((_DWORD *)v7 - 1);
        if ( v9 == *((_DWORD *)v7 - 2) )
        {
          v13 = (3 * v9 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_14E142(v18, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v18);
            sub_233E40((__int64)v18);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
          v16 = v15[1];
          v7 = v15 + 2;
          *v15 = v13;
          *(_QWORD *)(a1 + 9456) = v15 + 2;
          LODWORD(v15) = v16;
          v12 = &v7[v16];
          v11 = (_DWORD)v15 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = &v7[v10];
        }
      }
      else
      {
        v17 = (_QWORD *)sub_186B270(0x18u);
        v7 = v17 + 1;
        *v17 = 2;
        v11 = 1;
        *(_QWORD *)(a1 + 9456) = v7;
        v12 = v7;
      }
      *v12 = v8;
      *((_DWORD *)v7 - 1) = v11;
    }
    *(_QWORD *)(v5 + 8) |= 0x80000040000000uLL;
  }
}

