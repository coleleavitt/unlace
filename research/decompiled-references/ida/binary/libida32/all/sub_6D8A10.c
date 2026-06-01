__int64 __fastcall sub_6D8A10(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  char *v8; // rbp
  void *v9; // rdi
  void *v10; // rdi
  __int64 v12; // [rsp+8h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-60h]
  __int128 v14; // [rsp+18h] [rbp-58h]
  __int64 v15; // [rsp+28h] [rbp-48h]
  unsigned __int64 v16; // [rsp+30h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v14 = 0;
  v12 = 256;
  ptr = nullptr;
  v15 = 0;
  declaration_compiler_t__ctor(&v12);
  v4 = declaration_compiler_t__compile(&v12, a1, &byte_22CD811, a2, a3);
  if ( v4 )
  {
    if ( (char *)ptr + 64 * (_QWORD)v14 != ptr )
      sub_365330();
    v4 = 0;
  }
  declaration_compiler_t__dtor(&v12);
  v5 = (char *)ptr;
  if ( ptr )
  {
    v6 = v14;
    if ( (_QWORD)v14 )
    {
      v7 = 0;
      do
      {
        v8 = &v5[64 * v7];
        v9 = *((void **)v8 + 4);
        if ( v9 )
        {
          *((_QWORD *)v8 + 5) = 0;
          qfree(v9);
        }
        v10 = *((void **)v8 + 1);
        if ( v10 )
        {
          *((_QWORD *)v8 + 2) = 0;
          qfree(v10);
        }
        ++v7;
        v5 = (char *)ptr;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&v14 = 0;
    qfree(v5);
  }
  return v4;
}

