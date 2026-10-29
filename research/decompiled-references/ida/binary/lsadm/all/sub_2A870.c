bool __fastcall sub_2A870(__int64 a1)
{
  unsigned __int64 v2; // rax
  size_t v4; // rax
  size_t v5; // rbp
  int v6; // ebx
  unsigned __int64 v7; // rbp
  size_t v8; // r15
  int v9; // ebp
  char *v10; // r13
  __uid_t v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  char *v14; // rsi
  char *pw_name; // rbx
  size_t v16; // rax
  size_t v17; // rbp
  void *v18; // rdi
  size_t v19; // r13
  void *v20; // rax
  void *v21; // rdi
  size_t v22; // r13
  void *v23; // rax
  struct passwd *result; // [rsp+18h] [rbp-B0h] BYREF
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+28h] [rbp-A0h]
  struct passwd v27; // [rsp+40h] [rbp-88h] BYREF
  char name[9]; // [rsp+7Fh] [rbp-49h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( getlogin_r(name, 9u) )
    goto LABEL_2;
  v4 = strlen(name);
  v5 = v4;
  if ( v4 )
  {
    v18 = *(void **)a1;
    v19 = v4 + 1;
    if ( *(_QWORD *)(a1 + 16) < v4 + 1 )
    {
      v20 = sub_29E60(a1, *(void **)a1, v4 + 1, 1u);
      *(_QWORD *)a1 = v20;
      v18 = v20;
    }
    *(_QWORD *)(a1 + 8) = v19;
    memmove(v18, name, v5);
    *(_BYTE *)(*(_QWORD *)a1 + v5) = 0;
LABEL_2:
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 > 1 )
      return v2 > 1;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 8) = 0;
LABEL_6:
  v6 = sysconf(70);
  v7 = v6;
  if ( v6 <= 0 )
  {
    v7 = 0x4000;
    v6 = 0x4000;
  }
  ptr = nullptr;
  v26 = 0;
  ptr = sub_29E60((__int64)&ptr, nullptr, v7, 1u);
  v8 = v6;
  memset((char *)ptr + v26, 0, v7 - v26);
  *(_QWORD *)&v26 = v7;
  v9 = 10;
  while ( 1 )
  {
    v10 = (char *)ptr;
    v11 = getuid();
    v12 = getpwuid_r(v11, &v27, v10, v8, &result);
    if ( v12 != 34 )
      break;
    v6 *= 2;
    v13 = v26;
    v8 = v6;
    if ( (unsigned __int64)v26 >= v6 )
    {
      if ( v6 != (_QWORD)v26 )
        *(_QWORD *)&v26 = v6;
      if ( !--v9 )
        goto LABEL_17;
    }
    else
    {
      v14 = (char *)ptr;
      if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)v6 )
      {
        ptr = sub_29E60((__int64)&ptr, ptr, v6, 1u);
        v13 = v26;
        v14 = (char *)ptr;
      }
      memset(&v14[v13], 0, v6 - v13);
      *(_QWORD *)&v26 = v6;
      if ( !--v9 )
        goto LABEL_17;
    }
  }
  if ( !v12 )
  {
    if ( result )
    {
      pw_name = result->pw_name;
      if ( result->pw_name )
      {
        v16 = strlen(result->pw_name);
        v17 = v16;
        if ( v16 )
        {
          v21 = *(void **)a1;
          v22 = v16 + 1;
          if ( *(_QWORD *)(a1 + 16) < v16 + 1 )
          {
            v23 = sub_29E60(a1, *(void **)a1, v16 + 1, 1u);
            *(_QWORD *)a1 = v23;
            v21 = v23;
          }
          *(_QWORD *)(a1 + 8) = v22;
          memmove(v21, pw_name, v17);
          *(_BYTE *)(*(_QWORD *)a1 + v17) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
      }
    }
  }
LABEL_17:
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    j__free(ptr);
  }
  v2 = *(_QWORD *)(a1 + 8);
  return v2 > 1;
}

