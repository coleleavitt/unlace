__int64 __fastcall sub_1D3700(_QWORD *a1, unsigned int a2, __int64 a3, const char *a4, __int64 a5)
{
  unsigned int v6; // eax
  unsigned int v8; // ebx
  char *v9; // r15
  char *v10; // r13
  __int64 v11; // rbp
  char *v12; // r14
  char *v13; // rax
  char *v14; // r12
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const char *v21; // rsi
  __int64 v22; // rdx
  const char *v23; // rsi
  const char *v24; // rbp
  char *v25; // rdi
  __int64 v26; // rax
  char *v27; // [rsp+8h] [rbp-90h]
  char *v30; // [rsp+20h] [rbp-78h]
  char **p_s2; // [rsp+38h] [rbp-60h] BYREF
  char *s2; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v6 = reg_int_op(a3, 0, a2, 0) | 0xFF000000;
  if ( a2 == v6 )
    return v34 - __readfsqword(0x28u);
  v8 = v6;
  v9 = (char *)(a1 + 1);
  sub_1A1F60((__int64)&s2, a4);
  v10 = (char *)a1[2];
  v30 = (char *)(a1 + 1);
  if ( !v10 )
  {
    v9 = (char *)(a1 + 1);
    goto LABEL_23;
  }
  v11 = v33;
  v12 = s2;
  v13 = (char *)&s1;
  if ( v33 )
    v13 = s2;
  v27 = v13;
  while ( 1 )
  {
    v19 = *((_QWORD *)v10 + 5);
    if ( !v11 )
      break;
    if ( v19 )
      goto LABEL_16;
    v14 = v10;
    v15 = v12;
    v16 = &s1;
LABEL_9:
    v17 = strcmp(v16, v15);
    v18 = *((char **)v10 + 2);
    v10 = *((char **)v10 + 3);
    if ( v17 >= 0 )
    {
      v9 = v14;
      v10 = v18;
    }
    if ( !v10 )
      goto LABEL_18;
  }
  if ( v19 )
  {
LABEL_16:
    v16 = *((const char **)v10 + 4);
    v15 = v27;
    v14 = v10;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v20 = *((_QWORD *)v10 + 2);
    if ( !v20 )
      break;
    v9 = v10;
    v10 = *((char **)v10 + 2);
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_16;
  }
  v9 = v10;
LABEL_18:
  if ( v30 == v9 )
    goto LABEL_23;
  if ( *((_QWORD *)v9 + 5) )
  {
    v21 = *((const char **)v9 + 4);
    if ( !v11 )
      v12 = (char *)&s1;
LABEL_22:
    if ( strcmp(v12, v21) < 0 )
    {
LABEL_23:
      p_s2 = &s2;
      v9 = (char *)sub_1D35E0(a1, v9, (__int64 **)&p_s2);
    }
  }
  else
  {
    v21 = &s1;
    if ( v11 )
      goto LABEL_22;
  }
  v22 = *((_QWORD *)v9 + 8);
  v23 = *((const char **)v9 + 7);
  if ( *((_QWORD *)v9 + 9) < (unsigned __int64)(v22 + 1) )
  {
    v26 = qvector_reserve(v9 + 56, v23, v22 + 1, 24);
    *((_QWORD *)v9 + 7) = v26;
    v22 = *((_QWORD *)v9 + 8);
    v23 = (const char *)v26;
  }
  v24 = &v23[24 * v22];
  *(_QWORD *)v24 = 0;
  v25 = s2;
  *(_OWORD *)(v24 + 8) = 0;
  ++*((_QWORD *)v9 + 8);
  if ( v25 )
  {
    v33 = 0;
    qfree(v25, v23);
  }
  return sub_5264C0(v24, a5, v8, 1);
}
