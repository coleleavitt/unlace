unsigned __int64 __fastcall sub_8F5DC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int *addr; // rax
  unsigned int v8; // edx
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  unsigned int buf; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v5 = *a1;
  v14 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v5 + 112))(a1) )
  {
    addr = (unsigned int *)__tls_get_addr(&stru_2C77838);
    v8 = 1103515245 * *addr + 12345;
    *addr = v8;
    buf = v8 % 0x7FFFFFFF;
  }
  else
  {
    gen_rand_buf(&buf, 4u);
  }
  qstrncpy(a2, a4, a3);
  v9 = qbasename(a2);
  qsnprintf(v9, a2 + a3 - v9, (unsigned int)"vault%u.tmp", buf, v10, v11);
  return v14 - __readfsqword(0x28u);
}
