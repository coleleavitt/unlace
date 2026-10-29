__int64 __fastcall sub_556B60(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v3; // r12
  char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rdx
  int v13; // r13d
  __int64 v14; // r12
  __int64 v15; // r15
  const char *v16; // rax
  unsigned int v17; // ebx
  const char *v18; // rsi
  const char *v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rdx
  const char *v23; // [rsp+0h] [rbp-60h]
  char *s2; // [rsp+8h] [rbp-58h] BYREF
  __int128 v25; // [rsp+10h] [rbp-50h]
  unsigned __int64 v26; // [rsp+20h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 40);
  v26 = __readfsqword(0x28u);
  v4 = (char *)a3;
  v25 = 0;
  s2 = nullptr;
  if ( a3 )
  {
    v5 = strlen(a3);
    v6 = v5 + 1;
    v7 = v5;
    s2 = (char *)qvector_reserve(&s2, 0, v5 + 1, 1);
    *(_QWORD *)&v25 = v6;
    memmove(s2, v4, v7);
    s2[v7] = 0;
    v4 = s2;
    v8 = *(_QWORD *)(v3 + 120);
    v9 = *(_QWORD *)(qword_2CCB598 + 1656);
    v10 = *(__int64 **)(v9 + 16);
    v11 = &v10[*(_QWORD *)(v9 + 24)];
    if ( v10 != v11 )
      goto LABEL_5;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(v3 + 120);
  v22 = *(_QWORD *)(qword_2CCB598 + 1656);
  v10 = *(__int64 **)(v22 + 16);
  v11 = &v10[*(_QWORD *)(v22 + 24)];
  if ( v10 == v11 )
    return -1;
LABEL_5:
  while ( 1 )
  {
    v12 = *v10;
    if ( *(_QWORD *)(*v10 + 48) == v8 )
      break;
    if ( v11 == ++v10 )
      goto LABEL_17;
  }
  if ( !v12 || (v13 = *(_DWORD *)(v3 + 136)) == 0 )
  {
LABEL_17:
    if ( v4 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v4);
    }
    return -1;
  }
  v14 = v25;
  v15 = *(_QWORD *)(v12 + 56);
  v16 = haystack;
  if ( (_QWORD)v25 )
    v16 = v4;
  v17 = 0;
  v23 = v16;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v15 + 8);
    if ( v14 )
    {
      v18 = v4;
      v19 = haystack;
      if ( !v20 )
        goto LABEL_12;
      goto LABEL_16;
    }
    if ( !v20 )
      break;
LABEL_16:
    v19 = *(const char **)v15;
    v18 = v23;
LABEL_12:
    ++v17;
    if ( !strcmp(v19, v18) )
      goto LABEL_23;
    v15 += 24;
    if ( v13 == v17 )
      goto LABEL_17;
  }
  ++v17;
LABEL_23:
  if ( v4 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v4);
  }
  return v17;
}
