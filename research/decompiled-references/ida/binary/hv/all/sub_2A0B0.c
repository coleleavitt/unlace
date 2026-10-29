int __fastcall sub_2A0B0(_QWORD *a1, __int64 *a2, const char *a3, char a4)
{
  _QWORD *v6; // rbp
  size_t v7; // rax
  __int64 v8; // rdx
  const char *v9; // r15
  size_t v10; // r14
  unsigned __int64 v11; // rbp
  size_t v12; // rbx
  size_t v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rsi
  size_t v16; // r11
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rsi
  size_t v20; // rdx
  __int64 v21; // rdi
  size_t v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v30; // [rsp+10h] [rbp-68h]
  size_t v31; // [rsp+18h] [rbp-60h]
  size_t v32; // [rsp+20h] [rbp-58h]
  __int64 v33; // [rsp+28h] [rbp-50h]
  size_t v34; // [rsp+30h] [rbp-48h]

  v6 = a1;
  v7 = strlen(a3);
  v8 = a1[1];
  v9 = (const char *)*a1;
  v10 = v7;
  if ( !v8 )
  {
    if ( a3 && v7 )
      return v7;
    goto LABEL_23;
  }
  if ( v9 >= &v9[v8 - 1] )
  {
    if ( a3 )
    {
      v21 = a1[1];
      if ( v7 )
        goto LABEL_21;
    }
  }
  else
  {
    v11 = (unsigned __int64)&v9[v8 - 1];
    do
    {
      v7 = (size_t)strstr(v9, a3);
      v12 = v7;
      v13 = v11 - (_QWORD)v9;
      if ( !v7 || (v13 = v7 - (_QWORD)v9, (const char *)v7 != v9) || (a4 & 1) == 0 )
      {
        v14 = a2[1];
        v15 = *a2;
        if ( a2[2] < (unsigned __int64)(v14 + 1) )
        {
          v30 = v13;
          v25 = sub_96080(a2, v15, v14 + 1, 24);
          v14 = a2[1];
          v13 = v30;
          *a2 = v25;
          v15 = v25;
        }
        v16 = v13;
        v17 = v15 + 24 * v14;
        *(_OWORD *)(v17 + 8) = 0;
        *(_QWORD *)v17 = 0;
        ++a2[1];
        v18 = *(_QWORD *)(v17 + 8);
        if ( v18 )
          v16 = --v18 + v13;
        v19 = *(_QWORD *)v17;
        v20 = v16 + 1;
        if ( *(_QWORD *)(v17 + 16) < v16 + 1 )
        {
          v34 = v16;
          v33 = v18;
          v32 = v13;
          v31 = v16 + 1;
          v26 = sub_96080(v17, v19, v20, 1);
          v16 = v34;
          v18 = v33;
          v13 = v32;
          v19 = v26;
          *(_QWORD *)v17 = v26;
          v20 = v31;
        }
        *(_QWORD *)(v17 + 8) = v20;
        *(_BYTE *)(v19 + v16) = 0;
        LODWORD(v7) = (unsigned int)memmove((void *)(*(_QWORD *)v17 + v18), v9, v13);
        if ( !v12 )
          break;
      }
      v9 = (const char *)(v12 + v10);
    }
    while ( v12 + v10 < v11 );
    v6 = a1;
    if ( a3 && v10 )
    {
      v21 = a1[1];
      if ( !v21 )
        return v7;
LABEL_21:
      v22 = v21 - 1;
      if ( v22 < v10 )
        return v7;
      LODWORD(v7) = strncmp((const char *)(*v6 + v22 - v10), a3, v10);
      if ( (_DWORD)v7 )
        return v7;
    }
  }
LABEL_23:
  if ( (a4 & 1) == 0 )
  {
    v23 = a2[1];
    v24 = *a2;
    if ( a2[2] < (unsigned __int64)(v23 + 1) )
    {
      v27 = sub_96080(a2, v24, v23 + 1, 24);
      v23 = a2[1];
      *a2 = v27;
      v24 = v27;
    }
    v7 = v24 + 24 * v23;
    *(_QWORD *)v7 = 0;
    *(_OWORD *)(v7 + 8) = 0;
    ++a2[1];
  }
  return v7;
}

