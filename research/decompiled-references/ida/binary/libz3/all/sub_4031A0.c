__int64 __fastcall sub_4031A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a2;
  v6 = (_QWORD *)*a3;
  if ( v6 )
  {
    *((_DWORD *)v6 - 1) = 0;
    result = *(unsigned int *)(a2 + 68);
    v8 = a2 + 8 * result;
    if ( (_DWORD)result )
    {
      do
      {
        v11 = *(_QWORD *)((*(_QWORD *)(v5 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v12 = *((_DWORD *)v6 - 1);
        if ( v12 == *((_DWORD *)v6 - 2) )
        {
          v13 = (3 * v12 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3FCFD0(v18, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v18);
            sub_233E40((__int64)v18);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
          v16 = v15[1];
          v6 = v15 + 2;
          *v15 = v13;
          *a3 = v15 + 2;
          LODWORD(v15) = v16;
          v10 = &v6[v16];
          result = (unsigned int)((_DWORD)v15 + 1);
        }
        else
        {
          v9 = v12;
          result = v12 + 1;
          v10 = &v6[v9];
        }
LABEL_5:
        v5 += 8;
        *v10 = v11;
        *((_DWORD *)v6 - 1) = result;
      }
      while ( v5 != v8 );
    }
  }
  else
  {
    result = *(unsigned int *)(a2 + 68);
    if ( (_DWORD)result )
    {
      v8 = a2 + 8 * result;
      v11 = *(_QWORD *)((*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v17 = (_QWORD *)sub_186B270(0x18u);
      v6 = v17 + 1;
      *v17 = 2;
      result = 1;
      *a3 = v6;
      v10 = v6;
      goto LABEL_5;
    }
  }
  return result;
}

