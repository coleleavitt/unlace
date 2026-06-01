__int64 __fastcall linearray_t_down_0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebp
  _DWORD *v4; // rdi
  __int64 v5; // r13
  char v6; // r12
  char v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  size_t v11; // r9
  const void *v13; // r10
  void *v14; // rdi
  __int64 v15; // rax
  const void *v16; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = v3 + 1;
  v4 = *(_DWORD **)(a1 + 24);
  v5 = 24LL * v3;
  if ( v4[2] < *(_DWORD *)(a1 + 8) )
    return v5 + *(_QWORD *)a1;
  v6 = 0;
  while ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v4 + 80LL))(v4, *(_QWORD *)(a1 + 32)) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 64LL))(
           *(_QWORD *)(a1 + 24),
           *(_QWORD *)(a1 + 32));
    v8 = *(_QWORD *)(a1 + 8);
    if ( !v7 )
      goto LABEL_14;
    if ( v3 < (int)v8 )
    {
      v9 = v5 + *(_QWORD *)a1;
      if ( a1 + 48 != v9 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( v10 && (v11 = v10 - 1, v10 != 1) )
        {
          v13 = *(const void **)v9;
          v14 = *(void **)(a1 + 48);
          if ( *(_QWORD *)(a1 + 64) < v10 )
          {
            v16 = *(const void **)v9;
            v15 = qvector_reserve(a1 + 48, *(_QWORD *)(a1 + 48), *(_QWORD *)(v9 + 8), 1);
            v13 = v16;
            v11 = v10 - 1;
            *(_QWORD *)(a1 + 48) = v15;
            v14 = (void *)v15;
          }
          *(_QWORD *)(a1 + 56) = v10;
          memmove(v14, v13, v11);
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + v10 - 1) = 0;
          v9 = v5 + *(_QWORD *)a1;
        }
        else
        {
          *(_QWORD *)(a1 + 56) = 0;
        }
      }
      *(_QWORD *)(v9 + 8) = 0;
    }
    sub_4536A0(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0;
    v4 = *(_DWORD **)(a1 + 24);
    if ( v4[2] < *(_DWORD *)(a1 + 8) )
      return a1 + 48;
    v6 = v7;
  }
  v8 = *(_QWORD *)(a1 + 8);
LABEL_14:
  if ( v3 + 1 == (_DWORD)v8 )
  {
    if ( !v6 )
      return v5 + *(_QWORD *)a1;
    return a1 + 48;
  }
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  return 0;
}
