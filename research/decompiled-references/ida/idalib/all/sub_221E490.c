_QWORD *__fastcall sub_221E490(_QWORD *a1, __int64 a2, unsigned int a3)
{
  const char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r13
  _DWORD *v10; // rax
  unsigned __int64 v11; // r8
  void *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _DWORD **v15; // r11
  _DWORD *v16; // r9
  unsigned int v17; // edi
  __int64 v18; // r15
  const char *v20; // [rsp+8h] [rbp-40h]

  v6 = sub_221DDC0(a3, *(char **)(a2 + 144), *(_QWORD *)(a2 + 152), 0);
  v8 = v7;
  v20 = v6;
  v9 = sub_2219FE0((char *)(a2 + 160), (char *)(a2 + 184), (_QWORD *)(a2 + 192));
  v10 = (_DWORD *)operator new(0x10u);
  v11 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)v10 = 0;
  v12 = v10;
  v10[2] = a3;
  v10[3] = v9;
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * (a3 % v11));
  v14 = a3 % v11;
  if ( !v13 )
    goto LABEL_17;
  v15 = *(_DWORD ***)v13;
  if ( a3 == *(_DWORD *)(*(_QWORD *)v13 + 8LL) )
    goto LABEL_11;
  v16 = *v15;
  if ( !*v15 )
    goto LABEL_17;
  v17 = v16[2];
  if ( v14 != v17 % v11 )
    goto LABEL_17;
  while ( v17 != a3 )
  {
    if ( !*(_QWORD *)v16 )
      goto LABEL_17;
    v15 = (_DWORD **)v16;
    v17 = *(_DWORD *)(*(_QWORD *)v16 + 8LL);
    if ( v14 != v17 % v11 )
      goto LABEL_17;
    v16 = *(_DWORD **)v16;
  }
  if ( *v15 )
LABEL_11:
    operator delete(v12);
  else
LABEL_17:
    sub_221E2D0((char **)(a2 + 24), v14, a3, (char *)v12, 1u);
  v18 = *(_QWORD *)(a2 + 136);
  if ( v18 )
  {
    (*(void (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)v18 + 248LL))(
      *(_QWORD *)(a2 + 136),
      "Attribute",
      9);
    (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(**(_QWORD **)(a2 + 136) + 64LL))(
      *(_QWORD *)(a2 + 136),
      "Tag",
      3,
      a3);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD, const char *, __int64, const char *, __int64))(**(_QWORD **)(a2 + 136) + 232LL))(
        *(_QWORD *)(a2 + 136),
        "TagName",
        7,
        v20,
        v8);
    (*(void (__fastcall **)(_QWORD, char *, __int64, __int64))(**(_QWORD **)(a2 + 136) + 80LL))(
      *(_QWORD *)(a2 + 136),
      "Value",
      5,
      v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 256LL))(v18);
  }
  *a1 = 0;
  return a1;
}
