_QWORD *__fastcall sub_221E0F0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  const char *v6; // rax
  __int64 v7; // rdx
  std::_V2 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  std::_V2 *v11; // r13
  _QWORD *v12; // rax
  unsigned __int64 v13; // r8
  void *v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  _DWORD **v17; // r11
  _DWORD *v18; // rdi
  unsigned int v19; // r9d
  __int64 v20; // r15
  __int64 v22; // [rsp+0h] [rbp-48h]
  const char *v23; // [rsp+8h] [rbp-40h]

  v6 = sub_221DDC0(a3, *(char **)(a2 + 144), *(_QWORD *)(a2 + 152), 0);
  v22 = v7;
  v23 = v6;
  v8 = sub_2219E40((std::_V2 *)(a2 + 160), (unsigned __int64 *)(a2 + 184), (_QWORD *)(a2 + 192));
  v10 = v9;
  v11 = v8;
  v12 = (_QWORD *)operator new(0x20u);
  v13 = *(_QWORD *)(a2 + 88);
  *v12 = 0;
  v14 = v12;
  *((_DWORD *)v12 + 2) = a3;
  v12[2] = v11;
  v12[3] = v10;
  v15 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 8 * (a3 % v13));
  v16 = a3 % v13;
  if ( !v15 )
    goto LABEL_17;
  v17 = *(_DWORD ***)v15;
  if ( a3 == *(_DWORD *)(*(_QWORD *)v15 + 8LL) )
    goto LABEL_11;
  v18 = *v17;
  if ( !*v17 )
    goto LABEL_17;
  v19 = v18[2];
  if ( v16 != v19 % v13 )
    goto LABEL_17;
  while ( a3 != v19 )
  {
    if ( !*(_QWORD *)v18 )
      goto LABEL_17;
    v17 = (_DWORD **)v18;
    v19 = *(_DWORD *)(*(_QWORD *)v18 + 8LL);
    if ( v16 != v19 % v13 )
      goto LABEL_17;
    v18 = *(_DWORD **)v18;
  }
  if ( *v17 )
LABEL_11:
    operator delete(v14);
  else
LABEL_17:
    sub_221DF30((char **)(a2 + 80), v16, a3, (char *)v14, 1u);
  v20 = *(_QWORD *)(a2 + 136);
  if ( v20 )
  {
    (*(void (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)v20 + 248LL))(
      *(_QWORD *)(a2 + 136),
      "Attribute",
      9);
    (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(**(_QWORD **)(a2 + 136) + 64LL))(
      *(_QWORD *)(a2 + 136),
      "Tag",
      3,
      a3);
    if ( v22 )
      (*(void (__fastcall **)(_QWORD, const char *, __int64, const char *, __int64))(**(_QWORD **)(a2 + 136) + 232LL))(
        *(_QWORD *)(a2 + 136),
        "TagName",
        7,
        v23,
        v22);
    (*(void (__fastcall **)(_QWORD, char *, __int64, std::_V2 *, __int64))(**(_QWORD **)(a2 + 136) + 232LL))(
      *(_QWORD *)(a2 + 136),
      "Value",
      5,
      v11,
      v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 256LL))(v20);
  }
  *a1 = 0;
  return a1;
}
