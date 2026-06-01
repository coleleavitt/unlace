__int64 __fastcall sub_3C4C80(__int64 a1, int a2, int a3, __int64 *a4)
{
  _QWORD *v8; // rbp
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 result; // rax
  unsigned int v15; // esi
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  _DWORD *v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  char **exception; // rbx
  unsigned int v25; // [rsp+Ch] [rbp-5Ch]
  __int64 v26[11]; // [rsp+10h] [rbp-58h] BYREF

  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *((unsigned int *)v8 - 1);
    if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
    {
      v15 = (unsigned int)(3 * v9 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * (int)v9 + 8 >= (unsigned int)v16 || (unsigned int)v9 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3BCB70(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int)(3 * v9 + 1) >> 1;
      v17 = sub_186B270(v16);
      v18 = *(_QWORD *)(a1 + 32);
      v19 = (_DWORD *)v17;
      v8 = (_QWORD *)(v17 + 8);
      if ( v18 )
      {
        v20 = *(unsigned int *)(v18 - 4);
        *(_DWORD *)(v17 + 4) = v20;
        v21 = 0;
        v22 = 8 * v20;
        if ( v22 )
        {
          do
          {
            *(_QWORD *)&v19[v21 / 4 + 2] = *(_QWORD *)(v18 + v21);
            v21 += 8LL;
          }
          while ( v22 != v21 );
        }
        sub_186B220((void *)(v18 - 8));
        v10 = &v8[v19[1]];
      }
      else
      {
        *(_DWORD *)(v17 + 4) = 0;
        v10 = (_DWORD *)(v17 + 8);
      }
      *(_QWORD *)(a1 + 32) = v8;
      *v19 = v25;
    }
    else
    {
      v10 = &v8[v9];
    }
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x18u);
    v8 = v23 + 1;
    *v23 = 2;
    *(_QWORD *)(a1 + 32) = v23 + 1;
    v10 = v23 + 1;
  }
  *v10 = a2;
  v10[1] = a3;
  ++*((_DWORD *)v8 - 1);
  v11 = *a4;
  if ( *a4 )
    ++*(_DWORD *)(v11 + 8);
  v12 = *(_QWORD *)(a1 + 48);
  if ( !v12 || (v13 = *(_DWORD *)(v12 - 4), v13 == *(_DWORD *)(v12 - 8)) )
  {
    sub_23A6F0((unsigned int **)(a1 + 48));
    v12 = *(_QWORD *)(a1 + 48);
    v13 = *(_DWORD *)(v12 - 4);
  }
  *(_QWORD *)(v12 + 8LL * v13) = v11;
  *(_DWORD *)(v12 - 4) = v13 + 1;
  result = *(_QWORD *)(a1 + 8) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 20) * a3 + a2);
  *(_QWORD *)result = *a4;
  *(_DWORD *)(result + 8) = *((_DWORD *)a4 + 2);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 120) = 2;
  return result;
}

