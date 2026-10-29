__int64 __fastcall sub_BA1130(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        __m128 a7,
        __m128 a8,
        __m128 a9)
{
  char **exception; // rbx
  int v14; // eax
  _DWORD *v15; // rsi
  __int64 result; // rax
  _QWORD *v17; // r15
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  __int64 *v23; // rsi
  _DWORD *v24; // rsi
  unsigned int v25; // r12d
  _QWORD *v26; // r13
  __int64 v27; // rax
  unsigned int v28; // r9d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rax
  int v33; // [rsp+0h] [rbp-68h]
  __int64 v34; // [rsp+0h] [rbp-68h]
  __int64 v35; // [rsp+0h] [rbp-68h]
  unsigned int v36; // [rsp+Ch] [rbp-5Ch]
  char *v37[11]; // [rsp+10h] [rbp-58h] BYREF

  *(_BYTE *)(a1 + 100) = a6;
  if ( a6 )
  {
    sub_B9BFE0(a1, a2, a3, a4, a5);
    v14 = *(_DWORD *)(a2 + 28);
    v15 = *(_DWORD **)(a2 + 32);
    *(_DWORD *)(a1 + 96) = v14;
    sub_B9F910((__int64 *)a1, v15, a5, a7, a8, a9);
    result = *(unsigned int *)(a1 + 96);
    if ( *(_DWORD *)(a2 + 28) < (unsigned int)result )
      *(_DWORD *)(a2 + 28) = result;
  }
  else
  {
    v17 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8LL);
    v33 = *(_DWORD *)(a2 + 24);
    v18 = sub_180C100(v17 + 2, 24);
    *(_DWORD *)(v18 + 16) = v33;
    v19 = (_QWORD *)*v17;
    *(_QWORD *)v18 = &off_1C4C070;
    *(_QWORD *)(v18 + 8) = a2 + 24;
    if ( v19 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v28 = (3 * v20 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v29 || v20 >= v28 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_151CF2(v37);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v36 = (3 * v20 + 1) >> 1;
        v34 = v18;
        v30 = (unsigned int *)sub_186B300(v19 - 1, v29);
        v18 = v34;
        v31 = v30[1];
        v19 = v30 + 2;
        *v17 = v30 + 2;
        *v30 = v36;
        LODWORD(v30) = v31;
        v23 = &v19[v31];
        v22 = (_DWORD)v30 + 1;
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
      v35 = v18;
      v32 = (_QWORD *)sub_186B270(0x18u);
      v18 = v35;
      v19 = v32 + 1;
      *v32 = 2;
      v22 = 1;
      *v17 = v19;
      v23 = v19;
    }
    *v23 = v18;
    *((_DWORD *)v19 - 1) = v22;
    sub_B9BFE0(a1, a2, a3, a4, a5);
    v24 = *(_DWORD **)(a2 + 32);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 28);
    result = (__int64)sub_B9F910((__int64 *)a1, v24, a5, a7, a8, a9);
    v25 = *(_DWORD *)(a2 + 28);
    if ( v25 < *(_DWORD *)(a1 + 96) )
    {
      v26 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8LL);
      v27 = sub_180C100(v26 + 2, 24);
      *(_QWORD *)v27 = &off_1C4C070;
      *(_QWORD *)(v27 + 8) = a2 + 28;
      *(_DWORD *)(v27 + 16) = v25;
      v37[0] = (char *)v27;
      sub_B9B610(v26, v37);
      result = *(unsigned int *)(a1 + 96);
      *(_DWORD *)(a2 + 28) = result;
    }
  }
  return result;
}

