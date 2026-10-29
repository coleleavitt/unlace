__int64 *__fastcall sub_2F6B70(__int64 *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _QWORD *v5; // rsi
  void (__fastcall *v7)(__int64 *, _QWORD *); // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf

  v5 = (_QWORD *)(a2 - 72);
  v7 = *(void (__fastcall **)(__int64 *, _QWORD *))(*(_QWORD *)(a2 - 72) + 208LL);
  if ( (char *)v7 == (char *)sub_2F6A00 )
    sub_2F6460(a1, v5, 0, a4, (int *)(*(_QWORD *)(a2 + 536) + 104LL * a3));
  else
    v7(a1, v5);
  v8 = sub_15EC2C0(*(_QWORD *)(a2 - 64), *a1);
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v10 = *a1;
  if ( *a1 && (v11 = a1[1], v12 = *(_DWORD *)(v10 + 8) == 1, --*(_DWORD *)(v10 + 8), v12) )
  {
    sub_15D7BC0(v11, v10);
    *a1 = v9;
    return a1;
  }
  else
  {
    *a1 = v8;
    return a1;
  }
}

