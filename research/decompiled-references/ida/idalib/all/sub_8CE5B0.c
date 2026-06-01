unsigned __int64 __fastcall sub_8CE5B0(__int64 a1, __int64 a2)
{
  const char *error_string; // rax
  const char *v4; // r12
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  char *v8; // r13
  const char *file_ext; // rax
  const char *v10; // rbx
  char **v11; // rbx
  const char *v12; // rsi
  void *ptr; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v14; // [rsp+8h] [rbp-1050h]
  _BYTE v15[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1028h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) <= 1u )
    return v16 - __readfsqword(0x28u);
  error_string = (const char *)get_error_string(0);
  ptr = nullptr;
  v4 = error_string;
  v14 = 0;
  if ( error_string )
  {
    v5 = strlen(error_string);
    v6 = v5 + 1;
    v7 = v5;
    ptr = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
    *(_QWORD *)&v14 = v6;
    memmove(ptr, v4, v7);
    *((_BYTE *)ptr + v7) = 0;
  }
  v8 = (char *)haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v8 = *(char **)a2;
  file_ext = (const char *)get_file_ext(v8);
  v10 = file_ext;
  if ( file_ext )
  {
    if ( !strcasecmp(file_ext, "idb") )
    {
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, v8, 0);
      goto LABEL_10;
    }
    if ( !strcasecmp(v10, "i64") )
      goto LABEL_10;
  }
  if ( (unsigned __int8)sub_8FDB30(v8) )
  {
LABEL_10:
    v11 = &off_2B3E080;
    do
    {
      set_file_ext(v15, 4096, v8, *v11);
      (*(void (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, v15, 0);
      ++v11;
    }
    while ( v11 != (char **)&unk_2B3E0B8 );
  }
  v12 = haystack;
  if ( (_QWORD)v14 )
    v12 = (const char *)ptr;
  set_error_string(0, v12);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v16 - __readfsqword(0x28u);
}
