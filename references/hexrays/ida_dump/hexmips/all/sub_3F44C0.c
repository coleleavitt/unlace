__int64 __fastcall sub_3F44C0(__int64 a1, __int64 *a2, int a3, unsigned int a4, double a5)
{
  __int64 *v5; // r14
  _WORD *v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  int *v11; // rcx
  int *v12; // rax
  unsigned int v13; // r12d
  const void *v14; // rbx
  int v15; // r13d
  size_t v16; // rax
  size_t v17; // r8
  int v18; // ebp
  __int64 v19; // rax
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  size_t v23; // [rsp+0h] [rbp-48h]
  size_t v24; // [rsp+0h] [rbp-48h]
  size_t v25; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCD18u, (__int64)a2, a5);
LABEL_29:
    BUG();
  }
  v5 = a2;
  if ( a3 <= 6 )
  {
    if ( a2 )
    {
      v8 = (_WORD *)*a2;
      if ( (unsigned __int64)v5[2] <= 2 )
      {
        v19 = qvector_reserve(v5, v8, 3, 1);
        *v5 = v19;
        v8 = (_WORD *)v19;
      }
      v5[1] = 3;
      *v8 = 26211;
      *(_BYTE *)(*v5 + 2) = 0;
      if ( a3 )
        sub_F68D0(v5, (__int64)"^%d", a3);
    }
    return a4;
  }
  v10 = *(_QWORD *)(a1 + 736);
  if ( !v10 || (v11 = (int *)(a1 + *(_QWORD *)v10), *(_QWORD *)v10 == 692) )
  {
LABEL_27:
    if ( !under_debugger )
      sub_37E160(0xCC05u, (__int64)a2, a5);
    goto LABEL_29;
  }
  while ( 1 )
  {
    a2 = *(__int64 **)(v10 + 16);
    v12 = v11;
    v11 = (int *)((char *)a2 + a1);
    if ( a3 < *(_DWORD *)((char *)a2 + a1) )
      break;
    v10 += 16;
    if ( a2 == (__int64 *)((char *)&stru_2A0.st_size + 4) )
      goto LABEL_27;
  }
  v13 = *(char *)(v10 + 15);
  if ( v5 )
  {
    v14 = (const void *)(v10 + 8);
    v15 = *v12;
    v16 = strlen((const char *)(v10 + 8));
    v17 = v16;
    if ( v16 )
    {
      v20 = (void *)*v5;
      v21 = v16 + 1;
      if ( v5[2] < v16 + 1 )
      {
        v24 = v16 + 1;
        v25 = v16;
        v22 = qvector_reserve(v5, *v5, v21, 1);
        v17 = v25;
        v21 = v24;
        *v5 = v22;
        v20 = (void *)v22;
      }
      v5[1] = v21;
      v23 = v17;
      memmove(v20, v14, v17);
      *(_BYTE *)(*v5 + v23) = 0;
    }
    else
    {
      v5[1] = 0;
    }
    v18 = a3 - v15;
    if ( v18 )
      sub_F68D0(v5, (__int64)"^%d", v18);
  }
  result = a4;
  if ( (int)v13 <= (int)a4 )
    return v13;
  return result;
}
