__int64 __fastcall sub_38EC90(__int64 a1, char *a2)
{
  __int64 plugin_options; // rax
  unsigned int v3; // r12d
  char *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rbp
  char *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  plugin_options = get_plugin_options(a2);
  v3 = parse_plugin_options(&ptr, plugin_options);
  if ( (_BYTE)v3 )
    v3 = sub_7C0220(a1, &ptr, a2);
  v4 = (char *)ptr;
  if ( ptr )
  {
    v5 = v12;
    if ( (_QWORD)v12 )
    {
      v6 = 0;
      do
      {
        v7 = &v4[48 * v6];
        v8 = *((void **)v7 + 3);
        if ( v8 )
        {
          *((_QWORD *)v7 + 4) = 0;
          qfree(v8);
        }
        v9 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v9);
        }
        ++v6;
        v4 = (char *)ptr;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v12 = 0;
    qfree(v4);
  }
  return v3;
}
