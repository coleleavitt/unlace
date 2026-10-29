__int64 __fastcall sub_184E00(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  size_t v11; // rbx
  void *v12; // [rsp+0h] [rbp-48h]

  if ( a2 )
  {
    result = (*(__int64 (__fastcall **)(__int64, const char *, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 256LL))(
               a1,
               a2,
               a3,
               a4,
               (unsigned int)(char)a5,
               a6,
               a7);
    if ( !(_BYTE)result )
      return result;
    v9 = (unsigned int)(a5 - 65);
    if ( (unsigned __int8)v9 <= 0x25u )
    {
      v10 = 0x2000880021LL;
      if ( _bittest64(&v10, v9) )
      {
        v12 = nullptr;
        v11 = strlen(a2);
        if ( v11 )
        {
          v12 = (void *)qvector_reserve();
          memmove(v12, a2, v11);
          *((_BYTE *)v12 + v11) = 0;
        }
        qstrncpy();
        if ( v12 )
          qfree();
      }
    }
  }
  return 1;
}

