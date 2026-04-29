_BOOL8 __fastcall sub_2AF770(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // r12
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbx
  _BOOL8 result; // rax
  const char *v11; // rbp
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // ebx
  const char *v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48) )
LABEL_17:
    sub_2AA1E0();
  v4 = 80 * a3;
  v5 = 80 * a3 + *(_QWORD *)(a1 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2A9480 )
  {
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 56) && *(_DWORD *)(v5 + 16) == *(_DWORD *)(v5 + 64) )
      goto LABEL_17;
  }
  else if ( !v6() )
  {
    goto LABEL_17;
  }
  v7 = v4 + *(_QWORD *)(a2 + 40);
  v8 = **(bool (__fastcall ***)(__int64))v7;
  if ( v8 == sub_2A9480 )
  {
    if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 56) && *(_DWORD *)(v7 + 16) == *(_DWORD *)(v7 + 64) )
      goto LABEL_17;
  }
  else
  {
    if ( !v8(v4 + *(_QWORD *)(a2 + 40)) )
      goto LABEL_17;
    v7 = v4 + *(_QWORD *)(a2 + 40);
  }
  v9 = *(_QWORD *)(a1 + 40) + v4;
  switch_dbctx(*(int *)(a1 + 8));
  result = 1;
  if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v7 + 8) && *(_DWORD *)(v9 + 16) == *(_DWORD *)(v7 + 16) )
  {
    v15 = nullptr;
    v16 = 0;
    sub_2AA6A0(&v15, v7 + 24);
    v11 = v15;
    v12 = v15;
    if ( !v16 )
      v12 = s1;
    v13 = s1;
    if ( *(_QWORD *)(v9 + 32) )
      v13 = *(const char **)(v9 + 24);
    v14 = strcmp(v13, v12);
    if ( v11 )
      qfree(v11);
    return v14 != 0;
  }
  return result;
}
