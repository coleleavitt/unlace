__int64 sub_6F9050()
{
  unsigned int v0; // ebx
  char *v1; // rdi
  __int64 v2; // r13
  __int64 v3; // r12
  char *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi
  __int64 v8; // [rsp+8h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-60h]
  __int128 v10; // [rsp+18h] [rbp-58h]
  __int64 v11; // [rsp+28h] [rbp-48h]
  unsigned __int64 v12; // [rsp+30h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v10 = 0;
  v8 = 256;
  ptr = nullptr;
  v11 = 0;
  declaration_compiler_t__ctor((unsigned __int64)&v8);
  v0 = declaration_compiler_t__compile((__int64)&v8);
  if ( v0 )
  {
    if ( (char *)ptr + 64 * (_QWORD)v10 != ptr )
      sub_368890();
    v0 = 0;
  }
  declaration_compiler_t__dtor((__int64)&v8);
  v1 = (char *)ptr;
  if ( ptr )
  {
    v2 = v10;
    if ( (_QWORD)v10 )
    {
      v3 = 0;
      do
      {
        v4 = &v1[64 * v3];
        v5 = *((void **)v4 + 4);
        if ( v5 )
        {
          *((_QWORD *)v4 + 5) = 0;
          qfree(v5);
        }
        v6 = *((void **)v4 + 1);
        if ( v6 )
        {
          *((_QWORD *)v4 + 2) = 0;
          qfree(v6);
        }
        ++v3;
        v1 = (char *)ptr;
      }
      while ( v2 != v3 );
    }
    *(_QWORD *)&v10 = 0;
    qfree(v1);
  }
  return v0;
}
