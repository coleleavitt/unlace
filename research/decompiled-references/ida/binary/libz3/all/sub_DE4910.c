void __fastcall sub_DE4910(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *v6; // r12
  __int64 v7; // rbp
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(__int64 **)(a1 + 24);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( (_DWORD)v4 )
    {
      v6 = &v3[v4];
      do
      {
        while ( 1 )
        {
          v7 = *v3;
          if ( (*(_DWORD *)(*v3 + 16))-- == 1 )
            break;
          if ( v6 == ++v3 )
            return;
        }
        v9 = *(_QWORD **)(a2 + 80);
        if ( v9 )
        {
          v10 = *((_DWORD *)v9 - 1);
          if ( v10 == *((_DWORD *)v9 - 2) )
          {
            v14 = (3 * v10 + 1) >> 1;
            v15 = 8 * v14 + 8;
            if ( 8 * v10 + 8 >= (unsigned int)v15 || v10 >= v14 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v19, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v19);
              sub_233E40((__int64)v19);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v16 = (unsigned int *)sub_186B300(v9 - 1, v15);
            v17 = v16[1];
            v9 = v16 + 2;
            *v16 = v14;
            *(_QWORD *)(a2 + 80) = v16 + 2;
            LODWORD(v16) = v17;
            v13 = &v9[v17];
            v12 = (_DWORD)v16 + 1;
          }
          else
          {
            v11 = v10;
            v12 = v10 + 1;
            v13 = &v9[v11];
          }
        }
        else
        {
          v18 = (_QWORD *)sub_186B270(0x18u);
          v9 = v18 + 1;
          *v18 = 2;
          v12 = 1;
          *(_QWORD *)(a2 + 80) = v9;
          v13 = v9;
        }
        ++v3;
        *v13 = v7;
        *((_DWORD *)v9 - 1) = v12;
      }
      while ( v6 != v3 );
    }
  }
}

