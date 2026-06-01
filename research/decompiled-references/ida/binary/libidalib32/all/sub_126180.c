unsigned __int64 __fastcall sub_126180(__int64 a1, unsigned int a2)
{
  const char *encoding_name; // rax
  const char *v4; // r12
  size_t v5; // rax
  size_t v6; // r15
  size_t v7; // r13
  struct _Unwind_Exception *v8; // rbx
  void *v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  unsigned __int64 v11; // [rsp+18h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  if ( a2 != 100 && a2 != 101 && a2 != 102 )
  {
    v8 = (struct _Unwind_Exception *)sub_1250C0();
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    _Unwind_Resume(v8);
  }
  if ( (int)get_default_encoding_idx() > 0 )
  {
    encoding_name = (const char *)get_encoding_name();
    v9 = nullptr;
    v4 = encoding_name;
    v10 = 0;
    if ( encoding_name )
    {
      v5 = strlen(encoding_name);
      v6 = v5 + 1;
      v7 = v5;
      v9 = (void *)qvector_reserve();
      *(_QWORD *)&v10 = v6;
      memmove(v9, v4, v7);
      *((_BYTE *)v9 + v7) = 0;
    }
    (*(void (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)a1 + 8LL))(a1, a2, &v9);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  return v11 - __readfsqword(0x28u);
}

