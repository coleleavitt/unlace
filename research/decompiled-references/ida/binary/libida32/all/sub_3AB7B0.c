__int64 __fastcall sub_3AB7B0(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  const char *v5; // rax
  int v6; // r14d
  char *v7; // rbp
  char *v8; // rax
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // r14
  __int64 (__fastcall *v15)(__int64, char *, void **, __int64, __int64, __int64); // rax
  int v16; // eax
  unsigned int v17; // r12d
  unsigned int v18; // eax
  char v19; // dl
  void *v20; // rdi
  int v21; // eax
  __int64 (__fastcall *v22)(__int64, char *, void **, __int64, __int64, __int64); // rax
  int v23; // eax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+8h] [rbp-40h]
  int v26[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v26 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v5 = (const char *)skip_spaces(a3);
  v6 = a2[10];
  v7 = (char *)v5;
  if ( !v6 )
  {
    v8 = strchr(v5, 32);
    if ( v8 )
      *v8 = 0;
    if ( (unsigned __int8)eval_expr_long(a2 + 8, a4, v7, 0) )
    {
LABEL_6:
      if ( a2[10] == 3 )
        return 1;
      goto LABEL_19;
    }
    return 0;
  }
  if ( v6 == 3 )
  {
    v10 = strrchr(v5, 58);
    if ( !v10 )
      return 0;
    goto LABEL_12;
  }
  v10 = strrchr(v5, 43);
  if ( v10 )
  {
LABEL_12:
    *v10 = 0;
    v14 = v10 + 1;
    if ( a2[10] == 3 && !*v7 )
      return 0;
    v15 = *(__int64 (__fastcall **)(__int64, char *, void **, __int64, __int64, __int64))(*(_QWORD *)a1 + 72LL);
    if ( v15 == sub_3A98B0 )
      v16 = sub_3A9350(v7, nullptr, (void **)sub_3A98B0, v11, v12, v13);
    else
      v16 = ((__int64 (__fastcall *)(__int64, char *))v15)(a1, v7);
    a2[9] = v16;
    v17 = 0;
    goto LABEL_16;
  }
  if ( v6 != 1 )
  {
    v22 = *(__int64 (__fastcall **)(__int64, char *, void **, __int64, __int64, __int64))(*(_QWORD *)a1 + 72LL);
    if ( v22 == sub_3A98B0 )
      v23 = sub_3A9350(v7, nullptr, (void **)sub_3A98B0, v11, v12, v13);
    else
      v23 = ((__int64 (__fastcall *)(__int64, char *))v22)(a1, v7);
    a2[9] = v23;
    a2[8] = 0;
    goto LABEL_6;
  }
  v17 = sub_614FB0(qword_2CA1698, 93);
  if ( v17 == -1 )
    return 0;
  a2[9] = 0;
  v14 = v7;
  if ( !v7 )
    goto LABEL_6;
LABEL_16:
  if ( !(unsigned __int8)eval_expr_long(a2 + 8, a4, v14, 0) )
    return 0;
  v18 = a2[8];
  if ( a2[10] == 3 )
  {
    if ( v17 < v18 )
    {
      a2[8] = v18 - v17;
      return 1;
    }
    return 0;
  }
  a2[8] = v18 - v17;
LABEL_19:
  ptr = nullptr;
  v25 = 0;
  v19 = sub_3AB4B0(a2, (__int64 *)&ptr);
  v20 = ptr;
  v21 = -1;
  if ( v19 )
    v21 = *(_DWORD *)ptr;
  a2[13] = v21;
  if ( !v20 )
    return 1;
  *(_QWORD *)&v25 = 0;
  qfree(v20);
  return 1;
}

