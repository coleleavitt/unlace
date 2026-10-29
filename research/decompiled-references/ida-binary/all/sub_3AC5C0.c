__int64 __fastcall sub_3AC5C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  int v18; // ebp
  __int64 result; // rax
  __int64 v20; // rdx

  v4 = sub_3AC530();
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL);
  if ( v5 == j__tiplace_t__clone )
    v6 = tiplace_t__clone(v4);
  else
    v6 = v5(v4);
  *a1 = v6;
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL);
  if ( v7 == j__tiplace_t__clone )
    v8 = tiplace_t__clone(v4);
  else
    v8 = v7(v4);
  a1[1] = v8;
  v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL);
  if ( v9 == j__tiplace_t__clone )
    v10 = tiplace_t__clone(v4);
  else
    v10 = v9(v4);
  a1[2] = v10;
  v11 = *(_QWORD *)(a2 + 16);
  if ( v11 )
  {
    v12 = *a1;
LABEL_9:
    v13 = **(_DWORD **)(a2 + 8);
    goto LABEL_13;
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = v14;
  if ( !v14 )
    goto LABEL_17;
  v12 = *a1;
  if ( *(_QWORD *)(a2 + 16) )
    goto LABEL_9;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) != 0;
LABEL_13:
  *(_DWORD *)(v12 + 12) = v13;
  v15 = v11 - 1;
  *(_QWORD *)(*a1 + 16) = -2;
  v16 = *(_QWORD *)(a2 + 16);
  v17 = a1[1];
  if ( v16 )
  {
    if ( v15 < v16 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v15);
      goto LABEL_16;
    }
  }
  else if ( v15 < (*(int (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v18 = v15 + 1;
    goto LABEL_16;
  }
  v18 = 0;
LABEL_16:
  *(_DWORD *)(v17 + 12) = v18;
  *(_QWORD *)(a1[1] + 16) = -1;
LABEL_17:
  result = a1[2];
  if ( a3 )
  {
    *(_DWORD *)(result + 12) = *(_DWORD *)a3;
    *(_QWORD *)(a1[2] + 16) = *(_QWORD *)(a3 + 8);
    result = a1[2];
    *(_DWORD *)(result + 8) = 0;
  }
  else
  {
    v20 = *a1;
    *(_DWORD *)(result + 8) = *(_DWORD *)(*a1 + 8);
    *(_DWORD *)(result + 12) = *(_DWORD *)(v20 + 12);
    *(_QWORD *)(result + 16) = *(_QWORD *)(v20 + 16);
  }
  return result;
}
