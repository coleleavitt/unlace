__int64 __fastcall sub_7AB730(__int64 a1)
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
  if ( !(unsigned __int8)qgetenv("OPENSSL_LIBRARY_PATH") )
    goto LABEL_8;
  if ( (*(_DWORD *)&debug & 0x100000) != 0 )
  {
    if ( !(_QWORD)v17 )
      sub_383DA0();
    sub_383DA0();
  }
  v2 = v17;
  v3 = ptr;
  if ( !(_QWORD)v17 )
  {
    v4 = 2;
    if ( *((_QWORD *)&v17 + 1) >= 2u )
      goto LABEL_7;
LABEL_27:
    ptr = (void *)qvector_reserve(&ptr, ptr, v4, 1);
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
  v5 = off_2B10C00;
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
    v9 = haystack;
    v10 = *v5;
    if ( !v8 )
      v9 = (const char *)ptr;
    qstrncpy(file, v9, 1024);
    qstrncat(file, "libcrypto", 1024);
    qstrncat(file, ".so", 1024);
    qstrncat(file, v10, 1024);
    v11 = dlopen(file, 2);
    *(_QWORD *)(a1 + 24) = v11;
    if ( v11 )
    {
      v12 = haystack;
      if ( (_QWORD)v17 )
        v12 = (const char *)ptr;
      qstrncpy(file, v12, 1024);
      qstrncat(file, "libssl", 1024);
      qstrncat(file, ".so", 1024);
      qstrncat(file, v10, 1024);
      v13 = dlopen(file, 2);
      *(_QWORD *)(a1 + 32) = v13;
      if ( v13 )
        break;
    }
    if ( ++v5 == (char **)&unk_2B10C30 )
    {
      v14 = 0;
      goto LABEL_21;
    }
  }
  if ( *v10 && (*(_DWORD *)&debug & 0x100000) != 0 )
    sub_383DA0();
  v14 = 1;
LABEL_21:
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  return v14;
}

