__int64 __fastcall tinfo_errstr(unsigned int a1)
{
  const char *v1; // rbx
  char v2; // cl
  __int64 error_string; // rbx
  size_t v5; // rax
  size_t v6; // rbp
  size_t v7; // r12
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  if ( a1 < 0xFFFFFFDA && a1 != 0 )
  {
    sub_3573A0((char **)&ptr);
    goto LABEL_9;
  }
  v1 = (const char *)*(&off_2B0DB20 - a1);
  v2 = a1 + 33;
  if ( a1 + 33 > 0x1E )
    goto LABEL_14;
  if ( ((1LL << v2) & 0xC072008) != 0 )
  {
    get_error_data(0);
LABEL_13:
    sub_390600((char **)&ptr);
    goto LABEL_9;
  }
  if ( ((1LL << v2) & 0x40801005) != 0 )
  {
    get_error_string(0);
    goto LABEL_13;
  }
  if ( a1 == -18 )
  {
    get_error_data(1);
    get_error_data(0);
    sub_390600((char **)&ptr);
    goto LABEL_9;
  }
LABEL_14:
  if ( v1 )
  {
    v5 = strlen(v1);
    v6 = v5;
    if ( v5 )
    {
      v7 = v5 + 1;
      ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
      *(_QWORD *)&v9 = v7;
      memmove(ptr, v1, v6);
      *((_BYTE *)ptr + v6) = 0;
    }
  }
LABEL_9:
  set_error_string();
  error_string = get_error_string(3);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    qfree(ptr);
  }
  return error_string;
}

