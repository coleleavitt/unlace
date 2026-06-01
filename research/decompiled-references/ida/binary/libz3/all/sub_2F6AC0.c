__int64 *__fastcall sub_2F6AC0(__int64 *a1, _QWORD *a2, unsigned int a3, _QWORD *a4)
{
  void (__fastcall *v5)(__int64 *, _QWORD *); // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf

  v5 = *(void (__fastcall **)(__int64 *, _QWORD *))(*a2 + 208LL);
  if ( (char *)v5 == (char *)sub_2F6A00 )
    sub_2F6460(a1, a2, 0, a4, (int *)(a2[76] + 104LL * a3));
  else
    v5(a1, a2);
  v6 = sub_15EC2C0(a2[1], *a1);
  v7 = v6;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v8 = *a1;
  if ( *a1 && (v9 = a1[1], v10 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), v10) )
  {
    sub_15D7BC0(v9, v8);
    *a1 = v7;
    return a1;
  }
  else
  {
    *a1 = v6;
    return a1;
  }
}

