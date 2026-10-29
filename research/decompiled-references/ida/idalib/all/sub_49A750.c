__int64 __fastcall sub_49A750(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v6; // rsi
  unsigned int v8; // r13d
  const char *v9; // rax
  const char *v10; // r15
  const char **v11; // rbx
  void *v12; // rdi
  const char **v13; // rbp
  const char *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rbp
  const char **v17; // rax
  char *v18; // rdi
  char *v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  char *v22; // rax
  void *v23; // rdi
  const char **v25; // rbx
  const char **v26; // rbp
  const char *v27; // rcx
  void *v28; // [rsp+10h] [rbp-98h] BYREF
  __int128 v29; // [rsp+18h] [rbp-90h]
  void *v30; // [rsp+30h] [rbp-78h] BYREF
  __int128 v31; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int64 v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v34 = __readfsqword(0x28u);
  v29 = 0;
  v28 = nullptr;
  v30 = nullptr;
  v31 = 0;
  v8 = sub_64E0C0(a1, v6);
  if ( a4 < v8 )
  {
    do
    {
      v9 = (const char *)sub_64DFD0(a1, *(_QWORD *)(a1 + 8), a4, 0);
      v10 = v9;
      if ( v9 && *v9 )
      {
        if ( !(unsigned int)sub_6500C0(a2, a2[1], v9) )
        {
          sub_472300((__int64)&ptr, v10);
          sub_4790E0((__int64 *)&v28, (unsigned __int64)&ptr);
          if ( ptr )
          {
            v33 = 0;
            qfree(ptr);
          }
        }
        if ( a3 )
        {
          if ( *v10 )
          {
            if ( !(unsigned int)sub_6500C0(a3, a3[1], v10) )
            {
              sub_472300((__int64)&ptr, v10);
              sub_4790E0((__int64 *)&v30, (unsigned __int64)&ptr);
              if ( ptr )
              {
                v33 = 0;
                qfree(ptr);
              }
            }
          }
        }
      }
      ++a4;
    }
    while ( v8 != a4 );
  }
  if ( (_QWORD)v29 )
  {
    switch_dbctx(*(int *)(*a2 + 88LL));
    v25 = (const char **)v28;
    v26 = (const char **)((char *)v28 + 24 * v29);
    if ( v26 != v28 )
    {
      do
      {
        v27 = haystack;
        if ( v25[1] )
          v27 = *v25;
        sub_658420(a2, 0, a2[1], v27);
        v25 += 3;
      }
      while ( v26 != v25 );
    }
  }
  if ( (_QWORD)v31 )
  {
    switch_dbctx(*(int *)(*a3 + 88LL));
    v11 = (const char **)v30;
    v12 = v30;
    v13 = (const char **)((char *)v30 + 24 * v31);
    if ( v13 != v30 )
    {
      do
      {
        v14 = haystack;
        if ( v11[1] )
          v14 = *v11;
        sub_658420(a3, 0, a3[1], v14);
        v11 += 3;
      }
      while ( v13 != v11 );
      v11 = (const char **)v30;
      v12 = v30;
    }
    if ( v11 )
    {
      v15 = v31;
      if ( (_QWORD)v31 )
      {
        v16 = 0;
        do
        {
          v17 = &v11[3 * v16];
          v18 = (char *)*v17;
          if ( *v17 )
          {
            v17[1] = nullptr;
            qfree(v18);
            v11 = (const char **)v30;
          }
          ++v16;
          v12 = v11;
        }
        while ( v15 != v16 );
      }
      goto LABEL_26;
    }
  }
  else
  {
    v12 = v30;
    if ( v30 )
    {
LABEL_26:
      *(_QWORD *)&v31 = 0;
      qfree(v12);
    }
  }
  v19 = (char *)v28;
  if ( v28 )
  {
    v20 = v29;
    if ( (_QWORD)v29 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[24 * v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v23);
          v19 = (char *)v28;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v29 = 0;
    qfree(v19);
  }
  return v8;
}
