__int64 __fastcall sub_389FB0(__int64 a1, char *a2)
{
  unsigned int v2; // r12d
  char *v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  get_plugin_options(a2);
  v2 = parse_plugin_options();
  if ( (_BYTE)v2 )
    v2 = sub_79CDD0(a1, &ptr, a2);
  v3 = (char *)ptr;
  if ( ptr )
  {
    v4 = v11;
    if ( (_QWORD)v11 )
    {
      v5 = 0;
      do
      {
        v6 = &v3[48 * v5];
        v7 = *((void **)v6 + 3);
        if ( v7 )
        {
          *((_QWORD *)v6 + 4) = 0;
          qfree(v7);
        }
        v8 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v8);
        }
        ++v5;
        v3 = (char *)ptr;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v11 = 0;
    qfree(v3);
  }
  return v2;
}

