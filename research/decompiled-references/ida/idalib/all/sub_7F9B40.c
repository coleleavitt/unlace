__int64 __fastcall sub_7F9B40(__int64 *a1, const char *a2, const char *a3)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  const char *v7; // rdi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 *v10; // rbp
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // r12
  void *v14; // rax
  __int64 v15; // rbp
  size_t v16; // rax
  size_t v17; // r12
  __int64 v18; // rax
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v23; // [rsp+8h] [rbp-40h]

  v4 = a1[1];
  v23 = *a1;
  if ( v4 )
  {
    v5 = *a1;
    v6 = 0;
    while ( 1 )
    {
      v7 = haystack;
      if ( *(_QWORD *)(v5 + 8) )
        v7 = *(const char **)v5;
      if ( !strcmp(v7, a2) )
        break;
      ++v6;
      v5 += 40;
      if ( v4 == v6 )
        goto LABEL_13;
    }
    v8 = v5 + 24;
  }
  else
  {
LABEL_13:
    if ( a1[2] < (unsigned __int64)(v4 + 1) )
    {
      v18 = qvector_reserve(a1, v23, v4 + 1, 40);
      v4 = a1[1];
      v23 = v18;
      *a1 = v18;
    }
    v15 = v23 + 40 * v4;
    *(_QWORD *)v15 = 0;
    *(_DWORD *)(v15 + 24) = 0;
    *(_QWORD *)(v15 + 32) = 0;
    *(_OWORD *)(v15 + 8) = 0;
    ++a1[1];
    if ( a2 && (v16 = strlen(a2), (v17 = v16) != 0) )
    {
      v19 = *(void **)v15;
      v20 = v16 + 1;
      if ( *(_QWORD *)(v15 + 16) < v16 + 1 )
      {
        v21 = qvector_reserve(v15, *(_QWORD *)v15, v16 + 1, 1);
        *(_QWORD *)v15 = v21;
        v19 = (void *)v21;
      }
      *(_QWORD *)(v15 + 8) = v20;
      memmove(v19, a2, v17);
      *(_BYTE *)(*(_QWORD *)v15 + v17) = 0;
    }
    else
    {
      *(_QWORD *)(v15 + 8) = 0;
    }
    v8 = v15 + 24;
  }
  result = operator new(0x18u);
  *(_QWORD *)result = 0;
  v10 = (__int64 *)result;
  *(_OWORD *)(result + 8) = 0;
  if ( a3 )
  {
    v11 = strlen(a3);
    v12 = v11 + 1;
    v13 = v11;
    v14 = (void *)qvector_reserve(v10, 0, v11 + 1, 1);
    *v10 = (__int64)v14;
    v10[1] = v12;
    memmove(v14, a3, v13);
    result = *v10;
    *(_BYTE *)(*v10 + v13) = 0;
  }
  if ( *(_DWORD *)v8 )
    result = jvalue_t_clear(v8);
  *(_DWORD *)v8 = 2;
  *(_QWORD *)(v8 + 8) = v10;
  return result;
}
