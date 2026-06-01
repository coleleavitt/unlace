__int64 __fastcall qerrstr(int errnum)
{
  int v1; // ebx
  char *v2; // rax
  char *v3; // rbp
  size_t v4; // rbx
  __int64 v6; // rax
  __int64 addr; // rax
  void *v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  char v13[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-30h]

  v1 = errnum;
  v14 = __readfsqword(0x28u);
  if ( errnum == -1 )
    v1 = *__errno_location();
  v2 = strerror_r(v1, v13, 0x400u);
  v3 = v2;
  if ( v2 )
  {
    v4 = strlen(v2);
    if ( v4 )
    {
      addr = __tls_get_addr(&stru_2C77838);
      v8 = *(void **)(addr + 184);
      v9 = addr + 8;
      if ( *(_QWORD *)(addr + 200) < v4 + 1 )
      {
        v12 = qvector_reserve(addr + 184, *(_QWORD *)(addr + 184), v4 + 1, 1);
        *(_QWORD *)(v9 + 176) = v12;
        v8 = (void *)v12;
      }
      v10 = __tls_get_addr(&stru_2C77838);
      v11 = v10 + 8;
      *(_QWORD *)(v10 + 192) = v4 + 1;
      memmove(v8, v3, v4);
      *(_BYTE *)(*(_QWORD *)(v11 + 176) + v4) = 0;
    }
    else
    {
      *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 192) = 0;
    }
  }
  else
  {
    v6 = __tls_get_addr(&stru_2C77838);
    sub_35A790((char **)(v6 + 184));
  }
  return *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 184);
}
