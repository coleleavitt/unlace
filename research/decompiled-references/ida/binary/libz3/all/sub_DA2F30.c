__int64 __fastcall sub_DA2F30(_QWORD *a1, _QWORD *a2)
{
  char **exception; // rbx
  _QWORD *v4; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  _QWORD *v8; // rdx
  unsigned int v9; // r14d
  size_t v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _DWORD *v13; // rbp
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 == *((_DWORD *)v4 - 2) )
    {
      v9 = (3 * v5 + 1) >> 1;
      v10 = 8 * v9 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v10 || v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = sub_186B270(v10);
      v12 = (_QWORD *)*a1;
      v13 = (_DWORD *)v11;
      v4 = (_QWORD *)(v11 + 8);
      if ( *a1 )
      {
        v14 = *((unsigned int *)v12 - 1);
        *(_DWORD *)(v11 + 4) = v14;
        v15 = 0;
        v16 = 8 * v14;
        if ( v16 )
        {
          do
          {
            *(_QWORD *)&v13[v15 / 4 + 2] = v12[v15 / 8];
            v15 += 8LL;
          }
          while ( v16 != v15 );
        }
        sub_186B220(v12 - 1);
        v8 = &v4[v13[1]];
        result = (unsigned int)(v13[1] + 1);
      }
      else
      {
        *(_DWORD *)(v11 + 4) = 0;
        v8 = (_QWORD *)(v11 + 8);
        result = 1;
      }
      *a1 = v4;
      *v13 = v9;
    }
    else
    {
      v6 = v5;
      result = v5 + 1;
      v8 = &v4[v6];
    }
  }
  else
  {
    v17 = (_QWORD *)sub_186B270(0x18u);
    v4 = v17 + 1;
    *v17 = 2;
    result = 1;
    *a1 = v4;
    v8 = v4;
  }
  *v8 = *a2;
  *((_DWORD *)v4 - 1) = result;
  return result;
}

