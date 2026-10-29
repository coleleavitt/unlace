unsigned __int64 __fastcall sub_8D2080(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _DWORD *addr; // rax
  unsigned int v8; // edx
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  char v13; // [rsp+0h] [rbp-28h]
  unsigned int buf; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v5 = *a1;
  v15 = __readfsqword(0x28u);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(v5 + 112))(a1) )
  {
    addr = (_DWORD *)__tls_get_addr();
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
  qsnprintf(v9, a2 + a3 - v9, (int)"vault%u.tmp", buf, v10, v11, v13);
  return v15 - __readfsqword(0x28u);
}

