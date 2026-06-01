__int64 __fastcall sub_403090(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a1;
  v5 = (_QWORD *)*a2;
  if ( *a2 )
  {
    *((_DWORD *)v5 - 1) = 0;
    result = *(unsigned int *)(a1 + 68);
    v7 = a1 + 8 * result;
    if ( (_DWORD)result )
    {
      do
      {
        v10 = *(_QWORD *)((*(_QWORD *)(v4 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v11 = *((_DWORD *)v5 - 1);
        if ( v11 == *((_DWORD *)v5 - 2) )
        {
          v12 = (3 * v11 + 1) >> 1;
          v13 = 8 * v12 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v13 || v11 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0(v17, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v17);
            sub_233E40((__int64)v17);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
          v15 = v14[1];
          v5 = v14 + 2;
          *v14 = v12;
          *a2 = v14 + 2;
          LODWORD(v14) = v15;
          v9 = &v5[v15];
          result = (unsigned int)((_DWORD)v14 + 1);
        }
        else
        {
          v8 = v11;
          result = v11 + 1;
          v9 = &v5[v8];
        }
LABEL_5:
        v4 += 8;
        *v9 = v10;
        *((_DWORD *)v5 - 1) = result;
      }
      while ( v4 != v7 );
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 68);
    if ( (_DWORD)result )
    {
      v7 = a1 + 8 * result;
      v10 = *(_QWORD *)((*(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v16 = (_QWORD *)sub_186B270(0x18u);
      v5 = v16 + 1;
      *v16 = 2;
      result = 1;
      *a2 = v5;
      v9 = v5;
      goto LABEL_5;
    }
  }
  return result;
}

