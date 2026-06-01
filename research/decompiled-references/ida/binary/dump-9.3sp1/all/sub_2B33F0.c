_BOOL8 __fastcall sub_2B33F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // r12
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  _BOOL8 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // ebx
  const char *v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48) )
LABEL_17:
    sub_2ADE60();
  v4 = 80 * a3;
  v5 = 80 * a3 + *(_QWORD *)(a1 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AD100 )
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
  if ( v8 == sub_2AD100 )
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
  switch_dbctx();
  result = 1;
  if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v7 + 8) )
  {
    v12 = *(unsigned int *)(v7 + 16);
    if ( *(_DWORD *)(v9 + 16) == (_DWORD)v12 )
    {
      v17 = nullptr;
      v18 = 0;
      sub_2AE320(&v17, v7 + 24, v10, v12);
      v13 = (__int64)v17;
      v14 = v17;
      if ( !v18 )
        v14 = s1;
      v15 = s1;
      if ( *(_QWORD *)(v9 + 32) )
        v15 = *(const char **)(v9 + 24);
      v16 = strcmp(v15, v14);
      if ( v13 )
        qfree(v13);
      return v16 != 0;
    }
  }
  return result;
}
