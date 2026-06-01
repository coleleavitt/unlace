__int64 __fastcall sub_1F960(__int64 a1)
{
  __int64 v2; // rbx
  _BYTE *v3; // rsi
  __int64 v4; // r13
  char **v5; // r12
  void *v6; // rdi
  void *v7; // rdi
  bool v8; // zf
  const char *v9; // rsi
  char *v10; // r13
  void *v11; // rax
  const char *v12; // rsi
  void *v13; // rax
  unsigned int v14; // ebx
  void *ptr; // [rsp+0h] [rbp-468h] BYREF
  __int128 v17; // [rsp+8h] [rbp-460h]
  char file[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v19; // [rsp+428h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  ptr = nullptr;
  v17 = 0;
  if ( !(unsigned __int8)sub_2B550("OPENSSL_LIBRARY_PATH") )
    goto LABEL_8;
  if ( (dword_7BCA4 & 0x100000) != 0 )
  {
    if ( (_QWORD)v17 )
      sub_15E90(
        (__int64 (__fastcall ***)(_QWORD))"TLS: using OpenSSL library path override \"%s\"\n",
        (const char *)ptr);
    else
      sub_15E90((__int64 (__fastcall ***)(_QWORD))"TLS: using OpenSSL library path override \"%s\"\n", s1);
  }
  v2 = v17;
  v3 = ptr;
  if ( !(_QWORD)v17 )
  {
    v4 = 2;
    if ( *((_QWORD *)&v17 + 1) >= 2u )
      goto LABEL_7;
LABEL_27:
    ptr = (void *)sub_29E60(&ptr, ptr, v4, 1);
    v3 = ptr;
    goto LABEL_7;
  }
  if ( (_QWORD)v17 != 1 && *((char *)ptr + v17 - 2) == 47 )
    goto LABEL_8;
  v4 = v17 + 1;
  v2 = v17 - 1;
  if ( *((_QWORD *)&v17 + 1) < (unsigned __int64)(v17 + 1) )
    goto LABEL_27;
LABEL_7:
  *(_QWORD *)&v17 = v4;
  v3[v2] = 47;
  *((_BYTE *)ptr + v2 + 1) = 0;
LABEL_8:
  v5 = off_79500;
  while ( 1 )
  {
    v6 = *(void **)(a1 + 32);
    if ( v6 )
      dlclose(v6);
    v7 = *(void **)(a1 + 24);
    *(_QWORD *)(a1 + 32) = 0;
    if ( v7 )
      dlclose(v7);
    v8 = (_QWORD)v17 == 0;
    *(_QWORD *)(a1 + 24) = 0;
    v9 = s1;
    v10 = *v5;
    if ( !v8 )
      v9 = (const char *)ptr;
    sub_2ACE0(file, v9, 1024);
    sub_2AE20(file, "libcrypto", 1024);
    sub_2AE20(file, ".so", 1024);
    sub_2AE20(file, v10, 1024);
    v11 = dlopen(file, 2);
    *(_QWORD *)(a1 + 24) = v11;
    if ( v11 )
    {
      v12 = s1;
      if ( (_QWORD)v17 )
        v12 = (const char *)ptr;
      sub_2ACE0(file, v12, 1024);
      sub_2AE20(file, "libssl", 1024);
      sub_2AE20(file, ".so", 1024);
      sub_2AE20(file, v10, 1024);
      v13 = dlopen(file, 2);
      *(_QWORD *)(a1 + 32) = v13;
      if ( v13 )
        break;
    }
    if ( ++v5 == &off_79530 )
    {
      v14 = 0;
      goto LABEL_21;
    }
  }
  if ( *v10 && (dword_7BCA4 & 0x100000) != 0 )
    sub_15E90((__int64 (__fastcall ***)(_QWORD))"TLS: loaded \"%s\"\n", file);
  v14 = 1;
LABEL_21:
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    j__free(ptr);
  }
  return v14;
}

