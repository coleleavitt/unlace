__int64 __fastcall sub_3AFEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v5; // rax
  int v6; // r14d
  char *v7; // rbp
  char *v8; // rax
  char *v10; // rax
  char *v11; // r14
  __int64 (__fastcall *v12)(__int64, char *); // rax
  int v13; // eax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  char v16; // dl
  void *v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, char *); // rax
  int v20; // eax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  int v23[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v23 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v5 = (const char *)skip_spaces(a3);
  v6 = *(_DWORD *)(a2 + 44);
  v7 = (char *)v5;
  if ( !v6 )
  {
    v8 = strchr(v5, 32);
    if ( v8 )
      *v8 = 0;
    if ( (unsigned __int8)eval_expr_long(a2 + 32, a4, v7, 0) )
    {
LABEL_6:
      if ( *(_DWORD *)(a2 + 44) == 3 )
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
    v11 = v10 + 1;
    if ( *(_DWORD *)(a2 + 44) == 3 && !*v7 )
      return 0;
    v12 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 72LL);
    if ( v12 == sub_3ADF90 )
      v13 = sub_3ADA30(v7, nullptr);
    else
      v13 = v12(a1, v7);
    *(_DWORD *)(a2 + 40) = v13;
    v14 = 0;
    goto LABEL_16;
  }
  if ( v6 != 1 )
  {
    v19 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 72LL);
    if ( v19 == sub_3ADF90 )
      v20 = sub_3ADA30(v7, nullptr);
    else
      v20 = v19(a1, v7);
    *(_DWORD *)(a2 + 40) = v20;
    *(_QWORD *)(a2 + 32) = 0;
    goto LABEL_6;
  }
  v14 = sub_631AD0(qword_2CCB598, 93);
  if ( v14 == -1 )
    return 0;
  *(_DWORD *)(a2 + 40) = 0;
  v11 = v7;
  if ( !v7 )
    goto LABEL_6;
LABEL_16:
  if ( !(unsigned __int8)eval_expr_long(a2 + 32, a4, v11, 0) )
    return 0;
  v15 = *(_QWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 44) == 3 )
  {
    if ( v14 < v15 )
    {
      *(_QWORD *)(a2 + 32) = v15 - v14;
      return 1;
    }
    return 0;
  }
  *(_QWORD *)(a2 + 32) = v15 - v14;
LABEL_19:
  ptr = nullptr;
  v22 = 0;
  v16 = sub_3AFBD0(a2, (__int64 *)&ptr);
  v17 = ptr;
  v18 = -1;
  if ( v16 )
    v18 = *(_QWORD *)ptr;
  *(_QWORD *)(a2 + 56) = v18;
  if ( !v17 )
    return 1;
  *(_QWORD *)&v22 = 0;
  qfree(v17);
  return 1;
}
