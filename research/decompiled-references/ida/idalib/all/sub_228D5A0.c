__int64 __fastcall sub_228D5A0(_QWORD *a1)
{
  void *v1; // r13
  char *pw_dir; // r12
  size_t v4; // rax
  __int64 v5; // rdi
  size_t v6; // rbx
  unsigned int v7; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  __uid_t v12; // eax
  struct passwd *result; // [rsp+8h] [rbp-60h] BYREF
  struct passwd resultbuf; // [rsp+10h] [rbp-58h] BYREF

  v1 = nullptr;
  pw_dir = getenv("HOME");
  if ( !pw_dir )
  {
    v9 = sysconf(70);
    if ( v9 <= 0 )
    {
      v11 = 0x3FFF;
      v10 = 0x4000;
    }
    else
    {
      v10 = v9;
      v11 = v9 - 1;
    }
    v1 = (void *)operator new[](v10);
    memset(v1, 0, v11 + 1);
    result = nullptr;
    v12 = getuid();
    getpwuid_r(v12, &resultbuf, (char *)v1, v10, &result);
    if ( !result || (pw_dir = result->pw_dir) == nullptr )
    {
      v7 = 0;
      goto LABEL_12;
    }
  }
  a1[1] = 0;
  v4 = strlen(pw_dir);
  v5 = 0;
  v6 = v4;
  if ( v4 <= a1[2] )
  {
    if ( !v4 )
      goto LABEL_5;
    goto LABEL_4;
  }
  sub_2236E10((__int64)a1, a1 + 3, v4, 1);
  v5 = a1[1];
  if ( v6 )
  {
LABEL_4:
    memcpy((void *)(*a1 + v5), pw_dir, v6);
    v5 = a1[1];
  }
LABEL_5:
  a1[1] = v5 + v6;
  v7 = 1;
  if ( !v1 )
    return 1;
LABEL_12:
  operator delete[](v1);
  return v7;
}
