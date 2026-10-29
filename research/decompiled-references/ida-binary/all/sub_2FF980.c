unsigned __int64 __fastcall ida_logger_t__::vfunc_6(__int64 a1, __int64 *a2, _BYTE *a3)
{
  char *v3; // r13
  size_t v5; // rax
  size_t v6; // r12
  char v7; // al
  char *v8; // rdi
  void *v10; // rdi
  size_t v11; // r14
  __int64 v12; // rax
  char *v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v3 = qword_8CD7D8;
  v15 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  if ( (qword_8CD7D8 || (unsigned __int8)qgetenv("IDALOG", &v13) && (v3 = v13) != nullptr)
    && (v5 = strlen(v3), (v6 = v5) != 0) )
  {
    v10 = (void *)*a2;
    v11 = v5 + 1;
    if ( a2[2] < v5 + 1 )
    {
      v12 = qvector_reserve(a2, *a2, v5 + 1, 1);
      *a2 = v12;
      v10 = (void *)v12;
    }
    a2[1] = v11;
    memmove(v10, v3, v6);
    *(_BYTE *)(*a2 + v6) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  v7 = qgetenv("IDALOG_SILENT", 0);
  v8 = v13;
  *a3 = v7;
  if ( v8 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v8, nullptr);
  }
  return v15 - __readfsqword(0x28u);
}
