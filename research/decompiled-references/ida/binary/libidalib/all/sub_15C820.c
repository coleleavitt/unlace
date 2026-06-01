__int64 __fastcall sub_15C820(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v4; // r12
  size_t v7; // r14
  size_t v8; // r15
  void *v9; // r13
  const char *v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rax
  const char *v13; // rsi
  _QWORD *v14; // rbx
  _QWORD *v15; // rdx
  _QWORD *v16; // rdi
  void (*v17)(void); // rdx
  void (__fastcall *v18)(_QWORD); // rcx
  _QWORD *v19; // rdx
  __int64 v21; // rax
  const char *v22; // rsi
  const char *v23; // rdi
  __int64 v26; // [rsp+18h] [rbp-B0h]
  int v27; // [rsp+24h] [rbp-A4h]
  __int64 v28; // [rsp+28h] [rbp-A0h]

  v4 = nullptr;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    v4 = (void *)qalloc_or_throw();
    memcpy(v4, *(const void **)(a2 + 8), v7);
  }
  v8 = *(_QWORD *)(a2 + 40);
  v9 = nullptr;
  if ( v8 )
  {
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, *(const void **)(a2 + 32), v8);
  }
  v26 = *(_QWORD *)(a2 + 56);
  v28 = *(_QWORD *)(a2 + 64);
  v27 = *(_DWORD *)(a2 + 72);
  if ( !a3 || (v10 = (const char *)skip_spaces(), !*v10) )
    v10 = nullptr;
  v11 = sub_15BFE0(a2, v10, a4);
  if ( (_BYTE)v11 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    if ( v7 )
    {
      v13 = (const char *)v4;
      if ( !v12 )
      {
        if ( strcmp(s1, (const char *)v4) )
          goto LABEL_11;
LABEL_24:
        v21 = *(_QWORD *)(a2 + 40);
        if ( v8 )
        {
          v22 = (const char *)v9;
          v23 = s1;
          if ( !v21 )
            goto LABEL_27;
        }
        else
        {
          v22 = s1;
          if ( !v21 )
            goto LABEL_28;
        }
        v23 = *(const char **)(a2 + 32);
LABEL_27:
        if ( !strcmp(v23, v22) )
        {
LABEL_28:
          if ( *(_QWORD *)(a2 + 56) == v26 && *(_QWORD *)(a2 + 64) == v28 && v27 == *(_DWORD *)(a2 + 72) )
            goto LABEL_17;
        }
LABEL_11:
        v14 = *(_QWORD **)(a1 + 40);
        while ( (_QWORD *)(a1 + 40) != v14 )
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
          v16 = (_QWORD *)v15[2];
          v17 = *(void (**)(void))(*v16 + 24LL);
          if ( (char *)v17 == (char *)sub_158590 )
          {
            v18 = (void (__fastcall *)(_QWORD))v16[2];
            v19 = (_QWORD *)(v16[1] + v16[3]);
            if ( ((unsigned __int8)v18 & 1) != 0 )
              v18 = *(void (__fastcall **)(_QWORD))((char *)v18 + *v19 - 1);
            v18(v19);
          }
          else
          {
            v17();
          }
        }
        goto LABEL_17;
      }
    }
    else
    {
      v13 = s1;
      if ( !v12 )
        goto LABEL_24;
    }
    if ( strcmp(*(const char **)(a2 + 8), v13) )
      goto LABEL_11;
    goto LABEL_24;
  }
LABEL_17:
  if ( v9 )
    qfree();
  if ( v4 )
    qfree();
  return v11;
}

