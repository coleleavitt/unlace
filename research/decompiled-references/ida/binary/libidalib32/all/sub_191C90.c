__int64 __fastcall sub_191C90(__int64 *a1, __int64 a2, __int64 a3)
{
  void (*v5)(void); // rax
  size_t v6; // rbp
  __int64 *v7; // r14
  unsigned __int64 v8; // rsi
  const char *v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // r13d
  const char *v12; // rax
  char v13; // dl
  int v14; // eax
  _QWORD *v15; // r12
  __int64 v16; // rbp
  int v17; // ebx
  const char *v18; // rdx
  char *needle; // [rsp+8h] [rbp-50h]
  unsigned int v21; // [rsp+10h] [rbp-48h]
  unsigned __int8 v22; // [rsp+17h] [rbp-41h]
  void *v23; // [rsp+18h] [rbp-40h]

  v5 = *(void (**)(void))(*a1 + 392);
  if ( v5 != nullsub_121 )
    v5();
  v6 = *(_QWORD *)(a3 + 8);
  if ( !v6 )
  {
    v7 = a1 + 20;
    if ( !(unsigned __int8)sub_17EFE0(a1 + 20) )
      return 0;
    v8 = -2;
    v9 = (const char *)(a1 + 20);
    v23 = nullptr;
    if ( *((int *)sub_182CC0(a1 + 20, 0xFFFFFFFFFFFFFFFELL) + 4) <= 0 )
      return 0;
    goto LABEL_7;
  }
  v23 = (void *)qalloc_or_throw();
  memcpy(v23, *(const void **)a3, v6);
  if ( v6 != 1 )
    qstrlwr();
  v7 = a1 + 20;
  if ( (unsigned __int8)sub_17EFE0(a1 + 20) )
  {
    v8 = -2;
    v9 = (const char *)(a1 + 20);
    if ( *((int *)sub_182CC0(a1 + 20, 0xFFFFFFFFFFFFFFFELL) + 4) > 0 )
    {
LABEL_7:
      v10 = 0;
      if ( *(_DWORD *)(a1[325] + 96) != -1 )
        v10 = *(_DWORD *)(a1[325] + 96);
      v21 = v10;
      v11 = v10;
      sub_19F740();
      v12 = s1;
      if ( v6 )
        v12 = (const char *)v23;
      v22 = 0;
      needle = (char *)v12;
      while ( 1 )
      {
LABEL_12:
        if ( (unsigned __int8)sub_19F870(v9, v8) )
          goto LABEL_24;
        ++v11;
        v13 = sub_17EFE0(v7);
        v14 = 0;
        if ( v13 )
          v14 = *((_DWORD *)sub_182CC0(v7, 0xFFFFFFFFFFFFFFFELL) + 4);
        if ( (int)v11 >= v14 )
          v11 = 0;
        if ( v21 == v11 )
          goto LABEL_24;
        v8 = sub_17A590(a1[325], (int)v11);
        v9 = (const char *)v7;
        v15 = (_QWORD *)sub_181B80(v7, v8);
        if ( v15 )
        {
          if ( *(int *)(a1[315] + 48) > 0 )
          {
            v16 = 0;
            v17 = 0;
            while ( 1 )
            {
              sub_17F7F0((__int64)v7, (unsigned int *)(v16 + *v15), 1);
              v8 = (unsigned __int64)needle;
              v9 = v18;
              if ( strstr(v18, needle) )
                break;
              ++v17;
              v16 += 24;
              if ( *(_DWORD *)(a1[315] + 48) <= v17 )
                goto LABEL_12;
            }
            v9 = (const char *)a1[325];
            v8 = v11;
            sub_17AA40(v9, v11, 0xFFFFFFFFLL, 0);
            v22 = 1;
            if ( *(_DWORD *)(a1[315] + 48) > v17 )
              goto LABEL_24;
          }
        }
      }
    }
  }
  v22 = 0;
LABEL_24:
  if ( v23 )
    qfree();
  return v22;
}

