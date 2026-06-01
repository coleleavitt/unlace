__int64 __fastcall sub_41DAC0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rbx
  __int64 v8; // r15
  _QWORD *v9; // r14
  __int64 *v10; // r12
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-110h]
  char **v16; // [rsp+30h] [rbp-E8h]

  v3 = a2[1];
  if ( a3[1] != v3 )
  {
    if ( !under_debugger )
      interr(2862);
    BUG();
  }
  v16 = &off_2BCFF40;
  v14 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)(24 * v14 + *a2);
      v5 = (_QWORD *)(*a3 + 24 * v14);
      v6 = v4[1];
      if ( v6 != v5[1] )
LABEL_4:
        sub_365330();
      if ( v6 )
        break;
LABEL_5:
      ++v14;
      v16 += 2;
      if ( v14 >= a2[1] )
        return 0;
    }
    v8 = 0;
    v9 = (_QWORD *)(*v5 + 8LL);
    v10 = (__int64 *)(*v4 + 8LL);
    while ( 1 )
    {
      v13 = *v10;
      if ( *v9 )
        break;
      v11 = haystack;
      if ( v13 )
        goto LABEL_10;
LABEL_12:
      ++v8;
      v9 += 3;
      v10 += 3;
      if ( v6 == v8 )
        goto LABEL_5;
    }
    v11 = (const char *)*(v9 - 1);
    v12 = haystack;
    if ( v13 )
LABEL_10:
      v12 = (const char *)*(v10 - 1);
    if ( strcmp(v12, v11) )
      goto LABEL_4;
    goto LABEL_12;
  }
  return 0;
}

