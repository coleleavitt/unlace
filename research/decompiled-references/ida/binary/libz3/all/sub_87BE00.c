unsigned int *__fastcall sub_87BE00(__int64 a1, unsigned int *a2, __int64 a3)
{
  char **exception; // rbp
  char *v6; // rdx
  __int64 v7; // r13
  unsigned int **v8; // r13
  unsigned int *result; // rax
  unsigned int v10; // r14d
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int v28; // r15d
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __m128i v32; // [rsp+20h] [rbp-68h] BYREF
  __m128i v33[5]; // [rsp+30h] [rbp-58h] BYREF

  v6 = (char *)(sub_7E4F00(a1, a2) + 88);
  if ( *(int *)v6 >> 8 == -1 )
  {
LABEL_27:
    v7 = 0x7FFFFFFF8LL;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v6 )
    {
      v6 = *((char **)v6 + 1);
      if ( !v6 )
        goto LABEL_27;
    }
    v7 = 8LL * (unsigned int)(*(int *)v6 >> 8);
  }
  v8 = (unsigned int **)(*(_QWORD *)(a1 + 600) + v7);
  result = *v8;
  if ( *v8 && *(result - 1) )
  {
    v10 = 1;
    sub_7E4F90(&v32, a1, *result);
    for ( result = *v8; *v8; result = *v8 )
    {
      if ( v10 >= *(result - 1) )
        break;
      v11 = *(_QWORD *)(a1 + 72);
      sub_7E4F90(v33, a1, result[v10]);
      v12 = sub_15E1B70(v11);
      v13 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v14 = v32.m128i_i64[0];
      if ( v32.m128i_i64[0] )
      {
        v15 = v32.m128i_i64[1];
        v16 = (*(_DWORD *)(v32.m128i_i64[0] + 8))-- == 1;
        if ( v16 )
          sub_15D7BC0(v15, v14);
      }
      v17 = v33[0].m128i_i64[0];
      v32.m128i_i64[0] = v13;
      if ( v33[0].m128i_i64[0] )
      {
        v18 = v33[0].m128i_i64[1];
        v16 = (*(_DWORD *)(v33[0].m128i_i64[0] + 8))-- == 1;
        if ( v16 )
        {
          sub_15D7BC0(v18, v17);
          v13 = v32.m128i_i64[0];
        }
      }
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v19 = *(_QWORD **)(a3 + 8);
      if ( v19 )
      {
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 == *((_DWORD *)v19 - 2) )
        {
          v26 = (3 * v20 + 1) >> 1;
          v27 = 8 * v26 + 8;
          v28 = v26;
          if ( 8 * v20 + 8 >= (unsigned int)v27 || v20 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v33[0].m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v29 = (unsigned int *)sub_186B300(v19 - 1, v27);
          v30 = v29[1];
          v19 = v29 + 2;
          *v29 = v28;
          *(_QWORD *)(a3 + 8) = v29 + 2;
          LODWORD(v29) = v30;
          v23 = &v19[v30];
          v22 = (_DWORD)v29 + 1;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v19[v21];
        }
      }
      else
      {
        v31 = (_QWORD *)sub_186B270(0x18u);
        v19 = v31 + 1;
        *v31 = 2;
        v22 = 1;
        *(_QWORD *)(a3 + 8) = v19;
        v23 = v19;
      }
      *v23 = v13;
      ++v10;
      *((_DWORD *)v19 - 1) = v22;
    }
    v24 = v32.m128i_i64[0];
    if ( v32.m128i_i64[0] )
    {
      v25 = v32.m128i_i64[1];
      v16 = (*(_DWORD *)(v32.m128i_i64[0] + 8))-- == 1;
      if ( v16 )
        return (unsigned int *)sub_15D7BC0(v25, v24);
    }
  }
  return result;
}

