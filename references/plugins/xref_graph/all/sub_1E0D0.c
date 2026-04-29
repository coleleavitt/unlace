unsigned __int64 __fastcall sub_1E0D0(_QWORD *a1, const char **a2)
{
  size_t v3; // rbx
  const char *p_src; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdi
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 *v17; // rbx
  __int64 *v18; // r14
  const char *v19; // rdi
  __int64 v20; // r8
  size_t v21; // r9
  void *v22; // rax
  const char *v23; // rsi
  const char *v24; // r10
  void *v25; // rdi
  QT::QGraphicsScene *v26; // rbx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-70h]
  __int64 v33; // [rsp+0h] [rbp-70h]
  size_t v34; // [rsp+8h] [rbp-68h]
  const char *v35; // [rsp+10h] [rbp-60h]
  void *src; // [rsp+18h] [rbp-58h] BYREF
  __int128 v37; // [rsp+20h] [rbp-50h]
  unsigned __int64 v38; // [rsp+30h] [rbp-40h]

  v3 = (size_t)a2[1];
  v38 = __readfsqword(0x28u);
  v37 = 0;
  src = nullptr;
  if ( v3 )
  {
    v22 = (void *)qalloc_or_throw(v3);
    v23 = *a2;
    *((_QWORD *)&v37 + 1) = v3;
    src = v22;
    memcpy(v22, v23, v3);
    *(_QWORD *)&v37 = v3;
  }
  p_src = (const char *)&src;
  if ( (unsigned __int8)sub_1A930((__int64)a1, (const char **)&src, "Enter the new name for the graph") )
  {
    v12 = sub_1BDA0(a1, (__int64)a2, v6, v7, v8, v9);
    if ( v12 )
    {
      p_src = (const char *)&src;
      sub_20270(v12, (unsigned int)&src, v13, v14, v15, v16);
    }
    else
    {
      p_src = (const char *)&src;
      v26 = sub_1DD00((__int64)a1, (__int64)a2, 0);
      sub_20270((_DWORD)v26, (unsigned int)&src, v27, v28, v29, v30);
      if ( v26 )
        (*(void (__fastcall **)(QT::QGraphicsScene *))(*(_QWORD *)v26 + 32LL))(v26);
    }
    v17 = (__int64 *)a1[220];
    v18 = &v17[3 * a1[221]];
    if ( v17 == v18 )
    {
LABEL_21:
      sub_1A840((__int64)a1);
      v10 = src;
      if ( !src )
        return v38 - __readfsqword(0x28u);
      goto LABEL_5;
    }
    while ( 1 )
    {
      p_src = s1;
      if ( a2[1] )
        p_src = *a2;
      v19 = s1;
      if ( v17[1] )
        v19 = (const char *)*v17;
      if ( strcmp(v19, p_src) || v17 == (__int64 *)&src )
        goto LABEL_11;
      v20 = v37;
      if ( (_QWORD)v37 && (v21 = v37 - 1, (_QWORD)v37 != 1) )
      {
        v24 = (const char *)src;
        v25 = (void *)*v17;
        if ( v17[2] < (unsigned __int64)v37 )
        {
          v35 = (const char *)src;
          v34 = v37 - 1;
          v33 = v37;
          v31 = qvector_reserve(v17, *v17, v37, 1);
          v24 = v35;
          v21 = v34;
          *v17 = v31;
          v25 = (void *)v31;
          v20 = v33;
        }
        v17[1] = v20;
        p_src = v24;
        v32 = v20;
        memmove(v25, v24, v21);
        *(_BYTE *)(*v17 + v32 - 1) = 0;
LABEL_11:
        v17 += 3;
        if ( v18 == v17 )
          goto LABEL_21;
      }
      else
      {
        v17[1] = 0;
        v17 += 3;
        if ( v18 == v17 )
          goto LABEL_21;
      }
    }
  }
  v10 = src;
  if ( src )
  {
LABEL_5:
    *(_QWORD *)&v37 = 0;
    qfree(v10, p_src, v6, v7);
  }
  return v38 - __readfsqword(0x28u);
}
