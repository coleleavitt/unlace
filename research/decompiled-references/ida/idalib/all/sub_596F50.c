__int64 __fastcall sub_596F50(_QWORD *a1, const char *a2, __int64 a3, _QWORD *a4, unsigned __int8 a5)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // rbx
  int basic_file_type; // eax
  _UNKNOWN **v12; // rcx
  int v13; // edx
  unsigned int v14; // r15d
  const void *v16; // r15
  size_t v17; // rax
  size_t v18; // r13
  size_t v19; // r13
  const char *v20; // r8
  int v21; // eax
  const char *v22; // rsi
  void *v23; // rdi
  size_t v24; // rdx
  void *v25; // rdi
  void *v26; // rdi
  const char *v27; // rdx
  size_t v30; // [rsp+18h] [rbp-B8h]
  char *s; // [rsp+28h] [rbp-A8h]
  __int16 v33; // [rsp+3Eh] [rbp-92h] BYREF
  void *dest; // [rsp+40h] [rbp-90h] BYREF
  __int128 v35; // [rsp+48h] [rbp-88h]
  void *ptr; // [rsp+60h] [rbp-70h] BYREF
  __int128 v37; // [rsp+68h] [rbp-68h]
  void *v38; // [rsp+80h] [rbp-50h] BYREF
  __int128 v39; // [rsp+88h] [rbp-48h]
  unsigned __int64 v40; // [rsp+98h] [rbp-38h]

  v40 = __readfsqword(0x28u);
  v7 = a1[9];
  if ( v7 > 1 )
  {
    qunlink(a1[8]);
    v25 = (void *)a1[8];
    if ( v25 )
    {
      a1[9] = 0;
      qfree(v25);
      a1[8] = 0;
      a1[10] = 0;
    }
    goto LABEL_32;
  }
  while ( 1 )
  {
    if ( v7 <= 1 )
    {
      v8 = a5;
      s = (char *)a2;
    }
    else
    {
      v8 = 0;
      a5 = 0;
      s = (char *)a1[8];
    }
    v9 = open_linput(s, v8);
    v10 = (void *)v9;
    if ( !v9 )
      break;
    dest = nullptr;
    v35 = 0;
    qlseek(v9, 0, 0);
    basic_file_type = get_basic_file_type(v10);
    v12 = &off_2BFB2A0;
    v13 = 0;
    while ( basic_file_type != *((_DWORD *)v12 + 8) )
    {
      ++v13;
      v12 += 5;
      if ( v13 == 4 )
      {
        close_linput(v10);
        v14 = 1;
LABEL_9:
        if ( dest )
        {
          *(_QWORD *)&v35 = 0;
          qfree(dest);
        }
        goto LABEL_11;
      }
    }
    v16 = *(&off_2BFB2A0 + 5 * v13 + 3);
    if ( v16 && (v17 = strlen((const char *)*(&off_2BFB2A0 + 5 * v13 + 3)), (v18 = v17) != 0) )
    {
      v23 = dest;
      v24 = v17 + 1;
      if ( *((_QWORD *)&v35 + 1) < v17 + 1 )
      {
        v30 = v17 + 1;
        dest = (void *)qvector_reserve(&dest, dest, v24, 1);
        v24 = v30;
        v23 = dest;
      }
      *(_QWORD *)&v35 = v24;
      memmove(v23, v16, v18);
      *((_BYTE *)dest + v18) = 0;
    }
    else
    {
      *(_QWORD *)&v35 = 0;
    }
    ptr = nullptr;
    v37 = 0;
    if ( s )
    {
      v19 = strlen(s);
      ptr = (void *)qvector_reserve(&ptr, 0, v19 + 1, 1);
      *(_QWORD *)&v37 = v19 + 1;
      memmove(ptr, s, v19);
      *((_BYTE *)ptr + v19) = 0;
    }
    v38 = nullptr;
    v33 = 0;
    v20 = haystack;
    v39 = 0;
    if ( (_QWORD)v35 )
      v20 = (const char *)dest;
    v21 = sub_596610((__int64)(a1 + 8), (__int64)v10, (__int64)&ptr, (__int64)&v33, v20, 0, (__int64 *)&v38);
    if ( !v21 )
    {
      v27 = haystack;
      if ( (_QWORD)v39 )
        v27 = (const char *)v38;
      sub_378C70((__int64)"%s: %s", a2, v27);
    }
    if ( v21 == -1 )
    {
      v14 = 0;
    }
    else
    {
      v22 = haystack;
      if ( (_QWORD)v37 )
        v22 = (const char *)ptr;
      qstrncpy(a2, v22, a3);
      v14 = 1;
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
    if ( ptr )
    {
      *(_QWORD *)&v37 = 0;
      qfree(ptr);
    }
    close_linput(v10);
    if ( !(_BYTE)v14 )
    {
      if ( a1[9] > 1u )
      {
        qunlink(a1[8]);
        v26 = (void *)a1[8];
        if ( v26 )
        {
          a1[9] = 0;
          qfree(v26);
          a1[8] = 0;
          a1[10] = 0;
        }
      }
      goto LABEL_9;
    }
    if ( dest )
    {
      *(_QWORD *)&v35 = 0;
      qfree(dest);
    }
LABEL_32:
    v7 = a1[9];
  }
  v14 = 0;
LABEL_11:
  *a4 = a1[8];
  return v14;
}
