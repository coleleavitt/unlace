void __fastcall __noreturn vcred_ask_user_0(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  void *v7; // rdi
  const void *v8; // r14
  void *v9; // rdi
  const void *v10; // r8
  const void *v11; // [rsp+20h] [rbp-100h]
  void *dest; // [rsp+80h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+88h] [rbp-98h]
  void *v15; // [rsp+98h] [rbp-88h] BYREF
  __int128 v16; // [rsp+A0h] [rbp-80h]
  void *v17; // [rsp+B0h] [rbp-70h] BYREF
  __int128 v18; // [rsp+B8h] [rbp-68h]
  void *ptr; // [rsp+C8h] [rbp-58h] BYREF
  __int128 v20; // [rsp+D0h] [rbp-50h]
  __int16 v21; // [rsp+E0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+E8h] [rbp-38h]

  v2 = (__int64)(a1 + 1);
  v3 = *(_DWORD *)(v2 + 160);
  v22 = __readfsqword(0x28u);
  v14 = 0;
  v17 = nullptr;
  ptr = nullptr;
  v4 = 2 * ((v3 >> 9) & 1);
  v16 = 0;
  v18 = 0;
  v20 = 0;
  dest = nullptr;
  if ( (v3 & 0x400) != 0 )
    LOWORD(v4) = v4 | 1;
  v15 = nullptr;
  v21 = v4;
  sub_7A5FF0(v2, (__int64)&v15, 0);
  v5 = a1[9];
  if ( v5 > 1 )
  {
    v7 = dest;
    v8 = (const void *)a1[8];
    if ( *((_QWORD *)&v14 + 1) < v5 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v5, 1);
      v7 = dest;
    }
    *(_QWORD *)&v14 = v5;
    memmove(v7, v8, v5 - 1);
    *((char *)dest + v5 - 1) = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, void **, _QWORD))(*a1 + 32LL))(a1, &dest, 0);
  }
  sub_7A5FF0((__int64)(a1 + 11), (__int64)&v17, 0);
  v6 = a1[19];
  if ( v6 > 1 )
  {
    v9 = ptr;
    v10 = (const void *)a1[18];
    if ( *((_QWORD *)&v20 + 1) < v6 )
    {
      v11 = (const void *)a1[18];
      ptr = (void *)qvector_reserve(&ptr, ptr, v6, 1);
      v10 = v11;
      v9 = ptr;
    }
    *(_QWORD *)&v20 = v6;
    memmove(v9, v10, v6 - 1);
    *((char *)ptr + v6 - 1) = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, void **, _QWORD))(*a1 + 40LL))(a1, &ptr, 0);
  }
  sub_4437F0(
    (int)"Connect to server\n"
         "\n"
         "%/%*<#Vault server, in 'host\\:port' form#~S~erver  :q:0:30::>\n"
         "\n"
         "<#User name#~U~ser name:q:0:20::>\n"
         "<#Password#~P~assword :p:0:20::>\n"
         "<#Use proxy server#Use pro~x~y server:c10>\n"
         "<#Save credentials#Sa~v~e the credentials:c>>\n"
         "<#Proxy server, in 'host\\:port' form#Proxy   :q11:0:30::>\n"
         "<#Proxy user name#User name:q12:0:20::>\n"
         "<#Proxy password#Password :p13:0:20::>\n"
         "\n",
    sub_7A52C0,
    &dest,
    &v15,
    a1 + 5,
    &dest,
    &v21,
    &v17,
    a1 + 15,
    &ptr);
}

