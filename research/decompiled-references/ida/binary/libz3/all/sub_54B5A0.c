unsigned __int64 __fastcall sub_54B5A0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // rbp
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r13d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  char **exception; // rbx
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  result = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 28) = 0;
  if ( result )
  {
    v5 = *(unsigned int *)(result - 4);
    result = *(_QWORD *)(a1 + 40);
    v6 = (_QWORD *)result;
    if ( result )
    {
      v7 = (_QWORD *)(result + 8LL * *(unsigned int *)(result - 4));
      if ( result < (unsigned __int64)v7 )
      {
        do
        {
LABEL_6:
          while ( 1 )
          {
            v8 = *v6;
            if ( *v6 )
            {
              v9 = *(_QWORD *)(a1 + 32);
              if ( (*(_DWORD *)(v8 + 8))-- == 1 )
                break;
            }
            if ( ++v6 >= v7 )
              goto LABEL_9;
          }
          sub_15D7BC0(v9, v8);
          ++v6;
        }
        while ( v6 < v7 );
LABEL_9:
        result = *(_QWORD *)(a1 + 40);
        if ( !result )
          goto LABEL_11;
      }
      *(_DWORD *)(result - 4) = 0;
    }
LABEL_11:
    v11 = *(__int64 **)(a2 + 8);
    if ( (_DWORD)v5 )
    {
      v12 = &v11[v5];
      v13 = *v11;
      v14 = (_QWORD *)result;
      if ( *v11 )
        ++*(_DWORD *)(v13 + 8);
      if ( result )
        goto LABEL_19;
      v15 = (_QWORD *)sub_186B270(0x18u);
      v14 = v15 + 1;
      *v15 = 2;
      result = 1;
      *(_QWORD *)(a1 + 40) = v14;
      v16 = v14;
      while ( 1 )
      {
        ++v11;
        *v16 = v13;
        *((_DWORD *)v14 - 1) = result;
        if ( v12 == v11 )
          break;
        while ( 1 )
        {
          v13 = *v11;
          if ( *v11 )
            ++*(_DWORD *)(v13 + 8);
LABEL_19:
          v17 = *((_DWORD *)v14 - 1);
          if ( v17 == *((_DWORD *)v14 - 2) )
            break;
          v18 = v17;
          ++v11;
          result = v17 + 1;
          v14[v18] = v13;
          *((_DWORD *)v14 - 1) = result;
          if ( v12 == v11 )
            return result;
        }
        v19 = (3 * v17 + 1) >> 1;
        v20 = 8 * v19 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v20 || v17 >= v19 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v24, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v24);
          sub_233E40((__int64)v24);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v21 = (unsigned int *)sub_186B300(v14 - 1, v20);
        v22 = v21[1];
        v14 = v21 + 2;
        *v21 = v19;
        *(_QWORD *)(a1 + 40) = v21 + 2;
        LODWORD(v21) = v22;
        v16 = &v14[v22];
        result = (unsigned int)((_DWORD)v21 + 1);
      }
    }
    return result;
  }
  v6 = *(_QWORD **)(a1 + 40);
  if ( v6 )
  {
    result = *((unsigned int *)v6 - 1);
    v5 = 0;
    v7 = &v6[result];
    if ( v6 < v7 )
      goto LABEL_6;
    *((_DWORD *)v6 - 1) = 0;
  }
  return result;
}

