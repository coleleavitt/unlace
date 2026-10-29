__int64 __fastcall sub_6F8C60(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6, __int16 a7)
{
  unsigned int v8; // ebp
  char *v12; // rax
  char *v13; // rdx
  char *v14; // rdi
  __int64 v15; // r13
  __int64 v16; // r12
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  __int64 v21; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+18h] [rbp-60h]
  __int128 v23; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( !a6 )
    return 1;
  v8 = 1;
  if ( *a6 )
  {
    v23 = 0;
    v21 = 256;
    ptr = nullptr;
    v24 = 0;
    declaration_compiler_t__ctor((unsigned __int64)&v21);
    declaration_compiler_t__parse_decl2(&v21, a2, a3, a4, a5, (__int64)a6, a7);
    if ( (a7 & 1) != 0 )
    {
      v12 = (char *)ptr;
      v13 = (char *)ptr + 64 * (_QWORD)v23;
      if ( ptr != v13 )
      {
        do
        {
          v8 = (unsigned __int8)v12[56];
          if ( !(_BYTE)v8 )
            goto LABEL_11;
          v12 += 64;
        }
        while ( v13 != v12 );
      }
    }
    else if ( (_QWORD)v23 << 6 )
    {
      sub_368890();
    }
    v8 = 1;
LABEL_11:
    declaration_compiler_t__dtor((__int64)&v21);
    v14 = (char *)ptr;
    if ( ptr )
    {
      v15 = v23;
      if ( (_QWORD)v23 )
      {
        v16 = 0;
        do
        {
          v17 = &v14[64 * v16];
          v18 = *((void **)v17 + 4);
          if ( v18 )
          {
            *((_QWORD *)v17 + 5) = 0;
            qfree(v18);
          }
          v19 = *((void **)v17 + 1);
          if ( v19 )
          {
            *((_QWORD *)v17 + 2) = 0;
            qfree(v19);
          }
          ++v16;
          v14 = (char *)ptr;
        }
        while ( v15 != v16 );
      }
      *(_QWORD *)&v23 = 0;
      qfree(v14);
    }
  }
  return v8;
}
