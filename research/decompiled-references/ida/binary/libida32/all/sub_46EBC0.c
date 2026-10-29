__int64 __fastcall sub_46EBC0(int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 (__fastcall *v4)(__int64, __int64, unsigned int); // rax
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // rax

  v3 = a3;
  v4 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int))(*(_QWORD *)a1 + 80LL);
  if ( v4 != sub_46E290 )
    return v4((__int64)a1, a2, a3);
  v5 = a3;
  v6 = switch_dbctx(*(int *)(a2 + 8));
  v7 = sub_4F7C00(v6);
  v8 = sub_46BE60(*(_DWORD **)v7, *(_QWORD *)v7 + 8LL * *(_QWORD *)(v7 + 8), v3);
  if ( v9 == v8 || v3 != *v8 || (v10 = v8[1], v10 == -1) )
    sub_46B6D0();
  v11 = switch_dbctx(a1[2]);
  return sub_4F8530(*(_QWORD *)(v11 + 1480), v5, v10);
}

