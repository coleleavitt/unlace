void *__fastcall sub_8ABA20(
        __int64 a1,
        unsigned __int8 a2,
        char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char *v10; // rax
  const char *v11; // rax
  void *v12; // rbx
  void *v15; // [rsp+8h] [rbp-F8h] BYREF
  __int128 v16; // [rsp+10h] [rbp-F0h]
  void *v17; // [rsp+28h] [rbp-D8h]
  __int128 v18; // [rsp+30h] [rbp-D0h]
  void *ptr; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+70h] [rbp-90h]
  void *src; // [rsp+78h] [rbp-88h]
  const char *v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v29; // [rsp+C0h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v16 = 0;
  v15 = nullptr;
  expand_vault_cmdline_macros(&v15, a1, &byte_22CD811, a5, a6, a7);
  v17 = nullptr;
  v18 = 0;
  if ( (unsigned __int8)qgetenv(a3) )
  {
    a4 = haystack;
    if ( (_QWORD)v18 )
      a4 = (const char *)v17;
  }
  v20 = 0;
  ptr = nullptr;
  expand_vault_cmdline_macros(&ptr, a4, &byte_22CD811, a5, a6, a7);
  v21 = 80;
  v10 = (char *)haystack;
  v25 = -1;
  v26 = -1;
  v28 = 0;
  v27 = 0;
  if ( (_QWORD)v16 )
    v10 = (char *)v15;
  src = v10;
  v11 = haystack;
  if ( (_QWORD)v20 )
    v11 = (const char *)ptr;
  v24 = v11;
  v22 = a2 << 8;
  v12 = off_2C581D0((__int64)&v21, nullptr);
  if ( !v12 )
  {
    get_errdesc(src);
    set_error_string();
  }
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v12;
}

