const char *__fastcall sub_48E350(__int64 *a1, int *a2)
{
  unsigned __int64 v2; // rcx
  const char *v3; // rbp
  __int64 v4; // rbx
  const char **v5; // rdx
  const char *v6; // r14
  unsigned __int64 v7; // r12
  size_t v8; // rax
  unsigned __int64 v9; // rcx
  size_t v10; // r12
  size_t v11; // r15
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  const char **v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  size_t v18; // rax
  size_t v19; // rax
  unsigned __int64 v20; // [rsp+0h] [rbp-70h]
  unsigned __int64 v21; // [rsp+0h] [rbp-70h]
  unsigned __int64 v22; // [rsp+0h] [rbp-70h]
  __int64 v24; // [rsp+18h] [rbp-58h] BYREF
  __int128 i; // [rsp+20h] [rbp-50h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v2 = 0;
  v3 = nullptr;
  v4 = 0;
  v26 = __readfsqword(0x28u);
  v24 = 0;
  for ( i = 0; ; v2 = *((_QWORD *)&i + 1) )
  {
    v13 = *a2;
    if ( (unsigned int)*a2 > 0x2F )
      break;
    v5 = (const char **)(*((_QWORD *)a2 + 2) + v13);
    *a2 = v13 + 8;
    v6 = *v5;
    if ( !*v5 )
      goto LABEL_13;
LABEL_3:
    if ( v4 )
    {
      if ( v4 != 1 && v3[v4 - 2] == 47 || *v6 == 47 )
      {
        v20 = v2;
        v18 = strlen(v6);
        v9 = v20;
        v10 = v18;
LABEL_22:
        v11 = --v4 + v10;
        v12 = v4 + v10 + 1;
        if ( v9 >= v12 )
          goto LABEL_10;
        goto LABEL_23;
      }
      v7 = v4-- + 1;
      if ( v2 >= v7 )
        goto LABEL_8;
LABEL_20:
      v24 = qvector_reserve(&v24, v3, v7, 1);
      v3 = (const char *)v24;
      goto LABEL_8;
    }
    if ( *v6 == 47 )
    {
      v22 = v2;
      v19 = strlen(v6);
      v9 = v22;
      v10 = v19;
      v11 = v19;
      goto LABEL_9;
    }
    v7 = 2;
    if ( v2 < 2 )
      goto LABEL_20;
LABEL_8:
    *(_QWORD *)&i = v7;
    v3[v4] = 47;
    *(_BYTE *)(v24 + v4 + 1) = 0;
    v8 = strlen(v6);
    v9 = *((_QWORD *)&i + 1);
    v4 = i;
    v3 = (const char *)v24;
    v10 = v8;
    v11 = v8;
    if ( (_QWORD)i )
      goto LABEL_22;
LABEL_9:
    v12 = v11 + 1;
    if ( v9 >= v11 + 1 )
      goto LABEL_10;
LABEL_23:
    v21 = v12;
    v24 = qvector_reserve(&v24, v3, v12, 1);
    v12 = v21;
    v3 = (const char *)v24;
LABEL_10:
    *(_QWORD *)&i = v12;
    v3[v11] = 0;
    memmove((void *)(v4 + v24), v6, v10);
    v4 = i;
    v3 = (const char *)v24;
  }
  v14 = *((const char ***)a2 + 1);
  *((_QWORD *)a2 + 1) = v14 + 1;
  v6 = *v14;
  if ( *v14 )
    goto LABEL_3;
LABEL_13:
  v15 = a1[2];
  v16 = *a1;
  a1[1] = v4;
  *a1 = (__int64)v3;
  *((_QWORD *)&i + 1) = v15;
  a1[2] = v2;
  if ( !v4 )
    v3 = &s1;
  v24 = v16;
  if ( v16 )
  {
    *(_QWORD *)&i = 0;
    qfree(v16, (const char *)a1);
  }
  return v3;
}
