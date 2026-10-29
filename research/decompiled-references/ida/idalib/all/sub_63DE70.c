__int64 __fastcall sub_63DE70(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // r14
  char *v5; // r15
  char *v6; // rbx
  char *v7; // r12
  char *v8; // rbp
  char *v9; // r13
  bool v10; // al
  bool v11; // dl
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 i; // rbx
  char *v17; // rax
  void *v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbx
  char *v21; // rax
  void *v22; // rdi
  __int64 v24; // [rsp+0h] [rbp-80h]
  void *v25; // [rsp+8h] [rbp-78h] BYREF
  __int128 v26; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v28; // [rsp+30h] [rbp-50h]
  unsigned __int64 v29; // [rsp+40h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v26 = 0;
  v25 = nullptr;
  sub_63DA90(a2, (__int64 *)&v25, a3);
  v28 = 0;
  ptr = nullptr;
  sub_63DA90(a1, (__int64 *)&ptr, a3);
  v4 = (char *)ptr;
  v5 = (char *)v25;
  v24 = v28;
  v6 = (char *)ptr;
  v7 = (char *)ptr + 24 * v28;
  v8 = (char *)v25;
  v9 = (char *)v25 + 24 * v26;
  v10 = ptr != v7;
  v11 = v25 != v9;
  if ( v25 != v9 && ptr != v7 )
  {
    while ( 1 )
    {
      v14 = *((_QWORD *)v6 + 1);
      if ( *((_QWORD *)v8 + 1) )
        break;
      v12 = haystack;
      if ( v14 )
        goto LABEL_5;
LABEL_7:
      v6 += 24;
      v8 += 24;
      v10 = v7 != v6;
      v11 = v9 != v8;
      if ( v7 == v6 || v9 == v8 )
        goto LABEL_12;
    }
    v12 = *(const char **)v8;
    v13 = haystack;
    if ( v14 )
LABEL_5:
      v13 = *(const char **)v6;
    if ( strcmp(v13, v12) )
      goto LABEL_30;
    goto LABEL_7;
  }
LABEL_12:
  if ( v6 == v7 && v11 )
LABEL_30:
    v15 = 1;
  else
    v15 = v10 & (unsigned __int8)(v9 == v8);
  if ( v4 )
  {
    if ( v24 )
    {
      for ( i = 0; i != v24; ++i )
      {
        v17 = &v4[24 * i];
        v18 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v18);
        }
        v4 = (char *)ptr;
      }
    }
    *(_QWORD *)&v28 = 0;
    qfree(v4);
    v5 = (char *)v25;
  }
  if ( v5 )
  {
    v19 = v26;
    if ( (_QWORD)v26 )
    {
      v20 = 0;
      do
      {
        v21 = &v5[24 * v20];
        v22 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          qfree(v22);
        }
        ++v20;
        v5 = (char *)v25;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v5);
  }
  return v15;
}
