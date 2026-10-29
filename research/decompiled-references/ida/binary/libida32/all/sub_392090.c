unsigned __int64 sub_392090()
{
  _BYTE *v0; // rax
  const char *v1; // rdi
  char *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  size_t v8; // r12
  void *v9; // rdi
  char *v11; // r14
  char *v12; // rax
  char *v13; // rdx
  signed __int64 v14; // r15
  __int64 v15; // rax
  const char *v16; // rsi
  const char *v17; // rsi
  const char *v18; // rdi
  char *v19; // rdi
  void *v20; // rax
  __int64 v21; // rbp
  char *v22; // rdx
  void *v23; // rax
  unsigned __int64 v24; // r8
  const char *v25; // rsi
  char *v26; // rdi
  __int64 v27; // rbp
  __int64 v28; // rbx
  char *v29; // rdx
  void *v30; // rax
  unsigned __int64 v31; // [rsp+0h] [rbp-A0h]
  void *src; // [rsp+8h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+10h] [rbp-90h]
  char *s; // [rsp+28h] [rbp-78h] BYREF
  __int128 v35; // [rsp+30h] [rbp-70h]
  void *ptr; // [rsp+48h] [rbp-58h] BYREF
  __int128 v37; // [rsp+50h] [rbp-50h]
  unsigned __int64 v38; // [rsp+60h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  v37 = 0;
  src = nullptr;
  ptr = nullptr;
  v0 = (_BYTE *)qvector_reserve(&ptr, 0, 4, 1);
  ptr = v0;
  *(_QWORD *)&v37 = 4;
  *(_WORD *)v0 = 11833;
  v0[2] = 51;
  *((_BYTE *)ptr + 3) = 0;
  sub_3573A0((char **)&src);
  if ( ptr )
  {
    *(_QWORD *)&v37 = 0;
    qfree(ptr);
  }
  v1 = haystack;
  if ( n[0] )
    v1 = (const char *)src;
  if ( !(unsigned __int8)reg_subkey_exists(v1, "Licenses\\%s.%s%s%s") )
  {
    v35 = 0;
    s = nullptr;
    ptr = nullptr;
    v37 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *(_QWORD *)&v37 = 1;
    *(_BYTE *)ptr = 0;
    sub_3573A0(&s);
    if ( ptr )
    {
      *(_QWORD *)&v37 = 0;
      qfree(ptr);
    }
    ptr = nullptr;
    v2 = (char *)haystack;
    v37 = 0;
    if ( (_QWORD)v35 )
      v2 = s;
    reg_read_strlist(&ptr, v2);
    v7 = v37;
    if ( (_QWORD)v37 )
    {
      if ( (debug & 0x200) != 0 )
        sub_383DA0();
      v25 = haystack;
      if ( n[0] )
        v25 = (const char *)src;
      reg_write_strlist(&ptr, v25);
      v26 = (char *)ptr;
      if ( ptr )
      {
        v27 = v37;
        if ( (_QWORD)v37 )
        {
          v28 = 0;
          do
          {
            v29 = &v26[24 * v28];
            v30 = *(void **)v29;
            if ( *(_QWORD *)v29 )
            {
              *((_QWORD *)v29 + 1) = 0;
              qfree(v30);
              v26 = (char *)ptr;
            }
            ++v28;
          }
          while ( v27 != v28 );
        }
        *(_QWORD *)&v37 = 0;
        qfree(v26);
      }
      if ( s )
      {
        *(_QWORD *)&v35 = 0;
        qfree(s);
      }
      v9 = src;
      if ( src )
        goto LABEL_17;
      return v38 - __readfsqword(0x28u);
    }
    if ( ptr )
      qfree(ptr);
    if ( s )
    {
      *(_QWORD *)&v35 = 0;
      qfree(s);
    }
    v8 = n[0];
    s = nullptr;
    v35 = 0;
    if ( n[0] )
    {
      s = (char *)qalloc_or_throw(n[0], v2, v3, v4, v5, v6);
      *((_QWORD *)&v35 + 1) = v8;
      memcpy(s, src, v8);
      v11 = s;
      *(_QWORD *)&v35 = v8;
      v12 = strrchr(s, 46);
      v13 = v11;
      if ( !v12 || (v14 = v12 - v11, v12 - v11 == -1) )
      {
LABEL_38:
        if ( v13 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v13);
        }
        goto LABEL_16;
      }
      if ( v14 )
      {
        v24 = v14 + 1;
        if ( v8 < v14 + 1 )
        {
          if ( *((_QWORD *)&v35 + 1) < v24 )
          {
            s = (char *)qvector_reserve(&s, v11, v14 + 1, 1);
            v8 = v35;
            v13 = s;
            v24 = v14 + 1;
          }
          v31 = v24;
          memset(&v13[v8], 0, v24 - v8);
          *(_QWORD *)&v35 = v31;
          v12 = &s[v14];
        }
        else if ( v8 != v14 + 1 )
        {
          *(_QWORD *)&v35 = v14 + 1;
        }
        *v12 = 0;
        v15 = v35;
      }
      else
      {
        if ( !v11 )
        {
          ptr = nullptr;
          v37 = 0;
          goto LABEL_47;
        }
        *(_QWORD *)&v35 = 0;
        qfree(v11);
        s = nullptr;
        v15 = v35;
        *((_QWORD *)&v35 + 1) = 0;
      }
      v16 = haystack;
      ptr = nullptr;
      v37 = 0;
      if ( !v15 )
        goto LABEL_25;
      v11 = s;
LABEL_47:
      v16 = v11;
LABEL_25:
      reg_read_strlist(&ptr, v16);
      if ( (_QWORD)v37 )
      {
        if ( (debug & 0x200) != 0 )
          sub_383DA0();
        v17 = haystack;
        if ( n[0] )
          v17 = (const char *)src;
        reg_write_strlist(&ptr, v17);
        v18 = haystack;
        if ( (_QWORD)v35 )
          LODWORD(v18) = (_DWORD)s;
        reg_delete_tree((int)v18);
        v19 = (char *)ptr;
        v20 = ptr;
        if ( !ptr )
          goto LABEL_37;
        v21 = v37;
        if ( (_QWORD)v37 )
        {
          do
          {
            v22 = &v19[24 * v7];
            v23 = *(void **)v22;
            if ( *(_QWORD *)v22 )
            {
              *((_QWORD *)v22 + 1) = 0;
              qfree(v23);
              v19 = (char *)ptr;
            }
            ++v7;
            v20 = v19;
          }
          while ( v21 != v7 );
        }
      }
      else
      {
        v20 = ptr;
        if ( !ptr )
          goto LABEL_37;
      }
      *(_QWORD *)&v37 = 0;
      qfree(v20);
LABEL_37:
      v13 = s;
      goto LABEL_38;
    }
  }
LABEL_16:
  v9 = src;
  if ( src )
  {
LABEL_17:
    n[0] = 0;
    qfree(v9);
  }
  return v38 - __readfsqword(0x28u);
}

