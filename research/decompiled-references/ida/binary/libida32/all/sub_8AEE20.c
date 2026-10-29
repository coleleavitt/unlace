__int64 *__fastcall sub_8AEE20(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  const char *v8; // rdi
  bool v10; // zf
  const char *file_ext; // rdi
  const char *v14; // rcx
  const char *v15; // rdx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18; // [rsp+18h] [rbp-40h]

  v8 = haystack;
  v10 = *(_QWORD *)(a3 + 8) == 0;
  v18 = __readfsqword(0x28u);
  if ( !v10 )
    v8 = *(const char **)a3;
  file_ext = (const char *)get_file_ext(v8);
  if ( !file_ext || strcasecmp(file_ext, "idb") )
  {
    *a6 = 0;
    sub_8D9D00(a1, a4, a3 + 24);
    return a1;
  }
  *a6 = 1;
  v17 = 0;
  ptr = nullptr;
  sub_3573A0((char **)&ptr);
  v14 = haystack;
  if ( !(_QWORD)v17 )
  {
    v15 = haystack;
    if ( !*(_QWORD *)(a3 + 8) )
      goto LABEL_9;
    goto LABEL_11;
  }
  v14 = (const char *)ptr;
  v15 = haystack;
  if ( *(_QWORD *)(a3 + 8) )
LABEL_11:
    v15 = *(const char **)a3;
LABEL_9:
  sub_8AEBD0(a1, a2, (__int64)v15, (__int64)v14);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  return a1;
}

