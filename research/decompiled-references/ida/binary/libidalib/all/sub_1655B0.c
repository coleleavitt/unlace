__int64 __fastcall sub_1655B0(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _DWORD *v9; // rdi
  _DWORD **v10; // rax
  _DWORD **v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // eax
  __int64 v17; // [rsp+18h] [rbp-80h]

  v5 = a2;
  v7 = sub_F2E40(a1, a2);
  v8 = *(_QWORD *)(a1 + 168);
  v9 = *(_DWORD **)(v7 + 216);
  if ( v9 )
  {
    v10 = (_DWORD **)(v9 + 14);
    v11 = (_DWORD **)(v9 + 20);
    while ( 1 )
    {
      v9 = *v10;
      if ( *v10 )
      {
        if ( (_DWORD)v8 == v9[2] )
          break;
      }
      if ( v11 == ++v10 )
      {
        v9 = nullptr;
        break;
      }
    }
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 144LL);
  if ( v12 == sub_155230 )
  {
    if ( a2 != -1 )
    {
LABEL_9:
      v13 = sub_15EFE0(a1, v5, 0);
      linearray_t_ctr();
      linearray_t_set_place();
      v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v13);
      if ( *(int *)(a1 + 908) <= 740 )
        v15 = l_compare();
      else
        v15 = l_compare2();
      if ( a4 )
        *a4 = v15 == 0;
      qfree();
      linearray_t_dtr();
      return v14;
    }
  }
  else
  {
    v5 = v12((__int64)v9, a2);
    if ( v5 != -1 )
      goto LABEL_9;
  }
  if ( a4 )
    *a4 = 0;
  return 0;
}

