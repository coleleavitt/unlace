__int64 __fastcall sub_8D4470(_QWORD *a1, _QWORD *a2, char *a3)
{
  char v3; // r14
  _QWORD *v5; // r13
  const char *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  const char *v16; // r14
  size_t v17; // r13
  __int64 v18; // rax
  size_t v19; // [rsp+8h] [rbp-60h]
  _QWORD v20[11]; // [rsp+10h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  if ( !a3 || (v3 = *a3) == 0 )
  {
    if ( !under_debugger )
      interr(2664);
    goto LABEL_26;
  }
  v5 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a1 + 17 )
  {
    if ( v5[5] )
    {
      v6 = (const char *)v5[4];
      if ( !strcmp(v6, a3) )
      {
        if ( !under_debugger )
          interr(2663);
LABEL_26:
        BUG();
      }
    }
    else
    {
      v6 = haystack;
    }
    v19 = strlen(a3);
    if ( !strncmp(a3, v6, v19) && v6[v19] == 47 )
    {
      result = sub_8D9800(21, a3);
      goto LABEL_21;
    }
  }
  if ( v5 != (_QWORD *)a1[19] )
  {
    v7 = std::_Rb_tree_decrement();
    if ( *(_QWORD *)(v7 + 40) )
    {
      v16 = *(const char **)(v7 + 32);
      v17 = strlen(v16);
      if ( strncmp(a3, v16, v17) )
        goto LABEL_13;
      v3 = a3[v17];
    }
    if ( v3 == 47 )
    {
      result = sub_8D9800(17, a3);
LABEL_21:
      if ( (_DWORD)result )
        return result;
    }
  }
LABEL_13:
  v8 = a1[23];
  v20[0] = a3;
  v20[1] = v8;
  *a2 = sub_8D42C0((__int64)(a1 + 16), (__int64)v20);
  v9 = a1[23];
  v10 = (const char *)a1[22];
  v11 = v9 + 1;
  if ( a1[24] < (unsigned __int64)(v9 + 1) )
  {
    v18 = qvector_reserve(a1 + 22, v10, v11, 16);
    a1[22] = v18;
    v10 = (const char *)v18;
    v9 = a1[23];
    v11 = v9 + 1;
  }
  a1[23] = v11;
  v12 = (__int64 *)&v10[16 * v9];
  v13 = qalloc_or_throw(24, v10);
  *(_QWORD *)v13 = 0;
  *(_OWORD *)(v13 + 8) = 0;
  *v12 = v13;
  v14 = a1[25] + 1LL;
  a1[25] = v14;
  v12[1] = v14;
  return 0;
}

