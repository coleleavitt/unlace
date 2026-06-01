__int64 __fastcall tinfo_errstr(unsigned int a1)
{
  const char *v1; // rbx
  char v2; // cl
  const char *v3; // rsi
  __int64 error_string; // rbx
  size_t v6; // rax
  size_t v7; // rbp
  size_t v8; // r12
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v10 = 0;
  if ( a1 < 0xFFFFFFDA && a1 != 0 )
  {
    sub_35A790((char **)&ptr);
    goto LABEL_9;
  }
  v1 = (const char *)*(&off_2B37AE0 - a1);
  v2 = a1 + 33;
  if ( a1 + 33 > 0x1E )
    goto LABEL_16;
  if ( ((1LL << v2) & 0xC072008) != 0 )
  {
    get_error_data(0);
LABEL_15:
    sub_3953D0((char **)&ptr);
    goto LABEL_9;
  }
  if ( ((1LL << v2) & 0x40801005) != 0 )
  {
    get_error_string(0);
    goto LABEL_15;
  }
  if ( a1 != -18 )
  {
LABEL_16:
    if ( !v1 )
      goto LABEL_7;
    v6 = strlen(v1);
    v7 = v6;
    if ( !v6 )
      goto LABEL_7;
    v8 = v6 + 1;
    ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
    *(_QWORD *)&v10 = v8;
    memmove(ptr, v1, v7);
    *((_BYTE *)ptr + v7) = 0;
LABEL_9:
    if ( !(_QWORD)v10 )
      goto LABEL_7;
    goto LABEL_10;
  }
  get_error_data(1);
  get_error_data(0);
  sub_3953D0((char **)&ptr);
  if ( !(_QWORD)v10 )
  {
LABEL_7:
    v3 = haystack;
    goto LABEL_11;
  }
LABEL_10:
  v3 = (const char *)ptr;
LABEL_11:
  set_error_string(3, v3);
  error_string = get_error_string(3);
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return error_string;
}
