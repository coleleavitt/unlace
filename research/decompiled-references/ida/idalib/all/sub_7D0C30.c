__int64 __fastcall sub_7D0C30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v8; // rbx
  const void *v10; // r13
  size_t v11; // rax
  size_t v12; // rbp
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  LODWORD(v8) = sub_7D0870(a1, a5);
  if ( (_BYTE)v8 )
  {
    v8 = sub_7D0910(a1, a2, a3, a4);
    v16[0] = 0;
    (*(void (__fastcall **)(char **, __int64, _QWORD, _QWORD *))(a1 + 80))(&off_2B3AC60, v8, 0, v16);
    (*(void (__fastcall **)(__int64))(a1 + 152))(v8);
    LOBYTE(v8) = v16[0] == 0;
    if ( v16[0] )
    {
      if ( a5 )
      {
        v10 = *(const void **)(v16[0] + 8LL);
        if ( v10 && (v11 = strlen(*(const char **)(v16[0] + 8LL)), (v12 = v11) != 0) )
        {
          v13 = (void *)*a5;
          v14 = v11 + 1;
          if ( a5[2] < v11 + 1 )
          {
            v15 = qvector_reserve(a5, *a5, v11 + 1, 1);
            *a5 = v15;
            v13 = (void *)v15;
          }
          a5[1] = v14;
          memmove(v13, v10, v12);
          *(_BYTE *)(*a5 + v12) = 0;
        }
        else
        {
          a5[1] = 0;
        }
      }
    }
  }
  return (unsigned int)v8;
}
