void __fastcall sub_221F830(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _DWORD *v10; // rax
  unsigned __int64 v11; // r8
  void *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _DWORD **v15; // r11
  _DWORD *v16; // r9
  unsigned int v17; // edi
  const char *v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-48h]
  const char *v22; // [rsp+8h] [rbp-40h]

  v10 = (_DWORD *)operator new(0x10u);
  v11 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v10 = 0;
  v12 = v10;
  v10[2] = a2;
  v10[3] = a3;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * (a2 % v11));
  v14 = a2 % v11;
  if ( !v13 )
    goto LABEL_17;
  v15 = *(_DWORD ***)v13;
  if ( a2 == *(_DWORD *)(*(_QWORD *)v13 + 8LL) )
    goto LABEL_11;
  v16 = *v15;
  if ( !*v15 )
    goto LABEL_17;
  v17 = v16[2];
  if ( v14 != v17 % v11 )
    goto LABEL_17;
  while ( a2 != v17 )
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
    sub_221E2D0((char **)(a1 + 24), v14, a2, (char *)v12, 1u);
  if ( *(_QWORD *)(a1 + 136) )
  {
    v18 = sub_221DDC0(a2, *(char **)(a1 + 144), *(_QWORD *)(a1 + 152), 0);
    v19 = *(_QWORD *)(a1 + 136);
    v22 = v18;
    v21 = v20;
    (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v19 + 248LL))(v19, "Attribute", 9);
    (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(**(_QWORD **)(a1 + 136) + 64LL))(
      *(_QWORD *)(a1 + 136),
      "Tag",
      3,
      a2);
    (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(**(_QWORD **)(a1 + 136) + 64LL))(
      *(_QWORD *)(a1 + 136),
      "Value",
      5,
      a3);
    if ( v21 )
    {
      (*(void (__fastcall **)(_QWORD, const char *, __int64, const char *))(**(_QWORD **)(a1 + 136) + 232LL))(
        *(_QWORD *)(a1 + 136),
        "TagName",
        7,
        v22);
      if ( !a5 )
        goto LABEL_15;
    }
    else if ( !a5 )
    {
LABEL_15:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 256LL))(v19);
      return;
    }
    (*(void (__fastcall **)(_QWORD, char *, __int64, __int64, __int64))(**(_QWORD **)(a1 + 136) + 232LL))(
      *(_QWORD *)(a1 + 136),
      "Description",
      11,
      a4,
      a5);
    goto LABEL_15;
  }
}
