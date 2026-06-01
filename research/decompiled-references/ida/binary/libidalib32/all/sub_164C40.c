__int64 __fastcall sub_164C40(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  _DWORD *v8; // rdi
  _DWORD **v9; // rdx
  _DWORD **v10; // rcx
  __int64 (__fastcall *v11)(__int64, unsigned int); // rax
  __int64 v12; // r13
  __int64 v13; // r14
  int v14; // eax
  __int64 v16; // [rsp+18h] [rbp-80h]

  v6 = sub_F1F60(a1, a2);
  v7 = *(_QWORD *)(a1 + 168);
  v8 = *(_DWORD **)(v6 + 216);
  if ( v8 )
  {
    v9 = (_DWORD **)(v8 + 14);
    v10 = (_DWORD **)(v8 + 20);
    while ( 1 )
    {
      v8 = *v9;
      if ( *v9 )
      {
        if ( (_DWORD)v7 == v8[2] )
          break;
      }
      if ( v10 == ++v9 )
      {
        v8 = nullptr;
        break;
      }
    }
  }
  v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v8 + 144LL);
  if ( v11 == sub_154A30 )
  {
    if ( (_DWORD)a2 != -1 )
    {
LABEL_9:
      v12 = sub_15E6E0(a1, a2, 0);
      linearray_t_ctr();
      linearray_t_set_place();
      v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, v12);
      if ( *(int *)(a1 + 900) <= 740 )
        v14 = l_compare();
      else
        v14 = l_compare2();
      if ( a4 )
        *a4 = v14 == 0;
      qfree();
      linearray_t_dtr();
      return v13;
    }
  }
  else
  {
    LODWORD(a2) = v11((__int64)v8, a2);
    if ( (_DWORD)a2 != -1 )
      goto LABEL_9;
  }
  if ( a4 )
    *a4 = 0;
  return 0;
}

