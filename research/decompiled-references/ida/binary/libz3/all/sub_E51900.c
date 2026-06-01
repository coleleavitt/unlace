_QWORD *__fastcall sub_E51900(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  void (__fastcall ***v6)(void *); // r12
  void *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  void (__fastcall ***v12)(void *); // r14
  bool v13; // zf
  void (__fastcall ***v14)(_QWORD); // r12
  void *ptr; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a2 + 648);
  if ( v3 )
  {
    *a1 = v3;
LABEL_3:
    ++*(_DWORD *)(v3 + 8);
    return a1;
  }
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a2 + 104) + 336LL))(&ptr);
  v6 = *(void (__fastcall ****)(void *))(a2 + 56);
  v7 = ptr;
  v8 = *(_QWORD *)(a2 + 464);
  if ( v6 )
    ++*((_DWORD *)v6 + 2);
  v9 = sub_1336AB0(v8, v7);
  v10 = sub_1336AB0(v6, v9);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *(void (__fastcall ****)(void *))(a2 + 648);
  if ( v12 )
  {
    v13 = (*((_DWORD *)v12 + 2))-- == 1;
    if ( v13 )
    {
      (**v12)(v12);
      sub_186B220(v12);
    }
  }
  *(_QWORD *)(a2 + 648) = v11;
  if ( v6 )
  {
    v13 = (*((_DWORD *)v6 + 2))-- == 1;
    if ( v13 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  v14 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v13 = (*((_DWORD *)ptr + 2))-- == 1;
    if ( v13 )
    {
      (**v14)(v14);
      sub_186B220(v14);
    }
  }
  v3 = *(_QWORD *)(a2 + 648);
  *a1 = v3;
  if ( v3 )
    goto LABEL_3;
  return a1;
}

