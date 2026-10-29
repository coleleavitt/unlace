__int64 __fastcall sub_614540(__int64 a1, __int64 a2, void **a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  const char *v9; // rsi
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  size_t v16; // r12
  signed __int64 v18; // rax
  __int64 v19; // r8
  size_t v20; // rdx
  size_t v21; // r14
  signed __int64 v22; // rax
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  char *v25; // rsi
  __int64 v26; // rax
  char *v27; // rsi
  __int64 v28; // rax
  int v29; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v30; // [rsp+8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a2 + 56);
  if ( (v5 & 0x4070) == 0 )
    return 0;
  if ( (v5 & 8) != 0 )
  {
    if ( (v5 & 0x800) != 0 )
    {
      if ( !under_debugger )
        interr(2044);
      BUG();
    }
    v9 = *(const char **)(a2 + 48);
    if ( v9 )
    {
      v10 = *(_QWORD *)a1;
      v11 = sub_60DEE0(v10, v9, 0);
      v15 = *(unsigned __int8 *)(a2 + 32);
      v29 = v11;
      if ( (*(_BYTE *)(a2 + 56) & 0xF) == 0 )
        sub_60D4F0(v10, v9, v12, v13, v14, v15);
    }
    else
    {
      v15 = *(unsigned __int8 *)(a2 + 32);
      v29 = *(_DWORD *)(a1 + 8);
    }
    return sub_79BAE0(&v29, *(_QWORD *)a1, a3, 1, *(unsigned int *)(a2 + 8), v15);
  }
  else
  {
    v16 = 0;
    v18 = sub_613F40(a1, a2, nullptr, 0, a5);
    v20 = (size_t)a3[1];
    v21 = v18;
    v22 = 0;
    if ( (__int64)v21 <= 0 )
      goto LABEL_9;
    if ( v20 < v21 )
    {
      v27 = (char *)*a3;
      if ( (unsigned __int64)a3[2] < v21 )
      {
        v28 = qvector_reserve(a3, v27, v21, 1);
        v20 = (size_t)a3[1];
        *a3 = (void *)v28;
        v27 = (char *)v28;
      }
      memset(&v27[v20], 0, v21 - v20);
      a3[1] = (void *)v21;
    }
    else if ( v21 != v20 )
    {
      a3[1] = (void *)v21;
    }
    v23 = sub_613F40(a1, a2, *a3, v21, v19);
    v24 = 0;
    if ( v23 >= 0 )
      v24 = v23;
    v16 = v24;
    v22 = v24;
    v20 = (size_t)a3[1];
    if ( v20 >= v16 )
    {
LABEL_9:
      if ( v22 != v20 )
        a3[1] = (void *)v22;
    }
    else
    {
      v25 = (char *)*a3;
      if ( (unsigned __int64)a3[2] < v16 )
      {
        v26 = qvector_reserve(a3, v25, v16, 1);
        v20 = (size_t)a3[1];
        *a3 = (void *)v26;
        v25 = (char *)v26;
      }
      memset(&v25[v20], 0, v16 - v20);
      a3[1] = (void *)v16;
    }
  }
  return v16;
}

