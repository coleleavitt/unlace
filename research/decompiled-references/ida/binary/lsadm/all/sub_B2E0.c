unsigned __int64 __fastcall sub_B2E0(const char *src)
{
  size_t v1; // rax
  size_t v2; // r12
  size_t v3; // rbp
  __int64 v4; // rbp
  char *v5; // r12
  char *v6; // rax
  size_t v7; // rbx
  size_t v8; // rbp
  __int64 v9; // r13
  void *v10; // r14
  unsigned __int64 v11; // rbx
  char *v12; // r12
  size_t v13; // rax
  size_t v14; // rbp
  void *v15; // r12
  __int128 v16; // kr10_16
  void *v18; // rax
  void *v19; // rdi
  __int64 v20; // r13
  char *s; // [rsp+0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  s = nullptr;
  v22 = 0;
  if ( !src
    || (v1 = strlen(src),
        v2 = v1 + 1,
        v3 = v1,
        s = (char *)sub_29E60(&s, 0, v1 + 1, 1),
        *(_QWORD *)&v22 = v2,
        memmove(s, src, v3),
        s[v3] = 0,
        (v4 = v22) == 0)
    || (v5 = s, (v6 = strchr(s, 64)) == nullptr)
    || (v7 = v6 - v5, v6 - v5 == -1) )
  {
    sub_B230((__int64)"Invalid format for -u option. Expected: user@machine-id");
  }
  v8 = v4 - 1;
  ptr = nullptr;
  v24 = 0;
  if ( v8 > v7 )
    v8 = v6 - v5;
  v9 = 0;
  v10 = nullptr;
  if ( v8 )
  {
    v18 = (void *)sub_29E60(&ptr, 0, v8 + 1, 1);
    *(_QWORD *)&v24 = v8 + 1;
    ptr = v18;
    memmove(v18, v5, v8);
    *((_BYTE *)ptr + v8) = 0;
    v10 = ptr;
    v9 = *((_QWORD *)&v24 + 1);
    v8 = v24;
  }
  ptr = nullptr;
  v24 = 0;
  if ( ::ptr )
  {
    *(_QWORD *)&xmmword_7A938 = 0;
    j__free(::ptr);
    ::ptr = v10;
    *(_QWORD *)&xmmword_7A938 = v8;
    *((_QWORD *)&xmmword_7A938 + 1) = v9;
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      j__free(ptr);
    }
  }
  else
  {
    ::ptr = v10;
    *(_QWORD *)&xmmword_7A938 = v8;
    *((_QWORD *)&xmmword_7A938 + 1) = v9;
  }
  v11 = v7 + 1;
  if ( !(_QWORD)v22 )
    goto LABEL_16;
  v12 = s;
  ptr = nullptr;
  v24 = 0;
  if ( v11 > (__int64)v22 - 1 )
    v11 = v22 - 1;
  v13 = v22 - 1 - v11;
  v14 = v13;
  if ( v13 )
  {
    v19 = nullptr;
    v20 = v22 - v11;
    if ( v13 != -1 )
    {
      ptr = (void *)sub_29E60(&ptr, 0, v22 - v11, 1);
      v19 = ptr;
    }
    *(_QWORD *)&v24 = v20;
    memmove(v19, &v12[v11], v14);
    *((_BYTE *)ptr + v14) = 0;
    v15 = ptr;
    v16 = v24;
  }
  else
  {
LABEL_16:
    v15 = nullptr;
    v16 = 0u;
  }
  ptr = nullptr;
  v24 = 0;
  if ( qword_7A910 )
  {
    *(_QWORD *)&xmmword_7A918 = 0;
    j__free(qword_7A910);
    qword_7A910 = v15;
    xmmword_7A918 = v16;
    if ( ptr )
    {
      *(_QWORD *)&v24 = 0;
      j__free(ptr);
    }
  }
  else
  {
    qword_7A910 = v15;
    xmmword_7A918 = v16;
  }
  byte_7A904 = 1;
  if ( s )
  {
    *(_QWORD *)&v22 = 0;
    j__free(s);
  }
  return v25 - __readfsqword(0x28u);
}

