__int64 __fastcall sub_184C00(__int64 a1, __int64 a2, char a3, const char **a4, unsigned __int8 a5)
{
  unsigned int v8; // ebp
  const char *v9; // rax
  const char *v10; // r12
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // r14
  const char *v14; // rsi
  void *v16; // [rsp+0h] [rbp-48h]

  if ( !a2 )
  {
    sub_92120((__int64)"form: nullptr is an invalid input field argument");
    return 0;
  }
  if ( *a4 )
  {
    a4[1] = nullptr;
    qfree();
    *a4 = nullptr;
    a4[2] = nullptr;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const char **, _QWORD))(*(_QWORD *)a1 + 248LL))(
         a1,
         a2,
         (unsigned int)a3,
         a4,
         a5);
  if ( !(_BYTE)v8 )
  {
    if ( !a5 )
      sub_92120((__int64)"form: bad input field type %c", (unsigned int)a3);
    return 0;
  }
  v9 = a4[1];
  v10 = *a4;
  if ( v9 )
  {
    if ( !v10 )
    {
      a4[1] = nullptr;
      a4[2] = nullptr;
      return v8;
    }
    v11 = strlen(v10);
    v12 = v11;
    if ( !v11 )
    {
      *a4 = nullptr;
      a4[1] = nullptr;
      a4[2] = nullptr;
      goto LABEL_15;
    }
    v13 = v11 + 1;
    v16 = (void *)qvector_reserve();
    memmove(v16, v10, v12);
    *((_BYTE *)v16 + v12) = 0;
    v10 = *a4;
    v14 = (const char *)v16;
    v9 = (const char *)v13;
  }
  else
  {
    v14 = nullptr;
  }
  *a4 = v14;
  a4[1] = v9;
  a4[2] = nullptr;
  if ( v10 )
LABEL_15:
    qfree();
  return v8;
}

