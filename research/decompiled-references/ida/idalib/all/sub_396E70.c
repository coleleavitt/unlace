unsigned __int64 sub_396E70()
{
  _BYTE *v0; // rax
  const char *v1; // rdi
  char *v2; // rsi
  __int64 v3; // rbx
  size_t v4; // r12
  void *v5; // rdi
  char *v7; // r14
  char *v8; // rax
  char *v9; // rdx
  signed __int64 v10; // r15
  __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rsi
  const char *v14; // rdi
  char *v15; // rdi
  void *v16; // rax
  __int64 v17; // rbp
  char *v18; // rdx
  void *v19; // rax
  unsigned __int64 v20; // r8
  const char *v21; // rsi
  char *v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rdx
  void *v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-A0h]
  void *src; // [rsp+8h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+10h] [rbp-90h]
  char *s; // [rsp+28h] [rbp-78h] BYREF
  __int128 v31; // [rsp+30h] [rbp-70h]
  void *ptr; // [rsp+48h] [rbp-58h] BYREF
  __int128 v33; // [rsp+50h] [rbp-50h]
  unsigned __int64 v34; // [rsp+60h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  v33 = 0;
  src = nullptr;
  ptr = nullptr;
  v0 = (_BYTE *)qvector_reserve(&ptr, 0, 4, 1);
  ptr = v0;
  *(_QWORD *)&v33 = 4;
  *(_WORD *)v0 = 11833;
  v0[2] = 51;
  *((_BYTE *)ptr + 3) = 0;
  sub_35A790((char **)&src);
  if ( ptr )
  {
    *(_QWORD *)&v33 = 0;
    qfree(ptr);
  }
  v1 = haystack;
  if ( n[0] )
    v1 = (const char *)src;
  if ( !(unsigned __int8)reg_subkey_exists(v1, "Licenses\\%s.%s%s%s") )
  {
    v31 = 0;
    s = nullptr;
    ptr = nullptr;
    v33 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *(_QWORD *)&v33 = 1;
    *(_BYTE *)ptr = 0;
    sub_35A790(&s);
    if ( ptr )
    {
      *(_QWORD *)&v33 = 0;
      qfree(ptr);
    }
    ptr = nullptr;
    v2 = (char *)haystack;
    v33 = 0;
    if ( (_QWORD)v31 )
      v2 = s;
    reg_read_strlist(&ptr, v2);
    v3 = v33;
    if ( (_QWORD)v33 )
    {
      if ( (debug & 0x200) != 0 )
        sub_3879F0();
      v21 = haystack;
      if ( n[0] )
        v21 = (const char *)src;
      reg_write_strlist(&ptr, v21);
      v22 = (char *)ptr;
      if ( ptr )
      {
        v23 = v33;
        if ( (_QWORD)v33 )
        {
          v24 = 0;
          do
          {
            v25 = &v22[24 * v24];
            v26 = *(void **)v25;
            if ( *(_QWORD *)v25 )
            {
              *((_QWORD *)v25 + 1) = 0;
              qfree(v26);
              v22 = (char *)ptr;
            }
            ++v24;
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)&v33 = 0;
        qfree(v22);
      }
      if ( s )
      {
        *(_QWORD *)&v31 = 0;
        qfree(s);
      }
      v5 = src;
      if ( src )
        goto LABEL_17;
      return v34 - __readfsqword(0x28u);
    }
    if ( ptr )
      qfree(ptr);
    if ( s )
    {
      *(_QWORD *)&v31 = 0;
      qfree(s);
    }
    v4 = n[0];
    s = nullptr;
    v31 = 0;
    if ( n[0] )
    {
      s = (char *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v31 + 1) = v4;
      memcpy(s, src, v4);
      v7 = s;
      *(_QWORD *)&v31 = v4;
      v8 = strrchr(s, 46);
      v9 = v7;
      if ( !v8 || (v10 = v8 - v7, v8 - v7 == -1) )
      {
LABEL_38:
        if ( v9 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v9);
        }
        goto LABEL_16;
      }
      if ( v10 )
      {
        v20 = v10 + 1;
        if ( v4 < v10 + 1 )
        {
          if ( *((_QWORD *)&v31 + 1) < v20 )
          {
            s = (char *)qvector_reserve(&s, v7, v10 + 1, 1);
            v4 = v31;
            v9 = s;
            v20 = v10 + 1;
          }
          v27 = v20;
          memset(&v9[v4], 0, v20 - v4);
          *(_QWORD *)&v31 = v27;
          v8 = &s[v10];
        }
        else if ( v4 != v10 + 1 )
        {
          *(_QWORD *)&v31 = v10 + 1;
        }
        *v8 = 0;
        v11 = v31;
      }
      else
      {
        if ( !v7 )
        {
          ptr = nullptr;
          v33 = 0;
          goto LABEL_47;
        }
        *(_QWORD *)&v31 = 0;
        qfree(v7);
        s = nullptr;
        v11 = v31;
        *((_QWORD *)&v31 + 1) = 0;
      }
      v12 = haystack;
      ptr = nullptr;
      v33 = 0;
      if ( !v11 )
        goto LABEL_25;
      v7 = s;
LABEL_47:
      v12 = v7;
LABEL_25:
      reg_read_strlist(&ptr, v12);
      if ( (_QWORD)v33 )
      {
        if ( (debug & 0x200) != 0 )
          sub_3879F0();
        v13 = haystack;
        if ( n[0] )
          v13 = (const char *)src;
        reg_write_strlist(&ptr, v13);
        v14 = haystack;
        if ( (_QWORD)v31 )
          LODWORD(v14) = (_DWORD)s;
        reg_delete_tree((int)v14);
        v15 = (char *)ptr;
        v16 = ptr;
        if ( !ptr )
          goto LABEL_37;
        v17 = v33;
        if ( (_QWORD)v33 )
        {
          do
          {
            v18 = &v15[24 * v3];
            v19 = *(void **)v18;
            if ( *(_QWORD *)v18 )
            {
              *((_QWORD *)v18 + 1) = 0;
              qfree(v19);
              v15 = (char *)ptr;
            }
            ++v3;
            v16 = v15;
          }
          while ( v17 != v3 );
        }
      }
      else
      {
        v16 = ptr;
        if ( !ptr )
          goto LABEL_37;
      }
      *(_QWORD *)&v33 = 0;
      qfree(v16);
LABEL_37:
      v9 = s;
      goto LABEL_38;
    }
  }
LABEL_16:
  v5 = src;
  if ( src )
  {
LABEL_17:
    n[0] = 0;
    qfree(v5);
  }
  return v34 - __readfsqword(0x28u);
}
