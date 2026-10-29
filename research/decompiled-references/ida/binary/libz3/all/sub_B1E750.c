__int64 __fastcall sub_B1E750(__int64 *a1, _QWORD *a2, __int64 a3, int a4, unsigned int a5, __m128i a6, __m128 a7)
{
  char **exception; // r12
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r13
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 *v26; // rcx
  unsigned int v27; // ebp
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  unsigned int v32; // [rsp+8h] [rbp-80h] BYREF
  int v33; // [rsp+Ch] [rbp-7Ch] BYREF
  __m128i v34; // [rsp+20h] [rbp-68h] BYREF
  __int64 v35[11]; // [rsp+30h] [rbp-58h] BYREF

  v33 = a4;
  v32 = a5;
  sub_B1DD90(&v34, a1, a5, a6, a7);
  v10 = a1[1];
  result = v34.m128i_i64[0];
  if ( v34.m128i_i64[0] == *(_QWORD *)(v10 + 856) )
  {
    v19 = a2[1];
    if ( v19 )
      v20 = *(unsigned int *)(v19 - 4);
    else
      v20 = 0;
    v21 = sub_15EC1C0(*a2, v20);
    v22 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v23 = *(_QWORD **)(a3 + 8);
    if ( v23 )
    {
      v24 = *((_DWORD *)v23 - 1);
      if ( v24 == *((_DWORD *)v23 - 2) )
      {
        v27 = (3 * v24 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v28 || v24 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v23 - 1, v28);
        v30 = v29[1];
        v23 = v29 + 2;
        *v29 = v27;
        *(_QWORD *)(a3 + 8) = v29 + 2;
        LODWORD(v29) = v30;
        v26 = &v23[v30];
        result = (unsigned int)((_DWORD)v29 + 1);
      }
      else
      {
        v25 = v24;
        result = v24 + 1;
        v26 = &v23[v25];
      }
    }
    else
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v23 = v31 + 1;
      *v31 = 2;
      result = 1;
      *(_QWORD *)(a3 + 8) = v23;
      v26 = v23;
    }
    *v26 = v22;
    v12 = v34.m128i_i64[0];
    *((_DWORD *)v23 - 1) = result;
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 864);
    if ( v34.m128i_i64[0] != v12 )
    {
      v35[0] = (__int64)a2;
      v35[2] = (__int64)&v33;
      v35[1] = (__int64)&v34;
      v35[3] = (__int64)a1;
      v35[4] = a3;
      v35[5] = (__int64)&v32;
      sub_B1EA30(v35);
      v13 = sub_15E1A70(a1[1]);
      v14 = v13;
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      v15 = v34.m128i_i64[0];
      if ( v34.m128i_i64[0] )
      {
        v16 = v34.m128i_i64[1];
        v17 = (*(_DWORD *)(v34.m128i_i64[0] + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v16, v15);
      }
      v34.m128i_i64[0] = v14;
      result = sub_B1EA30(v35);
      v12 = v34.m128i_i64[0];
    }
  }
  if ( v12 )
  {
    v18 = v34.m128i_i64[1];
    v17 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v17 )
      return sub_15D7BC0(v18, v12);
  }
  return result;
}

