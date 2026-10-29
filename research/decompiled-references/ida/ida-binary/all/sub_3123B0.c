__int64 __fastcall sub_3123B0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // r15
  int v8; // r14d
  char v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // r9
  const char *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  int v23; // [rsp+Ch] [rbp-3Ch]

  v7 = a1 + 576;
  v8 = a4;
  v9 = a5;
  v10 = sub_1E90B0(a1 + 576, a2, a3, a4, a5, a6);
  if ( !v10 )
    return 0;
  v14 = v10;
  v15 = *(_DWORD *)(v10 + 72) & 4;
  if ( v9 )
  {
    if ( !(_DWORD)v15 )
    {
      if ( !(unsigned __int8)sub_1E9370(v7, v10, a3, v8, 1u) )
        return 0;
      v17 = (const char *)v14;
      sub_1E9440(v7, (_QWORD *)v14);
LABEL_14:
      if ( (*(_BYTE *)(v14 + 72) & 4) == 0 )
        return 1;
      goto LABEL_11;
    }
    v20 = sub_1E90B0(v7, (const char *)(unsigned int)a2, v11, v12, v13, v15);
    if ( !v20 )
      return 0;
    v21 = sub_1E8D00(v7);
    sub_1E8CC0(v7, v21);
    v17 = (const char *)v20;
    sub_1E8CC0(v7, v20);
  }
  else
  {
    v23 = *(_DWORD *)(v10 + 72) & 4;
    if ( !(unsigned __int8)sub_1E9370(v7, v10, a3, v8, 0) )
      return 0;
    v17 = (const char *)v14;
    sub_1E9440(v7, (_QWORD *)v14);
    if ( !v23 )
      goto LABEL_14;
  }
LABEL_11:
  sub_1F3DE0(a1, v17, v18, v19, a7);
  return 1;
}
